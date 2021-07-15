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

// Function SK_RabbitTrap_Skeleton_AnimBlueprint.SK_RabbitTrap_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void USK_RabbitTrap_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_RabbitTrap_Skeleton_AnimBlueprint.SK_RabbitTrap_Skeleton_AnimBlueprint_C.AnimGraph");

	USK_RabbitTrap_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function SK_RabbitTrap_Skeleton_AnimBlueprint.SK_RabbitTrap_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_RabbitTrap_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USK_RabbitTrap_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_RabbitTrap_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_RabbitTrap_Skeleton_AnimBlueprint.SK_RabbitTrap_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_RabbitTrap_Skeleton_AnimBlueprint");

	USK_RabbitTrap_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_RabbitTrap_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
