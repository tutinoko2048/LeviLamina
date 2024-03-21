#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class ByteTag : public ::Tag {
public:
    // prevent constructor by default
    ByteTag& operator=(ByteTag const&);
    ByteTag(ByteTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ByteTag@@UEAA@XZ
    virtual ~ByteTag();

    // vIndex: 2, symbol: ?write@ByteTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@ByteTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@ByteTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ByteTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ByteTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@ByteTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ByteTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0ByteTag@@QEAA@XZ
    MCAPI ByteTag();

    // symbol: ??0ByteTag@@QEAA@E@Z
    MCAPI explicit ByteTag(uchar data);

    // NOLINTEND
};
