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

// Function Fox_anim_bp.Fox_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UFox_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fox_anim_bp.Fox_anim_bp_C.AnimGraph");

	UFox_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Fox_anim_bp.Fox_anim_bp_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UFox_anim_bp_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fox_anim_bp.Fox_anim_bp_C.UpdateIKState");

	UFox_anim_bp_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fox_anim_bp.Fox_anim_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFox_anim_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fox_anim_bp.Fox_anim_bp_C.BlueprintUpdateAnimation");

	UFox_anim_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fox_anim_bp.Fox_anim_bp_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UFox_anim_bp_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fox_anim_bp.Fox_anim_bp_C.BlueprintBeginPlay");

	UFox_anim_bp_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fox_anim_bp.Fox_anim_bp_C.ExecuteUbergraph_Fox_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFox_anim_bp_C::ExecuteUbergraph_Fox_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fox_anim_bp.Fox_anim_bp_C.ExecuteUbergraph_Fox_anim_bp");

	UFox_anim_bp_C_ExecuteUbergraph_Fox_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
