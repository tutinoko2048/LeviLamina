#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ClockInterface {
public:
    // prevent constructor by default
    ClockInterface& operator=(ClockInterface const&);
    ClockInterface(ClockInterface const&);
    ClockInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClockInterface() = default;

    // vIndex: 1
    virtual int64 TimeNanos() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
