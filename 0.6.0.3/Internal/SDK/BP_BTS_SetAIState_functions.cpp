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

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.On Time Of Day Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetAIState_C::On_Time_Of_Day_Changed(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.On Time Of Day Changed");

	UBP_BTS_SetAIState_C_On_Time_Of_Day_Changed_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnInactiveResting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::fnInactiveResting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnInactiveResting");

	UBP_BTS_SetAIState_C_fnInactiveResting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::fnCheckMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckMovement");

	UBP_BTS_SetAIState_C_fnCheckMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnEnableComponents
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::fnEnableComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnEnableComponents");

	UBP_BTS_SetAIState_C_fnEnableComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckPlayerDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::fnCheckPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckPlayerDistance");

	UBP_BTS_SetAIState_C_fnCheckPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnDetermineAIState
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::fnDetermineAIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnDetermineAIState");

	UBP_BTS_SetAIState_C_fnDetermineAIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckPlayerDistance
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::EventCheckPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckPlayerDistance");

	UBP_BTS_SetAIState_C_EventCheckPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckMovement
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::EventCheckMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckMovement");

	UBP_BTS_SetAIState_C_EventCheckMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetAIState_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveActivationAI");

	UBP_BTS_SetAIState_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEatDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::ResetEatDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEatDoOnce");

	UBP_BTS_SetAIState_C_ResetEatDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetDrinkDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::ResetDrinkDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetDrinkDoOnce");

	UBP_BTS_SetAIState_C_ResetDrinkDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEngageAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::ResetEngageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEngageAnim");

	UBP_BTS_SetAIState_C_ResetEngageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopEngageAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::StopEngageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopEngageAnim");

	UBP_BTS_SetAIState_C_StopEngageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::StopAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopAnim");

	UBP_BTS_SetAIState_C_StopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventSetNewCollision
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::EventSetNewCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventSetNewCollision");

	UBP_BTS_SetAIState_C_EventSetNewCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetAIState_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveTickAI");

	UBP_BTS_SetAIState_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventDisengage
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetAIState_C::EventDisengage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventDisengage");

	UBP_BTS_SetAIState_C_EventDisengage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ExecuteUbergraph_BP_BTS_SetAIState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetAIState_C::ExecuteUbergraph_BP_BTS_SetAIState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ExecuteUbergraph_BP_BTS_SetAIState");

	UBP_BTS_SetAIState_C_ExecuteUbergraph_BP_BTS_SetAIState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
