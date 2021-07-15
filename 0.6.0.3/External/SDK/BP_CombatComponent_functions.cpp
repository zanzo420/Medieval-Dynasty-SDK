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

// Function BP_CombatComponent.BP_CombatComponent_C.StartCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CombatComponent_C::StartCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.StartCombat");

	UBP_CombatComponent_C_StartCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CombatComponent.BP_CombatComponent_C.EndCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CombatComponent_C::EndCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.EndCombat");

	UBP_CombatComponent_C_EndCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CombatComponent.BP_CombatComponent_C.IsInCombat Timer
// (BlueprintCallable, BlueprintEvent)
void UBP_CombatComponent_C::IsInCombat_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.IsInCombat Timer");

	UBP_CombatComponent_C_IsInCombat_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CombatComponent.BP_CombatComponent_C.ExecuteUbergraph_BP_CombatComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CombatComponent_C::ExecuteUbergraph_BP_CombatComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.ExecuteUbergraph_BP_CombatComponent");

	UBP_CombatComponent_C_ExecuteUbergraph_BP_CombatComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CombatComponent.BP_CombatComponent_C.OnLeaveCombat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CombatComponent_C::OnLeaveCombat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnLeaveCombat__DelegateSignature");

	UBP_CombatComponent_C_OnLeaveCombat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CombatComponent.BP_CombatComponent_C.OnEnteredCombat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CombatComponent_C::OnEnteredCombat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnEnteredCombat__DelegateSignature");

	UBP_CombatComponent_C_OnEnteredCombat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_CombatComponent_C::AfterRead()
{
	UActorComponent::AfterRead();

}

void UBP_CombatComponent_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
