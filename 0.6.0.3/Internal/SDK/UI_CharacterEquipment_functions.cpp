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

// Function UI_CharacterEquipment.UI_CharacterEquipment_C.ChangeSelectedQuickslot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedQuickSlotIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterEquipment_C::ChangeSelectedQuickslot(int SelectedQuickSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.ChangeSelectedQuickslot");

	UUI_CharacterEquipment_C_ChangeSelectedQuickslot_Params params;
	params.SelectedQuickSlotIndex = SelectedQuickSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.DecreaseQuickSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::DecreaseQuickSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.DecreaseQuickSlotIndex");

	UUI_CharacterEquipment_C_DecreaseQuickSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.IncreaseQuickSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::IncreaseQuickSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.IncreaseQuickSlotIndex");

	UUI_CharacterEquipment_C_IncreaseQuickSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.SetQuickSlotsClickability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CharacterEquipment_C::SetQuickSlotsClickability(bool Clickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.SetQuickSlotsClickability");

	UUI_CharacterEquipment_C_SetQuickSlotsClickability_Params params;
	params.Clickable = Clickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::MakeQuickSlotActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotActive");

	UUI_CharacterEquipment_C_MakeQuickSlotActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::MakeQuickSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotsUnactive");

	UUI_CharacterEquipment_C_MakeQuickSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.InitCharacterEquipment
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::InitCharacterEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.InitCharacterEquipment");

	UUI_CharacterEquipment_C_InitCharacterEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.UpdateItemInformation
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::UpdateItemInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.UpdateItemInformation");

	UUI_CharacterEquipment_C_UpdateItemInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.ExecuteUbergraph_UI_CharacterEquipment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterEquipment_C::ExecuteUbergraph_UI_CharacterEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.ExecuteUbergraph_UI_CharacterEquipment");

	UUI_CharacterEquipment_C_ExecuteUbergraph_UI_CharacterEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
