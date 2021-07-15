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

// Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMoneyAndWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::UpdateMoneyAndWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMoneyAndWeight");

	UUI_Trading_Trader_C_UpdateMoneyAndWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeSelectedMagazineItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_ItemID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Trader_C::ChangeSelectedMagazineItem(int Selected_ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeSelectedMagazineItem");

	UUI_Trading_Trader_C_ChangeSelectedMagazineItem_Params params;
	params.Selected_ItemID = Selected_ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Trader_C::MakeMagazineSlotActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotActive");

	UUI_Trading_Trader_C_MakeMagazineSlotActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::MakeMagazineSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotsUnactive");

	UUI_Trading_Trader_C_MakeMagazineSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMagazineTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::UpdateMagazineTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMagazineTab");

	UUI_Trading_Trader_C_UpdateMagazineTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::IncreaseMagazineCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineCategoryID");

	UUI_Trading_Trader_C_IncreaseMagazineCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::DecreaseMagazineCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineCategoryID");

	UUI_Trading_Trader_C_DecreaseMagazineCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Trader_C::MakeMagazineLabelActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelActive");

	UUI_Trading_Trader_C_MakeMagazineLabelActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::MakeMagazineLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelsUnactive");

	UUI_Trading_Trader_C_MakeMagazineLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeMagazineItemsVisibilityOnCategoryChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResetIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Trader_C::ChangeMagazineItemsVisibilityOnCategoryChange(TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection, bool ResetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeMagazineItemsVisibilityOnCategoryChange");

	UUI_Trading_Trader_C_ChangeMagazineItemsVisibilityOnCategoryChange_Params params;
	params.Selection = Selection;
	params.ResetIndex = ResetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::DecreaseMagazineIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineIndex");

	UUI_Trading_Trader_C_DecreaseMagazineIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Trader_C::IncreaseMagazineIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineIndex");

	UUI_Trading_Trader_C_IncreaseMagazineIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Trading_C*           UI_Trading_Reference           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GiftGiving                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Trader_C::Init(class APC_Player_C* PlayerControllerReference, class UUI_Trading_C* UI_Trading_Reference, bool GiftGiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.Init");

	UUI_Trading_Trader_C_Init_Params params;
	params.PlayerControllerReference = PlayerControllerReference;
	params.UI_Trading_Reference = UI_Trading_Reference;
	params.GiftGiving = GiftGiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Trader.UI_Trading_Trader_C.ExecuteUbergraph_UI_Trading_Trader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Trader_C::ExecuteUbergraph_UI_Trading_Trader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Trader.UI_Trading_Trader_C.ExecuteUbergraph_UI_Trading_Trader");

	UUI_Trading_Trader_C_ExecuteUbergraph_UI_Trading_Trader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Trading_Trader_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Image_178, UImage);
	READ_PTR_FULL(Image_377, UImage);
	READ_PTR_FULL(MagazineItemScrollBox, UScrollBox);
	READ_PTR_FULL(MagazineTab, UCanvasPanel);
	READ_PTR_FULL(txt_ActualWeight, UTextBlock);
	READ_PTR_FULL(txt_Coins, UTextBlock);
	READ_PTR_FULL(txt_MaxWeight, UTextBlock);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(UI_Inventory_Item_Tooltip_Small, UUI_Inventory_ItemDescription_C);
	READ_PTR_FULL(UI_InventoryDescriptionLabels_C_4, UUI_InventoryDescriptionLabels_C);
	READ_PTR_FULL(UI_Trading_Trader_ItemCategories, UUI_Trading_Trader_ItemCategories_C);
	READ_PTR_FULL(UI_Trading_Reference, UUI_Trading_C);
}

void UUI_Trading_Trader_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Image_178);
	DELE_PTR_FULL(Image_377);
	DELE_PTR_FULL(MagazineItemScrollBox);
	DELE_PTR_FULL(MagazineTab);
	DELE_PTR_FULL(txt_ActualWeight);
	DELE_PTR_FULL(txt_Coins);
	DELE_PTR_FULL(txt_MaxWeight);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(UI_Inventory_Item_Tooltip_Small);
	DELE_PTR_FULL(UI_InventoryDescriptionLabels_C_4);
	DELE_PTR_FULL(UI_Trading_Trader_ItemCategories);
	DELE_PTR_FULL(UI_Trading_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
