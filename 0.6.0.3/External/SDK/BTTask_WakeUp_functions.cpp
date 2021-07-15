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

// Function BTTask_WakeUp.BTTask_WakeUp_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WakeUp_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WakeUp.BTTask_WakeUp_C.ReceiveExecuteAI");

	UBTTask_WakeUp_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WakeUp.BTTask_WakeUp_C.OnSleepFinished
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WakeUp_C::OnSleepFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WakeUp.BTTask_WakeUp_C.OnSleepFinished");

	UBTTask_WakeUp_C_OnSleepFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WakeUp.BTTask_WakeUp_C.ExecuteUbergraph_BTTask_WakeUp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WakeUp_C::ExecuteUbergraph_BTTask_WakeUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WakeUp.BTTask_WakeUp_C.ExecuteUbergraph_BTTask_WakeUp");

	UBTTask_WakeUp_C_ExecuteUbergraph_BTTask_WakeUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_WakeUp_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
}

void UBTTask_WakeUp_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(NPCReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
