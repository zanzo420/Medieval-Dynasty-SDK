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

// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UYoung_Pig_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.AnimGraph");

	UYoung_Pig_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UYoung_Pig_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.UpdateIKState");

	UYoung_Pig_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_CDA88B7A481E8C385842B58BF406CC9E
// (BlueprintEvent)
void UYoung_Pig_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_CDA88B7A481E8C385842B58BF406CC9E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_CDA88B7A481E8C385842B58BF406CC9E");

	UYoung_Pig_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_CDA88B7A481E8C385842B58BF406CC9E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_0C9767E34721DD8D93866F8B382C6BC2
// (BlueprintEvent)
void UYoung_Pig_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_0C9767E34721DD8D93866F8B382C6BC2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_0C9767E34721DD8D93866F8B382C6BC2");

	UYoung_Pig_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Young_Pig_AnimBP_AnimGraphNode_TransitionResult_0C9767E34721DD8D93866F8B382C6BC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UYoung_Pig_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.BlueprintUpdateAnimation");

	UYoung_Pig_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UYoung_Pig_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.BlueprintBeginPlay");

	UYoung_Pig_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.ExecuteUbergraph_Young_Pig_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UYoung_Pig_AnimBP_C::ExecuteUbergraph_Young_Pig_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Young_Pig_AnimBP.Young_Pig_AnimBP_C.ExecuteUbergraph_Young_Pig_AnimBP");

	UYoung_Pig_AnimBP_C_ExecuteUbergraph_Young_Pig_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UYoung_Pig_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Young_Pig, ABP_HusbandryAI_C);
}

void UYoung_Pig_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Young_Pig);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
