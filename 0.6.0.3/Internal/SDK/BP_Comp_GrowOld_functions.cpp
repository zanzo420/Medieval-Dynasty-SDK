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

// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.fnFollowParent
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Comp_GrowOld_C::fnFollowParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.fnFollowParent");

	UBP_Comp_GrowOld_C_fnFollowParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.OnRep_GrowUp
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_GrowOld_C::OnRep_GrowUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.OnRep_GrowUp");

	UBP_Comp_GrowOld_C_OnRep_GrowUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.fnSpawnAdult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Comp_GrowOld_C::fnSpawnAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.fnSpawnAdult");

	UBP_Comp_GrowOld_C_fnSpawnAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_GrowOld_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.ReceiveBeginPlay");

	UBP_Comp_GrowOld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.EventGrowUp
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_GrowOld_C::EventGrowUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.EventGrowUp");

	UBP_Comp_GrowOld_C_EventGrowUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.ExecuteUbergraph_BP_Comp_GrowOld
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_GrowOld_C::ExecuteUbergraph_BP_Comp_GrowOld(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_GrowOld.BP_Comp_GrowOld_C.ExecuteUbergraph_BP_Comp_GrowOld");

	UBP_Comp_GrowOld_C_ExecuteUbergraph_BP_Comp_GrowOld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
