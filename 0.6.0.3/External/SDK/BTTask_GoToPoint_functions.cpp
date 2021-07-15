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

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnFail_4C725ACE474ACC526129799B3233F46E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToPoint_C::OnFail_4C725ACE474ACC526129799B3233F46E(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnFail_4C725ACE474ACC526129799B3233F46E");

	UBTTask_GoToPoint_C_OnFail_4C725ACE474ACC526129799B3233F46E_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnSuccess_4C725ACE474ACC526129799B3233F46E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToPoint_C::OnSuccess_4C725ACE474ACC526129799B3233F46E(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnSuccess_4C725ACE474ACC526129799B3233F46E");

	UBTTask_GoToPoint_C_OnSuccess_4C725ACE474ACC526129799B3233F46E_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveExecuteAI");

	UBTTask_GoToPoint_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.FinishOnIdle
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToPoint_C::FinishOnIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.FinishOnIdle");

	UBTTask_GoToPoint_C_FinishOnIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToPoint_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveAbortAI");

	UBTTask_GoToPoint_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToPoint_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.Finish");

	UBTTask_GoToPoint_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ExecuteUbergraph_BTTask_GoToPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToPoint_C::ExecuteUbergraph_BTTask_GoToPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToPoint.BTTask_GoToPoint_C.ExecuteUbergraph_BTTask_GoToPoint");

	UBTTask_GoToPoint_C_ExecuteUbergraph_BTTask_GoToPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GoToPoint_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_GoToPoint_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
