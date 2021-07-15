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

// Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetBanditsNPCAIState_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ReceiveTickAI");

	UBTService_SetBanditsNPCAIState_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetBanditsNPCAIState_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ReceiveActivationAI");

	UBTService_SetBanditsNPCAIState_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ExecuteUbergraph_BTService_SetBanditsNPCAIState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_SetBanditsNPCAIState_C::ExecuteUbergraph_BTService_SetBanditsNPCAIState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_SetBanditsNPCAIState.BTService_SetBanditsNPCAIState_C.ExecuteUbergraph_BTService_SetBanditsNPCAIState");

	UBTService_SetBanditsNPCAIState_C_ExecuteUbergraph_BTService_SetBanditsNPCAIState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTService_SetBanditsNPCAIState_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(Pawn_Reference, APawn);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(SystemManagerReference, ABP_SystemsManager_C);
}

void UBTService_SetBanditsNPCAIState_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(Pawn_Reference);
	DELE_PTR_FULL(NPCReference);
	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(SystemManagerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
