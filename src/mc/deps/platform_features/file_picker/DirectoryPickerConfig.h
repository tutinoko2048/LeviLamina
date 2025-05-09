#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DirectoryPickerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk640996;
    ::ll::UntypedStorage<8, 16> mUnk81d26e;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPickerConfig& operator=(DirectoryPickerConfig const&);
    DirectoryPickerConfig(DirectoryPickerConfig const&);
    DirectoryPickerConfig();
};

} // namespace Bedrock
