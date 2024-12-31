#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class IUnknownBlockTypeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IUnknownBlockTypeRegistry& operator=(IUnknownBlockTypeRegistry const&);
    IUnknownBlockTypeRegistry(IUnknownBlockTypeRegistry const&);
    IUnknownBlockTypeRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IUnknownBlockTypeRegistry() = 0;

    // vIndex: 1
    virtual ::Block const& getUnknownBlock(::CompoundTag const&) = 0;
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
