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

// Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_NaturalDeath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.ReceiveBeginPlay");

	UBP_Comp_NaturalDeath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.EventNaturalDeath
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NaturalDeath_C::EventNaturalDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.EventNaturalDeath");

	UBP_Comp_NaturalDeath_C_EventNaturalDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.EventDie
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_NaturalDeath_C::EventDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.EventDie");

	UBP_Comp_NaturalDeath_C_EventDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.ExecuteUbergraph_BP_Comp_NaturalDeath
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_NaturalDeath_C::ExecuteUbergraph_BP_Comp_NaturalDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_NaturalDeath.BP_Comp_NaturalDeath_C.ExecuteUbergraph_BP_Comp_NaturalDeath");

	UBP_Comp_NaturalDeath_C_ExecuteUbergraph_BP_Comp_NaturalDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Comp_NaturalDeath_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(GroundAnimal, ABP_GroundAnimalBase_C);
}

void UBP_Comp_NaturalDeath_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(GroundAnimal);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
