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

// Function SpinningWheel_AnimBp.SpinningWheel_AnimBp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void USpinningWheel_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpinningWheel_AnimBp.SpinningWheel_AnimBp_C.AnimGraph");

	USpinningWheel_AnimBp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function SpinningWheel_AnimBp.SpinningWheel_AnimBp_C.ExecuteUbergraph_SpinningWheel_AnimBp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpinningWheel_AnimBp_C::ExecuteUbergraph_SpinningWheel_AnimBp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpinningWheel_AnimBp.SpinningWheel_AnimBp_C.ExecuteUbergraph_SpinningWheel_AnimBp");

	USpinningWheel_AnimBp_C_ExecuteUbergraph_SpinningWheel_AnimBp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USpinningWheel_AnimBp_C::AfterRead()
{
	UAnimInstance::AfterRead();

}

void USpinningWheel_AnimBp_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
