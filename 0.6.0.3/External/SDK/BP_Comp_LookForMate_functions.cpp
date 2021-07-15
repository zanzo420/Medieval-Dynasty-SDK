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

// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.fnSetAttributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GroundAnimalBase_C*  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_LookForMate_C::fnSetAttributes(class ABP_GroundAnimalBase_C* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.fnSetAttributes");

	UBP_Comp_LookForMate_C_fnSetAttributes_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.fnLookForPartner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Comp_LookForMate_C::fnLookForPartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.fnLookForPartner");

	UBP_Comp_LookForMate_C_fnLookForPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.EventSearchForPartner
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_LookForMate_C::EventSearchForPartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.EventSearchForPartner");

	UBP_Comp_LookForMate_C_EventSearchForPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_LookForMate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.ReceiveBeginPlay");

	UBP_Comp_LookForMate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.EventBreeding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Partner_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Comp_LookForMate_C::EventBreeding(bool Partner_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.EventBreeding");

	UBP_Comp_LookForMate_C_EventBreeding_Params params;
	params.Partner_ = Partner_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.ExecuteUbergraph_BP_Comp_LookForMate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_LookForMate_C::ExecuteUbergraph_BP_Comp_LookForMate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_LookForMate.BP_Comp_LookForMate_C.ExecuteUbergraph_BP_Comp_LookForMate");

	UBP_Comp_LookForMate_C_ExecuteUbergraph_BP_Comp_LookForMate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Comp_LookForMate_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Owner, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(MaleClass, UClass);
	READ_PTR_FULL(FemaleClass, UClass);
	READ_PTR_FULL(MaleOffspring, AActor);
	READ_PTR_FULL(FemaleOffspring, AActor);
}

void UBP_Comp_LookForMate_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Owner);
	DELE_PTR_FULL(MaleClass);
	DELE_PTR_FULL(FemaleClass);
	DELE_PTR_FULL(MaleOffspring);
	DELE_PTR_FULL(FemaleOffspring);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
