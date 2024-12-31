#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NtpTime; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class Clock {
public:
    // prevent constructor by default
    Clock& operator=(Clock const&);
    Clock(Clock const&);
    Clock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Clock() = default;

    // vIndex: 1
    virtual ::webrtc::Timestamp CurrentTime() = 0;

    // vIndex: 2
    virtual ::webrtc::NtpTime ConvertTimestampToNtpTime(::webrtc::Timestamp) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int64 TimeInMilliseconds();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::Clock* GetRealTimeClock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
