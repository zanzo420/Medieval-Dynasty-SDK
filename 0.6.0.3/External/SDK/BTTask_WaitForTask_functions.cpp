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

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitForTask_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveExecuteAI");

	UBTTask_WaitForTask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitForTask_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveAbortAI");

	UBTTask_WaitForTask_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitForTask.BTTask_WaitForTask_C.CheckWork
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WaitForTask_C::CheckWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitForTask.BTTask_WaitForTask_C.CheckWork");

	UBTTask_WaitForTask_C_CheckWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ChangeActivity
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WaitForTask_C::ChangeActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitForTask.BTTask_WaitForTask_C.ChangeActivity");

	UBTTask_WaitForTask_C_ChangeActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ExecuteUbergraph_BTTask_WaitForTask
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitForTask_C::ExecuteUbergraph_BTTask_WaitForTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitForTask.BTTask_WaitForTask_C.ExecuteUbergraph_BTTask_WaitForTask");

	UBTTask_WaitForTask_C_ExecuteUbergraph_BTTask_WaitForTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_WaitForTask_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_WaitForTask_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
