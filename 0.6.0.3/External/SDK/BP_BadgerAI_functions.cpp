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

// Function BP_BadgerAI.BP_BadgerAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BadgerAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BadgerAI.BP_BadgerAI_C.ReceiveBeginPlay");

	ABP_BadgerAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BadgerAI.BP_BadgerAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_BadgerAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BadgerAI.BP_BadgerAI_C.EventEngagementStart");

	ABP_BadgerAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BadgerAI.BP_BadgerAI_C.FearDecrease
// (BlueprintCallable, BlueprintEvent)
void ABP_BadgerAI_C::FearDecrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BadgerAI.BP_BadgerAI_C.FearDecrease");

	ABP_BadgerAI_C_FearDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BadgerAI.BP_BadgerAI_C.AnimalTookDamage
// (BlueprintCallable, BlueprintEvent)
void ABP_BadgerAI_C::AnimalTookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BadgerAI.BP_BadgerAI_C.AnimalTookDamage");

	ABP_BadgerAI_C_AnimalTookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BadgerAI.BP_BadgerAI_C.ExecuteUbergraph_BP_BadgerAI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BadgerAI_C::ExecuteUbergraph_BP_BadgerAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BadgerAI.BP_BadgerAI_C.ExecuteUbergraph_BP_BadgerAI");

	ABP_BadgerAI_C_ExecuteUbergraph_BP_BadgerAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BadgerAI_C::AfterRead()
{
	ABP_GroundAnimalBase_C::AfterRead();

	READ_PTR_FULL(PelvisCapsule, UCapsuleComponent);
	READ_PTR_FULL(HomeBasePrey, ABP_AI_POI_Base_C);
}

void ABP_BadgerAI_C::BeforeDelete()
{
	ABP_GroundAnimalBase_C::BeforeDelete();

	DELE_PTR_FULL(PelvisCapsule);
	DELE_PTR_FULL(HomeBasePrey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
