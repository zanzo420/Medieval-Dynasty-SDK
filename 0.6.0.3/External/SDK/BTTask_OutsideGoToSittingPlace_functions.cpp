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

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnFail_920570BB4868D72A3EF88A98DFAE4DA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToSittingPlace_C::OnFail_920570BB4868D72A3EF88A98DFAE4DA7(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnFail_920570BB4868D72A3EF88A98DFAE4DA7");

	UBTTask_OutsideGoToSittingPlace_C_OnFail_920570BB4868D72A3EF88A98DFAE4DA7_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToSittingPlace_C::OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7");

	UBTTask_OutsideGoToSittingPlace_C_OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToSittingPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveExecuteAI");

	UBTTask_OutsideGoToSittingPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_OutsideGoToSittingPlace_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.Finish");

	UBTTask_OutsideGoToSittingPlace_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToSittingPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveAbortAI");

	UBTTask_OutsideGoToSittingPlace_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ExecuteUbergraph_BTTask_OutsideGoToSittingPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideGoToSittingPlace_C::ExecuteUbergraph_BTTask_OutsideGoToSittingPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ExecuteUbergraph_BTTask_OutsideGoToSittingPlace");

	UBTTask_OutsideGoToSittingPlace_C_ExecuteUbergraph_BTTask_OutsideGoToSittingPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_OutsideGoToSittingPlace_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_OutsideGoToSittingPlace_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
