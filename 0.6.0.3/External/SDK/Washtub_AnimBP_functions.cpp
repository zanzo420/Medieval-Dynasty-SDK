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

// Function Washtub_AnimBP.Washtub_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UWashtub_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Washtub_AnimBP.Washtub_AnimBP_C.AnimGraph");

	UWashtub_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Washtub_AnimBP.Washtub_AnimBP_C.FillAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWashtub_AnimBP_C::FillAnimation(float Capacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Washtub_AnimBP.Washtub_AnimBP_C.FillAnimation");

	UWashtub_AnimBP_C_FillAnimation_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Washtub_AnimBP.Washtub_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UWashtub_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Washtub_AnimBP.Washtub_AnimBP_C.BlueprintBeginPlay");

	UWashtub_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Washtub_AnimBP.Washtub_AnimBP_C.ExecuteUbergraph_Washtub_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWashtub_AnimBP_C::ExecuteUbergraph_Washtub_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Washtub_AnimBP.Washtub_AnimBP_C.ExecuteUbergraph_Washtub_AnimBP");

	UWashtub_AnimBP_C_ExecuteUbergraph_Washtub_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UWashtub_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Washtub, ABP_Furniture_Washtub_C);
}

void UWashtub_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Washtub);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
