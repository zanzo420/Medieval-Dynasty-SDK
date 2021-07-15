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

// Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void US_Animal_Feed_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.AnimGraph");

	US_Animal_Feed_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void US_Animal_Feed_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.BlueprintBeginPlay");

	US_Animal_Feed_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.FillAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void US_Animal_Feed_AnimBP_C::FillAnimation(float Capacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.FillAnimation");

	US_Animal_Feed_AnimBP_C_FillAnimation_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.ExecuteUbergraph_S_Animal_Feed_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void US_Animal_Feed_AnimBP_C::ExecuteUbergraph_S_Animal_Feed_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Animal_Feed_AnimBP.S_Animal_Feed_AnimBP_C.ExecuteUbergraph_S_Animal_Feed_AnimBP");

	US_Animal_Feed_AnimBP_C_ExecuteUbergraph_S_Animal_Feed_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
