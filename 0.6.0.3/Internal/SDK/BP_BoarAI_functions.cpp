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

// Function BP_BoarAI.BP_BoarAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_BoarAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.EventEngagementStart");

	ABP_BoarAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoarAI.BP_BoarAI_C.EngageingCooldown
// (BlueprintCallable, BlueprintEvent)
void ABP_BoarAI_C::EngageingCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.EngageingCooldown");

	ABP_BoarAI_C_EngageingCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoarAI.BP_BoarAI_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABP_BoarAI_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	ABP_BoarAI_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoarAI.BP_BoarAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BoarAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.ReceiveBeginPlay");

	ABP_BoarAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoarAI.BP_BoarAI_C.AnimalTookDamage
// (BlueprintCallable, BlueprintEvent)
void ABP_BoarAI_C::AnimalTookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.AnimalTookDamage");

	ABP_BoarAI_C_AnimalTookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoarAI.BP_BoarAI_C.ExecuteUbergraph_BP_BoarAI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoarAI_C::ExecuteUbergraph_BP_BoarAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoarAI.BP_BoarAI_C.ExecuteUbergraph_BP_BoarAI");

	ABP_BoarAI_C_ExecuteUbergraph_BP_BoarAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
