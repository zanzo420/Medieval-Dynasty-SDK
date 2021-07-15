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

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceFood                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DirectionFood                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::GetDistanceAndDirection(const struct FVector& Target, const struct FVector& Current, float* DistanceFood, struct FVector* DirectionFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetDistanceAndDirection");

	UBP_BTT_LookForFood_C_GetDistanceAndDirection_Params params;
	params.Target = Target;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DistanceFood != nullptr)
		*DistanceFood = params.DistanceFood;
	if (DirectionFood != nullptr)
		*DirectionFood = params.DirectionFood;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::GetTargetLocation(const struct FVector& Target, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetTargetLocation");

	UBP_BTT_LookForFood_C_GetTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_9EE022AA43A22A1841354FBA7BDD2DB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::OnFail_9EE022AA43A22A1841354FBA7BDD2DB1(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_9EE022AA43A22A1841354FBA7BDD2DB1");

	UBP_BTT_LookForFood_C_OnFail_9EE022AA43A22A1841354FBA7BDD2DB1_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1");

	UBP_BTT_LookForFood_C_OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2");

	UBP_BTT_LookForFood_C_OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2");

	UBP_BTT_LookForFood_C_OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.EventPlayEatAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_LookForFood_C::EventPlayEatAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.EventPlayEatAnimation");

	UBP_BTT_LookForFood_C_EventPlayEatAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ReceiveExecuteAI");

	UBP_BTT_LookForFood_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ExecuteUbergraph_BP_BTT_LookForFood
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_C::ExecuteUbergraph_BP_BTT_LookForFood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ExecuteUbergraph_BP_BTT_LookForFood");

	UBP_BTT_LookForFood_C_ExecuteUbergraph_BP_BTT_LookForFood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_LookForFood_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(NeedSystem, UBP_Comp_NeedSystem_C);
}

void UBP_BTT_LookForFood_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
	DELE_PTR_FULL(NeedSystem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
