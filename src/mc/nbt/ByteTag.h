#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class ByteTag : public ::Tag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> data;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void write(::IDataOutput& dos) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    // vIndex: 5
    virtual ::Tag::Type getId() const /*override*/;

    // vIndex: 4
    virtual ::std::string toString() const /*override*/;

    // vIndex: 6
    virtual bool equals(::Tag const& rhs) const /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    // vIndex: 10
    virtual uint64 hash() const /*override*/;

    // vIndex: 0
    virtual ~ByteTag() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ByteTag();

    MCAPI explicit ByteTag(uchar data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(uchar data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
