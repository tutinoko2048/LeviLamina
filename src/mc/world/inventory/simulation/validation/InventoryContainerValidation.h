#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class InventoryContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    InventoryContainerValidation& operator=(InventoryContainerValidation const&);
    InventoryContainerValidation(InventoryContainerValidation const&);
    InventoryContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const
        /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 9
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    // vIndex: 6
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    // vIndex: 0
    virtual ~InventoryContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;

    MCAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
