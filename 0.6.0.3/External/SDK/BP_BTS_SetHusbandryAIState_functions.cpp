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

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.OnTimeOfDayChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetHusbandryAIState_C::OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.OnTimeOfDayChanged");

	UBP_BTS_SetHusbandryAIState_C_OnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.fnDetermineAIState
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::fnDetermineAIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.fnDetermineAIState");

	UBP_BTS_SetHusbandryAIState_C_fnDetermineAIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetHusbandryAIState_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveTickAI");

	UBP_BTS_SetHusbandryAIState_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetHusbandryAIState_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveActivationAI");

	UBP_BTS_SetHusbandryAIState_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEatDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::ResetEatDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEatDoOnce");

	UBP_BTS_SetHusbandryAIState_C_ResetEatDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetDrinkDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::ResetDrinkDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetDrinkDoOnce");

	UBP_BTS_SetHusbandryAIState_C_ResetDrinkDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEngageAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::ResetEngageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEngageAnim");

	UBP_BTS_SetHusbandryAIState_C_ResetEngageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopEngageAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::StopEngageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopEngageAnim");

	UBP_BTS_SetHusbandryAIState_C_StopEngageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopAnim
// (BlueprintCallable, BlueprintEvent)
void UBP_BTS_SetHusbandryAIState_C::StopAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopAnim");

	UBP_BTS_SetHusbandryAIState_C_StopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ExecuteUbergraph_BP_BTS_SetHusbandryAIState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetHusbandryAIState_C::ExecuteUbergraph_BP_BTS_SetHusbandryAIState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ExecuteUbergraph_BP_BTS_SetHusbandryAIState");

	UBP_BTS_SetHusbandryAIState_C_ExecuteUbergraph_BP_BTS_SetHusbandryAIState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTS_SetHusbandryAIState_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(GroundAnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTS_SetHusbandryAIState_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(GroundAnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
