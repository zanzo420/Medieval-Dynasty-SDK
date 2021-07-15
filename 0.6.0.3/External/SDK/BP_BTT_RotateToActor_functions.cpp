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

// Function BP_BTT_RotateToActor.BP_BTT_RotateToActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_RotateToActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_RotateToActor.BP_BTT_RotateToActor_C.ReceiveExecuteAI");

	UBP_BTT_RotateToActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_RotateToActor.BP_BTT_RotateToActor_C.ExecuteUbergraph_BP_BTT_RotateToActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_RotateToActor_C::ExecuteUbergraph_BP_BTT_RotateToActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_RotateToActor.BP_BTT_RotateToActor_C.ExecuteUbergraph_BP_BTT_RotateToActor");

	UBP_BTT_RotateToActor_C_ExecuteUbergraph_BP_BTT_RotateToActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_RotateToActor_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(AnimalController, AAIController);
}

void UBP_BTT_RotateToActor_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
	DELE_PTR_FULL(AnimalController);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
