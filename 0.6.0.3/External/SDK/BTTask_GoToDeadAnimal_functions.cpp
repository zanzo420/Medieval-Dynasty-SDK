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

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnFail_FED22FB747A67F42ECACD38C9CCBEAA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToDeadAnimal_C::OnFail_FED22FB747A67F42ECACD38C9CCBEAA9(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnFail_FED22FB747A67F42ECACD38C9CCBEAA9");

	UBTTask_GoToDeadAnimal_C_OnFail_FED22FB747A67F42ECACD38C9CCBEAA9_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToDeadAnimal_C::OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9");

	UBTTask_GoToDeadAnimal_C_OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToDeadAnimal_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveExecuteAI");

	UBTTask_GoToDeadAnimal_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToDeadAnimal_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveAbortAI");

	UBTTask_GoToDeadAnimal_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToDeadAnimal_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.Finish");

	UBTTask_GoToDeadAnimal_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ExecuteUbergraph_BTTask_GoToDeadAnimal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToDeadAnimal_C::ExecuteUbergraph_BTTask_GoToDeadAnimal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ExecuteUbergraph_BTTask_GoToDeadAnimal");

	UBTTask_GoToDeadAnimal_C_ExecuteUbergraph_BTTask_GoToDeadAnimal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GoToDeadAnimal_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_GoToDeadAnimal_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
