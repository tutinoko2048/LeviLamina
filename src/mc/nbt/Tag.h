#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class Tag {
public:
    // Tag inner types define
    enum class Type {};

public:
    // prevent constructor by default
    Tag& operator=(Tag const&);
    Tag(Tag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Tag@@UEAA@XZ
    virtual ~Tag();

    // vIndex: 1, symbol: ?deleteChildren@Tag@@UEAAXXZ
    virtual void deleteChildren();

    // vIndex: 2, symbol: ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const = 0;

    // vIndex: 3, symbol: ?load@ByteArrayTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis) = 0;

    // vIndex: 4, symbol: ?toString@ByteArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const = 0;

    // vIndex: 5, symbol: ?getId@ByteArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const = 0;

    // vIndex: 6, symbol: ?equals@Tag@@UEBA_NAEBV1@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 7, symbol: ?print@Tag@@UEBAXAEAVPrintStream@@@Z
    virtual void print(class PrintStream& out) const;

    // vIndex: 8, symbol:
    // ?print@Tag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
    virtual void print(std::string const& prefix, class PrintStream& out) const;

    // vIndex: 9, symbol: ?copy@ByteArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const = 0;

    // vIndex: 10, symbol: ?hash@ByteArrayTag@@UEBA_KXZ
    virtual uint64 hash() const = 0;

    // symbol: ?getTagName@Tag@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
    MCAPI static std::string getTagName(::Tag::Type);

    // symbol:
    // ?newTag@Tag@@SA?AV?$Result@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@Verror_code@2@@Bedrock@@W4Type@1@@Z
    MCAPI static class Bedrock::Result<std::unique_ptr<class Tag>> newTag(::Tag::Type type);

    // symbol: ?NullString@Tag@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NullString;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0Tag@@IEAA@XZ
    MCAPI Tag();

    // NOLINTEND
};
