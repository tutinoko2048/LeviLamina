#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class EyeOfEnder : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9b9c62;
    ::ll::UntypedStorage<1, 1>  mUnk57d7dd;
    ::ll::UntypedStorage<4, 4>  mUnkc01906;
    ::ll::UntypedStorage<4, 12> mUnk1dceb6;
    // NOLINTEND

public:
    // prevent constructor by default
    EyeOfEnder& operator=(EyeOfEnder const&);
    EyeOfEnder(EyeOfEnder const&);
    EyeOfEnder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 8
    virtual ~EyeOfEnder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EyeOfEnder(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void preNormalTick();

    MCAPI void signalTo(::Player const& player, ::BlockPos& target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
