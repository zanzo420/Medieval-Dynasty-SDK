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

// Function BP_AnimHoldable_Needle.BP_AnimHoldable_Needle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimHoldable_Needle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Needle.BP_AnimHoldable_Needle_C.ReceiveBeginPlay");

	ABP_AnimHoldable_Needle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Needle.BP_AnimHoldable_Needle_C.ExecuteUbergraph_BP_AnimHoldable_Needle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimHoldable_Needle_C::ExecuteUbergraph_BP_AnimHoldable_Needle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Needle.BP_AnimHoldable_Needle_C.ExecuteUbergraph_BP_AnimHoldable_Needle");

	ABP_AnimHoldable_Needle_C_ExecuteUbergraph_BP_AnimHoldable_Needle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AnimHoldable_Needle_C::AfterRead()
{
	ABP_MasterAnimHoldable_Static_C::AfterRead();

}

void ABP_AnimHoldable_Needle_C::BeforeDelete()
{
	ABP_MasterAnimHoldable_Static_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
