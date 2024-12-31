#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class PistonConsumer : public ::ConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                        mBlockedFace;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonConsumer& operator=(PistonConsumer const&);
    PistonConsumer(PistonConsumer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonConsumer() /*override*/ = default;

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const /*override*/;

    // vIndex: 12
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;

    // vIndex: 11
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;

    // vIndex: 24
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PistonConsumer();

    MCAPI void setBlockPowerFace(uchar blockFace);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canConsumePowerAnyDirection() const;

    MCAPI bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);

    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
