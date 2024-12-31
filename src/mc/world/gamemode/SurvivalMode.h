#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/GameMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class Player;
class Vec3;
// clang-format on

class SurvivalMode : public ::GameMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke69c28;
    ::ll::UntypedStorage<1, 1>  mUnk3d88ec;
    ::ll::UntypedStorage<4, 4>  mUnk812b7b;
    ::ll::UntypedStorage<8, 64> mUnk7f623c;
    // NOLINTEND

public:
    // prevent constructor by default
    SurvivalMode& operator=(SurvivalMode const&);
    SurvivalMode(SurvivalMode const&);
    SurvivalMode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 14
    virtual bool attack(::Actor& entity) /*override*/;

    // vIndex: 13
    virtual bool interact(::Actor& entity, ::Vec3 const& location) /*override*/;

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;

    // vIndex: 1
    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock) /*override*/;

    // vIndex: 5
    virtual void startBuildBlock(::BlockPos const& pos, uchar face) /*override*/;

    // vIndex: 6
    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick) /*override*/;

    // vIndex: 11
    virtual bool useItem(::ItemStack& item) /*override*/;

    // vIndex: 12
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    // vIndex: 9
    virtual void tick() /*override*/;

    // vIndex: 16
    virtual void setTrialMode(bool isEnabled) /*override*/;

    // vIndex: 17
    virtual bool isInTrialMode() /*override*/;

    // vIndex: 18
    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback) /*override*/;

    // vIndex: 0
    virtual ~SurvivalMode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SurvivalMode(::Player& player);

    MCAPI void _messagePlayers(::std::string message);

    MCAPI void _showTrialReminder(bool force);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mTrialHasEnded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attack(::Actor& entity);

    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location);

    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);

    MCAPI bool $useItem(::ItemStack& item);

    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCAPI void $tick();

    MCAPI void $setTrialMode(bool isEnabled);

    MCAPI bool $isInTrialMode();

    MCAPI void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
