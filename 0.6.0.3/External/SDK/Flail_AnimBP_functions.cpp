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

// Function Flail_AnimBP.Flail_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UFlail_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flail_AnimBP.Flail_AnimBP_C.AnimGraph");

	UFlail_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Flail_AnimBP.Flail_AnimBP_C.ExecuteUbergraph_Flail_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlail_AnimBP_C::ExecuteUbergraph_Flail_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flail_AnimBP.Flail_AnimBP_C.ExecuteUbergraph_Flail_AnimBP");

	UFlail_AnimBP_C_ExecuteUbergraph_Flail_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UFlail_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UFlail_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
