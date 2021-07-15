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

// Function BP_BTS_SetMountAIState.BP_BTS_SetMountAIState_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetMountAIState_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetMountAIState.BP_BTS_SetMountAIState_C.ReceiveActivationAI");

	UBP_BTS_SetMountAIState_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_SetMountAIState.BP_BTS_SetMountAIState_C.ExecuteUbergraph_BP_BTS_SetMountAIState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_SetMountAIState_C::ExecuteUbergraph_BP_BTS_SetMountAIState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_SetMountAIState.BP_BTS_SetMountAIState_C.ExecuteUbergraph_BP_BTS_SetMountAIState");

	UBP_BTS_SetMountAIState_C_ExecuteUbergraph_BP_BTS_SetMountAIState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTS_SetMountAIState_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(GroundAnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTS_SetMountAIState_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(GroundAnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
