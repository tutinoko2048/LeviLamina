#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class WoodlandMansionStart : public ::StructureStart {
public:
    // prevent constructor by default
    WoodlandMansionStart& operator=(WoodlandMansionStart const&);
    WoodlandMansionStart(WoodlandMansionStart const&);
    WoodlandMansionStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoodlandMansionStart@@UEAA@XZ
    virtual ~WoodlandMansionStart() = default;

    // vIndex: 1, symbol: ?postProcess@WoodlandMansionStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& level, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_create@WoodlandMansionStart@@AEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void _create(class Dimension&, class Random&, int, int);

    // symbol: ?_makeStairs@WoodlandMansionStart@@AEAAXAEBVBlockPos@@AEBVBlock@@EEAEAVBlockSource@@AEBVBoundingBox@@@Z
    MCAPI void _makeStairs(
        class BlockPos const&    startPos,
        class Block const&       stairBlock,
        uchar                    xStepDir,
        uchar                    yStepDir,
        class BlockSource&       level,
        class BoundingBox const& chunkBB
    );

    // symbol: ?_fillCobblestone@WoodlandMansionStart@@CAXAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI static void _fillCobblestone(class BlockPos const&, class BlockSource&);

    // NOLINTEND
};
