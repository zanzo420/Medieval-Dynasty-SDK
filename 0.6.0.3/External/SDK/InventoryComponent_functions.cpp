// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function InventoryComponent.InventoryComponent_C.CalculatePriceOfMarketSoldItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ItemCache>   SoldItems                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            CoinsForTransaction            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::CalculatePriceOfMarketSoldItems(TArray<struct FST_ItemCache>* SoldItems, int* CoinsForTransaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculatePriceOfMarketSoldItems");

	UInventoryComponent_C_CalculatePriceOfMarketSoldItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoldItems != nullptr)
		*SoldItems = params.SoldItems;
	if (CoinsForTransaction != nullptr)
		*CoinsForTransaction = params.CoinsForTransaction;

}


// Function InventoryComponent.InventoryComponent_C.UpdateArmorParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::UpdateArmorParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateArmorParams");

	UInventoryComponent_C_UpdateArmorParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.FindToolByActivityInInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolType_Activity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GetItemWithLowestHP            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemDetails         ItemDetails                    (Parm, OutParm, HasGetValueTypeHash)
// struct FName                   ItemName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ItemHP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::FindToolByActivityInInventory(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* Found_, int* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int* ArrayIndex, float* ItemHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindToolByActivityInInventory");

	UInventoryComponent_C_FindToolByActivityInInventory_Params params;
	params.ToolType_Activity = ToolType_Activity;
	params.GetItemWithLowestHP = GetItemWithLowestHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
	if (ItemHP != nullptr)
		*ItemHP = params.ItemHP;

}


// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails_Horse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemDetails         ItemDetails                    (Parm, OutParm, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::GetCurrentlyEquippedItemDetails_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails_Horse");

	UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot_Horse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ClearArmorSlot_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearArmorSlot_Horse");

	UInventoryComponent_C_ClearArmorSlot_Horse_Params params;
	params.ArmorSlot = ArmorSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack_Horse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::AssignToArmorSlot_SplitStack_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack_Horse");

	UInventoryComponent_C_AssignToArmorSlot_SplitStack_Horse_Params params;
	params.ArmorSlot = ArmorSlot;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus_Horse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateOldGearStatus_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus_Horse");

	UInventoryComponent_C_UpdateOldGearStatus_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats_Horse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::CalculateClothesStats_Horse()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateClothesStats_Horse");

	UInventoryComponent_C_CalculateClothesStats_Horse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem_Horse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInventorys      Item                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::GetCurrentlyEquippedItem_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem_Horse");

	UInventoryComponent_C_GetCurrentlyEquippedItem_Horse_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function InventoryComponent.InventoryComponent_C.UnequipArmor_Horse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveFromInventory            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::UnequipArmor_Horse(struct FST_ItemInventorys* Item, bool RemoveFromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipArmor_Horse");

	UInventoryComponent_C_UnequipArmor_Horse_Params params;
	params.RemoveFromInventory = RemoveFromInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function InventoryComponent.InventoryComponent_C.EquipArmor_Horse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ColorTable          DyeVariantOverride             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UInventoryComponent_C::EquipArmor_Horse(struct FST_ItemInventorys* Item, const struct FST_ColorTable& DyeVariantOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipArmor_Horse");

	UInventoryComponent_C_EquipArmor_Horse_Params params;
	params.DyeVariantOverride = DyeVariantOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnAdd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateWeightOnAdd(const struct FName& ItemName, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateWeightOnAdd");

	UInventoryComponent_C_UpdateWeightOnAdd_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UpdateWeightOnRemove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateWeightOnRemove(const struct FName& ItemName, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateWeightOnRemove");

	UInventoryComponent_C_UpdateWeightOnRemove_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.AssignSelectedItemToSelectedQuickslot_New
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            QuickslotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::AssignSelectedItemToSelectedQuickslot_New(const struct FName& ItemName, int ArrayIndex, int QuickslotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignSelectedItemToSelectedQuickslot_New");

	UInventoryComponent_C_AssignSelectedItemToSelectedQuickslot_New_Params params;
	params.ItemName = ItemName;
	params.ArrayIndex = ArrayIndex;
	params.QuickslotIndex = QuickslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ConsumeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountToConsume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AutoTransferExhaustedItemToStorage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VillageManager_C*    VillageManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ConsumeItem(int CountToConsume, const struct FName& ItemName, int ArrayID, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ConsumeItem");

	UInventoryComponent_C_ConsumeItem_Params params;
	params.CountToConsume = CountToConsume;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;
	params.AutoTransferExhaustedItemToStorage = AutoTransferExhaustedItemToStorage;
	params.VillageManagerReference = VillageManagerReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ForTransfer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldSpawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DisplayNotification            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::RemoveItemFromInventory_ForTransfer(int Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int ArrayID, const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ForTransfer");

	UInventoryComponent_C_RemoveItemFromInventory_ForTransfer_Params params;
	params.Count = Count;
	params.ShouldSpawn = ShouldSpawn;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.ArrayID = ArrayID;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ClearInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::ClearInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearInventory");

	UInventoryComponent_C_ClearInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ClearArmorSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ClearArmorSlot(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearArmorSlot");

	UInventoryComponent_C_ClearArmorSlot_Params params;
	params.ArmorSlot = ArmorSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.CheckItemForInteraction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Holdable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   WantedToolType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedToolType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CheckItemForInteraction");

	UInventoryComponent_C_CheckItemForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedToolType = WantedToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function InventoryComponent.InventoryComponent_C.DecreaseItemsCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CapacityToDecrease             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::DecreaseItemsCapacity(int CapacityToDecrease, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseItemsCapacity");

	UInventoryComponent_C_DecreaseItemsCapacity_Params params;
	params.CapacityToDecrease = CapacityToDecrease;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.IsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SingleWeight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CountOfItemsThatWillFitIn      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::IsFull(int ItemsCount, float SingleWeight, bool* Full, int* CountOfItemsThatWillFitIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.IsFull");

	UInventoryComponent_C_IsFull_Params params;
	params.ItemsCount = ItemsCount;
	params.SingleWeight = SingleWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
	if (CountOfItemsThatWillFitIn != nullptr)
		*CountOfItemsThatWillFitIn = params.CountOfItemsThatWillFitIn;

}


// Function InventoryComponent.InventoryComponent_C.CalculateItemTradePricePerUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_ItemInventorys      ItemReference                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPlayerOwnerOfItem_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMarketSelling_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::CalculateItemTradePricePerUnit(const struct FST_ItemInventorys& ItemReference, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, float* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateItemTradePricePerUnit");

	UInventoryComponent_C_CalculateItemTradePricePerUnit_Params params;
	params.ItemReference = ItemReference;
	params.IsPlayerOwnerOfItem_ = IsPlayerOwnerOfItem_;
	params.IsMarketSelling_ = IsMarketSelling_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function InventoryComponent.InventoryComponent_C.FindAllItemsOfID_InInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnCapacityIfPossible       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::FindAllItemsOfID_InInventory(const struct FName& ItemName, bool ReturnCapacityIfPossible, bool* Found, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindAllItemsOfID_InInventory");

	UInventoryComponent_C_FindAllItemsOfID_InInventory_Params params;
	params.ItemName = ItemName;
	params.ReturnCapacityIfPossible = ReturnCapacityIfPossible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function InventoryComponent.InventoryComponent_C.RemoveCraftingResourceWithLowestCondition_ByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisplayNotification            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AutoTransferExhaustedItemToStorage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VillageManager_C*    VillageManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            RemainingCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnedHP                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemCache>   RemovedItemsCache              (Parm, OutParm)
void UInventoryComponent_C::RemoveCraftingResourceWithLowestCondition_ByName(const struct FName& ItemName, int Count, bool DisplayNotification, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool* Success, int* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveCraftingResourceWithLowestCondition_ByName");

	UInventoryComponent_C_RemoveCraftingResourceWithLowestCondition_ByName_Params params;
	params.ItemName = ItemName;
	params.Count = Count;
	params.DisplayNotification = DisplayNotification;
	params.AutoTransferExhaustedItemToStorage = AutoTransferExhaustedItemToStorage;
	params.VillageManagerReference = VillageManagerReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (RemainingCount != nullptr)
		*RemainingCount = params.RemainingCount;
	if (ReturnedHP != nullptr)
		*ReturnedHP = params.ReturnedHP;
	if (RemovedItemsCache != nullptr)
		*RemovedItemsCache = params.RemovedItemsCache;

}


// Function InventoryComponent.InventoryComponent_C.AddItemsFromPreset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_OutfitsPresets      OutfitPresetRow                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<int>                    ItemsIndexes                   (Parm, OutParm)
void UInventoryComponent_C::AddItemsFromPreset(const struct FST_OutfitsPresets& OutfitPresetRow, TArray<int>* ItemsIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItemsFromPreset");

	UInventoryComponent_C_AddItemsFromPreset_Params params;
	params.OutfitPresetRow = OutfitPresetRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemsIndexes != nullptr)
		*ItemsIndexes = params.ItemsIndexes;

}


// Function InventoryComponent.InventoryComponent_C.EmptyContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountToEmpty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::EmptyContainer(int CountToEmpty, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EmptyContainer");

	UInventoryComponent_C_EmptyContainer_Params params;
	params.CountToEmpty = CountToEmpty;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ConditionDropToZero
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Offhand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ConditionDropToZero(bool Offhand, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ConditionDropToZero");

	UInventoryComponent_C_ConditionDropToZero_Params params;
	params.Offhand = Offhand;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.CalculateClothesStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::CalculateClothesStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CalculateClothesStats");

	UInventoryComponent_C_CalculateClothesStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Offhand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::UpdateEquippedItemHP(float HP, bool Offhand)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemHP");

	UInventoryComponent_C_UpdateEquippedItemHP_Params params;
	params.HP = HP;
	params.Offhand = Offhand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.FreshnessDropToZero
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::FreshnessDropToZero(const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FreshnessDropToZero");

	UInventoryComponent_C_FreshnessDropToZero_Params params;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.DecreaseFreshness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::DecreaseFreshness()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DecreaseFreshness");

	UInventoryComponent_C_DecreaseFreshness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.GetEquippedItemIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::GetEquippedItemIndex(struct FName* ItemName, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetEquippedItemIndex");

	UInventoryComponent_C_GetEquippedItemIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;

}


// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateEquippedItemCapacity(int Capacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemCapacity");

	UInventoryComponent_C_UpdateEquippedItemCapacity_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.FindAmmoInInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ammo_E_Ammo>     AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::FindAmmoInInventory(TEnumAsByte<E_Ammo_E_Ammo> AmmoType, bool* Found_, int* Count, struct FName* ItemName, int* ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindAmmoInInventory");

	UInventoryComponent_C_FindAmmoInInventory_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayID != nullptr)
		*ArrayID = params.ArrayID;

}


// Function InventoryComponent.InventoryComponent_C.FindToolInInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemDetails         ItemDetails                    (Parm, OutParm, HasGetValueTypeHash)
// struct FName                   ItemName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::FindToolInInventory(TEnumAsByte<E_Tools_E_Tools> ToolType, bool* Found_, int* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindToolInInventory");

	UInventoryComponent_C_FindToolInInventory_Params params;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Count != nullptr)
		*Count = params.Count;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;

}


// Function InventoryComponent.InventoryComponent_C.RandomizeNPCClothing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::RandomizeNPCClothing(class ABP_BaseCharacter_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RandomizeNPCClothing");

	UInventoryComponent_C_RandomizeNPCClothing_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.CompareItemSubCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Equal_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           _1Before2_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::CompareItemSubCategory(TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category1, TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category2, bool* Equal_, bool* _1Before2_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CompareItemSubCategory");

	UInventoryComponent_C_CompareItemSubCategory_Params params;
	params.Category1 = Category1;
	params.Category2 = Category2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equal_ != nullptr)
		*Equal_ = params.Equal_;
	if (_1Before2_ != nullptr)
		*_1Before2_ = params._1Before2_;

}


// Function InventoryComponent.InventoryComponent_C.CompareItemCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Category1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Category2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Equal_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           _1Before2_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::CompareItemCategory(TEnumAsByte<E_ItemCategories_E_ItemCategories> Category1, TEnumAsByte<E_ItemCategories_E_ItemCategories> Category2, bool* Equal_, bool* _1Before2_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CompareItemCategory");

	UInventoryComponent_C_CompareItemCategory_Params params;
	params.Category1 = Category1;
	params.Category2 = Category2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equal_ != nullptr)
		*Equal_ = params.Equal_;
	if (_1Before2_ != nullptr)
		*_1Before2_ = params._1Before2_;

}


// Function InventoryComponent.InventoryComponent_C.Sort Inventory by Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::Sort_Inventory_by_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Sort Inventory by Name");

	UInventoryComponent_C_Sort_Inventory_by_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.CompareStrings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 String2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Equal_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           _1Before2_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::CompareStrings(const struct FString& String1, const struct FString& String2, bool* Equal_, bool* _1Before2_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CompareStrings");

	UInventoryComponent_C_CompareStrings_Params params;
	params.String1 = String1;
	params.String2 = String2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equal_ != nullptr)
		*Equal_ = params.Equal_;
	if (_1Before2_ != nullptr)
		*_1Before2_ = params._1Before2_;

}


// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInventorys      Item                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::GetCurrentlyEquippedItem(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItem");

	UInventoryComponent_C_GetCurrentlyEquippedItem_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemsOnDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateEquippedItemsOnDrop(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, int Count, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateEquippedItemsOnDrop");

	UInventoryComponent_C_UpdateEquippedItemsOnDrop_Params params;
	params.EquipmentSlot = EquipmentSlot;
	params.Count = Count;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.SetIsHoodOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHoodOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::SetIsHoodOn(bool IsHoodOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetIsHoodOn");

	UInventoryComponent_C_SetIsHoodOn_Params params;
	params.IsHoodOn = IsHoodOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.SetMeshAndUpdateEquippedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           EquippedMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  SkeletalMeshSlotToUpdate       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::SetMeshAndUpdateEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, class USkeletalMesh* EquippedMesh, TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, class USkeletalMeshComponent* SkeletalMeshSlotToUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetMeshAndUpdateEquippedItems");

	UInventoryComponent_C_SetMeshAndUpdateEquippedItems_Params params;
	params.SkeletalMeshSlot = SkeletalMeshSlot;
	params.EquippedMesh = EquippedMesh;
	params.EquipmentSlot = EquipmentSlot;
	params.SkeletalMeshSlotToUpdate = SkeletalMeshSlotToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.SetMeshDependingOnEquippedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlotToCheck           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           EquippedMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           AlternativeEquippedMesh        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::SetMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlotToCheck, class USkeletalMesh* EquippedMesh, class USkeletalMesh* AlternativeEquippedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetMeshDependingOnEquippedItems");

	UInventoryComponent_C_SetMeshDependingOnEquippedItems_Params params;
	params.SkeletalMeshSlot = SkeletalMeshSlot;
	params.EquipmentSlotToCheck = EquipmentSlotToCheck;
	params.EquippedMesh = EquippedMesh;
	params.AlternativeEquippedMesh = AlternativeEquippedMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemDetails         ItemDetails                    (Parm, OutParm, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::GetCurrentlyEquippedItemDetails(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetCurrentlyEquippedItemDetails");

	UInventoryComponent_C_GetCurrentlyEquippedItemDetails_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function InventoryComponent.InventoryComponent_C.Init Mesh Ref
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Torso                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Hands                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Legs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Feet                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Hat_SKM                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Hood                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Backpack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Pouch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::Init_Mesh_Ref(class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Torso, class USkeletalMeshComponent* Hands, class USkeletalMeshComponent* Legs, class USkeletalMeshComponent* Feet, class USkeletalMeshComponent* Hat_SKM, class USkeletalMeshComponent* Hood, class USkeletalMeshComponent* Hair, class USkeletalMeshComponent* Backpack, class USkeletalMeshComponent* Pouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Init Mesh Ref");

	UInventoryComponent_C_Init_Mesh_Ref_Params params;
	params.Head = Head;
	params.Torso = Torso;
	params.Hands = Hands;
	params.Legs = Legs;
	params.Feet = Feet;
	params.Hat_SKM = Hat_SKM;
	params.Hood = Hood;
	params.Hair = Hair;
	params.Backpack = Backpack;
	params.Pouch = Pouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UnequipTorch
// (Public, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::UnequipTorch()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipTorch");

	UInventoryComponent_C_UnequipTorch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.EquipTorch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::EquipTorch()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipTorch");

	UInventoryComponent_C_EquipTorch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UnequipArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveFromInventory            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::UnequipArmor(struct FST_ItemInventorys* Item, bool RemoveFromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnequipArmor");

	UInventoryComponent_C_UnequipArmor_Params params;
	params.RemoveFromInventory = RemoveFromInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function InventoryComponent.InventoryComponent_C.EquipArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ColorTable          DyeVariantOverride             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UInventoryComponent_C::EquipArmor(struct FST_ItemInventorys* Item, const struct FST_ColorTable& DyeVariantOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.EquipArmor");

	UInventoryComponent_C_EquipArmor_Params params;
	params.DyeVariantOverride = DyeVariantOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function InventoryComponent.InventoryComponent_C.UpdateHeadWear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHoodOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::UpdateHeadWear(bool IsHoodOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateHeadWear");

	UInventoryComponent_C_UpdateHeadWear_Params params;
	params.IsHoodOn = IsHoodOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::UpdateOldGearStatus(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateOldGearStatus");

	UInventoryComponent_C_UpdateOldGearStatus_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.RecalculateQuickSlotIndexes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::RecalculateQuickSlotIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RecalculateQuickSlotIndexes");

	UInventoryComponent_C_RecalculateQuickSlotIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.AssignToQuickSlot_NoSplit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickslotID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::AssignToQuickSlot_NoSplit(int QuickslotID, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToQuickSlot_NoSplit");

	UInventoryComponent_C_AssignToQuickSlot_NoSplit_Params params;
	params.QuickslotID = QuickslotID;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ClearQuickSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickslotID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ClearQuickSlot(int QuickslotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ClearQuickSlot");

	UInventoryComponent_C_ClearQuickSlot_Params params;
	params.QuickslotID = QuickslotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::AssignToArmorSlot_SplitStack(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AssignToArmorSlot_SplitStack");

	UInventoryComponent_C_AssignToArmorSlot_SplitStack_Params params;
	params.ArmorSlot = ArmorSlot;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.Assign to Quick Slot Split Stack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickslotID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::Assign_to_Quick_Slot_Split_Stack(int QuickslotID, const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Assign to Quick Slot Split Stack");

	UInventoryComponent_C_Assign_to_Quick_Slot_Split_Stack_Params params;
	params.QuickslotID = QuickslotID;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CountLeft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemCache>   RemovedItems                   (Parm, OutParm)
void UInventoryComponent_C::RemoveItemFromInventory_ByName(const struct FName& ItemName, int Count, int* CountLeft, TArray<struct FST_ItemCache>* RemovedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory_ByName");

	UInventoryComponent_C_RemoveItemFromInventory_ByName_Params params;
	params.ItemName = ItemName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountLeft != nullptr)
		*CountLeft = params.CountLeft;
	if (RemovedItems != nullptr)
		*RemovedItems = params.RemovedItems;

}


// Function InventoryComponent.InventoryComponent_C.TransferItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*   TransferDestination            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::TransferItem(int Count, class UInventoryComponent_C* TransferDestination, const struct FName& ItemName, int ArrayID, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.TransferItem");

	UInventoryComponent_C_TransferItem_Params params;
	params.Count = Count;
	params.TransferDestination = TransferDestination;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function InventoryComponent.InventoryComponent_C.FindItemInInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInventoryComponent_C::FindItemInInventory(const struct FName& ItemName, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.FindItemInInventory");

	UInventoryComponent_C_FindItemInInventory_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;

}


// Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::UpdateTotalWeightOfInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateTotalWeightOfInventory");

	UInventoryComponent_C_UpdateTotalWeightOfInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldSpawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DisplayNotification            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NotificationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::RemoveItemFromInventory(int Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int ArrayID, const struct FName& ItemName, float NotificationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemFromInventory");

	UInventoryComponent_C_RemoveItemFromInventory_Params params;
	params.Count = Count;
	params.ShouldSpawn = ShouldSpawn;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.ArrayID = ArrayID;
	params.ItemName = ItemName;
	params.NotificationDelay = NotificationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.AddItemToInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PassCondition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Freshness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisplayNotification            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CountAsPickUp                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          NotificationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedAtIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::AddItemToInventory(const struct FName& ItemId, int Count, bool PassCondition, float CurrentHP, float MaxHP, int Capacity, float Freshness, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int* AddedAtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItemToInventory");

	UInventoryComponent_C_AddItemToInventory_Params params;
	params.ItemId = ItemId;
	params.Count = Count;
	params.PassCondition = PassCondition;
	params.CurrentHP = CurrentHP;
	params.MaxHP = MaxHP;
	params.Capacity = Capacity;
	params.Freshness = Freshness;
	params.Ownership = Ownership;
	params.DisplayNotification = DisplayNotification;
	params.UpdateInventory = UpdateInventory;
	params.CountAsPickUp = CountAsPickUp;
	params.NotificationDelay = NotificationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AddedAtIndex != nullptr)
		*AddedAtIndex = params.AddedAtIndex;

}


// Function InventoryComponent.InventoryComponent_C.InitMeshes
// (BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::InitMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.InitMeshes");

	UInventoryComponent_C_InitMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UInventoryComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ReceiveBeginPlay");

	UInventoryComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ExecuteFoodDecreaseOnSeasonChange
// (BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::ExecuteFoodDecreaseOnSeasonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteFoodDecreaseOnSeasonChange");

	UInventoryComponent_C_ExecuteFoodDecreaseOnSeasonChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInventoryComponent_C::ExecuteUbergraph_InventoryComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent");

	UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnInventoryUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnInventoryUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnInventoryUpdated__DelegateSignature");

	UInventoryComponent_C_OnInventoryUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnOffHandItemChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnOffHandItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnOffHandItemChange__DelegateSignature");

	UInventoryComponent_C_OnOffHandItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnWeightChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnWeightChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnWeightChange__DelegateSignature");

	UInventoryComponent_C_OnWeightChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnArmorChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnArmorChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnArmorChange__DelegateSignature");

	UInventoryComponent_C_OnArmorChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnInventoryChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnInventoryChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnInventoryChange__DelegateSignature");

	UInventoryComponent_C_OnInventoryChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryComponent.InventoryComponent_C.OnQuickSlotChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInventoryComponent_C::OnQuickSlotChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.OnQuickSlotChange__DelegateSignature");

	UInventoryComponent_C_OnQuickSlotChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInventoryComponent_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(OwningCharacterReference, ABP_BaseCharacter_C);
	READ_PTR_FULL(DefaultAnimClass, UClass);
	READ_PTR_FULL(HeadRef, USkeletalMeshComponent);
	READ_PTR_FULL(TorsoRef, USkeletalMeshComponent);
	READ_PTR_FULL(HandsRef, USkeletalMeshComponent);
	READ_PTR_FULL(LegsRef, USkeletalMeshComponent);
	READ_PTR_FULL(FeetRef, USkeletalMeshComponent);
	READ_PTR_FULL(HatSMRef, UStaticMeshComponent);
	READ_PTR_FULL(HatSKMRef, USkeletalMeshComponent);
	READ_PTR_FULL(HoodRef, USkeletalMeshComponent);
	READ_PTR_FULL(HairRef, USkeletalMeshComponent);
	READ_PTR_FULL(BackpackRef, USkeletalMeshComponent);
	READ_PTR_FULL(PouchRef, USkeletalMeshComponent);
	READ_PTR_FULL(GameModeReference, AGM_MedievalDynasty_C);
	READ_PTR_FULL(VillageManagerReference, ABP_VillageManager_C);
	READ_PTR_FULL(ChestFurnitureReference, ABP_MasterFurniture_C);
}

void UInventoryComponent_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(OwningCharacterReference);
	DELE_PTR_FULL(DefaultAnimClass);
	DELE_PTR_FULL(HeadRef);
	DELE_PTR_FULL(TorsoRef);
	DELE_PTR_FULL(HandsRef);
	DELE_PTR_FULL(LegsRef);
	DELE_PTR_FULL(FeetRef);
	DELE_PTR_FULL(HatSMRef);
	DELE_PTR_FULL(HatSKMRef);
	DELE_PTR_FULL(HoodRef);
	DELE_PTR_FULL(HairRef);
	DELE_PTR_FULL(BackpackRef);
	DELE_PTR_FULL(PouchRef);
	DELE_PTR_FULL(GameModeReference);
	DELE_PTR_FULL(VillageManagerReference);
	DELE_PTR_FULL(ChestFurnitureReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
