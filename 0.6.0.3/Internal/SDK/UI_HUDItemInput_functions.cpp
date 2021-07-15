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

// Function UI_HUDItemInput.UI_HUDItemInput_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUDItemInput_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDItemInput.UI_HUDItemInput_C.Construct");

	UUI_HUDItemInput_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDItemInput.UI_HUDItemInput_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItemInput_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDItemInput.UI_HUDItemInput_C.ChangeSteeringType_Event_1");

	UUI_HUDItemInput_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDItemInput.UI_HUDItemInput_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UUI_HUDItemInput_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDItemInput.UI_HUDItemInput_C.CustomEvent_1");

	UUI_HUDItemInput_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDItemInput.UI_HUDItemInput_C.ExecuteUbergraph_UI_HUDItemInput
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItemInput_C::ExecuteUbergraph_UI_HUDItemInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDItemInput.UI_HUDItemInput_C.ExecuteUbergraph_UI_HUDItemInput");

	UUI_HUDItemInput_C_ExecuteUbergraph_UI_HUDItemInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
