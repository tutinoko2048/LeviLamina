#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UpdateCharacterStatisticsRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk545662;
    ::ll::UntypedStorage<8, 16> mUnkd604db;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateCharacterStatisticsRequest& operator=(UpdateCharacterStatisticsRequest const&);
    UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest const&);
    UpdateCharacterStatisticsRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateCharacterStatisticsRequest() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
