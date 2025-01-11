#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Level;
class Player;
struct CommandOriginIdentity;
// clang-format on

class MessagingCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb46796;
    ::ll::UntypedStorage<1, 1> mUnk547485;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagingCommand& operator=(MessagingCommand const&);
    MessagingCommand(MessagingCommand const&);
    MessagingCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessagingCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessagingCommand(bool requireChatPerms, bool requireTellPerms);

    MCAPI bool checkChatPermissions(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void checkAndHandleTextProcessorEvents(
        ::Player const&                                    player,
        ::std::vector<::Safety::TextFilteringEvent> const& events
    );

    MCAPI static void checkAndHandleTextProcessorEvents(
        ::CommandOriginIdentity const&                     identity,
        ::Level const&                                     level,
        ::std::vector<::Safety::TextFilteringEvent> const& events
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool requireChatPerms, bool requireTellPerms);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
