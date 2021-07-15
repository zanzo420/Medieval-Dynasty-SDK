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

// Function rat_anim_bp.Rat_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void URat_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function rat_anim_bp.Rat_anim_bp_C.AnimGraph");

	URat_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function rat_anim_bp.Rat_anim_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URat_anim_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function rat_anim_bp.Rat_anim_bp_C.BlueprintUpdateAnimation");

	URat_anim_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function rat_anim_bp.Rat_anim_bp_C.ExecuteUbergraph_Rat_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URat_anim_bp_C::ExecuteUbergraph_Rat_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function rat_anim_bp.Rat_anim_bp_C.ExecuteUbergraph_Rat_anim_bp");

	URat_anim_bp_C_ExecuteUbergraph_Rat_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URat_anim_bp_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void URat_anim_bp_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
