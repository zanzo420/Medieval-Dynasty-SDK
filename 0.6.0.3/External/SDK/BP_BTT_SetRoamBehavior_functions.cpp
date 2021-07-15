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

// Function BP_BTT_SetRoamBehavior.BP_BTT_SetRoamBehavior_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_SetRoamBehavior_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_SetRoamBehavior.BP_BTT_SetRoamBehavior_C.ReceiveExecuteAI");

	UBP_BTT_SetRoamBehavior_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_SetRoamBehavior.BP_BTT_SetRoamBehavior_C.ExecuteUbergraph_BP_BTT_SetRoamBehavior
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_SetRoamBehavior_C::ExecuteUbergraph_BP_BTT_SetRoamBehavior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_SetRoamBehavior.BP_BTT_SetRoamBehavior_C.ExecuteUbergraph_BP_BTT_SetRoamBehavior");

	UBP_BTT_SetRoamBehavior_C_ExecuteUbergraph_BP_BTT_SetRoamBehavior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_SetRoamBehavior_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTT_SetRoamBehavior_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
