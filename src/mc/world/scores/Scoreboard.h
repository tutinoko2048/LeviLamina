#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandSoftEnumRegistry;
class CompoundTag;
class DisplayObjective;
class IdentityDictionary;
class Objective;
class ObjectiveCriteria;
class PacketSender;
class Player;
class PlayerScoreboardEventListener;
class ScoreboardEventCoordinator;
class ScoreboardIdentityRef;
struct ActorUniqueID;
struct PlayerScore;
struct PlayerScoreboardId;
struct ScoreInfo;
struct ScoreboardId;
// clang-format on

class Scoreboard {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandSoftEnumRegistry>                                            mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DisplayObjective>>             mDisplayObjectives;
    ::ll::TypedStorage<8, 256, ::IdentityDictionary>                                               mIdentityDict;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::ScoreboardIdentityRef>>       mIdentityRefs;
    ::ll::TypedStorage<1, 1, bool>                                                                 mShouldUpdateUI;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::Objective>>> mObjectives;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::Bedrock::NonOwnerPointer<::Objective>>>
        mObjectivesHashLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ObjectiveCriteria>>> mCriteria;
    ::ll::TypedStorage<8, 112, ::ScoreboardEventCoordinator>   mScoreboardEventCoordinator;
    ::ll::TypedStorage<8, 72, ::PlayerScoreboardEventListener> mPlayerListener;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scoreboard();

    // vIndex: 1
    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    // vIndex: 2
    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName);

    // vIndex: 5
    virtual ::ScoreboardId const& createScoreboardId(::Player const& player);

    // vIndex: 4
    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity);

    // vIndex: 3
    virtual ::ScoreboardId const& createScoreboardId(::std::string const& fakePlayer);

    // vIndex: 6
    virtual void onObjectiveAdded(::Objective const& objective);

    // vIndex: 7
    virtual void onObjectiveRemoved(::Objective& objective);

    // vIndex: 8
    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    // vIndex: 9
    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    // vIndex: 10
    virtual void onPlayerJoined(::Player const& player);

    // vIndex: 11
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    // vIndex: 12
    virtual void tick();

    // vIndex: 13
    virtual void setPacketSender(::PacketSender* sender);

    // vIndex: 14
    virtual void writeToLevelStorage();

    // vIndex: 15
    virtual bool isClientSide() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Scoreboard(::CommandSoftEnumRegistry registry);

    MCAPI void _addLoadedCriteria(::std::unique_ptr<::ObjectiveCriteria> newCriteria);

    MCAPI void _addLoadedObjective(::std::unique_ptr<::Objective> newObjective);

    MCFOLD ::std::unordered_map<::std::string, ::std::unique_ptr<::ObjectiveCriteria>> const& _getCriteriaMap() const;

    MCFOLD ::std::unordered_map<::std::string, ::std::unique_ptr<::Objective>> const& _getObjectiveMap() const;

    MCAPI void _init();

    MCAPI ::Objective*
    addObjective(::std::string const& name, ::std::string const& displayName, ::ObjectiveCriteria const& criteria);

    MCAPI void addScoreListener(::Player& player, ::std::string const& objective);

    MCAPI int applyPlayerOperation(
        bool&                          success,
        ::std::vector<::ScoreboardId>& sourceErrorIds,
        ::ScoreboardId const&          target,
        ::Objective&                   targetObjective,
        ::std::vector<::ScoreboardId>& selector,
        ::Objective&                   objective,
        ::CommandOperator              opCode
    );

    MCAPI void forEachIdentityRef(::std::function<void(::ScoreboardIdentityRef&)> callback);

    MCAPI void forEachObjective(::std::function<void(::Objective&)> callback);

    MCAPI ::ObjectiveCriteria* getCriteria(::std::string const& criteriaName) const;

    MCAPI ::std::vector<::std::string> getCriteriaNames() const;

    MCAPI ::ObjectiveCriteria const& getDefaultCriteria() const;

    MCAPI ::std::vector<::PlayerScore> getDisplayInfoFiltered(::std::string const& displaySlot) const;

    MCAPI ::DisplayObjective const* getDisplayObjective(::std::string const& displaySlotName) const;

    MCAPI ::std::vector<::std::string> getDisplayObjectiveSlotNames() const;

    MCAPI ::std::vector<::ScoreInfo> getIdScores(::ScoreboardId const& id) const;

    MCAPI ::Objective* getObjective(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getObjectiveNames() const;

    MCAPI ::std::vector<::Objective const*> getObjectives() const;

    MCFOLD ::ScoreboardEventCoordinator& getScoreboardEventCoordinator();

    MCAPI ::ScoreboardId const& getScoreboardId(::Actor const& entity) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::ActorUniqueID const& entityId) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& name) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::Player const& player) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::PlayerScoreboardId const& playerId) const;

    MCAPI ::ScoreboardIdentityRef* getScoreboardIdentityRef(::ScoreboardId const& scoreboardId);

    MCAPI ::std::vector<::ScoreboardIdentityRef> getScoreboardIdentityRefs() const;

    MCAPI ::std::vector<::ScoreboardId> getTrackedIds() const;

    MCAPI bool hasIdentityFor(::ScoreboardId const& scoreboardId) const;

    MCAPI bool isObjectiveDisplayed(::Objective const& objective) const;

    MCAPI int modifyPlayerScore(
        bool&                    success,
        ::ScoreboardId const&    id,
        ::Objective&             objective,
        int                      scoreValue,
        ::PlayerScoreSetFunction action
    );

    MCAPI int modifyPlayerScore(
        bool&                    success,
        ::ScoreboardIdentityRef* identityRef,
        ::Objective&             objective,
        int                      scoreValue,
        ::PlayerScoreSetFunction action
    );

    MCAPI ::ScoreboardIdentityRef const& registerScoreboardIdentity(::CompoundTag const& loadedData);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::ActorUniqueID const& entityId);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::std::string const& name);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);

    MCAPI bool removeObjective(::Objective* objective);

    MCAPI void removeScoreListener(::Player const& player);

    MCAPI void removeScoreListener(::Player const& player, ::std::string const& objective);

    MCAPI void replaceFakePlayer(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);

    MCAPI bool resetPlayerScore(::ScoreboardId const& id, ::Objective& objective);

    MCAPI void resetPlayerScore(::ScoreboardId const& id);

    MCAPI ::std::optional<::ScoreInfo> tryGetIdScore(::ScoreboardId const& id, uint64 const& objectiveHash) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldClearScoresOnDeath(::Actor const& actor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_CRITERIA();

    MCAPI static ::std::string const& DISPLAY_SLOT_BELOWNAME();

    MCAPI static ::std::string const& DISPLAY_SLOT_LIST();

    MCAPI static ::std::string const& DISPLAY_SLOT_SIDEBAR();

    MCAPI static char const*& OBJECTIVES_ENUM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandSoftEnumRegistry registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    MCAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::Player const& player);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::Actor const& entity);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::std::string const& fakePlayer);

    MCAPI void $onObjectiveAdded(::Objective const& objective);

    MCAPI void $onObjectiveRemoved(::Objective& objective);

    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    MCFOLD void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    MCFOLD void $onPlayerJoined(::Player const& player);

    MCFOLD void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    MCFOLD void $tick();

    MCFOLD void $setPacketSender(::PacketSender* sender);

    MCFOLD void $writeToLevelStorage();

    MCFOLD bool $isClientSide() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
