#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Puv {

class Input {
public:
    // Input inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // Input inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk489f9a;
        ::ll::UntypedStorage<8, 8> mUnk9320ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::std::string const& toBinary() const;

        MCFOLD ::cereal::DynamicValue const& toDynamicValue() const;

        MCFOLD ::Json::Value const& toJsonCpp() const;

        MCFOLD ::std::string const& toJsonString() const;

        MCFOLD ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
            toRapidjson() const;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Input() = default;

    // vIndex: 1
    virtual ::SemVersion version() const = 0;

    // vIndex: 2
    virtual ::Puv::Input::Data data() const = 0;
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

} // namespace Puv
