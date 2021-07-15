﻿// Name: Medieval Dynasty, Version: 0.6.0.3

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

// Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMoneyAndWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::UpdateMoneyAndWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMoneyAndWeight");

	UUI_Trading_Storage_C_UpdateMoneyAndWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeSelectedMagazineItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_ItemID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Storage_C::ChangeSelectedMagazineItem(int Selected_ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeSelectedMagazineItem");

	UUI_Trading_Storage_C_ChangeSelectedMagazineItem_Params params;
	params.Selected_ItemID = Selected_ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Storage_C::MakeMagazineSlotActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotActive");

	UUI_Trading_Storage_C_MakeMagazineSlotActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::MakeMagazineSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotsUnactive");

	UUI_Trading_Storage_C_MakeMagazineSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMagazineTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::UpdateMagazineTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMagazineTab");

	UUI_Trading_Storage_C_UpdateMagazineTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::IncreaseMagazineCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineCategoryID");

	UUI_Trading_Storage_C_IncreaseMagazineCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::DecreaseMagazineCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineCategoryID");

	UUI_Trading_Storage_C_DecreaseMagazineCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Storage_C::MakeMagazineLabelActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelActive");

	UUI_Trading_Storage_C_MakeMagazineLabelActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::MakeMagazineLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelsUnactive");

	UUI_Trading_Storage_C_MakeMagazineLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeMagazineItemsVisibilityOnCategoryChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResetIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_Storage_C::ChangeMagazineItemsVisibilityOnCategoryChange(TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection, bool ResetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeMagazineItemsVisibilityOnCategoryChange");

	UUI_Trading_Storage_C_ChangeMagazineItemsVisibilityOnCategoryChange_Params params;
	params.Selection = Selection;
	params.ResetIndex = ResetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::DecreaseMagazineIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineIndex");

	UUI_Trading_Storage_C_DecreaseMagazineIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_Storage_C::IncreaseMagazineIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineIndex");

	UUI_Trading_Storage_C_IncreaseMagazineIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Trading_C*           UI_Trading_Reference           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Storage_C::Init(class APC_Player_C* PlayerControllerReference, class UUI_Trading_C* UI_Trading_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.Init");

	UUI_Trading_Storage_C_Init_Params params;
	params.PlayerControllerReference = PlayerControllerReference;
	params.UI_Trading_Reference = UI_Trading_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading_Storage.UI_Trading_Storage_C.ExecuteUbergraph_UI_Trading_Storage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_Storage_C::ExecuteUbergraph_UI_Trading_Storage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading_Storage.UI_Trading_Storage_C.ExecuteUbergraph_UI_Trading_Storage");

	UUI_Trading_Storage_C_ExecuteUbergraph_UI_Trading_Storage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
