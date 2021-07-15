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

// Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.OnFail_91CA5EB0432B0806BA1A22AFF7BEC705
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_Roam_RandomLocationNavMesh_C::OnFail_91CA5EB0432B0806BA1A22AFF7BEC705(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.OnFail_91CA5EB0432B0806BA1A22AFF7BEC705");

	UBP_BTT_Roam_RandomLocationNavMesh_C_OnFail_91CA5EB0432B0806BA1A22AFF7BEC705_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.OnSuccess_91CA5EB0432B0806BA1A22AFF7BEC705
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_Roam_RandomLocationNavMesh_C::OnSuccess_91CA5EB0432B0806BA1A22AFF7BEC705(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.OnSuccess_91CA5EB0432B0806BA1A22AFF7BEC705");

	UBP_BTT_Roam_RandomLocationNavMesh_C_OnSuccess_91CA5EB0432B0806BA1A22AFF7BEC705_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_Roam_RandomLocationNavMesh_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.ReceiveExecuteAI");

	UBP_BTT_Roam_RandomLocationNavMesh_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.ExecuteUbergraph_BP_BTT_Roam_RandomLocationNavMesh
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_Roam_RandomLocationNavMesh_C::ExecuteUbergraph_BP_BTT_Roam_RandomLocationNavMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C.ExecuteUbergraph_BP_BTT_Roam_RandomLocationNavMesh");

	UBP_BTT_Roam_RandomLocationNavMesh_C_ExecuteUbergraph_BP_BTT_Roam_RandomLocationNavMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_Roam_RandomLocationNavMesh_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTT_Roam_RandomLocationNavMesh_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
