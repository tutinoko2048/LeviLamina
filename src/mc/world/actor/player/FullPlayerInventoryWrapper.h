#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class FullPlayerInventoryWrapper {
public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0FullPlayerInventoryWrapper@@QEAA@AEAVPlayerInventory@@AEAVSimpleContainer@@1PEAVInventoryTransactionManager@@PEAVPlayer@@@Z
    MCAPI FullPlayerInventoryWrapper(
        class PlayerInventory&             playerInventory,
        class SimpleContainer&             armorInventory,
        class SimpleContainer&             handInventory,
        class InventoryTransactionManager* playerTransationManager,
        class Player*                      player
    );

    // symbol: ?clearAllItems@FullPlayerInventoryWrapper@@QEAAHXZ
    MCAPI int clearAllItems();

    // symbol: ?getItemCount@FullPlayerInventoryWrapper@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool(class ItemStack const&)>);

    // symbol:
    // ?removeResource@FullPlayerInventoryWrapper@@QEAAHAEBVItemStack@@V?$function@$$A6A_NAEBVItemStack@@@Z@std@@_NH@Z
    MCAPI int removeResource(class ItemStack const&, std::function<bool(class ItemStack const&)>, bool, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_clearSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@H@Z
    MCAPI int _clearSimpleContainerItem(class SimpleContainer& container, enum ContainerID containerId, int slot);

    // symbol:
    // ?_getSimpleContainerItemCount@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@HV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer&, int, std::function<bool(class ItemStack const&)>);

    // symbol: ?_removeCursorItem@FullPlayerInventoryWrapper@@AEAAHAEBVItemStack@@_NH@Z
    MCAPI int _removeCursorItem(class ItemStack const& item, bool requireExactAux, int maxCount);

    // symbol:
    // ?_removeSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@HAEBVItemStack@@_NH@Z
    MCAPI int _removeSimpleContainerItem(
        class SimpleContainer& container,
        enum ContainerID       containerId,
        int                    slot,
        class ItemStack const& sourceItem,
        bool                   requireExactAux,
        int                    maxCount
    );

    // symbol: ?_sendCursorSlotPacket@FullPlayerInventoryWrapper@@AEBAXXZ
    MCAPI void _sendCursorSlotPacket() const;

    // NOLINTEND
};
