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

// Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Prey_Deer_Male_Young_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.ReceiveBeginPlay");

	ABP_Prey_Deer_Male_Young_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Prey_Deer_Male_Young_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.EventDead");

	ABP_Prey_Deer_Male_Young_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.ExecuteUbergraph_BP_Prey_Deer_Male_Young
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prey_Deer_Male_Young_C::ExecuteUbergraph_BP_Prey_Deer_Male_Young(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Male_Young.BP_Prey_Deer_Male_Young_C.ExecuteUbergraph_BP_Prey_Deer_Male_Young");

	ABP_Prey_Deer_Male_Young_C_ExecuteUbergraph_BP_Prey_Deer_Male_Young_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
