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

// Function BP_AnimHoldable_Pottery_Knife.BP_AnimHoldable_Pottery_Knife_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimHoldable_Pottery_Knife_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Pottery_Knife.BP_AnimHoldable_Pottery_Knife_C.ReceiveBeginPlay");

	ABP_AnimHoldable_Pottery_Knife_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Pottery_Knife.BP_AnimHoldable_Pottery_Knife_C.ExecuteUbergraph_BP_AnimHoldable_Pottery_Knife
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimHoldable_Pottery_Knife_C::ExecuteUbergraph_BP_AnimHoldable_Pottery_Knife(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Pottery_Knife.BP_AnimHoldable_Pottery_Knife_C.ExecuteUbergraph_BP_AnimHoldable_Pottery_Knife");

	ABP_AnimHoldable_Pottery_Knife_C_ExecuteUbergraph_BP_AnimHoldable_Pottery_Knife_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
