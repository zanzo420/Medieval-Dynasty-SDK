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

// Function Lynx_AnimBP.Lynx_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void ULynx_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lynx_AnimBP.Lynx_AnimBP_C.AnimGraph");

	ULynx_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Lynx_AnimBP.Lynx_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void ULynx_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lynx_AnimBP.Lynx_AnimBP_C.UpdateIKState");

	ULynx_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lynx_AnimBP.Lynx_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULynx_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lynx_AnimBP.Lynx_AnimBP_C.BlueprintUpdateAnimation");

	ULynx_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lynx_AnimBP.Lynx_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void ULynx_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lynx_AnimBP.Lynx_AnimBP_C.BlueprintBeginPlay");

	ULynx_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lynx_AnimBP.Lynx_AnimBP_C.ExecuteUbergraph_Lynx_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULynx_AnimBP_C::ExecuteUbergraph_Lynx_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lynx_AnimBP.Lynx_AnimBP_C.ExecuteUbergraph_Lynx_AnimBP");

	ULynx_AnimBP_C_ExecuteUbergraph_Lynx_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULynx_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Lynx, ABP_LynxAI_C);
}

void ULynx_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Lynx);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
