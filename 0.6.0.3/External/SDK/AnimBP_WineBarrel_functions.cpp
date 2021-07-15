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

// Function AnimBP_WineBarrel.AnimBP_WineBarrel_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_WineBarrel_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_WineBarrel.AnimBP_WineBarrel_C.AnimGraph");

	UAnimBP_WineBarrel_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_WineBarrel.AnimBP_WineBarrel_C.ExecuteUbergraph_AnimBP_WineBarrel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_WineBarrel_C::ExecuteUbergraph_AnimBP_WineBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_WineBarrel.AnimBP_WineBarrel_C.ExecuteUbergraph_AnimBP_WineBarrel");

	UAnimBP_WineBarrel_C_ExecuteUbergraph_AnimBP_WineBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAnimBP_WineBarrel_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimBP_WineBarrel_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
