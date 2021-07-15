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

// Function Wisent_AnimBp.Wisent_AnimBp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UWisent_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wisent_AnimBp.Wisent_AnimBp_C.AnimGraph");

	UWisent_AnimBp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Wisent_AnimBp.Wisent_AnimBp_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UWisent_AnimBp_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wisent_AnimBp.Wisent_AnimBp_C.UpdateIKState");

	UWisent_AnimBp_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wisent_AnimBp.Wisent_AnimBp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWisent_AnimBp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wisent_AnimBp.Wisent_AnimBp_C.BlueprintUpdateAnimation");

	UWisent_AnimBp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wisent_AnimBp.Wisent_AnimBp_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UWisent_AnimBp_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wisent_AnimBp.Wisent_AnimBp_C.BlueprintBeginPlay");

	UWisent_AnimBp_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wisent_AnimBp.Wisent_AnimBp_C.ExecuteUbergraph_Wisent_AnimBp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWisent_AnimBp_C::ExecuteUbergraph_Wisent_AnimBp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wisent_AnimBp.Wisent_AnimBp_C.ExecuteUbergraph_Wisent_AnimBp");

	UWisent_AnimBp_C_ExecuteUbergraph_Wisent_AnimBp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
