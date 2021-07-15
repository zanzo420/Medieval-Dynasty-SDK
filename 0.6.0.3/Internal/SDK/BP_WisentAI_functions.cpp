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

// Function BP_WisentAI.BP_WisentAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WisentAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WisentAI.BP_WisentAI_C.ReceiveBeginPlay");

	ABP_WisentAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WisentAI.BP_WisentAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_WisentAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WisentAI.BP_WisentAI_C.EventEngagementStart");

	ABP_WisentAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WisentAI.BP_WisentAI_C.DealtDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WisentAI_C::DealtDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WisentAI.BP_WisentAI_C.DealtDamage");

	ABP_WisentAI_C_DealtDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WisentAI.BP_WisentAI_C.ExecuteUbergraph_BP_WisentAI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WisentAI_C::ExecuteUbergraph_BP_WisentAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WisentAI.BP_WisentAI_C.ExecuteUbergraph_BP_WisentAI");

	ABP_WisentAI_C_ExecuteUbergraph_BP_WisentAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
