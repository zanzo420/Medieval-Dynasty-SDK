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

// Function UI_MountEquipment.UI_MountEquipment_C.SetQuickSlotsClickability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MountEquipment_C::SetQuickSlotsClickability(bool Clickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.SetQuickSlotsClickability");

	UUI_MountEquipment_C_SetQuickSlotsClickability_Params params;
	params.Clickable = Clickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.InitCharacterEquipment
// (BlueprintCallable, BlueprintEvent)
void UUI_MountEquipment_C::InitCharacterEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.InitCharacterEquipment");

	UUI_MountEquipment_C_InitCharacterEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.UpdateItemInformation
// (BlueprintCallable, BlueprintEvent)
void UUI_MountEquipment_C::UpdateItemInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.UpdateItemInformation");

	UUI_MountEquipment_C_UpdateItemInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.ExecuteUbergraph_UI_MountEquipment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MountEquipment_C::ExecuteUbergraph_UI_MountEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.ExecuteUbergraph_UI_MountEquipment");

	UUI_MountEquipment_C_ExecuteUbergraph_UI_MountEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
