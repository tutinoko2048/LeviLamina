#include "ll/core/form/FormHandler.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/form/FormIdManager.h"
#include "ll/api/form/SimpleForm.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/json/ValueConstIterator.h"
#include "mc/deps/json/ValueIterator.h"
#include "mc/network/PacketHandlerDispatcherInstance.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ModalFormResponsePacket.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerPlayer.h"

#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

namespace ll::form::handler {


nlohmann::ordered_json jsonCppValueToNlohmannOrderedJson(Json::Value const& value) {
    if (value.isObject()) {
        nlohmann::ordered_json result = nlohmann::ordered_json::object();
        for (auto const& key : value.getMemberNames()) {
            result[key] = jsonCppValueToNlohmannOrderedJson(value[key]);
        }
        return result;
    } else if (value.isArray()) {
        nlohmann::ordered_json result = nlohmann::ordered_json::array();
        for (auto const& item : value) {
            result.push_back(jsonCppValueToNlohmannOrderedJson(item));
        }
        return result;
    } else if (value.isString()) {
        return value.asString({});
    } else if (value.isBool()) {
        return value.asBool(false);
    } else if (value.isIntegral()) {
        auto intVal  = value.asInt64();
        auto uintVal = value.asUInt64();
        if (intVal >= 0 && static_cast<uint64>(intVal) == uintVal) {
            return uintVal;
        }
        return intVal;
    } else if (value.isDouble()) {
        return value.asDouble(0);
    } else if (value.isNull()) {
        return nullptr;
    }
    return nullptr;
}

void SimpleFormHandler::handle(
    Player&                              player,
    std::optional<Json::Value>           data,
    std::optional<ModalFormCancelReason> cancelReason
) const {
    int selected = data.has_value() ? data.value().asInt(0) : -1;
    if (selected >= 0 && selected < (int)mButtonCallbacks.size()) {
        if (mButtonCallbacks[selected]) {
            mButtonCallbacks[selected](player);
        }
    }
    if (mCallback) {
        mCallback(player, selected, cancelReason);
    }
}

void CustomFormHandler::handle(
    Player&                              player,
    std::optional<Json::Value>           data,
    std::optional<ModalFormCancelReason> cancelReason
) const {
    if (!data.has_value()) {
        if (mCallback) {
            mCallback(player, {}, cancelReason);
        }
        return;
    }

    nlohmann::ordered_json dataJson = jsonCppValueToNlohmannOrderedJson(data.value());

    if (!dataJson.is_array()) {
        getLogger().error("Failed to parse CustomForm result: not an array");
        return;
    }
    if (dataJson.size() != mFormElements.size()) {
        getLogger().error("Failed to parse CustomForm result: size mismatch");
        return;
    }

    CustomFormResult result{std::in_place};

    for (size_t i = 0; i < mFormElements.size(); ++i) {
        auto& element = mFormElements[i];
        auto& value   = dataJson[i];
        if (element->getType() == CustomFormElement::Type::Label) {
            continue;
        }
        result->emplace(element->mName, element->parseResult(value));
    }

    if (mCallback) {
        mCallback(player, result, cancelReason);
    }
}

void ModalFormHandler::handle(
    Player&                              player,
    std::optional<Json::Value>           data,
    std::optional<ModalFormCancelReason> cancelReason
) const {
    if (!data.has_value()) {
        if (mCallback) {
            mCallback(player, {}, cancelReason);
        }
        return;
    }
    bool selected = data->asBool(false);
    if (mCallback) {
        mCallback(player, (ll::form::ModalFormSelectedButton)selected, cancelReason);
    }
}

ConcurrentDenseMap<uint, std::unique_ptr<FormHandler>> formHandlers = {};

bool handleFormPacket(
    Player&                              player,
    uint                                 formId,
    std::optional<Json::Value>           data,
    std::optional<ModalFormCancelReason> cancelReason
) {
    auto it = formHandlers.find(formId);
    if (it == formHandlers.end()) {
        return false;
    }
    auto handler = std::move(it->second);
    formHandlers.erase(it);
    handler->handle(player, std::move(data), cancelReason);
    return true;
}

LL_TYPE_INSTANCE_HOOK(
    FormResponseHandler,
    HookPriority::Highest,
    PacketHandlerDispatcherInstance<ModalFormResponsePacket>,
    &PacketHandlerDispatcherInstance<ModalFormResponsePacket>::handle,
    void,
    NetworkIdentifier const& source,
    NetEventCallback&        callback,
    std::shared_ptr<Packet>& packet
) {
    auto handle = static_cast<ServerNetworkHandler*>(&callback);
    if (auto player = handle->_getServerPlayer(source, packet->mClientSubId); player) {
        auto& modalPacket = (ModalFormResponsePacket&)*packet;
        if (ll::form::handler::handleFormPacket(
                *player,
                modalPacket.mFormId,
                modalPacket.mJSONResponse,
                modalPacket.mFormCancelReason
            )) {
            return;
        }
    }
    origin(source, callback, packet);
}


uint addFormHandler(std::unique_ptr<FormHandler>&& data) {
    static ll::memory::HookRegistrar<FormResponseHandler> hook;

    uint formId = ll::form::FormIdManager::genFormId();
    formHandlers.emplace(formId, std::move(data));

    return formId;
}


} // namespace ll::form::handler
