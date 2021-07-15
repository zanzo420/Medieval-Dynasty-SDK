#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CombatComponent.BP_CombatComponent_C.StartCombat
struct UBP_CombatComponent_C_StartCombat_Params
{
	class AActor*                                      CombatCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CombatComponent.BP_CombatComponent_C.EndCombat
struct UBP_CombatComponent_C_EndCombat_Params
{
	class AActor*                                      CombatCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CombatComponent.BP_CombatComponent_C.IsInCombat Timer
struct UBP_CombatComponent_C_IsInCombat_Timer_Params
{
};

// Function BP_CombatComponent.BP_CombatComponent_C.ExecuteUbergraph_BP_CombatComponent
struct UBP_CombatComponent_C_ExecuteUbergraph_BP_CombatComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CombatComponent.BP_CombatComponent_C.OnLeaveCombat__DelegateSignature
struct UBP_CombatComponent_C_OnLeaveCombat__DelegateSignature_Params
{
};

// Function BP_CombatComponent.BP_CombatComponent_C.OnEnteredCombat__DelegateSignature
struct UBP_CombatComponent_C_OnEnteredCombat__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
