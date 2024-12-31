#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PlayerStatisticVersion : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk73cdca;
    ::ll::UntypedStorage<8, 16> mUnk699ccd;
    ::ll::UntypedStorage<8, 16> mUnk46b9f9;
    ::ll::UntypedStorage<8, 16> mUnkdf5de6;
    ::ll::UntypedStorage<8, 32> mUnkc71cdf;
    ::ll::UntypedStorage<4, 4>  mUnk8dff2a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStatisticVersion& operator=(PlayerStatisticVersion const&);
    PlayerStatisticVersion(PlayerStatisticVersion const&);
    PlayerStatisticVersion();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerStatisticVersion() /*override*/ = default;

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
