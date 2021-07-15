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

// Function BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterRangeHoldableItem_Skeletal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C.ReceiveBeginPlay");

	ABP_MasterRangeHoldableItem_Skeletal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C.ExecuteUbergraph_BP_MasterRangeHoldableItem_Skeletal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterRangeHoldableItem_Skeletal_C::ExecuteUbergraph_BP_MasterRangeHoldableItem_Skeletal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C.ExecuteUbergraph_BP_MasterRangeHoldableItem_Skeletal");

	ABP_MasterRangeHoldableItem_Skeletal_C_ExecuteUbergraph_BP_MasterRangeHoldableItem_Skeletal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
