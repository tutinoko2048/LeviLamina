#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class BlockDefinitionGroup;
class CompoundTag;
class ContentIdentity;
class LevelSettings;
class ReadOnlyBinaryStream;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct NetworkPermissions;
struct PlayerMovementSettings;
struct SyncedPlayerMovementSettings;
namespace mce { class UUID; }
// clang-format on

class StartGamePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1352, ::LevelSettings>              mSettings;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                 mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<4, 4, ::GameType>                      mEntityGameType;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                          mRot;
    ::ll::TypedStorage<8, 32, ::std::string>                  mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mLevelName;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>              mTemplateContentIdentity;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                    mWorldTemplateId;
    ::ll::TypedStorage<1, 1, bool>                            mIsTrial;
    ::ll::TypedStorage<4, 12, ::SyncedPlayerMovementSettings> mMovementSettings;
    ::ll::TypedStorage<8, 8, uint64>                          mLevelCurrentTime;
    ::ll::TypedStorage<4, 4, int>                             mEnchantmentSeed;
    ::ll::TypedStorage<8, 32, ::std::string>                  mMultiplayerCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                            mEnableItemStackNetManager;
    ::ll::TypedStorage<8, 32, ::std::string>                  mServerVersion;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                  mPlayerPropertyData;
    ::ll::TypedStorage<8, 8, uint64>                          mServerBlockTypeRegistryChecksum;
    ::ll::TypedStorage<1, 1, bool>                            mServerEnabledClientSideGeneration;
    ::ll::TypedStorage<1, 1, bool>                            mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>            mNetworkPermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::CompoundTag>>> mBlockProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~StartGamePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StartGamePacket();

    MCAPI StartGamePacket(
        ::LevelSettings const&          settings,
        ::ActorUniqueID                 entityId,
        ::ActorRuntimeID                runtimeId,
        ::GameType                      entityGameType,
        bool                            enableItemStackNetManager,
        ::Vec3 const&                   pos,
        ::Vec2 const&                   rot,
        ::std::string const&            levelId,
        ::std::string const&            levelName,
        ::ContentIdentity const&        premiumTemplateContentIdentity,
        ::std::string const&            multiplayerCorrelationId,
        ::BlockDefinitionGroup const&   blockDefinitionGroup,
        bool                            isTrial,
        ::CompoundTag                   playerPropertyData,
        ::PlayerMovementSettings const& movementSettings,
        ::std::string const&            serverVersion,
        ::mce::UUID const&              worldTemplateId,
        uint64                          levelCurrentTime,
        int                             enchantmentSeed,
        uint64                          blockTypeRegistryChecksum
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::LevelSettings const&          settings,
        ::ActorUniqueID                 entityId,
        ::ActorRuntimeID                runtimeId,
        ::GameType                      entityGameType,
        bool                            enableItemStackNetManager,
        ::Vec3 const&                   pos,
        ::Vec2 const&                   rot,
        ::std::string const&            levelId,
        ::std::string const&            levelName,
        ::ContentIdentity const&        premiumTemplateContentIdentity,
        ::std::string const&            multiplayerCorrelationId,
        ::BlockDefinitionGroup const&   blockDefinitionGroup,
        bool                            isTrial,
        ::CompoundTag                   playerPropertyData,
        ::PlayerMovementSettings const& movementSettings,
        ::std::string const&            serverVersion,
        ::mce::UUID const&              worldTemplateId,
        uint64                          levelCurrentTime,
        int                             enchantmentSeed,
        uint64                          blockTypeRegistryChecksum
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
