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

// Function UI_Interaction.UI_Interaction_C.ChangeCrosshairStateInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Interaction_C::ChangeCrosshairStateInteraction(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.ChangeCrosshairStateInteraction");

	UUI_Interaction_C_ChangeCrosshairStateInteraction_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.UpdateHUDInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Interaction_C::UpdateHUDInteraction(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.UpdateHUDInteraction");

	UUI_Interaction_C_UpdateHUDInteraction_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Interaction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.Construct");

	UUI_Interaction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.Start Interact UI Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interact_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Interaction_C::Start_Interact_UI_Timer(float Interact_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.Start Interact UI Timer");

	UUI_Interaction_C_Start_Interact_UI_Timer_Params params;
	params.Interact_Time = Interact_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.End Interact UI Timer
// (BlueprintCallable, BlueprintEvent)
void UUI_Interaction_C::End_Interact_UI_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.End Interact UI Timer");

	UUI_Interaction_C_End_Interact_UI_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.UpdateInteractionFill
// (BlueprintCallable, BlueprintEvent)
void UUI_Interaction_C::UpdateInteractionFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.UpdateInteractionFill");

	UUI_Interaction_C_UpdateInteractionFill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Interaction_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.ChangeSteeringType_Event_1");

	UUI_Interaction_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.OpenGate
// (BlueprintCallable, BlueprintEvent)
void UUI_Interaction_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.OpenGate");

	UUI_Interaction_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UUI_Interaction_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.CustomEvent_1");

	UUI_Interaction_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Interaction.UI_Interaction_C.ExecuteUbergraph_UI_Interaction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Interaction_C::ExecuteUbergraph_UI_Interaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Interaction.UI_Interaction_C.ExecuteUbergraph_UI_Interaction");

	UUI_Interaction_C_ExecuteUbergraph_UI_Interaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
