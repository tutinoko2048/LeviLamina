#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaChannelParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbcb723;
    ::ll::UntypedStorage<8, 24> mUnk9c8bef;
    ::ll::UntypedStorage<1, 1>  mUnk54612f;
    ::ll::UntypedStorage<1, 2>  mUnk353a07;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaChannelParameters& operator=(MediaChannelParameters const&);
    MediaChannelParameters(MediaChannelParameters const&);
    MediaChannelParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaChannelParameters() = default;

    // vIndex: 1
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
