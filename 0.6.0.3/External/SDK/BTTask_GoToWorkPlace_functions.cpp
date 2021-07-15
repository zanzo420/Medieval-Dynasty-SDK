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

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnFail_14C3BD034E1C077E2326BA9A5E72E153
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkPlace_C::OnFail_14C3BD034E1C077E2326BA9A5E72E153(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnFail_14C3BD034E1C077E2326BA9A5E72E153");

	UBTTask_GoToWorkPlace_C_OnFail_14C3BD034E1C077E2326BA9A5E72E153_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnSuccess_14C3BD034E1C077E2326BA9A5E72E153
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkPlace_C::OnSuccess_14C3BD034E1C077E2326BA9A5E72E153(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnSuccess_14C3BD034E1C077E2326BA9A5E72E153");

	UBTTask_GoToWorkPlace_C_OnSuccess_14C3BD034E1C077E2326BA9A5E72E153_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveExecuteAI");

	UBTTask_GoToWorkPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToWorkPlace_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.Finish");

	UBTTask_GoToWorkPlace_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveAbortAI");

	UBTTask_GoToWorkPlace_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ExecuteUbergraph_BTTask_GoToWorkPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToWorkPlace_C::ExecuteUbergraph_BTTask_GoToWorkPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ExecuteUbergraph_BTTask_GoToWorkPlace");

	UBTTask_GoToWorkPlace_C_ExecuteUbergraph_BTTask_GoToWorkPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GoToWorkPlace_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(AIControllerReference, AAIController);
}

void UBTTask_GoToWorkPlace_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(AIControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
