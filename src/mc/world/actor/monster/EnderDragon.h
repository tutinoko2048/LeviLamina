#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/PathCompletionType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EnderDragon : public ::Monster {
public:
    // prevent constructor by default
    EnderDragon& operator=(EnderDragon const&);
    EnderDragon(EnderDragon const&);
    EnderDragon();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@EnderDragon@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(enum ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1EnderDragon@@UEAA@XZ
    virtual ~EnderDragon() = default;

    // vIndex: 13, symbol: ?remove@EnderDragon@@UEAAXXZ
    virtual void remove();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@EnderDragon@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: ?getHeadLookVector@EnderDragon@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float a) const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 49, symbol: ?isImmobile@EnderDragon@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?setSitting@EnderDragon@@UEAAX_N@Z
    virtual void setSitting(bool value);

    // vIndex: 78, symbol: ?isInvulnerableTo@EnderDragon@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 83, symbol: ?handleEntityEvent@EnderDragon@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(enum ActorEvent id, int data);

    // vIndex: 106, symbol: ?canChangeDimensionsUsingPortal@EnderDragon@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 115, symbol: ?canBePulledIntoVehicle@EnderDragon@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 124, symbol: ?canBeAffected@EnderDragon@@UEBA_NI@Z
    virtual bool canBeAffected(uint) const;

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 147, symbol: ?die@EnderDragon@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const&);

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@EnderDragon@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@EnderDragon@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 208, symbol: ?tickDeath@EnderDragon@@MEAAXXZ
    virtual void tickDeath();

    // symbol: ?canExistInPeaceful@EnderDragon@@UEBA_NXZ
    MCVAPI bool canExistInPeaceful() const;

    // symbol: ??0EnderDragon@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI EnderDragon(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?dieNaturally@EnderDragon@@QEAAXXZ
    MCAPI void dieNaturally();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHXZ
    MCAPI int findClosestNode();

    // symbol: ?findClosestNode@EnderDragon@@QEAAHAEBVVec3@@@Z
    MCAPI int findClosestNode(class Vec3 const& pos);

    // symbol:
    // ?findPath@EnderDragon@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@HHPEAVPathfinderNode@@@Z
    MCAPI std::unique_ptr<class Path> findPath(int startIndex, int endIndex, class PathfinderNode* finalNode);

    // symbol: ?getFlameCount@EnderDragon@@QEBAHXZ
    MCAPI int getFlameCount() const;

    // symbol: ?getFlapTime@EnderDragon@@QEBAMXZ
    MCAPI float getFlapTime() const;

    // symbol: ?getHeadPos@EnderDragon@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getHeadPos() const;

    // symbol: ?getLatencyPos@EnderDragon@@QEBA?BV?$vector@MV?$allocator@M@std@@@std@@HM@Z
    MCAPI std::vector<float> const getLatencyPos(int step, float a) const;

    // symbol: ?getNumCrystalsAlive@EnderDragon@@QEAAHXZ
    MCAPI int getNumCrystalsAlive();

    // symbol: ?getTargetPos@EnderDragon@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getTargetPos() const;

    // symbol: ?incrementFlameCount@EnderDragon@@QEAAXXZ
    MCAPI void incrementFlameCount();

    // symbol: ?onCrystalDestroyed@EnderDragon@@QEAAXAEBVEnderCrystal@@VBlockPos@@AEBVActorDamageSource@@@Z
    MCAPI void
    onCrystalDestroyed(class EnderCrystal const& crystal, class BlockPos pos, class ActorDamageSource const& source);

    // symbol: ?postAiStep@EnderDragon@@QEAAXXZ
    MCAPI void postAiStep();

    // symbol: ?resetFlameCount@EnderDragon@@QEAAXXZ
    MCAPI void resetFlameCount();

    // symbol: ?setDragonKilledCallback@EnderDragon@@QEAAXV?$function@$$A6AXAEAVEnderDragon@@@Z@std@@@Z
    MCAPI void setDragonKilledCallback(std::function<void(class EnderDragon&)>);

    // symbol: ?setHasDragonPreviouslyBeenKilled@EnderDragon@@QEAAX_N@Z
    MCAPI void setHasDragonPreviouslyBeenKilled(bool);

    // symbol: ?setNumCrystalsAlive@EnderDragon@@QEAAXH@Z
    MCAPI void setNumCrystalsAlive(int);

    // symbol: ?setTargetPos@EnderDragon@@QEAAXVVec3@@@Z
    MCAPI void setTargetPos(class Vec3 pos);

    // symbol: ?setTurnSpeed@EnderDragon@@QEAAXM@Z
    MCAPI void setTurnSpeed(float speed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_hurt@EnderDragon@@IEAA_NPEAVAABB@@AEBVActorDamageSource@@M@Z
    MCAPI bool _hurt(class AABB* part, class ActorDamageSource const& source, float damage);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkCrystals@EnderDragon@@AEAAXXZ
    MCAPI void _checkCrystals();

    // symbol: ?_checkWalls@EnderDragon@@AEAA_NVAABB@@@Z
    MCAPI bool _checkWalls(class AABB);

    // symbol: ?_hurtEntities@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _hurtEntities(gsl::span<gsl::not_null<class Actor*>>) const;

    // symbol: ?_knockBack@EnderDragon@@AEBAXV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@@Z
    MCAPI void _knockBack(gsl::span<gsl::not_null<class Actor*>>) const;

    // symbol:
    // ?_reconstructPath@EnderDragon@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVPathfinderNode@@0W4PathCompletionType@@@Z
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode&, class PathfinderNode&, ::PathCompletionType);

    // symbol: ?_isDragonImmuneBlock@EnderDragon@@CA_NAEBVBlockLegacy@@@Z
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?GROWL_INTERVAL_MAX@EnderDragon@@0HA
    MCAPI static int GROWL_INTERVAL_MAX;

    // symbol: ?GROWL_INTERVAL_MIN@EnderDragon@@0HA
    MCAPI static int GROWL_INTERVAL_MIN;

    // symbol: ?MAX_PATH_RADIUS@EnderDragon@@0HA
    MCAPI static int MAX_PATH_RADIUS;

    // symbol: ?SITTING_ALLOWED_DAMAGE_PERCENTAGE@EnderDragon@@0MA
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $GROWL_INTERVAL_MAX() { return GROWL_INTERVAL_MAX; }

    static auto& $GROWL_INTERVAL_MIN() { return GROWL_INTERVAL_MIN; }

    static auto& $MAX_PATH_RADIUS() { return MAX_PATH_RADIUS; }

    static auto& $SITTING_ALLOWED_DAMAGE_PERCENTAGE() { return SITTING_ALLOWED_DAMAGE_PERCENTAGE; }

    // NOLINTEND
};
