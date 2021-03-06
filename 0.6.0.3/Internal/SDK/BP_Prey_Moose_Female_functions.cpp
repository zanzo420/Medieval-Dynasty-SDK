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

// Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.AnimNotify_DeathEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_Prey_Moose_Female_C::AnimNotify_DeathEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.AnimNotify_DeathEnd");

	ABP_Prey_Moose_Female_C_AnimNotify_DeathEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Prey_Moose_Female_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.EventDead");

	ABP_Prey_Moose_Female_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Prey_Moose_Female_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.ReceiveBeginPlay");

	ABP_Prey_Moose_Female_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.ExecuteUbergraph_BP_Prey_Moose_Female
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prey_Moose_Female_C::ExecuteUbergraph_BP_Prey_Moose_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Moose_Female.BP_Prey_Moose_Female_C.ExecuteUbergraph_BP_Prey_Moose_Female");

	ABP_Prey_Moose_Female_C_ExecuteUbergraph_BP_Prey_Moose_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
