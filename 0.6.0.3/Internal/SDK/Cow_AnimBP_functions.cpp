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

// Function Cow_AnimBP.Cow_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UCow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.AnimGraph");

	UCow_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Cow_AnimBP.Cow_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UCow_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.UpdateIKState");

	UCow_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_3ECB966F4C97798DD0AFB58FE1A7469C
// (BlueprintEvent)
void UCow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_3ECB966F4C97798DD0AFB58FE1A7469C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_3ECB966F4C97798DD0AFB58FE1A7469C");

	UCow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_3ECB966F4C97798DD0AFB58FE1A7469C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_29E2DD3449E4A4489A5AA18F1A11A0C9
// (BlueprintEvent)
void UCow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_29E2DD3449E4A4489A5AA18F1A11A0C9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_29E2DD3449E4A4489A5AA18F1A11A0C9");

	UCow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_29E2DD3449E4A4489A5AA18F1A11A0C9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_20FB8510446A2F75CE324EAC28AEC6F6
// (BlueprintEvent)
void UCow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_20FB8510446A2F75CE324EAC28AEC6F6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_20FB8510446A2F75CE324EAC28AEC6F6");

	UCow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_20FB8510446A2F75CE324EAC28AEC6F6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_C8837F854B1E767238F06095D76848B6
// (BlueprintEvent)
void UCow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_C8837F854B1E767238F06095D76848B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_C8837F854B1E767238F06095D76848B6");

	UCow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Cow_AnimBP_AnimGraphNode_TransitionResult_C8837F854B1E767238F06095D76848B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCow_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.BlueprintUpdateAnimation");

	UCow_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UCow_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.BlueprintBeginPlay");

	UCow_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cow_AnimBP.Cow_AnimBP_C.ExecuteUbergraph_Cow_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCow_AnimBP_C::ExecuteUbergraph_Cow_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cow_AnimBP.Cow_AnimBP_C.ExecuteUbergraph_Cow_AnimBP");

	UCow_AnimBP_C_ExecuteUbergraph_Cow_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
