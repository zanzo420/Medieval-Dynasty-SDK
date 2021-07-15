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

// Function AnimBP_Pottery.AnimBP_Pottery_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_Pottery_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Pottery.AnimBP_Pottery_C.AnimGraph");

	UAnimBP_Pottery_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_Pottery.AnimBP_Pottery_C.ExecuteUbergraph_AnimBP_Pottery
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_Pottery_C::ExecuteUbergraph_AnimBP_Pottery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Pottery.AnimBP_Pottery_C.ExecuteUbergraph_AnimBP_Pottery");

	UAnimBP_Pottery_C_ExecuteUbergraph_AnimBP_Pottery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAnimBP_Pottery_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimBP_Pottery_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
