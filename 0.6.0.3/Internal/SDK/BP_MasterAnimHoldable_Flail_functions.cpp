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

// Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterAnimHoldable_Flail_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.ReceiveBeginPlay");

	ABP_MasterAnimHoldable_Flail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.StartThreshing
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterAnimHoldable_Flail_C::StartThreshing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.StartThreshing");

	ABP_MasterAnimHoldable_Flail_C_StartThreshing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.HoldableNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterAnimHoldable_Flail_C::HoldableNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.HoldableNotify");

	ABP_MasterAnimHoldable_Flail_C_HoldableNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.ExecuteUbergraph_BP_MasterAnimHoldable_Flail
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterAnimHoldable_Flail_C::ExecuteUbergraph_BP_MasterAnimHoldable_Flail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C.ExecuteUbergraph_BP_MasterAnimHoldable_Flail");

	ABP_MasterAnimHoldable_Flail_C_ExecuteUbergraph_BP_MasterAnimHoldable_Flail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
