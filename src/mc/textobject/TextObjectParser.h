#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class Scoreboard;
class TextObjectRoot;
namespace Json { class Value; }
// clang-format on

class TextObjectParser {
public:
    // TextObjectParser inner types declare
    // clang-format off
    struct ErrorLocalization;
    struct ServerData;
    // clang-format on

    // TextObjectParser inner types define
    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk65f186;
        ::ll::UntypedStorage<8, 8> mUnk50aa87;
        ::ll::UntypedStorage<8, 8> mUnk9a53de;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ServerData(
            ::CommandRegistry::Parser& parser,
            ::CommandOrigin const&     commandOrigin,
            ::Scoreboard const&        scoreboard
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::CommandRegistry::Parser& parser, ::CommandOrigin const& commandOrigin, ::Scoreboard const& scoreboard);
        // NOLINTEND
    };

    struct ErrorLocalization {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk890d87;
        ::ll::UntypedStorage<8, 24> mUnk3f4353;
        // NOLINTEND

    public:
        // prevent constructor by default
        ErrorLocalization& operator=(ErrorLocalization const&);
        ErrorLocalization(ErrorLocalization const&);
        ErrorLocalization();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ErrorLocalization();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _getObjectsFromTextObject(
        ::Json::Value const&                   root,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _parseScoreTextObject(
        ::TextObjectRoot&                      parentTextObject,
        ::Json::Value const&                   scoreObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _parseSelectorTextObject(
        ::TextObjectRoot&                      parentTextObject,
        ::std::string                          selectorString,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _textObjectFromJson(
        ::Json::Value const&                   root,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool _textObjectFromString(
        ::std::string const&                   jsonAsString,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool
    textObjectFromJson(::Json::Value const& root, ::TextObjectRoot& parsedObject, ::std::string& errorMsg);

    MCAPI static bool textObjectFromJsonServer(
        ::Json::Value const&                   root,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData         serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
    );

    MCAPI static bool textObjectFromJsonString(
        ::std::string const& jsonAsString,
        ::TextObjectRoot&    parsedObject,
        ::std::string&       errorMsg
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& RAW_TEXT_ERROR_NOT_ARRAY();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_NOT_OBJECT();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_NO_DATA();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_PARSE_FAILED();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_NOT_OBJECT();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_SELECTOR_NOT_STRING();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_TEXT_NOT_STRING();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_TRANSLATE_NOT_STRING();

    MCAPI static ::std::string const& RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT();
    // NOLINTEND
};
