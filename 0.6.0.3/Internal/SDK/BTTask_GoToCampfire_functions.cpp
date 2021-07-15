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

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnFail_BB73AEC34DB57581E2A02EA2338F2A10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCampfire_C::OnFail_BB73AEC34DB57581E2A02EA2338F2A10(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnFail_BB73AEC34DB57581E2A02EA2338F2A10");

	UBTTask_GoToCampfire_C_OnFail_BB73AEC34DB57581E2A02EA2338F2A10_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCampfire_C::OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10");

	UBTTask_GoToCampfire_C_OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCampfire_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveExecuteAI");

	UBTTask_GoToCampfire_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToCampfire_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.Finish");

	UBTTask_GoToCampfire_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCampfire_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveAbortAI");

	UBTTask_GoToCampfire_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ExecuteUbergraph_BTTask_GoToCampfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCampfire_C::ExecuteUbergraph_BTTask_GoToCampfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ExecuteUbergraph_BTTask_GoToCampfire");

	UBTTask_GoToCampfire_C_ExecuteUbergraph_BTTask_GoToCampfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
