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

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceFood                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DirectionFood                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::GetDistanceAndDirection(const struct FVector& Target, const struct FVector& Current, float* DistanceFood, struct FVector* DirectionFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetDistanceAndDirection");

	UBP_BTT_GoToFood_C_GetDistanceAndDirection_Params params;
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


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::GetTargetLocation(const struct FVector& Target, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetTargetLocation");

	UBP_BTT_GoToFood_C_GetTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_482D2B094814E224F05E8A999DCCA269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::OnFail_482D2B094814E224F05E8A999DCCA269(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_482D2B094814E224F05E8A999DCCA269");

	UBP_BTT_GoToFood_C_OnFail_482D2B094814E224F05E8A999DCCA269_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_482D2B094814E224F05E8A999DCCA269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::OnSuccess_482D2B094814E224F05E8A999DCCA269(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_482D2B094814E224F05E8A999DCCA269");

	UBP_BTT_GoToFood_C_OnSuccess_482D2B094814E224F05E8A999DCCA269_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_2EB0B4A542BB0DB9510D2B9F31954744
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::OnFail_2EB0B4A542BB0DB9510D2B9F31954744(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_2EB0B4A542BB0DB9510D2B9F31954744");

	UBP_BTT_GoToFood_C_OnFail_2EB0B4A542BB0DB9510D2B9F31954744_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744");

	UBP_BTT_GoToFood_C_OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ReceiveExecuteAI");

	UBP_BTT_GoToFood_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ExecuteUbergraph_BP_BTT_GoToFood
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToFood_C::ExecuteUbergraph_BP_BTT_GoToFood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ExecuteUbergraph_BP_BTT_GoToFood");

	UBP_BTT_GoToFood_C_ExecuteUbergraph_BP_BTT_GoToFood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
