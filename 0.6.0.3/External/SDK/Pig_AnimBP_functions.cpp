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

// Function Pig_AnimBP.Pig_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UPig_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.AnimGraph");

	UPig_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Pig_AnimBP.Pig_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UPig_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.UpdateIKState");

	UPig_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pig_AnimBP.Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_F3628DDE4378C6268E5049AD3B716884
// (BlueprintEvent)
void UPig_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_F3628DDE4378C6268E5049AD3B716884()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_F3628DDE4378C6268E5049AD3B716884");

	UPig_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_F3628DDE4378C6268E5049AD3B716884_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pig_AnimBP.Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_B7680F0044E33CE49DBD989379C22D88
// (BlueprintEvent)
void UPig_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_B7680F0044E33CE49DBD989379C22D88()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_B7680F0044E33CE49DBD989379C22D88");

	UPig_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Pig_AnimBP_AnimGraphNode_TransitionResult_B7680F0044E33CE49DBD989379C22D88_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pig_AnimBP.Pig_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPig_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.BlueprintUpdateAnimation");

	UPig_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pig_AnimBP.Pig_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UPig_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.BlueprintBeginPlay");

	UPig_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pig_AnimBP.Pig_AnimBP_C.ExecuteUbergraph_Pig_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPig_AnimBP_C::ExecuteUbergraph_Pig_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pig_AnimBP.Pig_AnimBP_C.ExecuteUbergraph_Pig_AnimBP");

	UPig_AnimBP_C_ExecuteUbergraph_Pig_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPig_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Pig, ABP_HusbandryAI_C);
}

void UPig_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Pig);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
