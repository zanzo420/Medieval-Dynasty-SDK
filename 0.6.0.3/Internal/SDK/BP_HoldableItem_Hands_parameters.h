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

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.DecreaseHoldableItemHP
struct ABP_HoldableItem_Hands_C_DecreaseHoldableItemHP_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Offhand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomMontage
struct ABP_HoldableItem_Hands_C_GetRandomMontage_Params
{
	TArray<class UAnimMontage*>                        TargetArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UAnimMontage*                                CurrentMontage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SelectedMontage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.CheckMontagesStatus
struct ABP_HoldableItem_Hands_C_CheckMontagesStatus_Params
{
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomFistMontage
struct ABP_HoldableItem_Hands_C_GetRandomFistMontage_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (Parm, OutParm)
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.LeftMouseInput
struct ABP_HoldableItem_Hands_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.SetTickEnabled
struct ABP_HoldableItem_Hands_C_SetTickEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.PerformNextAttack
struct ABP_HoldableItem_Hands_C_PerformNextAttack_Params
{
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartLeftHandTimer
struct ABP_HoldableItem_Hands_C_StartLeftHandTimer_Params
{
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartRightHandTimer
struct ABP_HoldableItem_Hands_C_StartRightHandTimer_Params
{
};

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.ExecuteUbergraph_BP_HoldableItem_Hands
struct ABP_HoldableItem_Hands_C_ExecuteUbergraph_BP_HoldableItem_Hands_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
