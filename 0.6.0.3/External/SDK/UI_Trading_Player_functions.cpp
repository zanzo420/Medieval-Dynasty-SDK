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

// Function UI_Trading_Player.UI_Trading_Player_C.UpdateInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::UpdateInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.UpdateInventory");

	UUI_Trading_Player_C_UpdateInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.UpdateMoneyAndWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::UpdateMoneyAndWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.UpdateMoneyAndWeight");

	UUI_Trading_Player_C_UpdateMoneyAndWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::DecreaseInventoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryIndex");

	UUI_Trading_Player_C_DecreaseInventoryIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::IncreaseInventoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryIndex");

	UUI_Trading_Player_C_IncreaseInventoryIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.ChangeInventoryItemsVisibilityOnCategoryChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResetItemIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Player_C::ChangeInventoryItemsVisibilityOnCategoryChange(TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection, bool ResetItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.ChangeInventoryItemsVisibilityOnCategoryChange");

	UUI_Trading_Player_C_ChangeInventoryItemsVisibilityOnCategoryChange_Params params;
	params.Selection = Selection;
	params.ResetItemIndex = ResetItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.ResetInventoryItemSelection
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::ResetInventoryItemSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.ResetInventoryItemSelection");

	UUI_Trading_Player_C_ResetInventoryItemSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.ChangeSelectedInventoryItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedItem_ID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Player_C::ChangeSelectedInventoryItem(int SelectedItem_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.ChangeSelectedInventoryItem");

	UUI_Trading_Player_C_ChangeSelectedInventoryItem_Params params;
	params.SelectedItem_ID = SelectedItem_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotsUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::MakeInventorySlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotsUnactive");

	UUI_Trading_Player_C_MakeInventorySlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Player_C::MakeInventorySlotActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotActive");

	UUI_Trading_Player_C_MakeInventorySlotActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Player_C::MakeLabelActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelActive");

	UUI_Trading_Player_C_MakeLabelActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelsUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::MakeLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelsUnactive");

	UUI_Trading_Player_C_MakeLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryCategoryID
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::DecreaseInventoryCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryCategoryID");

	UUI_Trading_Player_C_DecreaseInventoryCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryCategoryID
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_Player_C::IncreaseInventoryCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryCategoryID");

	UUI_Trading_Player_C_IncreaseInventoryCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.DestroyItemAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InventoryID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeSelectedInventoryItem    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Player_C::DestroyItemAt(int InventoryID, bool ChangeSelectedInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.DestroyItemAt");

	UUI_Trading_Player_C_DestroyItemAt_Params params;
	params.InventoryID = InventoryID;
	params.ChangeSelectedInventoryItem = ChangeSelectedInventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.AddItemToInventory_HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldCheckIfInInventory       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Player_C::AddItemToInventory_HUD(const struct FName& ItemId, int Count, bool ShouldCheckIfInInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.AddItemToInventory_HUD");

	UUI_Trading_Player_C_AddItemToInventory_HUD_Params params;
	params.ItemId = ItemId;
	params.Count = Count;
	params.ShouldCheckIfInInventory = ShouldCheckIfInInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Trading_C*           UI_Trading_Reference           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GiftGiving                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Player_C::Init(class APC_Player_C* PlayerControllerReference, class UUI_Trading_C* UI_Trading_Reference, bool GiftGiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.Init");

	UUI_Trading_Player_C_Init_Params params;
	params.PlayerControllerReference = PlayerControllerReference;
	params.UI_Trading_Reference = UI_Trading_Reference;
	params.GiftGiving = GiftGiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Player.UI_Trading_Player_C.ExecuteUbergraph_UI_Trading_Player
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Player_C::ExecuteUbergraph_UI_Trading_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Player.UI_Trading_Player_C.ExecuteUbergraph_UI_Trading_Player");

	UUI_Trading_Player_C_ExecuteUbergraph_UI_Trading_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Trading_Player_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_CoinAndWeight, UOverlay);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Image_178, UImage);
	READ_PTR_FULL(InventoryScrollbox, UScrollBox);
	READ_PTR_FULL(InventoryTab, UCanvasPanel);
	READ_PTR_FULL(InventoryVerticalBox, UVerticalBox);
	READ_PTR_FULL(txt_Coins, UTextBlock);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(txt_Weight, UTextBlock);
	READ_PTR_FULL(UI_Inventory_Item_Tooltip_Small, UUI_Inventory_ItemDescription_C);
	READ_PTR_FULL(UI_InventoryDescriptionLabels, UUI_InventoryDescriptionLabels_C);
	READ_PTR_FULL(UI_Trading_Player_ItemCategories, UUI_Trading_Player_ItemCategories_C);
	READ_PTR_FULL(WeightIcon, UImage);
	READ_PTR_FULL(UI_Trading_Reference, UUI_Trading_C);
}

void UUI_Trading_Player_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_CoinAndWeight);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Image_178);
	DELE_PTR_FULL(InventoryScrollbox);
	DELE_PTR_FULL(InventoryTab);
	DELE_PTR_FULL(InventoryVerticalBox);
	DELE_PTR_FULL(txt_Coins);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(txt_Weight);
	DELE_PTR_FULL(UI_Inventory_Item_Tooltip_Small);
	DELE_PTR_FULL(UI_InventoryDescriptionLabels);
	DELE_PTR_FULL(UI_Trading_Player_ItemCategories);
	DELE_PTR_FULL(WeightIcon);
	DELE_PTR_FULL(UI_Trading_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
