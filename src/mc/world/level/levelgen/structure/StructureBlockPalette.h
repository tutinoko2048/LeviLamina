#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureBlockPaletteLoadResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class CompoundTag;
class IUnknownBlockTypeRegistry;
// clang-format on

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct BlockPositionData;
    struct TickingQueueData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct TickingQueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk91f3e3;
        // NOLINTEND

    public:
        // prevent constructor by default
        TickingQueueData& operator=(TickingQueueData const&);
        TickingQueueData(TickingQueueData const&);
        TickingQueueData();
    };

    struct BlockPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>                          mBlockEntityData;
        ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPalette::TickingQueueData>> mTickData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BlockPositionData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>> mStructurePaletteIdToSerializationId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::StructureBlockPalette::BlockPositionData>>
        mBlockPositionData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureBlockPalette(::StructureBlockPalette&&);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const& tag);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(::CompoundTag const& tag, int index);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const& tag);

    MCAPI void _saveBlockPositionDataList(::CompoundTag& tag) const;

    MCAPI ::Block const& getBlock(
        ::BlockPalette const&                                   blockPalette,
        uint64                                                  paletteId,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

    MCFOLD uint64 getSize() const;

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI ::Block const*
    tryGetBlock(uint64 paletteId, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry) const;

    MCAPI ~StructureBlockPalette();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureBlockPalette&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
