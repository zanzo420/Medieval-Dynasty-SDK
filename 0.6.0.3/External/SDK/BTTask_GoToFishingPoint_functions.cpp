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

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnFail_534AC69F4C01D29547A32984F8D6CFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToFishingPoint_C::OnFail_534AC69F4C01D29547A32984F8D6CFC7(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnFail_534AC69F4C01D29547A32984F8D6CFC7");

	UBTTask_GoToFishingPoint_C_OnFail_534AC69F4C01D29547A32984F8D6CFC7_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnSuccess_534AC69F4C01D29547A32984F8D6CFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToFishingPoint_C::OnSuccess_534AC69F4C01D29547A32984F8D6CFC7(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnSuccess_534AC69F4C01D29547A32984F8D6CFC7");

	UBTTask_GoToFishingPoint_C_OnSuccess_534AC69F4C01D29547A32984F8D6CFC7_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToFishingPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveExecuteAI");

	UBTTask_GoToFishingPoint_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToFishingPoint_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveAbortAI");

	UBTTask_GoToFishingPoint_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToFishingPoint_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.Finish");

	UBTTask_GoToFishingPoint_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ExecuteUbergraph_BTTask_GoToFishingPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToFishingPoint_C::ExecuteUbergraph_BTTask_GoToFishingPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ExecuteUbergraph_BTTask_GoToFishingPoint");

	UBTTask_GoToFishingPoint_C_ExecuteUbergraph_BTTask_GoToFishingPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GoToFishingPoint_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_GoToFishingPoint_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
