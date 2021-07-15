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

// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_PauseDoingTask_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ReceiveExecuteAI");

	UBTTask_PauseDoingTask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnWorkComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_PauseDoingTask_C::OnWorkComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnWorkComplete");

	UBTTask_PauseDoingTask_C_OnWorkComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnSleepFinished
// (BlueprintCallable, BlueprintEvent)
void UBTTask_PauseDoingTask_C::OnSleepFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnSleepFinished");

	UBTTask_PauseDoingTask_C_OnSleepFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ExecuteUbergraph_BTTask_PauseDoingTask
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_PauseDoingTask_C::ExecuteUbergraph_BTTask_PauseDoingTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ExecuteUbergraph_BTTask_PauseDoingTask");

	UBTTask_PauseDoingTask_C_ExecuteUbergraph_BTTask_PauseDoingTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_PauseDoingTask_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(NPC_Reference, ABP_NPC_C);
}

void UBTTask_PauseDoingTask_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(NPC_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
