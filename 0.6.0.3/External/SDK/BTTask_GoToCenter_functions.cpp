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

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCenter_C::OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0");

	UBTTask_GoToCenter_C_OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCenter_C::OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0");

	UBTTask_GoToCenter_C_OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCenter_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveExecuteAI");

	UBTTask_GoToCenter_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCenter.BTTask_GoToCenter_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToCenter_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.Finish");

	UBTTask_GoToCenter_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCenter_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveAbortAI");

	UBTTask_GoToCenter_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ExecuteUbergraph_BTTask_GoToCenter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToCenter_C::ExecuteUbergraph_BTTask_GoToCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToCenter.BTTask_GoToCenter_C.ExecuteUbergraph_BTTask_GoToCenter");

	UBTTask_GoToCenter_C_ExecuteUbergraph_BTTask_GoToCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GoToCenter_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(AIControllerReference, AAIController);
}

void UBTTask_GoToCenter_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(AIControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
