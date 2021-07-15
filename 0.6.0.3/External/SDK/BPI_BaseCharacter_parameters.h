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

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetInteractionEndpoint
struct UBPI_BaseCharacter_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetPhysicsHandle
struct UBPI_BaseCharacter_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMountAnimalType BPI
struct UBPI_BaseCharacter_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetEnableIK_BPI
struct UBPI_BaseCharacter_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateIKAlpha
struct UBPI_BaseCharacter_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountSpecial
struct UBPI_BaseCharacter_C_PlayMountSpecial_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountStopAnimation
struct UBPI_BaseCharacter_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountAnimation
struct UBPI_BaseCharacter_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfessionData
struct UBPI_BaseCharacter_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Caught Prey BPI
struct UBPI_BaseCharacter_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsInDialogue_BPI
struct UBPI_BaseCharacter_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnDeath
struct UBPI_BaseCharacter_C_OnDeath_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdlePoseByID BPI
struct UBPI_BaseCharacter_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetSystemManager
struct UBPI_BaseCharacter_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Knockback
struct UBPI_BaseCharacter_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_AnimObjectNotify
struct UBPI_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ForceStanding
struct UBPI_BaseCharacter_C_ForceStanding_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.WaitForCrafting
struct UBPI_BaseCharacter_C_WaitForCrafting_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetBaseCharacterWorldLocation
struct UBPI_BaseCharacter_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetIsInWater
struct UBPI_BaseCharacter_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageComplete
struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set BreakState BPI
struct UBPI_BaseCharacter_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopsFinished
struct UBPI_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopIncreased
struct UBPI_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
struct UBPI_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageComplete
struct UBPI_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WorkState BPI
struct UBPI_BaseCharacter_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHolsterAnimation
struct UBPI_BaseCharacter_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetHeadTransform
struct UBPI_BaseCharacter_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetStatsComponent
struct UBPI_BaseCharacter_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfession
struct UBPI_BaseCharacter_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleOtherPose BPI
struct UBPI_BaseCharacter_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleLookingPose BPI
struct UBPI_BaseCharacter_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleTalkingPose BPI
struct UBPI_BaseCharacter_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleStandingPose BPI
struct UBPI_BaseCharacter_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleState BPI
struct UBPI_BaseCharacter_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageSettings
struct UBPI_BaseCharacter_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SelectPickUpAnim
struct UBPI_BaseCharacter_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_HolsterWeapon
struct UBPI_BaseCharacter_C_AnimNotify_HolsterWeapon_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_DespawnAnimItem
struct UBPI_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SpawnAnimItem
struct UBPI_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayCraftingAnimation
struct UBPI_BaseCharacter_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sitting BPI
struct UBPI_BaseCharacter_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sleeping BPI
struct UBPI_BaseCharacter_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopMovement
struct UBPI_BaseCharacter_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopRotation
struct UBPI_BaseCharacter_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_LimitCamera
struct UBPI_BaseCharacter_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerLookAt
struct UBPI_BaseCharacter_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageType
struct UBPI_BaseCharacter_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
struct UBPI_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentPickUpAnim
struct UBPI_BaseCharacter_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerMoveForInteraction
struct UBPI_BaseCharacter_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPickUpAnim
struct UBPI_BaseCharacter_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OverrideCanPerfromHitAction
struct UBPI_BaseCharacter_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetStrengthAlpha
struct UBPI_BaseCharacter_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Range Strength
struct UBPI_BaseCharacter_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableHitAction
struct UBPI_BaseCharacter_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnEndStageInteraction
struct UBPI_BaseCharacter_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnLoopStageInteraction
struct UBPI_BaseCharacter_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnStartStageInteraction
struct UBPI_BaseCharacter_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopSnappingIK
struct UBPI_BaseCharacter_C_AnimNotify_StopSnappingIK_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StartSnappingIK
struct UBPI_BaseCharacter_C_AnimNotify_StartSnappingIK_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ChangeAnimLoopState
struct UBPI_BaseCharacter_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SnapPoint
struct UBPI_BaseCharacter_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.isPlayer
struct UBPI_BaseCharacter_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCameraViewDirection
struct UBPI_BaseCharacter_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Get ALS_Stance BPI
struct UBPI_BaseCharacter_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetToolType
struct UBPI_BaseCharacter_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CancelAnimationLoops
struct UBPI_BaseCharacter_C_CancelAnimationLoops_Params
{
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableAction
struct UBPI_BaseCharacter_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RF_BPI
struct UBPI_BaseCharacter_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CameraShake_BPI
struct UBPI_BaseCharacter_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set CrouchingSpeed BPI
struct UBPI_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set SprintingSpeed BPI
struct UBPI_BaseCharacter_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RunningSpeed BPI
struct UBPI_BaseCharacter_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WalkingSpeed BPI
struct UBPI_BaseCharacter_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ShowTraces_BPI
struct UBPI_BaseCharacter_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_ViewMode BPI
struct UBPI_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AddCharacterRotation_BPI
struct UBPI_BaseCharacter_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SavePoseSnapshot_BPI
struct UBPI_BaseCharacter_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Play_GetUp_Anim BPI
struct UBPI_BaseCharacter_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Aiming BPI
struct UBPI_BaseCharacter_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_IdleEntryState BPI
struct UBPI_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_TurningInPlace BPI
struct UBPI_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_Pivot BPI
struct UBPI_BaseCharacter_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_MovementMode BPI
struct UBPI_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_RotationMode BPI
struct UBPI_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Stance BPI
struct UBPI_BaseCharacter_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Gait BPI
struct UBPI_BaseCharacter_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
