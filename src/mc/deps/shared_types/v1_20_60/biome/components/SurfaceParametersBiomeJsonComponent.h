#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

namespace SharedTypes::v1_20_60 {

struct SurfaceParametersBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfb2702;
    ::ll::UntypedStorage<8, 96> mUnkdc3706;
    ::ll::UntypedStorage<8, 96> mUnk1a525c;
    ::ll::UntypedStorage<8, 96> mUnkf48658;
    ::ll::UntypedStorage<8, 96> mUnk7047b1;
    ::ll::UntypedStorage<8, 96> mUnkf69032;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceParametersBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SurfaceParametersBiomeJsonComponent();

    MCAPI SurfaceParametersBiomeJsonComponent(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);

    MCFOLD ::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&&);

    MCFOLD ::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
