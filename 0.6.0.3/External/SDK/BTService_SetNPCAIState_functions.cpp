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

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckSleepStatus
// (Public, BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::CheckSleepStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckSleepStatus");

	UBTService_SetNPCAIState_C_CheckSleepStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetNPCAIState_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveTickAI");

	UBTService_SetNPCAIState_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetNPCAIState_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveActivationAI");

	UBTService_SetNPCAIState_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Night_SleepAfterSitting
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::Night_SleepAfterSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Night_SleepAfterSitting");

	UBTService_SetNPCAIState_C_Night_SleepAfterSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Evening_SleepAfterSitting
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::Evening_SleepAfterSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Evening_SleepAfterSitting");

	UBTService_SetNPCAIState_C_Evening_SleepAfterSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.EveningLife_AfterSitting
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::EveningLife_AfterSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.EveningLife_AfterSitting");

	UBTService_SetNPCAIState_C_EveningLife_AfterSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckProfession
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::CheckProfession()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckProfession");

	UBTService_SetNPCAIState_C_CheckProfession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ResetGates
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::ResetGates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ResetGates");

	UBTService_SetNPCAIState_C_ResetGates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckMoveStatus
// (BlueprintCallable, BlueprintEvent)
void UBTService_SetNPCAIState_C::CheckMoveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckMoveStatus");

	UBTService_SetNPCAIState_C_CheckMoveStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ExecuteUbergraph_BTService_SetNPCAIState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetNPCAIState_C::ExecuteUbergraph_BTService_SetNPCAIState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ExecuteUbergraph_BTService_SetNPCAIState");

	UBTService_SetNPCAIState_C_ExecuteUbergraph_BTService_SetNPCAIState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTService_SetNPCAIState_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(Pawn_Reference, APawn);
	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(SystemManagerReference, ABP_SystemsManager_C);
}

void UBTService_SetNPCAIState_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(Pawn_Reference);
	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(SystemManagerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
