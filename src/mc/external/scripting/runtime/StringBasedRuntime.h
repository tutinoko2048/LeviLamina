#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/IRuntime.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringBasedRuntime : public ::Scripting::IRuntime {
public:
    // prevent constructor by default
    StringBasedRuntime& operator=(StringBasedRuntime const&);
    StringBasedRuntime(StringBasedRuntime const&);
    StringBasedRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;

    // vIndex: 22
    virtual ::Scripting::ResultAny
    runString(::Scripting::ContextId, ::std::string const&, ::std::string const&, ::std::optional<::Scripting::Privilege>) = 0;

    // vIndex: 0
    virtual ~StringBasedRuntime() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::ResultAny $run(
        ::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege
    );
    // NOLINTEND
};

} // namespace Scripting
