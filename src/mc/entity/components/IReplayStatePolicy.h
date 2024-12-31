#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

struct IReplayStatePolicy {
public:
    // prevent constructor by default
    IReplayStatePolicy& operator=(IReplayStatePolicy const&);
    IReplayStatePolicy(IReplayStatePolicy const&);
    IReplayStatePolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IReplayStatePolicy() = default;

    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult) const = 0;

    // vIndex: 2
    virtual bool canRewindToFrame(::EntityContext const&, uint64) = 0;

    // vIndex: 3
    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64) = 0;

    // vIndex: 4
    virtual void flagUnsupportedMovement(uint64) = 0;

    // vIndex: 5
    virtual void storeCurrentFrameSupported(uint64, ::EntityContext&) = 0;

    // vIndex: 6
    virtual void notifyOfExternalCorrection(uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
