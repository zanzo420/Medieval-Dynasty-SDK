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

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFluidType
struct UBP_StageInteractionComponent_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FluidType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStart
struct UBP_StageInteractionComponent_C_OnLoopStart_Params
{
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSwapItemsOnInteraction
struct UBP_StageInteractionComponent_C_GetSwapItemsOnInteraction_Params
{
	bool                                               SwapItemsOnInteraction;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSwapItemsOnInteraction
struct UBP_StageInteractionComponent_C_SetSwapItemsOnInteraction_Params
{
	bool                                               SwapItemsOnInteraction;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFinishedBeginningStage
struct UBP_StageInteractionComponent_C_GetFinishedBeginningStage_Params
{
	bool                                               FinishedBeginningStage;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetNumberOfAutomaticLoops
struct UBP_StageInteractionComponent_C_SetNumberOfAutomaticLoops_Params
{
	int                                                NumberOfAutomaticLoops;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetNumberOfAutomaticLoops
struct UBP_StageInteractionComponent_C_GetNumberOfAutomaticLoops_Params
{
	int                                                NumberOfAutomaticLoops;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetAutomaticPlay
struct UBP_StageInteractionComponent_C_SetAutomaticPlay_Params
{
	bool                                               AutomaticPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetAutomaticPlay
struct UBP_StageInteractionComponent_C_GetAutomaticPlay_Params
{
	bool                                               AutomaticPlay;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.Get Is Performing Stage Interaction
struct UBP_StageInteractionComponent_C_Get_Is_Performing_Stage_Interaction_Params
{
	bool                                               IsPerformingStageInteraction;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetLoopStageSpeedMultiplier
struct UBP_StageInteractionComponent_C_GetLoopStageSpeedMultiplier_Params
{
	float                                              LoopStageSpeedMultiplier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetLoopStageSpeedMultiplier
struct UBP_StageInteractionComponent_C_SetLoopStageSpeedMultiplier_Params
{
	float                                              LoopStageSpeedMultiplier;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacter
struct UBP_StageInteractionComponent_C_GetOwningCharacter_Params
{
	class ABP_BaseCharacter_C*                         AsBaseCharacter;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedEndingStage
struct UBP_StageInteractionComponent_C_SetFinishedEndingStage_Params
{
	bool                                               FinishedEndingStage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedLoopStage
struct UBP_StageInteractionComponent_C_SetFinishedLoopStage_Params
{
	bool                                               FinishedLoopStage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedBeginningStage
struct UBP_StageInteractionComponent_C_SetFinishedBeginningStage_Params
{
	bool                                               FinishedBeginningStage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacterAnimInstance
struct UBP_StageInteractionComponent_C_GetOwningCharacterAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetInteractedActor
struct UBP_StageInteractionComponent_C_GetInteractedActor_Params
{
	class AActor*                                      InteractedActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetMontageParameters
struct UBP_StageInteractionComponent_C_GetMontageParameters_Params
{
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetTargetMontage
struct UBP_StageInteractionComponent_C_GetTargetMontage_Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSectionsName
struct UBP_StageInteractionComponent_C_GetSectionsName_Params
{
	TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay;                                            // (Parm, OutParm)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetInteractedActor
struct UBP_StageInteractionComponent_C_SetInteractedActor_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetMontageParameters
struct UBP_StageInteractionComponent_C_SetMontageParameters_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetTargetMontage
struct UBP_StageInteractionComponent_C_SetTargetMontage_Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSectionsName
struct UBP_StageInteractionComponent_C_SetSectionsName_Params
{
	TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.RightMouseInput
struct UBP_StageInteractionComponent_C_RightMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetHoldable
struct UBP_StageInteractionComponent_C_ResetHoldable_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.FlipRotation
struct UBP_StageInteractionComponent_C_FlipRotation_Params
{
	bool                                               UnFlip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopFinish
struct UBP_StageInteractionComponent_C_OnLoopFinish_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.PerformInteraction
struct UBP_StageInteractionComponent_C_PerformInteraction_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageComplete
struct UBP_StageInteractionComponent_C_MontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageInterrupted
struct UBP_StageInteractionComponent_C_MontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageBlendOut
struct UBP_StageInteractionComponent_C_MontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageComplete
struct UBP_StageInteractionComponent_C_HitMontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageInterrupted
struct UBP_StageInteractionComponent_C_HitMontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageBlendOut
struct UBP_StageInteractionComponent_C_HitMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.StartStageInteraction
struct UBP_StageInteractionComponent_C_StartStageInteraction_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.EndStageInteraction
struct UBP_StageInteractionComponent_C_EndStageInteraction_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LoopStageInteraction
struct UBP_StageInteractionComponent_C_LoopStageInteraction_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.InitializeStageInteraction
struct UBP_StageInteractionComponent_C_InitializeStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutomaticPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumberOfAutomaticLoops;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SwapItemsOnInteraction;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetParameters
struct UBP_StageInteractionComponent_C_ResetParameters_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetBeginningDoOnce
struct UBP_StageInteractionComponent_C_ResetBeginningDoOnce_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetEndingDoOnce
struct UBP_StageInteractionComponent_C_ResetEndingDoOnce_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetLoopDoOnce
struct UBP_StageInteractionComponent_C_ResetLoopDoOnce_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LeftMouseInput
struct UBP_StageInteractionComponent_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ExecuteUbergraph_BP_StageInteractionComponent
struct UBP_StageInteractionComponent_C_ExecuteUbergraph_BP_StageInteractionComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.AllLoopsFinished__DelegateSignature
struct UBP_StageInteractionComponent_C_AllLoopsFinished__DelegateSignature_Params
{
};

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStageFinished__DelegateSignature
struct UBP_StageInteractionComponent_C_OnLoopStageFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
