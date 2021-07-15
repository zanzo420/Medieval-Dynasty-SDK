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

// Function BP_MasterRangeHoldableItem.BP_MasterRangeHoldableItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterRangeHoldableItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterRangeHoldableItem.BP_MasterRangeHoldableItem_C.ReceiveBeginPlay");

	ABP_MasterRangeHoldableItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterRangeHoldableItem.BP_MasterRangeHoldableItem_C.ExecuteUbergraph_BP_MasterRangeHoldableItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterRangeHoldableItem_C::ExecuteUbergraph_BP_MasterRangeHoldableItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterRangeHoldableItem.BP_MasterRangeHoldableItem_C.ExecuteUbergraph_BP_MasterRangeHoldableItem");

	ABP_MasterRangeHoldableItem_C_ExecuteUbergraph_BP_MasterRangeHoldableItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterRangeHoldableItem_C::AfterRead()
{
	ABP_MasterHoldableItem_C::AfterRead();

}

void ABP_MasterRangeHoldableItem_C::BeforeDelete()
{
	ABP_MasterHoldableItem_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
