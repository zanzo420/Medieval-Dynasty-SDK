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

// Function BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C.Interact");

	ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C.ExecuteUbergraph_BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C::ExecuteUbergraph_BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C.ExecuteUbergraph_BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A");

	ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C_ExecuteUbergraph_BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C::AfterRead()
{
	ABP_MasterBuildModule_C::AfterRead();

	READ_PTR_FULL(Ladder, UStaticMeshComponent);
}

void ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C::BeforeDelete()
{
	ABP_MasterBuildModule_C::BeforeDelete();

	DELE_PTR_FULL(Ladder);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
