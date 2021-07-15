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

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CalculateTracePosition
struct ABP_MasterMeleeHoldableItem_C_CalculateTracePosition_Params
{
	struct FVector                                     Start;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckIfIsLookingDown
struct ABP_MasterMeleeHoldableItem_C_CheckIfIsLookingDown_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.On Tool Interact with Foliage
struct ABP_MasterMeleeHoldableItem_C_On_Tool_Interact_with_Foliage_Params
{
	int                                                FoliageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.PlayerHitTrace
struct ABP_MasterMeleeHoldableItem_C_PlayerHitTrace_Params
{
	bool                                               ValidHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Hitting
struct ABP_MasterMeleeHoldableItem_C_Hitting_Params
{
	struct FHitResult                                  HitResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveTick
struct ABP_MasterMeleeHoldableItem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.LeftMouseInput
struct ABP_MasterMeleeHoldableItem_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ResetHoldable
struct ABP_MasterMeleeHoldableItem_C_ResetHoldable_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.FlipRotation
struct ABP_MasterMeleeHoldableItem_C_FlipRotation_Params
{
	bool                                               UnFlip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SetTickEnabled
struct ABP_MasterMeleeHoldableItem_C_SetTickEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MasterMeleeHoldableItem_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Add Hit Actor
struct ABP_MasterMeleeHoldableItem_C_Add_Hit_Actor_Params
{
	class AActor*                                      HitActor;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SingleTrace
struct ABP_MasterMeleeHoldableItem_C_SingleTrace_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MultipleTraces
struct ABP_MasterMeleeHoldableItem_C_MultipleTraces_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckForInteraction
struct ABP_MasterMeleeHoldableItem_C_CheckForInteraction_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveBeginPlay
struct ABP_MasterMeleeHoldableItem_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MontageComplete
struct ABP_MasterMeleeHoldableItem_C_MontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.HitMontageComplete
struct ABP_MasterMeleeHoldableItem_C_HitMontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.DamageToolReset
struct ABP_MasterMeleeHoldableItem_C_DamageToolReset_Params
{
};

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ExecuteUbergraph_BP_MasterMeleeHoldableItem
struct ABP_MasterMeleeHoldableItem_C_ExecuteUbergraph_BP_MasterMeleeHoldableItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
