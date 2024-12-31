#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtTargetGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtTargetGoal& operator=(LookAtTargetGoal const&);
    LookAtTargetGoal(LookAtTargetGoal const&);
    LookAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
