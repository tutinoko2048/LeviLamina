#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class EnchantingContainerManagerModel;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class Player;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerEnchant : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf0b4c6;
    ::ll::UntypedStorage<8, 8> mUnk72a4f8;
    ::ll::UntypedStorage<1, 1> mUnkc44064;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&);
    CraftHandlerEnchant(CraftHandlerEnchant const&);
    CraftHandlerEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerEnchant() /*override*/ = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction
    ) /*override*/;

    // vIndex: 5
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;

    // vIndex: 3
    virtual void endRequestBatch() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftHandlerEnchant(::Player& player, ::ItemStackRequestActionCraftHandler& craftRequestHandler);

    MCAPI ::EnchantingContainerManagerModel& _getEnchantingModel() const;

    MCAPI ::ItemStackNetResult _handleEnchant(::ItemStackRequestActionCraft<::RecipeNetId, 12> const& requestAction);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::ItemStackRequestActionCraftHandler& craftRequestHandler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI void $_postCraftRequest(bool const wasSuccess);

    MCAPI void $endRequestBatch();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
