#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BellBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BellBlock& operator=(BellBlock const&);
    BellBlock(BellBlock const&);
    BellBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BellBlock@@UEAA@XZ
    virtual ~BellBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@BellBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17, symbol: ?onProjectileHit@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 25, symbol: ?canConnect@BellBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 56, symbol: ?canContainLiquid@BellBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 58, symbol: ?shouldConnectToRedstone@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 68, symbol: ?movedByPiston@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 92, symbol: ?neighborChanged@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98, symbol: ?getPlacementBlock@BellBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@BellBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 166, symbol: ?getSilkTouchItemInstance@BellBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // vIndex: 167, symbol: ?entityInside@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& actor) const;

    // symbol: ?isInteractiveBlock@BellBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0BellBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BellBlock(std::string const& nameId, int id);

    // symbol: ?hasValidAttachment@BellBlock@@QEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool hasValidAttachment(class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_determineAttachment@BellBlock@@AEBAAEBVBlock@@AEBVActor@@AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI class Block const&
    _determineAttachment(class Actor const& by, class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // symbol: ?_getItemId@BellBlock@@AEBAFAEBVBlockSource@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI short _getItemId(class BlockSource const&, std::string_view) const;

    // symbol: ?_sendBellUsedEventToClient@BellBlock@@AEBAXAEBVBlockSource@@AEBVActor@@@Z
    MCAPI void _sendBellUsedEventToClient(class BlockSource const& region, class Actor const& sourceActor) const;

    // symbol: ?_tryAttachToNeighbors@BellBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1H@Z
    MCAPI void _tryAttachToNeighbors(class BlockSource&, class BlockPos const&, class BlockPos const&, int) const;

    // NOLINTEND
};
