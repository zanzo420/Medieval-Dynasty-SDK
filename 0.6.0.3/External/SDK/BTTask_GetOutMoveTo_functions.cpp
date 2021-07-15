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

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutMoveTo_C::OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77");

	UBTTask_GetOutMoveTo_C_OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutMoveTo_C::OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77");

	UBTTask_GetOutMoveTo_C_OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutMoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ReceiveExecuteAI");

	UBTTask_GetOutMoveTo_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GetOutMoveTo_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Finish");

	UBTTask_GetOutMoveTo_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Destroy
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GetOutMoveTo_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Destroy");

	UBTTask_GetOutMoveTo_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ExecuteUbergraph_BTTask_GetOutMoveTo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutMoveTo_C::ExecuteUbergraph_BTTask_GetOutMoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ExecuteUbergraph_BTTask_GetOutMoveTo");

	UBTTask_GetOutMoveTo_C_ExecuteUbergraph_BTTask_GetOutMoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GetOutMoveTo_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_GetOutMoveTo_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
