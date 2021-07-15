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

// Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Targ                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Cur                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HusbandryRest_C::GetDistanceAndDirection(const struct FVector& Targ, const struct FVector& Cur, float* Distance, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.GetDistanceAndDirection");

	UBP_BTT_HusbandryRest_C_GetDistanceAndDirection_Params params;
	params.Targ = Targ;
	params.Cur = Cur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HusbandryRest_C::GetTargetLocation(const struct FVector& Target, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.GetTargetLocation");

	UBP_BTT_HusbandryRest_C_GetTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HusbandryRest_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.ReceiveExecuteAI");

	UBP_BTT_HusbandryRest_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.ExecuteUbergraph_BP_BTT_HusbandryRest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HusbandryRest_C::ExecuteUbergraph_BP_BTT_HusbandryRest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HusbandryRest.BP_BTT_HusbandryRest_C.ExecuteUbergraph_BP_BTT_HusbandryRest");

	UBP_BTT_HusbandryRest_C_ExecuteUbergraph_BP_BTT_HusbandryRest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_HusbandryRest_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTT_HusbandryRest_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
