#include "mc/world/actor/player/Player.h"

#include "mc/certificates/ExtendedCertificate.h"
#include "mc/certificates/WebToken.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"
#include "mc/world/systems/NetworkSystem.h"

#include "ll/api/service/GlobalService.h"
#include "mc/network/packet/TextPacket.h"
#include <memory>

using ll::Global;

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() const {
    return *(const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>());
}

std::string Player::getDeviceId() const {
    return Global<ServerNetworkHandler>->fetchConnectionRequest(getNetworkIdentifier()).getDeviceId();
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    auto peer = Global<Minecraft>->getNetworkSystem().getPeerForUser(getNetworkIdentifier());
    if (!peer) { return std::nullopt; }
    return peer->getNetworkStatus();
}

std::string Player::getRealName() const {
    auto certificate = getCertificate();
    if (!certificate) { return getName(); }
    return ExtendedCertificate::getIdentityName(*certificate);
}

void Player::disconnect(std::string& reason) const {
    Global<ServerNetworkHandler>->disconnectClient(getNetworkIdentifier(), Connection::DisconnectFailReason::Unknown, reason, false);
}

void Player::sendMessage(std::string& msg) const {
    auto* pkt = new TextPacket();
    pkt->mType = TextPacketType::Raw;
    pkt->mMessage = msg;
    sendNetworkPacket(*pkt);
}
