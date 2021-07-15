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

// Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.OnFail_233296EE442B38CE0D789FA98E25AB41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToEngageActor_C::OnFail_233296EE442B38CE0D789FA98E25AB41(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.OnFail_233296EE442B38CE0D789FA98E25AB41");

	UBP_BTT_GoToEngageActor_C_OnFail_233296EE442B38CE0D789FA98E25AB41_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.OnSuccess_233296EE442B38CE0D789FA98E25AB41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToEngageActor_C::OnSuccess_233296EE442B38CE0D789FA98E25AB41(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.OnSuccess_233296EE442B38CE0D789FA98E25AB41");

	UBP_BTT_GoToEngageActor_C_OnSuccess_233296EE442B38CE0D789FA98E25AB41_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToEngageActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ReceiveExecuteAI");

	UBP_BTT_GoToEngageActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToEngageActor_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ReceiveTickAI");

	UBP_BTT_GoToEngageActor_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ExecuteUbergraph_BP_BTT_GoToEngageActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToEngageActor_C::ExecuteUbergraph_BP_BTT_GoToEngageActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C.ExecuteUbergraph_BP_BTT_GoToEngageActor");

	UBP_BTT_GoToEngageActor_C_ExecuteUbergraph_BP_BTT_GoToEngageActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_GoToEngageActor_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTT_GoToEngageActor_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
