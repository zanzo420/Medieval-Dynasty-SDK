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

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnFail_D254CEB340ECD50BA470C2924CAE3CE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToCampfire_C::OnFail_D254CEB340ECD50BA470C2924CAE3CE5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnFail_D254CEB340ECD50BA470C2924CAE3CE5");

	UBTTask_OutsideGoToCampfire_C_OnFail_D254CEB340ECD50BA470C2924CAE3CE5_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToCampfire_C::OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5");

	UBTTask_OutsideGoToCampfire_C_OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToCampfire_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveExecuteAI");

	UBTTask_OutsideGoToCampfire_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_OutsideGoToCampfire_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.Finish");

	UBTTask_OutsideGoToCampfire_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToCampfire_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveAbortAI");

	UBTTask_OutsideGoToCampfire_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ExecuteUbergraph_BTTask_OutsideGoToCampfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToCampfire_C::ExecuteUbergraph_BTTask_OutsideGoToCampfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ExecuteUbergraph_BTTask_OutsideGoToCampfire");

	UBTTask_OutsideGoToCampfire_C_ExecuteUbergraph_BTTask_OutsideGoToCampfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_OutsideGoToCampfire_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_OutsideGoToCampfire_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
