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

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnFail_F0DE4E6643F18890478429B2CDF0A5F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkSlot_C::OnFail_F0DE4E6643F18890478429B2CDF0A5F2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnFail_F0DE4E6643F18890478429B2CDF0A5F2");

	UBTTask_GoToWorkSlot_C_OnFail_F0DE4E6643F18890478429B2CDF0A5F2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkSlot_C::OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2");

	UBTTask_GoToWorkSlot_C_OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkSlot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveExecuteAI");

	UBTTask_GoToWorkSlot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToWorkSlot_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.Finish");

	UBTTask_GoToWorkSlot_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkSlot_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveAbortAI");

	UBTTask_GoToWorkSlot_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ExecuteUbergraph_BTTask_GoToWorkSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkSlot_C::ExecuteUbergraph_BTTask_GoToWorkSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ExecuteUbergraph_BTTask_GoToWorkSlot");

	UBTTask_GoToWorkSlot_C_ExecuteUbergraph_BTTask_GoToWorkSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
