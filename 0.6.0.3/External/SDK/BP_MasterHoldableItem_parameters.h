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

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetFluidType
struct ABP_MasterHoldableItem_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FluidType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopStart
struct ABP_MasterHoldableItem_C_OnLoopStart_Params
{
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForTorchEquipableItems
struct ABP_MasterHoldableItem_C_CheckForTorchEquipableItems_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeInputStage
struct ABP_MasterHoldableItem_C_ChangeInputStage_Params
{
	int                                                InputStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitBoneDetection
struct ABP_MasterHoldableItem_C_HitBoneDetection_Params
{
	struct FName                                       HitBoneName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamagePercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnEndInteraction
struct ABP_MasterHoldableItem_C_OnEndInteraction_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnStartInteraction
struct ABP_MasterHoldableItem_C_OnStartInteraction_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.On Tool Interact with Foliage
struct ABP_MasterHoldableItem_C_On_Tool_Interact_with_Foliage_Params
{
	int                                                FoliageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableFlippedTransform
struct ABP_MasterHoldableItem_C_GetHoldableFlippedTransform_Params
{
	struct FTransform                                  HoldableTransform;                                         // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableTransform
struct ABP_MasterHoldableItem_C_GetHoldableTransform_Params
{
	struct FTransform                                  HoldableTransform;                                         // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemCapacity
struct ABP_MasterHoldableItem_C_DecreaseHoldableItemCapacity_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.Set Montage Settings
struct ABP_MasterHoldableItem_C_Set_Montage_Settings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (Parm, OutParm)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetStatsFromAbilities
struct ABP_MasterHoldableItem_C_SetStatsFromAbilities_Params
{
	class UBP_CharacterStatsComponent_C*               CharacterStatsComponentReference;                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyAnimSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontageSettings
struct ABP_MasterHoldableItem_C_GetMontageSettings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemHP
struct ABP_MasterHoldableItem_C_DecreaseHoldableItemHP_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Offhand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UserConstructionScript
struct ABP_MasterHoldableItem_C_UserConstructionScript_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.LeftMouseInput
struct ABP_MasterHoldableItem_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.RightMouseInput
struct ABP_MasterHoldableItem_C_RightMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ResetHoldable
struct ABP_MasterHoldableItem_C_ResetHoldable_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.FlipRotation
struct ABP_MasterHoldableItem_C_FlipRotation_Params
{
	bool                                               UnFlip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopFinish
struct ABP_MasterHoldableItem_C_OnLoopFinish_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PerformInteraction
struct ABP_MasterHoldableItem_C_PerformInteraction_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageComplete
struct ABP_MasterHoldableItem_C_MontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageInterrupted
struct ABP_MasterHoldableItem_C_MontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageBlendOut
struct ABP_MasterHoldableItem_C_MontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageComplete
struct ABP_MasterHoldableItem_C_HitMontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageInterrupted
struct ABP_MasterHoldableItem_C_HitMontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageBlendOut
struct ABP_MasterHoldableItem_C_HitMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetTickEnabled
struct ABP_MasterHoldableItem_C_SetTickEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ReceiveBeginPlay
struct ABP_MasterHoldableItem_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForInteraction
struct ABP_MasterHoldableItem_C_CheckForInteraction_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.StartTimer
struct ABP_MasterHoldableItem_C_StartTimer_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SpawnItem
struct ABP_MasterHoldableItem_C_SpawnItem_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DespawnItem
struct ABP_MasterHoldableItem_C_DespawnItem_Params
{
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HoldableNotify
struct ABP_MasterHoldableItem_C_HoldableNotify_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ExecuteUbergraph_BP_MasterHoldableItem
struct ABP_MasterHoldableItem_C_ExecuteUbergraph_BP_MasterHoldableItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
