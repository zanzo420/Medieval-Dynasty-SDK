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

// Function AnimBP_BrewingStation.AnimBP_BrewingStation_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_BrewingStation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BrewingStation.AnimBP_BrewingStation_C.AnimGraph");

	UAnimBP_BrewingStation_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_BrewingStation.AnimBP_BrewingStation_C.ExecuteUbergraph_AnimBP_BrewingStation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_BrewingStation_C::ExecuteUbergraph_AnimBP_BrewingStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_BrewingStation.AnimBP_BrewingStation_C.ExecuteUbergraph_AnimBP_BrewingStation");

	UAnimBP_BrewingStation_C_ExecuteUbergraph_AnimBP_BrewingStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
