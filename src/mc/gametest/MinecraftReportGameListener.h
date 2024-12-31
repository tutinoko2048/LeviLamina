#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftReportGameListener : public ::gametest::IGameTestListener,
                                    public ::std::enable_shared_from_this<::MinecraftReportGameListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80c891;
    ::ll::UntypedStorage<8, 8> mUnk479f87;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftReportGameListener() /*override*/ = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    // vIndex: 2
    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    // vIndex: 3
    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _generateErrorDescription(::gametest::GameTestError const& error) const;

    MCAPI void _reportFailure(::gametest::GameTestError const& error, ::BlockSource& region);

    MCAPI void _say(::std::string const& chatColor, ::std::string const& text);

    MCAPI void _spawnBeacon(::Block const& glassType);

    MCAPI void _spawnLectern(::std::string const& text);

    MCAPI void _visualizeFailedTest(::gametest::GameTestError const& error, ::BlockSource&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);

    MCAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);

    MCAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
