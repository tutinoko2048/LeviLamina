#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDescription {
public:
    // BlockDescription inner types declare
    // clang-format off
    struct BlockTraits;
    // clang-format on

    // BlockDescription inner types define
    struct BlockTraits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkc4f4fa;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockTraits(BlockTraits const&);
        BlockTraits();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::BlockDescription::BlockTraits& operator=(::BlockDescription::BlockTraits const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk620f6f;
    ::ll::UntypedStorage<4, 8>  mUnkf130a3;
    ::ll::UntypedStorage<8, 24> mUnk4b74ac;
    ::ll::UntypedStorage<8, 40> mUnkb8bc1e;
    ::ll::UntypedStorage<8, 64> mUnk8565cf;
    ::ll::UntypedStorage<1, 1>  mUnk19d2ef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescription();

    MCAPI BlockDescription(::BlockDescription const&);

    MCAPI BlockDescription(::BlockDescription&&);

    MCAPI ::BlockDescription& operator=(::BlockDescription&&);

    MCAPI ::BlockDescription& operator=(::BlockDescription const&);

    MCAPI ~BlockDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockDescription const&);

    MCAPI void* $ctor(::BlockDescription&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
