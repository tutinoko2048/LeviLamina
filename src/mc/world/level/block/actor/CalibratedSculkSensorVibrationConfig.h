#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorVibrationConfig.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class CalibratedSculkSensorVibrationConfig : public ::SculkSensorVibrationConfig {
public:
    // prevent constructor by default
    CalibratedSculkSensorVibrationConfig& operator=(CalibratedSculkSensorVibrationConfig const&);
    CalibratedSculkSensorVibrationConfig(CalibratedSculkSensorVibrationConfig const&);
    CalibratedSculkSensorVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool shouldListen(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext
    ) /*override*/;

    // vIndex: 0
    virtual ~CalibratedSculkSensorVibrationConfig() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
