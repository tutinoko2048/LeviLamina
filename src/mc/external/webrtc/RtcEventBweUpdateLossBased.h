#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventBweUpdateLossBased {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventBweUpdateLossBased(int, uchar, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, uchar, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
