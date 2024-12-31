#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorLoadAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerButtonInputAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputModeChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldAfterEvents
: public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::IScriptWorldAfterEvents> {
public:
    // ScriptWorldAfterEvents inner types declare
    // clang-format off
    class ScriptWorldAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptWorldAfterEvents inner types define
    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkee086d;
        ::ll::UntypedStorage<8, 8>  mUnk791636;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class ScriptWorldAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraft::ScriptWorldAfterEvents> {
    public:
        // prevent constructor by default
        ScriptWorldAfterEventsDeferredEventListener& operator=(ScriptWorldAfterEventsDeferredEventListener const&);
        ScriptWorldAfterEventsDeferredEventListener(ScriptWorldAfterEventsDeferredEventListener const&);
        ScriptWorldAfterEventsDeferredEventListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual bool onFlushWorldAfterEvents() /*override*/;

        // vIndex: 0
        virtual ~ScriptWorldAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $onFlushWorldAfterEvents();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbcbf76;
    ::ll::UntypedStorage<8, 8>  mUnk6bb12a;
    ::ll::UntypedStorage<8, 8>  mUnk67b926;
    ::ll::UntypedStorage<8, 8>  mUnkd29287;
    ::ll::UntypedStorage<8, 8>  mUnk6c9fd0;
    ::ll::UntypedStorage<8, 8>  mUnk3b7018;
    ::ll::UntypedStorage<8, 8>  mUnka84ede;
    ::ll::UntypedStorage<8, 8>  mUnked6ec2;
    ::ll::UntypedStorage<8, 8>  mUnk25b6d2;
    ::ll::UntypedStorage<8, 16> mUnkb3af7f;
    ::ll::UntypedStorage<8, 8>  mUnk553f2b;
    ::ll::UntypedStorage<8, 8>  mUnkbab7ab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldAfterEvents& operator=(ScriptWorldAfterEvents const&);
    ScriptWorldAfterEvents(ScriptWorldAfterEvents const&);
    ScriptWorldAfterEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWorldAfterEvents() /*override*/;

    // vIndex: 1
    virtual ::Level& getLevel() const /*override*/;

    // vIndex: 2
    virtual void
    onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&
                         gameRulesChangeEvent) /*override*/;

    // vIndex: 3
    virtual void
    onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
                         weatherChangedEvent) /*override*/;

    // vIndex: 30
    virtual void
    onPushButton(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>& pushedButton
    ) /*override*/;

    // vIndex: 9
    virtual void
    onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 10
    virtual void
    onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 12
    virtual void onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 13
    virtual void onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 7
    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    ) /*override*/;

    // vIndex: 29
    virtual void onActivateLever(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>& leverEvent
    ) /*override*/;

    // vIndex: 33
    virtual void onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>& blockPlaceEvent
    ) /*override*/;

    // vIndex: 32
    virtual void onExplodeBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>& blockExplodeEvent
    ) /*override*/;

    // vIndex: 34
    virtual void onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>& blockBreakEvent
    ) /*override*/;

    // vIndex: 16
    virtual void
    onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& actorHurtEvent
    ) /*override*/;

    // vIndex: 17
    virtual void onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    ) /*override*/;

    // vIndex: 18
    virtual void
    onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>& actorDieEvent
    ) /*override*/;

    // vIndex: 11
    virtual void onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&           removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 39
    virtual void
    onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 40
    virtual void
    onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 41
    virtual void onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 42
    virtual void onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 43
    virtual void onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 44
    virtual void onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 45
    virtual void onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 46
    virtual void
    onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 5
    virtual void
    onPlayerJoin(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 6
    virtual void
    onPlayerLeave(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 19
    virtual void
    onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 20
    virtual void onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 21
    virtual void onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 22
    virtual void onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 23
    virtual void onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    ) /*override*/;

    // vIndex: 24
    virtual void onPlayerInteractWithBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>&
            eventData
    ) /*override*/;

    // vIndex: 25
    virtual void onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 4
    virtual void onWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 8
    virtual void
    onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 14
    virtual void onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 47
    virtual void onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 48
    virtual void onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 28
    virtual void onActivatePiston(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 31
    virtual void onExplosion(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>& eventData
    ) /*override*/;

    // vIndex: 35
    virtual void onPushPressurePlate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>&
            pushedPressurePlate
    ) /*override*/;

    // vIndex: 36
    virtual void
    onPopPressurePlate(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
                           poppedPressurePlate) /*override*/;

    // vIndex: 37
    virtual void onHitTargetBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>& hitTargetBlock
    ) /*override*/;

    // vIndex: 38
    virtual void onTripTripWire(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>& trippedTripWire
    ) /*override*/;

    // vIndex: 26
    virtual void
    onPlayerEmote(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    ) /*override*/;

    // vIndex: 27
    virtual void onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWorldAfterEvents(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI void
    registerListeners(bool worldListener, ::ScriptModuleMinecraft::ScriptGlobalEventListeners& globalEventListeners);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );

    MCAPI static ::ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        ::ScriptModuleMinecraft::ScriptWorldAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& bindingName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Level& $getLevel() const;

    MCAPI void
    $onGameRuleChange(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>&
                          gameRulesChangeEvent);

    MCAPI void
    $onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
                          weatherChangedEvent);

    MCAPI void $onPushButton(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptButtonPushAfterEvent>& pushedButton
    );

    MCAPI void
    $onActorLoad(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent>& eventData);

    MCAPI void
    $onActorSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorSpawnAfterEvent>& eventData);

    MCAPI void $onDataDrivenActorEventSend(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>& eventData
    );

    MCAPI void $onActorHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>& eventData
    );

    MCAPI void $onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& eventData
    );

    MCAPI void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );

    MCAPI void $onActivateLever(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLeverActionAfterEvent>& leverEvent
    );

    MCAPI void $onPlayerPlaceBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>& blockPlaceEvent
    );

    MCAPI void $onExplodeBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>& blockExplodeEvent
    );

    MCAPI void $onPlayerBreakBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>& blockBreakEvent
    );

    MCAPI void $onActorHurt(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& actorHurtEvent
    );

    MCAPI void $onActorHealthChanged(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>&
            actorHealthChangedEvent
    );

    MCAPI void
    $onActorDie(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorDieAfterEvent>& actorDieEvent);

    MCAPI void $onActorRemoved(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const&           removedActor,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>& eventData
    );

    MCAPI void
    $onItemUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseAfterEvent>& eventData);

    MCAPI void
    $onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& eventData);

    MCAPI void $onItemStartUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>& eventData
    );

    MCAPI void $onItemStopUseOn(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>& eventData
    );

    MCAPI void $onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& eventData
    );

    MCAPI void $onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& eventData
    );

    MCAPI void $onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& eventData
    );

    MCAPI void
    $onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& eventData
    );

    MCAPI void
    $onPlayerJoin(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& eventData);

    MCAPI void
    $onPlayerLeave(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& eventData
    );

    MCAPI void
    $onPlayerSpawn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent>& eventData
    );

    MCAPI void $onPlayerDimensionChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInputModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInputPermissionCategoryChange(
        ::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>& eventData
    );

    MCAPI void $onPlayerInteractWithEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>&
            eventData
    );

    MCAPI void $onPlayerInteractWithBlock(::Scripting::StrongTypedObjectHandle<
                                          ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>& eventData);

    MCAPI void $onPlayerGameModeChange(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>& eventData
    );

    MCAPI void $onWorldInitialize(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>& eventData
    );

    MCAPI void
    $onChat(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendAfterEvent>& eventData);

    MCAPI void $onServerMessage(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptServerMessageAfterEvent>& eventData
    );

    MCAPI void $onProjectileHitEntity(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>& eventData
    );

    MCAPI void $onProjectileHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent>& eventData
    );

    MCAPI void $onActivatePiston(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent>& eventData
    );

    MCAPI void $onExplosion(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>& eventData
    );

    MCAPI void $onPushPressurePlate(::Scripting::StrongTypedObjectHandle<
                                    ::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>& pushedPressurePlate);

    MCAPI void
    $onPopPressurePlate(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>&
                            poppedPressurePlate);

    MCAPI void $onHitTargetBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>& hitTargetBlock
    );

    MCAPI void $onTripTripWire(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>& trippedTripWire
    );

    MCAPI void $onPlayerEmote(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerEmoteAfterEvent>& emoteEvent
    );

    MCAPI void $onPlayerButtonInput(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerButtonInputAfterEvent>& inputEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
