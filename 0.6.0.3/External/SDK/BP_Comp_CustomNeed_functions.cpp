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

// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.fnGetClosestActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NearbyActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::fnGetClosestActor(class AActor** NearbyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.fnGetClosestActor");

	UBP_Comp_CustomNeed_C_fnGetClosestActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NearbyActor != nullptr)
		*NearbyActor = params.NearbyActor;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.fnExecuteCustomNeed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::fnExecuteCustomNeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.fnExecuteCustomNeed");

	UBP_Comp_CustomNeed_C_fnExecuteCustomNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnFail_A0E617C64EA1A7EFC98DEABB3BB6A50D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::OnFail_A0E617C64EA1A7EFC98DEABB3BB6A50D(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnFail_A0E617C64EA1A7EFC98DEABB3BB6A50D");

	UBP_Comp_CustomNeed_C_OnFail_A0E617C64EA1A7EFC98DEABB3BB6A50D_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnSuccess_A0E617C64EA1A7EFC98DEABB3BB6A50D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::OnSuccess_A0E617C64EA1A7EFC98DEABB3BB6A50D(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnSuccess_A0E617C64EA1A7EFC98DEABB3BB6A50D");

	UBP_Comp_CustomNeed_C_OnSuccess_A0E617C64EA1A7EFC98DEABB3BB6A50D_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnFail_527661CF4A79736405D21CA66FE7333B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::OnFail_527661CF4A79736405D21CA66FE7333B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnFail_527661CF4A79736405D21CA66FE7333B");

	UBP_Comp_CustomNeed_C_OnFail_527661CF4A79736405D21CA66FE7333B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnSuccess_527661CF4A79736405D21CA66FE7333B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::OnSuccess_527661CF4A79736405D21CA66FE7333B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.OnSuccess_527661CF4A79736405D21CA66FE7333B");

	UBP_Comp_CustomNeed_C_OnSuccess_527661CF4A79736405D21CA66FE7333B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventDetermineNaturalNeed
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::EventDetermineNaturalNeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventDetermineNaturalNeed");

	UBP_Comp_CustomNeed_C_EventDetermineNaturalNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_CustomNeed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.ReceiveBeginPlay");

	UBP_Comp_CustomNeed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventFinishedNeed
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::EventFinishedNeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventFinishedNeed");

	UBP_Comp_CustomNeed_C_EventFinishedNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_SingleActor
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::EventNeed_SingleActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_SingleActor");

	UBP_Comp_CustomNeed_C_EventNeed_SingleActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_ClosestActor
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::EventNeed_ClosestActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_ClosestActor");

	UBP_Comp_CustomNeed_C_EventNeed_ClosestActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_CustomCode
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_CustomNeed_C::EventNeed_CustomCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.EventNeed_CustomCode");

	UBP_Comp_CustomNeed_C_EventNeed_CustomCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.ExecuteUbergraph_BP_Comp_CustomNeed
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_CustomNeed_C::ExecuteUbergraph_BP_Comp_CustomNeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_CustomNeed.BP_Comp_CustomNeed_C.ExecuteUbergraph_BP_Comp_CustomNeed");

	UBP_Comp_CustomNeed_C_ExecuteUbergraph_BP_Comp_CustomNeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Comp_CustomNeed_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(GroundAnimal, ABP_GroundAnimalBase_C);
}

void UBP_Comp_CustomNeed_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(GroundAnimal);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
