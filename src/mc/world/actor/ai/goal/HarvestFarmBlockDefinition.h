#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HarvestFarmBlockGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HarvestFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3757db;
    ::ll::UntypedStorage<4, 4> mUnk9ea904;
    ::ll::UntypedStorage<4, 4> mUnk63e448;
    ::ll::UntypedStorage<4, 4> mUnk98cb12;
    ::ll::UntypedStorage<4, 4> mUnk1c72e6;
    ::ll::UntypedStorage<4, 4> mUnk3566a3;
    ::ll::UntypedStorage<4, 4> mUnkb2577b;
    ::ll::UntypedStorage<4, 4> mUnkfa5710;
    // NOLINTEND

public:
    // prevent constructor by default
    HarvestFarmBlockDefinition& operator=(HarvestFarmBlockDefinition const&);
    HarvestFarmBlockDefinition(HarvestFarmBlockDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HarvestFarmBlockDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HarvestFarmBlockDefinition();

    MCAPI void initialize(::EntityContext& entity, ::HarvestFarmBlockGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                       name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HarvestFarmBlockDefinition>>& root
    );
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
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
