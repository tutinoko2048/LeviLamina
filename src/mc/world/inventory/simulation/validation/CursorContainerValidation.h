#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class CursorContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~CursorContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
