#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
struct VariantParameterList;
// clang-format on

class Tadpole : public ::WaterAnimal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 177
    virtual float getFlopVerticalVelocityFactor() const /*override*/;

    // vIndex: 178
    virtual float getFlopHorizontalVelocityFactor() const /*override*/;

    // vIndex: 8
    virtual ~Tadpole() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI float $getFlopVerticalVelocityFactor() const;

    MCFOLD float $getFlopHorizontalVelocityFactor() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
