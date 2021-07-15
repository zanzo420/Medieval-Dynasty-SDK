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

// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUDTutorial_Master_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.Construct");

	UUI_HUDTutorial_Master_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDTutorial_Master_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ChangeSteeringType_Event_1");

	UUI_HUDTutorial_Master_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ExecuteUbergraph_UI_HUDTutorial_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDTutorial_Master_C::ExecuteUbergraph_UI_HUDTutorial_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ExecuteUbergraph_UI_HUDTutorial_Master");

	UUI_HUDTutorial_Master_C_ExecuteUbergraph_UI_HUDTutorial_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
