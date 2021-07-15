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

// Function BP_RatAI.BP_RatAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_RatAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RatAI.BP_RatAI_C.EventEngagementStart");

	ABP_RatAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RatAI.BP_RatAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RatAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RatAI.BP_RatAI_C.ReceiveBeginPlay");

	ABP_RatAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RatAI.BP_RatAI_C.ExecuteUbergraph_BP_RatAI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RatAI_C::ExecuteUbergraph_BP_RatAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RatAI.BP_RatAI_C.ExecuteUbergraph_BP_RatAI");

	ABP_RatAI_C_ExecuteUbergraph_BP_RatAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
