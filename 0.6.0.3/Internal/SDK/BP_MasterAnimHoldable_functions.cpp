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

// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ScaleItem__FinishedFunc
// (BlueprintEvent)
void ABP_MasterAnimHoldable_C::ScaleItem__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ScaleItem__FinishedFunc");

	ABP_MasterAnimHoldable_C_ScaleItem__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ScaleItem__UpdateFunc
// (BlueprintEvent)
void ABP_MasterAnimHoldable_C::ScaleItem__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ScaleItem__UpdateFunc");

	ABP_MasterAnimHoldable_C_ScaleItem__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.DespawnItem
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterAnimHoldable_C::DespawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.DespawnItem");

	ABP_MasterAnimHoldable_C_DespawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterAnimHoldable_C::SpawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.SpawnItem");

	ABP_MasterAnimHoldable_C_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterAnimHoldable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ReceiveBeginPlay");

	ABP_MasterAnimHoldable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.HoldableNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterAnimHoldable_C::HoldableNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.HoldableNotify");

	ABP_MasterAnimHoldable_C_HoldableNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ExecuteUbergraph_BP_MasterAnimHoldable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterAnimHoldable_C::ExecuteUbergraph_BP_MasterAnimHoldable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable.BP_MasterAnimHoldable_C.ExecuteUbergraph_BP_MasterAnimHoldable");

	ABP_MasterAnimHoldable_C_ExecuteUbergraph_BP_MasterAnimHoldable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
