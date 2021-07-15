﻿// Name: Medieval Dynasty, Version: 0.6.0.3

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

// Function Bellows_AnimBP.Bellows_AnimBp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBellows_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bellows_AnimBP.Bellows_AnimBp_C.AnimGraph");

	UBellows_AnimBp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Bellows_AnimBP.Bellows_AnimBp_C.AnimNotify_ForgeFire
// (BlueprintCallable, BlueprintEvent)
void UBellows_AnimBp_C::AnimNotify_ForgeFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bellows_AnimBP.Bellows_AnimBp_C.AnimNotify_ForgeFire");

	UBellows_AnimBp_C_AnimNotify_ForgeFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bellows_AnimBP.Bellows_AnimBp_C.ExecuteUbergraph_Bellows_AnimBp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBellows_AnimBp_C::ExecuteUbergraph_Bellows_AnimBp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bellows_AnimBP.Bellows_AnimBp_C.ExecuteUbergraph_Bellows_AnimBp");

	UBellows_AnimBp_C_ExecuteUbergraph_Bellows_AnimBp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBellows_AnimBp_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UBellows_AnimBp_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif