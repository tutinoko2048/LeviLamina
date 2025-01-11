#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8d23c5;
    ::ll::UntypedStorage<4, 4>  mUnkf4d3b3;
    ::ll::UntypedStorage<4, 4>  mUnka0d73c;
    ::ll::UntypedStorage<4, 4>  mUnk3eb703;
    ::ll::UntypedStorage<8, 32> mUnk41bb83;
    ::ll::UntypedStorage<8, 32> mUnk7bb1c9;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobSpawnHerdInfo(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );

    MCAPI ::MobSpawnHerdInfo& operator=(::MobSpawnHerdInfo const&);

    MCAPI ~MobSpawnHerdInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
