#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalMoveVelocityComponent;
struct SquidFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SquidPreAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSquidPreAiStepSystem(::StrictEntityContext const&, ::LocalMoveVelocityComponent& localMoveVelocityComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void tick(::ViewT<
                           ::StrictEntityContext,
                           ::Include<::ActorMovementTickNeededComponent, ::SquidFlagComponent>,
                           ::LocalMoveVelocityComponent> view);
    // NOLINTEND
};
