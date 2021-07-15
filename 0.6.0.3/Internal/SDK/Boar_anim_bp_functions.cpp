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

// Function Boar_anim_bp.Boar_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBoar_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Boar_anim_bp.Boar_anim_bp_C.AnimGraph");

	UBoar_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Boar_anim_bp.Boar_anim_bp_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UBoar_anim_bp_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Boar_anim_bp.Boar_anim_bp_C.UpdateIKState");

	UBoar_anim_bp_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Boar_anim_bp.Boar_anim_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoar_anim_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Boar_anim_bp.Boar_anim_bp_C.BlueprintUpdateAnimation");

	UBoar_anim_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Boar_anim_bp.Boar_anim_bp_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UBoar_anim_bp_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Boar_anim_bp.Boar_anim_bp_C.BlueprintBeginPlay");

	UBoar_anim_bp_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Boar_anim_bp.Boar_anim_bp_C.ExecuteUbergraph_Boar_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoar_anim_bp_C::ExecuteUbergraph_Boar_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Boar_anim_bp.Boar_anim_bp_C.ExecuteUbergraph_Boar_anim_bp");

	UBoar_anim_bp_C_ExecuteUbergraph_Boar_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
