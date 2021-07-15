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

// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_WakeUp_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ReceiveExecuteAI");

	UBP_BTT_WakeUp_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.WakeUp
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_WakeUp_C::WakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.WakeUp");

	UBP_BTT_WakeUp_C_WakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.TeleportToStartPoint
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_WakeUp_C::TeleportToStartPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.TeleportToStartPoint");

	UBP_BTT_WakeUp_C_TeleportToStartPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ExecuteUbergraph_BP_BTT_WakeUp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_WakeUp_C::ExecuteUbergraph_BP_BTT_WakeUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ExecuteUbergraph_BP_BTT_WakeUp");

	UBP_BTT_WakeUp_C_ExecuteUbergraph_BP_BTT_WakeUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_WakeUp_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(HomeBase, ABP_AI_POI_Base_C);
}

void UBP_BTT_WakeUp_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
	DELE_PTR_FULL(HomeBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
