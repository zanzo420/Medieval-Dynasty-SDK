#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InventoryComponent.InventoryComponent_C.CalculatePriceOfMarketSoldItems
struct UInventoryComponent_C_CalculatePriceOfMarketSoldItems_Params
{
	TArray<struct FST_ItemCache>                       SoldItems;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                CoinsForTransaction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateArmorParams
struct UInventoryComponent_C_UpdateArmorParams_Params
{
};

// Function InventoryComponent.InventoryComponent_C.FindToolByActivityInInventory
struct UInventoryComponent_C_FindToolByActivityInInventory_Params
{
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolType_Activity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GetItemWithLowestHP;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Found_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemDetails                             ItemDetails;                                               // (Parm, OutParm, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ItemHP;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails_Horse
struct UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Horse_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemDetails                             ItemDetails;                                               // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot_Horse
struct UInventoryComponent_C_ClearArmorSlot_Horse_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack_Horse
struct UInventoryComponent_C_AssignToArmorSlot_SplitStack_Horse_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus_Horse
struct UInventoryComponent_C_UpdateOldGearStatus_Horse_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats_Horse
struct UInventoryComponent_C_CalculateClothesStats_Horse_Params
{
};

// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem_Horse
struct UInventoryComponent_C_GetCurrentlyEquippedItem_Horse_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInventorys                          Item;                                                      // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.UnequipArmor_Horse
struct UInventoryComponent_C_UnequipArmor_Horse_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveFromInventory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.EquipArmor_Horse
struct UInventoryComponent_C_EquipArmor_Horse_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ColorTable                              DyeVariantOverride;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnAdd
struct UInventoryComponent_C_UpdateWeightOnAdd_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnRemove
struct UInventoryComponent_C_UpdateWeightOnRemove_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.AssignSelectedItemToSelectedQuickslot_New
struct UInventoryComponent_C_AssignSelectedItemToSelectedQuickslot_New_Params
{
	struct FName                                       ItemName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QuickslotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.ConsumeItem
struct UInventoryComponent_C_ConsumeItem_Params
{
	int                                                CountToConsume;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoTransferExhaustedItemToStorage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_VillageManager_C*                        VillageManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ForTransfer
struct UInventoryComponent_C_RemoveItemFromInventory_ForTransfer_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSpawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisplayNotification;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.ClearInventory
struct UInventoryComponent_C_ClearInventory_Params
{
};

// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot
struct UInventoryComponent_C_ClearArmorSlot_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.CheckItemForInteraction
struct UInventoryComponent_C_CheckItemForInteraction_Params
{
	class ABP_MasterHoldableItem_C*                    Holdable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       WantedToolType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.DecreaseItemsCapacity
struct UInventoryComponent_C_DecreaseItemsCapacity_Params
{
	int                                                CapacityToDecrease;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.IsFull
struct UInventoryComponent_C_IsFull_Params
{
	int                                                ItemsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SingleWeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Full;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CountOfItemsThatWillFitIn;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.CalculateItemTradePricePerUnit
struct UInventoryComponent_C_CalculateItemTradePricePerUnit_Params
{
	struct FST_ItemInventorys                          ItemReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayerOwnerOfItem_;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMarketSelling_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.FindAllItemsOfID_InInventory
struct UInventoryComponent_C_FindAllItemsOfID_InInventory_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnCapacityIfPossible;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.RemoveCraftingResourceWithLowestCondition_ByName
struct UInventoryComponent_C_RemoveCraftingResourceWithLowestCondition_ByName_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayNotification;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoTransferExhaustedItemToStorage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_VillageManager_C*                        VillageManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                RemainingCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnedHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemCache>                       RemovedItemsCache;                                         // (Parm, OutParm)
};

// Function InventoryComponent.InventoryComponent_C.AddItemsFromPreset
struct UInventoryComponent_C_AddItemsFromPreset_Params
{
	struct FST_OutfitsPresets                          OutfitPresetRow;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<int>                                        ItemsIndexes;                                              // (Parm, OutParm)
};

// Function InventoryComponent.InventoryComponent_C.EmptyContainer
struct UInventoryComponent_C_EmptyContainer_Params
{
	int                                                CountToEmpty;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.ConditionDropToZero
struct UInventoryComponent_C_ConditionDropToZero_Params
{
	bool                                               Offhand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats
struct UInventoryComponent_C_CalculateClothesStats_Params
{
};

// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemHP
struct UInventoryComponent_C_UpdateEquippedItemHP_Params
{
	float                                              HP;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Offhand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.FreshnessDropToZero
struct UInventoryComponent_C_FreshnessDropToZero_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.DecreaseFreshness
struct UInventoryComponent_C_DecreaseFreshness_Params
{
};

// Function InventoryComponent.InventoryComponent_C.GetEquippedItemIndex
struct UInventoryComponent_C_GetEquippedItemIndex_Params
{
	struct FName                                       ItemName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemCapacity
struct UInventoryComponent_C_UpdateEquippedItemCapacity_Params
{
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.FindAmmoInInventory
struct UInventoryComponent_C_FindAmmoInInventory_Params
{
	TEnumAsByte<E_Ammo_E_Ammo>                         AmmoType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.FindToolInInventory
struct UInventoryComponent_C_FindToolInInventory_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemDetails                             ItemDetails;                                               // (Parm, OutParm, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.RandomizeNPCClothing
struct UInventoryComponent_C_RandomizeNPCClothing_Params
{
	class ABP_BaseCharacter_C*                         NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.CompareItemSubCategory
struct UInventoryComponent_C_CompareItemSubCategory_Params
{
	TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Equal_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               _1Before2_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.CompareItemCategory
struct UInventoryComponent_C_CompareItemCategory_Params
{
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Category1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Category2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Equal_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               _1Before2_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.Sort Inventory by Name
struct UInventoryComponent_C_Sort_Inventory_by_Name_Params
{
};

// Function InventoryComponent.InventoryComponent_C.CompareStrings
struct UInventoryComponent_C_CompareStrings_Params
{
	struct FString                                     String1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     String2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Equal_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               _1Before2_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem
struct UInventoryComponent_C_GetCurrentlyEquippedItem_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInventorys                          Item;                                                      // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemsOnDrop
struct UInventoryComponent_C_UpdateEquippedItemsOnDrop_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.SetIsHoodOn
struct UInventoryComponent_C_SetIsHoodOn_Params
{
	bool                                               IsHoodOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.SetMeshAndUpdateEquippedItems
struct UInventoryComponent_C_SetMeshAndUpdateEquippedItems_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               EquippedMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMeshSlotToUpdate;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.SetMeshDependingOnEquippedItems
struct UInventoryComponent_C_SetMeshDependingOnEquippedItems_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlotToCheck;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               EquippedMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               AlternativeEquippedMesh;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails
struct UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemDetails                             ItemDetails;                                               // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.Init Mesh Ref
struct UInventoryComponent_C_Init_Mesh_Ref_Params
{
	class USkeletalMeshComponent*                      Head;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torso;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Feet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hat_SKM;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hood;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hair;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Backpack;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Pouch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UnequipTorch
struct UInventoryComponent_C_UnequipTorch_Params
{
};

// Function InventoryComponent.InventoryComponent_C.EquipTorch
struct UInventoryComponent_C_EquipTorch_Params
{
};

// Function InventoryComponent.InventoryComponent_C.UnequipArmor
struct UInventoryComponent_C_UnequipArmor_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveFromInventory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.EquipArmor
struct UInventoryComponent_C_EquipArmor_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ColorTable                              DyeVariantOverride;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.UpdateHeadWear
struct UInventoryComponent_C_UpdateHeadWear_Params
{
	bool                                               IsHoodOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus
struct UInventoryComponent_C_UpdateOldGearStatus_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.RecalculateQuickSlotIndexes
struct UInventoryComponent_C_RecalculateQuickSlotIndexes_Params
{
};

// Function InventoryComponent.InventoryComponent_C.AssignToQuickSlot_NoSplit
struct UInventoryComponent_C_AssignToQuickSlot_NoSplit_Params
{
	int                                                QuickslotID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.ClearQuickSlot
struct UInventoryComponent_C_ClearQuickSlot_Params
{
	int                                                QuickslotID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack
struct UInventoryComponent_C_AssignToArmorSlot_SplitStack_Params
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.Assign to Quick Slot Split Stack
struct UInventoryComponent_C_Assign_to_Quick_Slot_Split_Stack_Params
{
	int                                                QuickslotID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ByName
struct UInventoryComponent_C_RemoveItemFromInventory_ByName_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemCache>                       RemovedItems;                                              // (Parm, OutParm)
};

// Function InventoryComponent.InventoryComponent_C.TransferItem
struct UInventoryComponent_C_TransferItem_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent_C*                       TransferDestination;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.FindItemInInventory
struct UInventoryComponent_C_FindItemInInventory_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory
struct UInventoryComponent_C_UpdateTotalWeightOfInventory_Params
{
};

// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory
struct UInventoryComponent_C_RemoveItemFromInventory_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSpawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisplayNotification;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NotificationDelay;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.AddItemToInventory
struct UInventoryComponent_C_AddItemToInventory_Params
{
	struct FName                                       ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PassCondition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHP;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Freshness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayNotification;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CountAsPickUp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NotificationDelay;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedAtIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.InitMeshes
struct UInventoryComponent_C_InitMeshes_Params
{
};

// Function InventoryComponent.InventoryComponent_C.ReceiveBeginPlay
struct UInventoryComponent_C_ReceiveBeginPlay_Params
{
};

// Function InventoryComponent.InventoryComponent_C.ExecuteFoodDecreaseOnSeasonChange
struct UInventoryComponent_C_ExecuteFoodDecreaseOnSeasonChange_Params
{
};

// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
struct UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryComponent.InventoryComponent_C.OnInventoryUpdated__DelegateSignature
struct UInventoryComponent_C_OnInventoryUpdated__DelegateSignature_Params
{
};

// Function InventoryComponent.InventoryComponent_C.OnOffHandItemChange__DelegateSignature
struct UInventoryComponent_C_OnOffHandItemChange__DelegateSignature_Params
{
};

// Function InventoryComponent.InventoryComponent_C.OnWeightChange__DelegateSignature
struct UInventoryComponent_C_OnWeightChange__DelegateSignature_Params
{
};

// Function InventoryComponent.InventoryComponent_C.OnArmorChange__DelegateSignature
struct UInventoryComponent_C_OnArmorChange__DelegateSignature_Params
{
};

// Function InventoryComponent.InventoryComponent_C.OnInventoryChange__DelegateSignature
struct UInventoryComponent_C_OnInventoryChange__DelegateSignature_Params
{
};

// Function InventoryComponent.InventoryComponent_C.OnQuickSlotChange__DelegateSignature
struct UInventoryComponent_C_OnQuickSlotChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
