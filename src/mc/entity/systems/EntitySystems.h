#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/entity/events/EcsEventDispatcher.h"
#include "mc/entity/systems/DefaultEntitySystemsCollection.h"
#include "mc/entity/systems/IEntitySystems.h"
#include "mc/entity/systems/PlayerInteractionSystem.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntitySystems : public IEntitySystems, public ::Bedrock::EnableNonOwnerReferences {
public:
    std::unique_ptr<PlayerInteractionSystem>         mPlayerInteractionSystem; // this+0x20
    std::unique_ptr<IEntitySystemsCollection>        mSystems;                 // this+0x28
    OwnerPtrT<SharePtrRefTraits<EcsEventDispatcher>> mDispatcher;              // this+0x30
    std::string                                      mName;                    // this+0x40
    bool                                             mEnableTimingCapture;     // this+0x60

    DefaultEntitySystemsCollection& getDefaultCollection() { return *(DefaultEntitySystemsCollection*)mSystems.get(); }

public:
    // NOLINTBEGIN
    // symbol: ??1EntitySystems@@UEAA@XZ
    virtual ~EntitySystems();

    // symbol:
    // ?registerTickingSystem@EntitySystems@@UEAAXV?$span@$$CBV?$typeid_t@USystemCategory@@@Bedrock@@$0?0@gsl@@V?$unique_ptr@VITickingSystem@@U?$default_delete@VITickingSystem@@@std@@@std@@AEBUSystemInfo@@UEntitySystemTickingMode@@@Z
    MCVAPI void registerTickingSystem(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // symbol: ?tickMovementCatchup@EntitySystems@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tickMovementCatchup(class EntityRegistry&);

    // symbol: ?tickMovementCorrectionReplay@EntitySystems@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tickMovementCorrectionReplay(class EntityRegistry&);

    // symbol: ??0EntitySystems@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit EntitySystems(std::string);

    // symbol:
    // ??0EntitySystems@@QEAA@AEAUReflectionCtx@cereal@@V?$unique_ptr@UIEntitySystemsCollection@@U?$default_delete@UIEntitySystemsCollection@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI EntitySystems(struct cereal::ReflectionCtx&, std::unique_ptr<struct IEntitySystemsCollection>, std::string);

    // symbol: ?getPlayerInteractionSystem@EntitySystems@@QEAAAEAVPlayerInteractionSystem@@XZ
    MCAPI class PlayerInteractionSystem& getPlayerInteractionSystem();

    // symbol: ?registerEditorOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo&&);

    // symbol: ?registerEvents@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void registerEvents(class EntityRegistry&);

    // symbol: ?registerGameOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo&&);

    // symbol: ?registerMovementTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo&&);

    // symbol: ?registerTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerTickingSystem(struct TickingSystemWithInfo&&);

    // symbol: ?tick@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void tick(class EntityRegistry& registry);

    // symbol: ?tickEditor@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void tickEditor(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasSingleTickCategory@EntitySystems@@AEBA_NV?$typeid_t@USystemCategory@@@Bedrock@@@Z
    MCAPI bool _hasSingleTickCategory(class Bedrock::typeid_t<struct SystemCategory>) const;

    // symbol: ?_singleTickCategory@EntitySystems@@AEAAXV?$typeid_t@USystemCategory@@@Bedrock@@AEAVEntityContext@@@Z
    MCAPI void _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class EntityContext&);

    // symbol:
    // ?_singleTickCategory@EntitySystems@@AEAAXV?$typeid_t@USystemCategory@@@Bedrock@@AEAVStrictEntityContext@@AEAVEntityRegistry@@@Z
    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class StrictEntityContext&, class EntityRegistry&);

    // NOLINTEND
};
