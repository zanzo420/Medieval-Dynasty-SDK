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

// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.fnGetNearestPrey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NearestPrey                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_NeedSystem_C::fnGetNearestPrey(class AActor** NearestPrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.fnGetNearestPrey");

	UBP_Comp_NeedSystem_C_fnGetNearestPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NearestPrey != nullptr)
		*NearestPrey = params.NearestPrey;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.UpdateNeedsTimer
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NeedSystem_C::UpdateNeedsTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.UpdateNeedsTimer");

	UBP_Comp_NeedSystem_C_UpdateNeedsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventDetermineNaturalNeed
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NeedSystem_C::EventDetermineNaturalNeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventDetermineNaturalNeed");

	UBP_Comp_NeedSystem_C_EventDetermineNaturalNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventFinishedEating
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NeedSystem_C::EventFinishedEating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventFinishedEating");

	UBP_Comp_NeedSystem_C_EventFinishedEating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventFinishedDrinking
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NeedSystem_C::EventFinishedDrinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.EventFinishedDrinking");

	UBP_Comp_NeedSystem_C_EventFinishedDrinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_NeedSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.ReceiveBeginPlay");

	UBP_Comp_NeedSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.Starving
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NeedSystem_C::Starving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.Starving");

	UBP_Comp_NeedSystem_C_Starving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.ExecuteUbergraph_BP_Comp_NeedSystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_NeedSystem_C::ExecuteUbergraph_BP_Comp_NeedSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NeedSystem.BP_Comp_NeedSystem_C.ExecuteUbergraph_BP_Comp_NeedSystem");

	UBP_Comp_NeedSystem_C_ExecuteUbergraph_BP_Comp_NeedSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
