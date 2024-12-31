#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
// clang-format on

namespace webrtc {

class AudioSender {
public:
    // prevent constructor by default
    AudioSender& operator=(AudioSender const&);
    AudioSender(AudioSender const&);
    AudioSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void SendAudioData(::std::unique_ptr<::webrtc::AudioFrame>) = 0;

    // vIndex: 1
    virtual ~AudioSender() = default;
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

} // namespace webrtc
