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

// Function Boy_AnimBP.Boy_AnimBP_C.GetInteractionEndpoint
struct UBoy_AnimBP_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetPhysicsHandle
struct UBoy_AnimBP_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayMountAnimation
struct UBoy_AnimBP_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetProfessionData
struct UBoy_AnimBP_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetIsInDialogue_BPI
struct UBoy_AnimBP_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetSystemManager
struct UBoy_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetBaseCharacterWorldLocation
struct UBoy_AnimBP_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayHolsterAnimation
struct UBoy_AnimBP_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetHeadTransform
struct UBoy_AnimBP_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetStatsComponent
struct UBoy_AnimBP_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetProfession
struct UBoy_AnimBP_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetCurrentPickUpAnim
struct UBoy_AnimBP_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetIsAnyMontageFromMapPlaying
struct UBoy_AnimBP_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.isPlayer
struct UBoy_AnimBP_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetCameraViewDirection
struct UBoy_AnimBP_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Get ALS_Stance BPI
struct UBoy_AnimBP_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimGraph
struct UBoy_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetPelvisDip
struct UBoy_AnimBP_C_GetPelvisDip_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNPCUnoptimized
struct UBoy_AnimBP_C_OnNPCUnoptimized_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNPCOptimized
struct UBoy_AnimBP_C_OnNPCOptimized_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CheckALSStance
struct UBoy_AnimBP_C_CheckALSStance_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNPCActive
struct UBoy_AnimBP_C_OnNPCActive_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNPCDeactive
struct UBoy_AnimBP_C_OnNPCDeactive_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.VerifyPoseID
struct UBoy_AnimBP_C_VerifyPoseID_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetTalkingPoseExcludes
struct UBoy_AnimBP_C_GetTalkingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetStandingPoseExcludes
struct UBoy_AnimBP_C_GetStandingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Boy_AnimBP.Boy_AnimBP_C.UpdateIKState
struct UBoy_AnimBP_C_UpdateIKState_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetCurrentSeason
struct UBoy_AnimBP_C_GetCurrentSeason_Params
{
	int                                                Season;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetPoseID
struct UBoy_AnimBP_C_SetPoseID_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.RandomizeAmountOfLoopsForSitting
struct UBoy_AnimBP_C_RandomizeAmountOfLoopsForSitting_Params
{
	float                                              Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Update Range Strength
struct UBoy_AnimBP_C_Update_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CheckIfShouldPlayAnotherLoop
struct UBoy_AnimBP_C_CheckIfShouldPlayAnotherLoop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetFullBodyAimOffset
struct UBoy_AnimBP_C_SetFullBodyAimOffset_Params
{
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetMontageAimOffset
struct UBoy_AnimBP_C_SetMontageAimOffset_Params
{
	class UBlendSpaceBase*                             MontageAimOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CheckIfNewMontage
struct UBoy_AnimBP_C_CheckIfNewMontage_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.IsAnyMontageFromMapPlaying
struct UBoy_AnimBP_C_IsAnyMontageFromMapPlaying_Params
{
	bool                                               AnyMontagePlaying;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetMontageSetting
struct UBoy_AnimBP_C_SetMontageSetting_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetMontageSettings
struct UBoy_AnimBP_C_GetMontageSettings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CheckIfIsLookingDown
struct UBoy_AnimBP_C_CheckIfIsLookingDown_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SelectMontageDependingOnTheAngle
struct UBoy_AnimBP_C_SelectMontageDependingOnTheAngle_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetDefaultValues 
struct UBoy_AnimBP_C_SetDefaultValues__Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetReferences
struct UBoy_AnimBP_C_SetReferences_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateLandPredictionAlpha
struct UBoy_AnimBP_C_CalculateLandPredictionAlpha_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateInAirLeaningValues
struct UBoy_AnimBP_C_CalculateInAirLeaningValues_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.On ALS_MovementMode Changed
struct UBoy_AnimBP_C_On_ALS_MovementMode_Changed_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculatePlayRates
struct UBoy_AnimBP_C_CalculatePlayRates_Params
{
	float                                              WalkAnimSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunAnimSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateGaitValue
struct UBoy_AnimBP_C_CalculateGaitValue_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.On ALS_Stance Changed
struct UBoy_AnimBP_C_On_ALS_Stance_Changed_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.TurnInPlace (Responsive)
struct UBoy_AnimBP_C_TurnInPlace__Responsive__Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateStartPosition
struct UBoy_AnimBP_C_CalculateStartPosition_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.GetVariablesFromBaseCharacterBP
struct UBoy_AnimBP_C_GetVariablesFromBaseCharacterBP_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.TurnInPlace (Delay)
struct UBoy_AnimBP_C_TurnInPlace__Delay__Params
{
	float                                              MaxCameraSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawLimit_1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayTime_1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate_1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims_1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawLimit_2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayTime_2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate_2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims_2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateAimOffset
struct UBoy_AnimBP_C_CalculateAimOffset_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateGroundedLeaningValues
struct UBoy_AnimBP_C_CalculateGroundedLeaningValues_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.CalculateMovementDirection
struct UBoy_AnimBP_C_CalculateMovementDirection_Params
{
	float                                              DirectionThresholdMin;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DirectionThresholdMax;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_04C65762466EA8C047364AB23448CF40
struct UBoy_AnimBP_C_OnCompleted_04C65762466EA8C047364AB23448CF40_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_04C65762466EA8C047364AB23448CF40
struct UBoy_AnimBP_C_OnBlendOut_04C65762466EA8C047364AB23448CF40_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_04C65762466EA8C047364AB23448CF40
struct UBoy_AnimBP_C_OnInterrupted_04C65762466EA8C047364AB23448CF40_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_04C65762466EA8C047364AB23448CF40
struct UBoy_AnimBP_C_OnNotifyBegin_04C65762466EA8C047364AB23448CF40_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_04C65762466EA8C047364AB23448CF40
struct UBoy_AnimBP_C_OnNotifyEnd_04C65762466EA8C047364AB23448CF40_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_A21041F14C5B7C95041481A575E2CA55
struct UBoy_AnimBP_C_OnCompleted_A21041F14C5B7C95041481A575E2CA55_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_A21041F14C5B7C95041481A575E2CA55
struct UBoy_AnimBP_C_OnBlendOut_A21041F14C5B7C95041481A575E2CA55_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_A21041F14C5B7C95041481A575E2CA55
struct UBoy_AnimBP_C_OnInterrupted_A21041F14C5B7C95041481A575E2CA55_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_A21041F14C5B7C95041481A575E2CA55
struct UBoy_AnimBP_C_OnNotifyBegin_A21041F14C5B7C95041481A575E2CA55_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_A21041F14C5B7C95041481A575E2CA55
struct UBoy_AnimBP_C_OnNotifyEnd_A21041F14C5B7C95041481A575E2CA55_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_B825274E49950A367E9B2AAE415F7929
struct UBoy_AnimBP_C_OnCompleted_B825274E49950A367E9B2AAE415F7929_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_B825274E49950A367E9B2AAE415F7929
struct UBoy_AnimBP_C_OnBlendOut_B825274E49950A367E9B2AAE415F7929_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_B825274E49950A367E9B2AAE415F7929
struct UBoy_AnimBP_C_OnInterrupted_B825274E49950A367E9B2AAE415F7929_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_B825274E49950A367E9B2AAE415F7929
struct UBoy_AnimBP_C_OnNotifyBegin_B825274E49950A367E9B2AAE415F7929_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_B825274E49950A367E9B2AAE415F7929
struct UBoy_AnimBP_C_OnNotifyEnd_B825274E49950A367E9B2AAE415F7929_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_9B4AFAF24C1EA11B26A303966950ADB8
struct UBoy_AnimBP_C_OnCompleted_9B4AFAF24C1EA11B26A303966950ADB8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_9B4AFAF24C1EA11B26A303966950ADB8
struct UBoy_AnimBP_C_OnBlendOut_9B4AFAF24C1EA11B26A303966950ADB8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_9B4AFAF24C1EA11B26A303966950ADB8
struct UBoy_AnimBP_C_OnInterrupted_9B4AFAF24C1EA11B26A303966950ADB8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_9B4AFAF24C1EA11B26A303966950ADB8
struct UBoy_AnimBP_C_OnNotifyBegin_9B4AFAF24C1EA11B26A303966950ADB8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_9B4AFAF24C1EA11B26A303966950ADB8
struct UBoy_AnimBP_C_OnNotifyEnd_9B4AFAF24C1EA11B26A303966950ADB8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_DC9606B942EB3F4A829F4BB77881BEE5
struct UBoy_AnimBP_C_OnCompleted_DC9606B942EB3F4A829F4BB77881BEE5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_DC9606B942EB3F4A829F4BB77881BEE5
struct UBoy_AnimBP_C_OnBlendOut_DC9606B942EB3F4A829F4BB77881BEE5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_DC9606B942EB3F4A829F4BB77881BEE5
struct UBoy_AnimBP_C_OnInterrupted_DC9606B942EB3F4A829F4BB77881BEE5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_DC9606B942EB3F4A829F4BB77881BEE5
struct UBoy_AnimBP_C_OnNotifyBegin_DC9606B942EB3F4A829F4BB77881BEE5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_DC9606B942EB3F4A829F4BB77881BEE5
struct UBoy_AnimBP_C_OnNotifyEnd_DC9606B942EB3F4A829F4BB77881BEE5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_9F26B3AB44B0844941422794066227FB
struct UBoy_AnimBP_C_OnCompleted_9F26B3AB44B0844941422794066227FB_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_9F26B3AB44B0844941422794066227FB
struct UBoy_AnimBP_C_OnBlendOut_9F26B3AB44B0844941422794066227FB_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_9F26B3AB44B0844941422794066227FB
struct UBoy_AnimBP_C_OnInterrupted_9F26B3AB44B0844941422794066227FB_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_9F26B3AB44B0844941422794066227FB
struct UBoy_AnimBP_C_OnNotifyBegin_9F26B3AB44B0844941422794066227FB_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_9F26B3AB44B0844941422794066227FB
struct UBoy_AnimBP_C_OnNotifyEnd_9F26B3AB44B0844941422794066227FB_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_71B48A0044341FF2B2B6B5BA01232B0A
struct UBoy_AnimBP_C_OnCompleted_71B48A0044341FF2B2B6B5BA01232B0A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_71B48A0044341FF2B2B6B5BA01232B0A
struct UBoy_AnimBP_C_OnBlendOut_71B48A0044341FF2B2B6B5BA01232B0A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_71B48A0044341FF2B2B6B5BA01232B0A
struct UBoy_AnimBP_C_OnInterrupted_71B48A0044341FF2B2B6B5BA01232B0A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_71B48A0044341FF2B2B6B5BA01232B0A
struct UBoy_AnimBP_C_OnNotifyBegin_71B48A0044341FF2B2B6B5BA01232B0A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_71B48A0044341FF2B2B6B5BA01232B0A
struct UBoy_AnimBP_C_OnNotifyEnd_71B48A0044341FF2B2B6B5BA01232B0A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnCompleted_2B50DC704E5E40CB8D7223900A66F4DD
struct UBoy_AnimBP_C_OnCompleted_2B50DC704E5E40CB8D7223900A66F4DD_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnBlendOut_2B50DC704E5E40CB8D7223900A66F4DD
struct UBoy_AnimBP_C_OnBlendOut_2B50DC704E5E40CB8D7223900A66F4DD_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnInterrupted_2B50DC704E5E40CB8D7223900A66F4DD
struct UBoy_AnimBP_C_OnInterrupted_2B50DC704E5E40CB8D7223900A66F4DD_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyBegin_2B50DC704E5E40CB8D7223900A66F4DD
struct UBoy_AnimBP_C_OnNotifyBegin_2B50DC704E5E40CB8D7223900A66F4DD_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnNotifyEnd_2B50DC704E5E40CB8D7223900A66F4DD
struct UBoy_AnimBP_C_OnNotifyEnd_2B50DC704E5E40CB8D7223900A66F4DD_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetMountAnimalType BPI
struct UBoy_AnimBP_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.UpdateIKAlpha
struct UBoy_AnimBP_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayMountSpecial
struct UBoy_AnimBP_C_PlayMountSpecial_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayMountStopAnimation
struct UBoy_AnimBP_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set Caught Prey BPI
struct UBoy_AnimBP_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnDeath
struct UBoy_AnimBP_C_OnDeath_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Knockback
struct UBoy_AnimBP_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.WaitForCrafting
struct UBoy_AnimBP_C_WaitForCrafting_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetIsInWater
struct UBoy_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_BreakMontageInterrupted
struct UBoy_AnimBP_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_BreakMontageBlendOut
struct UBoy_AnimBP_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_BreakMontageComplete
struct UBoy_AnimBP_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set BreakState BPI
struct UBoy_AnimBP_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_WorkLoopsFinished
struct UBoy_AnimBP_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_WorkLoopIncreased
struct UBoy_AnimBP_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_WorkMontageInterrupted
struct UBoy_AnimBP_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_WorkMontageComplete
struct UBoy_AnimBP_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set WorkState BPI
struct UBoy_AnimBP_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdleOtherPose BPI
struct UBoy_AnimBP_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdleLookingPose BPI
struct UBoy_AnimBP_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DEBAE1AA406ED869A77F80AB8FDF4700
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DEBAE1AA406ED869A77F80AB8FDF4700_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdleTalkingPose BPI
struct UBoy_AnimBP_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B7B32DE64F2177DB762A588522DEB33F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B7B32DE64F2177DB762A588522DEB33F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_91FC79BB476D7E79D76E9C8A123D53E5
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_91FC79BB476D7E79D76E9C8A123D53E5_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdleStandingPose BPI
struct UBoy_AnimBP_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetMontageSettings
struct UBoy_AnimBP_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SelectPickUpAnim
struct UBoy_AnimBP_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_HolsterWeapon
struct UBoy_AnimBP_C_AnimNotify_HolsterWeapon_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_DespawnAnimItem
struct UBoy_AnimBP_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_SpawnAnimItem
struct UBoy_AnimBP_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayCraftingAnimation
struct UBoy_AnimBP_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_3FFAAD1549D38D7E6CA8DA9C6A16170B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_3FFAAD1549D38D7E6CA8DA9C6A16170B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_19BEC1F746CA8673A98AAA959DE902E5
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_19BEC1F746CA8673A98AAA959DE902E5_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StopMovement
struct UBoy_AnimBP_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B270E7F247802FECA5076087A203F53E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B270E7F247802FECA5076087A203F53E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_507465B6414DF681A4CC428BD832FBDA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_507465B6414DF681A4CC428BD832FBDA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StopRotation
struct UBoy_AnimBP_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_F999046C43F96C8BA251F38B3FDCA050
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_F999046C43F96C8BA251F38B3FDCA050_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_71B7BCA3403E97B2C452AC9EB2881329
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_71B7BCA3403E97B2C452AC9EB2881329_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_4C9961F84E9DB3D2FDCA9CAF03C3BB29
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_4C9961F84E9DB3D2FDCA9CAF03C3BB29_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_LimitCamera
struct UBoy_AnimBP_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayerLookAt
struct UBoy_AnimBP_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_C97A295B4F8BFCBF8AA0A0BBC2A851FB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_C97A295B4F8BFCBF8AA0A0BBC2A851FB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_B2A62F9143937457A9A4A4A02EAF7C7E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_B2A62F9143937457A9A4A4A02EAF7C7E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayerMoveForInteraction
struct UBoy_AnimBP_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetStrengthAlpha
struct UBoy_AnimBP_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_A5A1843C49FDF4D1F92C7C91997C3D13
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_A5A1843C49FDF4D1F92C7C91997C3D13_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_4894817F4C4AD177E649EA9DBB71CF62
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_4894817F4C4AD177E649EA9DBB71CF62_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_AEA694604915333125370B978E162C8B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_AEA694604915333125370B978E162C8B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_1799C505414B87C671FCBCBF7D0F707C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_1799C505414B87C671FCBCBF7D0F707C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0DDB15E4443E4E7FFA52B5BB38EDED43
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0DDB15E4443E4E7FFA52B5BB38EDED43_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_65175F8C4339E4AA8EE27392D232EBBF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_65175F8C4339E4AA8EE27392D232EBBF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7589846344ADDE9C6E52C198476C3E01
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7589846344ADDE9C6E52C198476C3E01_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A30977AC49EE5AEB1487CD92EFE04BDC
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A30977AC49EE5AEB1487CD92EFE04BDC_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_04CDAEC74FB3C96250BE859344D2B727
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_04CDAEC74FB3C96250BE859344D2B727_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_715FCD2E44072E5AA5975AAFC16BAC6A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_715FCD2E44072E5AA5975AAFC16BAC6A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F380D0A54DF8F0B374C844B6DB17C64D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F380D0A54DF8F0B374C844B6DB17C64D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetToolType
struct UBoy_AnimBP_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CameraShake_BPI
struct UBoy_AnimBP_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AddCharacterRotation_BPI
struct UBoy_AnimBP_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_692BECC64544129A9D434EB1CBA3E2DD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_692BECC64544129A9D434EB1CBA3E2DD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EFB8C09F4AE9FDB3C6F352BD07DB233A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EFB8C09F4AE9FDB3C6F352BD07DB233A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8223F56B4AE6B966C43A9B98A0BE428D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8223F56B4AE6B966C43A9B98A0BE428D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B0F023C447591CA5CB6190A4A826387B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B0F023C447591CA5CB6190A4A826387B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A4CDED104A3EBB87D59F2DAFD532E6AD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A4CDED104A3EBB87D59F2DAFD532E6AD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B98A546E4126E701EECEE08C99A3E896
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B98A546E4126E701EECEE08C99A3E896_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BD83375743C7E77FD72C7D9E884B5253
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BD83375743C7E77FD72C7D9E884B5253_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7FE318174630B1D3DFA43B928790D910
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7FE318174630B1D3DFA43B928790D910_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A835F7F4A6D00F4AB01FDBCDEA4ABC0
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A835F7F4A6D00F4AB01FDBCDEA4ABC0_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_933E8ABD4D14E35562DD5F901D6094F1
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_933E8ABD4D14E35562DD5F901D6094F1_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F6C4B80C4F56E1740EFF799823D6BAFB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F6C4B80C4F56E1740EFF799823D6BAFB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C908C4DD44529A69D0E5F98CC03BC9CA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C908C4DD44529A69D0E5F98CC03BC9CA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_11072D87447FB94207D20B9AC529AFF4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_11072D87447FB94207D20B9AC529AFF4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EA4597764F86ADA574984E8707B9175B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EA4597764F86ADA574984E8707B9175B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_E1FF996D4F66835512DE56A6DE4F9B0B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_E1FF996D4F66835512DE56A6DE4F9B0B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DA3FDD90438C1CBD58D2CB83A8BF4FBD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DA3FDD90438C1CBD58D2CB83A8BF4FBD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0A44B1FD41D3DAF5108A0888C63790AD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0A44B1FD41D3DAF5108A0888C63790AD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C9F80BEB4BCDE204E97DEAB797B0AFDD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C9F80BEB4BCDE204E97DEAB797B0AFDD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_542F0B8F42B54C26D99E47BA263E42BF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_542F0B8F42B54C26D99E47BA263E42BF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_102BF3DD4A8F43F81EB9C78BD2313320
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_102BF3DD4A8F43F81EB9C78BD2313320_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AE17B7AD443F32A11A2735B3208624F3
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AE17B7AD443F32A11A2735B3208624F3_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F61BD2BC48D66EC60F91BE9A257717D1
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F61BD2BC48D66EC60F91BE9A257717D1_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2A1FB4C845F2059D16CEA6909E1A0838
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2A1FB4C845F2059D16CEA6909E1A0838_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_C4EF82A14F8DD9B13BE80D8217849360
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_C4EF82A14F8DD9B13BE80D8217849360_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_F131E27649A7BF4200843B810451AC6C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_F131E27649A7BF4200843B810451AC6C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_36B7288F4ADF4376F99C70B7C09788D0
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_36B7288F4ADF4376F99C70B7C09788D0_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_73E9D38E4CC92B5AC733C7A22A2503DF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_73E9D38E4CC92B5AC733C7A22A2503DF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_97DE4E334FF32696EC7508B31F23DABB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_97DE4E334FF32696EC7508B31F23DABB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_7B28CA7F40BB15BF71AE4D928855D2AA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_7B28CA7F40BB15BF71AE4D928855D2AA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_6E8BC0234CC4F7EE5247FBB953A4AA4B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_6E8BC0234CC4F7EE5247FBB953A4AA4B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B072764C4AE352A6C269ADA15C2C9EBB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_B072764C4AE352A6C269ADA15C2C9EBB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_5A1A0BAD49D8BE9AB8925EB75E3168BD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_5A1A0BAD49D8BE9AB8925EB75E3168BD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_7D806D624CCE1DC73A3C3493DEA552CF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_7D806D624CCE1DC73A3C3493DEA552CF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_EF61B81C4FDB715B6E7DDA88B77A76F3
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_EF61B81C4FDB715B6E7DDA88B77A76F3_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_8C31C58143098A06E5E2A784DA139B09
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_8C31C58143098A06E5E2A784DA139B09_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_839080FE49A5F2E51144F7A4DA48EA48
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_839080FE49A5F2E51144F7A4DA48EA48_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_A0E7E3104A6EB184BEDA758B46E6EC81
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_A0E7E3104A6EB184BEDA758B46E6EC81_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9FAAB1CD4D5A312F28C6009D1D5A4878
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9FAAB1CD4D5A312F28C6009D1D5A4878_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C50B74F549A533886FADD7A9A04BD026
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C50B74F549A533886FADD7A9A04BD026_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8F58640E4878E23974F2F9AB5253DE43
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8F58640E4878E23974F2F9AB5253DE43_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2BB35BFA4D14157F2DAE0086E06DE8AB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2BB35BFA4D14157F2DAE0086E06DE8AB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_02C4CE984B5557E9592E7C97631022C6
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_02C4CE984B5557E9592E7C97631022C6_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5D4BEE034025D8278FEC3093A7C41DB9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5D4BEE034025D8278FEC3093A7C41DB9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8311323E431D814C488F24B561239ACB
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8311323E431D814C488F24B561239ACB_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1F62342443B5C2780C3C77ABFABD6673
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1F62342443B5C2780C3C77ABFABD6673_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F46EDE31482F4E6BE30D5DBC11DBD4A5
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F46EDE31482F4E6BE30D5DBC11DBD4A5_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_339FA8014E7FDBDD8DEE6AB7CF3B5CB2
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_339FA8014E7FDBDD8DEE6AB7CF3B5CB2_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9658DA3246743753079624A33AD0AFB4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9658DA3246743753079624A33AD0AFB4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6754D0914EAF7BCB6CD02CBA35163B3B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6754D0914EAF7BCB6CD02CBA35163B3B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BFEF3FA74C6EEB63A8C198A921966055
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BFEF3FA74C6EEB63A8C198A921966055_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0ECB79034EB5E9336ECE6C82E2648F4F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0ECB79034EB5E9336ECE6C82E2648F4F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C00DC84744C6F48B3EA1BE8081FAF43F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C00DC84744C6F48B3EA1BE8081FAF43F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DFCC197F4CB8312D5F0CFEA4D0BA6F64
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DFCC197F4CB8312D5F0CFEA4D0BA6F64_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_06A608B34E983AA9CC348CA819F7D6B8
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_06A608B34E983AA9CC348CA819F7D6B8_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C8A8B4B74004872A695EAFBCBA295E25
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C8A8B4B74004872A695EAFBCBA295E25_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BE17F77F411010790AE8FFBB598397C4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BE17F77F411010790AE8FFBB598397C4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AE8D0A45488994EA141E28B02719AC47
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AE8D0A45488994EA141E28B02719AC47_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_76184D594172945DCC7CED9B84B2F5A4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_76184D594172945DCC7CED9B84B2F5A4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBFD8F714C4957FE1E616CB7B2B3888A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBFD8F714C4957FE1E616CB7B2B3888A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9E9BFDA2407FA40250EE549DE3193D1D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9E9BFDA2407FA40250EE549DE3193D1D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_36FDFD0649A68168E350D38E13CB16B3
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_36FDFD0649A68168E350D38E13CB16B3_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A348092B432139777677ADB705C7EFCA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A348092B432139777677ADB705C7EFCA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A3E2A494BC8FDE5DE8CBDBEE7DA894E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A3E2A494BC8FDE5DE8CBDBEE7DA894E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6C72CD5E4239BF5F65974DBCAE089BA0
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6C72CD5E4239BF5F65974DBCAE089BA0_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9D2C08984426C60C4563CE9574C27F91
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9D2C08984426C60C4563CE9574C27F91_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4583CB4B4DC5F126B081E394FA218798
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4583CB4B4DC5F126B081E394FA218798_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C165E87048ACDC56B6F9F89A0C959845
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C165E87048ACDC56B6F9F89A0C959845_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E077847C4AB798110794669FF283EC4B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E077847C4AB798110794669FF283EC4B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_016F970F44DB3745B04EE58081EDBCEF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_016F970F44DB3745B04EE58081EDBCEF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ED09F69B494A5CB2DD322989A97BAA39
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ED09F69B494A5CB2DD322989A97BAA39_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBDFCA1943434AC6D8B74E9C984D0F09
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBDFCA1943434AC6D8B74E9C984D0F09_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1AB631164D17629B27F3D4B322B530D3
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1AB631164D17629B27F3D4B322B530D3_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7FE156724C65A832CF75AD90879297F4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7FE156724C65A832CF75AD90879297F4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_635CD954490015CF9BEA6AADE6BBEFF8
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_635CD954490015CF9BEA6AADE6BBEFF8_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4135F7D140643010EEBE82A0B450D350
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4135F7D140643010EEBE82A0B450D350_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7B73320A4B9B09995E042083DB9F1CE7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7B73320A4B9B09995E042083DB9F1CE7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_81E94FCB42D57E1ACBA1CC830FF07392
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_81E94FCB42D57E1ACBA1CC830FF07392_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_114C7E6F4C2851C171E0BAA8117B433B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_114C7E6F4C2851C171E0BAA8117B433B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_98EA4BB84A4C9491AD4A77AA25248154
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_98EA4BB84A4C9491AD4A77AA25248154_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4761D7CF4F8229CF85FC0EA17E6D9049
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4761D7CF4F8229CF85FC0EA17E6D9049_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_940BF6FA459789C5BC5BACA8CDE52427
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_940BF6FA459789C5BC5BACA8CDE52427_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_548845CF4D947348065CA887BFFE8893
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_548845CF4D947348065CA887BFFE8893_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E88E94FB4422ABECB959F4A4FD6D0895
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E88E94FB4422ABECB959F4A4FD6D0895_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_18F2A97F4F9E251E998F23A05339A502
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_18F2A97F4F9E251E998F23A05339A502_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AFF06C6F476F78AE48942790F165DA03
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AFF06C6F476F78AE48942790F165DA03_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_586B5E7644A3442E1912F58D9E631DAD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_586B5E7644A3442E1912F58D9E631DAD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AB74FAB94E9EB274A573F9810980B739
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AB74FAB94E9EB274A573F9810980B739_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3F57698648628FE381C7D3873A9AFC4B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3F57698648628FE381C7D3873A9AFC4B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ADD83E494E4D904AE5578286DDCBE80C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ADD83E494E4D904AE5578286DDCBE80C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_858AE0AC4153C06D46585DBDEA0B2130
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_858AE0AC4153C06D46585DBDEA0B2130_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8C2CAEDD4A6D03A4F3EEC2882DAF0FFF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8C2CAEDD4A6D03A4F3EEC2882DAF0FFF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BEB8375A4090367187F6FE9926B5853E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BEB8375A4090367187F6FE9926B5853E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4F97D890456E67C848EF32B9BAC21A6D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4F97D890456E67C848EF32B9BAC21A6D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E5BD07A94069E4C0BB0F209F02C07D43
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E5BD07A94069E4C0BB0F209F02C07D43_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2945894A4DDC312570A5C1AED82E819A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2945894A4DDC312570A5C1AED82E819A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_551A15E349BF255797293FA6541B21EA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_551A15E349BF255797293FA6541B21EA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B300D1CC48FB105F4D27AC9FD6CE9248
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B300D1CC48FB105F4D27AC9FD6CE9248_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C93F65DA40283CC6AC81C98B6E445246
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C93F65DA40283CC6AC81C98B6E445246_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EDD436FE40AFA91A6C1556A4B0DFEAF1
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EDD436FE40AFA91A6C1556A4B0DFEAF1_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ED9EB850453E247B1C0C9E8B0C808C2E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_ED9EB850453E247B1C0C9E8B0C808C2E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_163EBA5F4D2C6DD7D821E6B4182DEC0C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_163EBA5F4D2C6DD7D821E6B4182DEC0C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_66BE45E748482A068DB84681438F483C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_66BE45E748482A068DB84681438F483C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_20C247694B89333CFD91898B9EF32F1D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_BlendListByBool_20C247694B89333CFD91898B9EF32F1D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_5B69292646538F01856764B0C6BF01C4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_5B69292646538F01856764B0C6BF01C4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_99226C8F46DC496C2BDEF8AF88764EB7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_LayeredBoneBlend_99226C8F46DC496C2BDEF8AF88764EB7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_503CABBD4518FFA69C7735B4C852E9DD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_503CABBD4518FFA69C7735B4C852E9DD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C889D4D845AADDE9ED5F29B7E2848DD9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C889D4D845AADDE9ED5F29B7E2848DD9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EE34CD734C302342EA120C89D7DC6031
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EE34CD734C302342EA120C89D7DC6031_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_30CC93484F77335B5134EC8463E3B697
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_30CC93484F77335B5134EC8463E3B697_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_04B48CEE4B622118D0118BB3AD84D02D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_04B48CEE4B622118D0118BB3AD84D02D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F61DF4CA4DBE25B98AF105AD5668BA84
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F61DF4CA4DBE25B98AF105AD5668BA84_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F29216E74606027755AE3D8DF259A76F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F29216E74606027755AE3D8DF259A76F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9901729446322F880E25909AB1DF2903
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9901729446322F880E25909AB1DF2903_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_49FCF810489CD6C18B06E9A9AE1A122C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_49FCF810489CD6C18B06E9A9AE1A122C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_370CC6624ACC901BCD79DB9D1A7ED8E9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_370CC6624ACC901BCD79DB9D1A7ED8E9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_47EC7A224C03A54D86A35DAC9FE4E8E1
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_47EC7A224C03A54D86A35DAC9FE4E8E1_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D4FE98E349C1AEFEA496FEAF90D7A95E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D4FE98E349C1AEFEA496FEAF90D7A95E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0CEED70742E7D69E16EFEEB91AABA5A7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0CEED70742E7D69E16EFEEB91AABA5A7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B890C2924F728AC5EFB6FC9CE68856E6
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B890C2924F728AC5EFB6FC9CE68856E6_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F715A5004716B9BED7D7FCA9055C8D19
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F715A5004716B9BED7D7FCA9055C8D19_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_70BB5EE24914D8F06FEC239D557FEE77
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_70BB5EE24914D8F06FEC239D557FEE77_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_94DE02ED4CBF2D1B2C72E69861CA152A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_94DE02ED4CBF2D1B2C72E69861CA152A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0FCB45E1466EFD8B964445B110ED8E80
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0FCB45E1466EFD8B964445B110ED8E80_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E4005DAE4FABC2CEBA5060B7BD2692E4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E4005DAE4FABC2CEBA5060B7BD2692E4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CB39D9054ED9A2BF0A4EF19C4EA07044
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CB39D9054ED9A2BF0A4EF19C4EA07044_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F9DC962A40D02024E82E719DF6757BB5
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F9DC962A40D02024E82E719DF6757BB5_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4F360AF142819CF36C26ECBB26734D95
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_4F360AF142819CF36C26ECBB26734D95_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_560AFCCC4EF6805D854E8D9103965457
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_560AFCCC4EF6805D854E8D9103965457_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BA6240EA4DE1EC490B27E181AD6E0735
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BA6240EA4DE1EC490B27E181AD6E0735_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_280D20D1457958AD77582DA3A5DC69EC
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_280D20D1457958AD77582DA3A5DC69EC_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C702EDE447DDAC05C3DDE7B9715EF49F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C702EDE447DDAC05C3DDE7B9715EF49F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3C8FDD7B4D08907C98D0ADAE87C47E92
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3C8FDD7B4D08907C98D0ADAE87C47E92_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3F3DDB7A43FD7E12B89E01ACDC59DEBD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3F3DDB7A43FD7E12B89E01ACDC59DEBD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C9A5ECF040F3896B4B1BFCAD2802B49E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C9A5ECF040F3896B4B1BFCAD2802B49E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_695FEA0D48DBEA7080C532800DCEFB79
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_695FEA0D48DBEA7080C532800DCEFB79_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F78912A445AFD4891614B7810B3D493A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F78912A445AFD4891614B7810B3D493A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5B83B3D240E3263F5B681F80A4D63105
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5B83B3D240E3263F5B681F80A4D63105_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8D2CE3824DB44E5D78006E9E91520686
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8D2CE3824DB44E5D78006E9E91520686_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D1EEEF734D99A9F352351CB76137DCFA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D1EEEF734D99A9F352351CB76137DCFA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBE3D05E43E1054829C3AE8658269796
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FBE3D05E43E1054829C3AE8658269796_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9F69CD9B44B4A65AD7FC29AAC1352C9C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9F69CD9B44B4A65AD7FC29AAC1352C9C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3FC81CC54F53AB12CD6ADA9614392100
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3FC81CC54F53AB12CD6ADA9614392100_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A29E6CD7495D9BCDCC80E08EAB62AC0E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A29E6CD7495D9BCDCC80E08EAB62AC0E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7911120A4006FA13C9DA2BA5E6A89EC7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7911120A4006FA13C9DA2BA5E6A89EC7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AA114E374AD043098E92BA9BD986EB83
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AA114E374AD043098E92BA9BD986EB83_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_82A8F20A438A92DA8FCD3B8BA2B780A7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_82A8F20A438A92DA8FCD3B8BA2B780A7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AC9E00D5405F9ECE6CF8BD922E966CD9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_AC9E00D5405F9ECE6CF8BD922E966CD9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8B9BD61447407DA48CF42D957B277D3E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8B9BD61447407DA48CF42D957B277D3E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A8A64C04A67F9DCAEE6849B9ADCAFFF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8A8A64C04A67F9DCAEE6849B9ADCAFFF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DDF8BAF347E0777BB59F51A908D54F5B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DDF8BAF347E0777BB59F51A908D54F5B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_00BF56614F7F071C319DE9A9D2B3B134
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_00BF56614F7F071C319DE9A9D2B3B134_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C47D96D24E0EA65C22BC9EBCB663CFF3
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C47D96D24E0EA65C22BC9EBCB663CFF3_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5977EC5148916E6062240E9E3FA17F33
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5977EC5148916E6062240E9E3FA17F33_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BACF417A4F365ACCF27EADA92FB5BE99
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_BACF417A4F365ACCF27EADA92FB5BE99_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5275221841784196713D32AAAE1FBD78
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5275221841784196713D32AAAE1FBD78_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3BCCA1464718045EA532AC90B8C4A245
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3BCCA1464718045EA532AC90B8C4A245_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1BCEC7F5407005293CB068BD26DE17FF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1BCEC7F5407005293CB068BD26DE17FF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1F71F60D4F2A1B44C1CD0E991A88AB71
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1F71F60D4F2A1B44C1CD0E991A88AB71_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_63AEF4974BBF42C91FB28C98F2F75178
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_63AEF4974BBF42C91FB28C98F2F75178_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3E1BEA464C2E9E13846A1688E906B535
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3E1BEA464C2E9E13846A1688E906B535_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_17E04F44437B2ED92B74D0B91DA83AC9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_17E04F44437B2ED92B74D0B91DA83AC9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3510DCAA43CD32D227E037ABF42C9023
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3510DCAA43CD32D227E037ABF42C9023_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6240AC0F4168E7FEA9927BB08C8143AF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6240AC0F4168E7FEA9927BB08C8143AF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_387EA0B543A23AA810A7CD933772842D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_387EA0B543A23AA810A7CD933772842D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6D790E1A4F7C6B0FA18CBB90AEEC22A0
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6D790E1A4F7C6B0FA18CBB90AEEC22A0_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_900086084B671C4D171AB0B722A77253
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_900086084B671C4D171AB0B722A77253_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DEA9859C41228A123DBCEA84A62B0B1B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DEA9859C41228A123DBCEA84A62B0B1B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5D020B1B4C7EC87B367B49B8E0230A64
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5D020B1B4C7EC87B367B49B8E0230A64_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2E8A1A2B4352DFDB70CEEF99E5173D84
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2E8A1A2B4352DFDB70CEEF99E5173D84_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_84D2E8AD4402B2094BD242B67AFB7A0B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_84D2E8AD4402B2094BD242B67AFB7A0B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E69B20754E581834020E83BF02232A59
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E69B20754E581834020E83BF02232A59_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_734440294E1B5FBACE0E618D57305C77
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_734440294E1B5FBACE0E618D57305C77_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_35CE4067421CABFBC1BD2F886214D4DF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_35CE4067421CABFBC1BD2F886214D4DF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_36628AB8457C895CF636F3A4C1ABBD41
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_36628AB8457C895CF636F3A4C1ABBD41_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_14C7674F4B114647520CA9857C2E2D0F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_14C7674F4B114647520CA9857C2E2D0F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_215728924A3EEA2114B602822E6AC998
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_215728924A3EEA2114B602822E6AC998_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_779AE1BB4F0C94F0580B448D5642B825
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_779AE1BB4F0C94F0580B448D5642B825_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7E2333DD4A0B4F229948E684EDD95FE7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7E2333DD4A0B4F229948E684EDD95FE7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_06670CF74C4F7247CC7968886E710543
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_06670CF74C4F7247CC7968886E710543_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7DBEF3414EDD0AA7A395ADA6EB43F7CC
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7DBEF3414EDD0AA7A395ADA6EB43F7CC_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_69F7A27B4BC712856916FAA323A2F879
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_69F7A27B4BC712856916FAA323A2F879_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_441AB0614F77509B77AE4AA6498CD582
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_441AB0614F77509B77AE4AA6498CD582_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5DA262C346919F0C080F08951C6797FF
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5DA262C346919F0C080F08951C6797FF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5ECCECF745D40E147C435A90CAB19653
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5ECCECF745D40E147C435A90CAB19653_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F2E873124702369AA52E02BFF353E191
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F2E873124702369AA52E02BFF353E191_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DACFA45846DD25796665ADA250FABB17
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_DACFA45846DD25796665ADA250FABB17_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5A869FC74229200A2CC210BB0D13E790
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_5A869FC74229200A2CC210BB0D13E790_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FEA8298D45782BE04C9C8A8D21C27242
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FEA8298D45782BE04C9C8A8D21C27242_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_25AACFD14EDDA79DE9D64EB5A044B8A9
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_25AACFD14EDDA79DE9D64EB5A044B8A9_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_80476CA445E5ACCD2F586BA90507AA9A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_80476CA445E5ACCD2F586BA90507AA9A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_221C388A4A130A5C4B5A30AE7BFFEB87
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_221C388A4A130A5C4B5A30AE7BFFEB87_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_230E40AF4FFC3A27780AD0B69AFF2E7E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_230E40AF4FFC3A27780AD0B69AFF2E7E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FD3A2ACB455821C9130834AA843E5F9E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_FD3A2ACB455821C9130834AA843E5F9E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C586649746D4DC67C2384BBDEB4ED33A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_C586649746D4DC67C2384BBDEB4ED33A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D2BB22CA4529C8702B2063B122214F2C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_D2BB22CA4529C8702B2063B122214F2C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E0209D604B56F94B011A648B06122C11
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_E0209D604B56F94B011A648B06122C11_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6186569E4C15AFF5AAD2DB9B16D7BF5E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6186569E4C15AFF5AAD2DB9B16D7BF5E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A750C9064E597DC8869A2B8C5916D0DA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_A750C9064E597DC8869A2B8C5916D0DA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1BCDFBF34CA63F78A0F6D8986D02018D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1BCDFBF34CA63F78A0F6D8986D02018D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B3FAB93F43F62BEAAB9AF39C163FA3BC
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B3FAB93F43F62BEAAB9AF39C163FA3BC_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6F4047B049C132D1469FD5B224276B5F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6F4047B049C132D1469FD5B224276B5F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F2D01E1848A904C02B88CDBE80F00C40
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F2D01E1848A904C02B88CDBE80F00C40_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_94129A474683164347919283BC7D2438
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_94129A474683164347919283BC7D2438_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_48BF968143CBEA34B7A63C9780C42524
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_48BF968143CBEA34B7A63C9780C42524_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7BAA66AB481D8FD258C5AB812217076F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7BAA66AB481D8FD258C5AB812217076F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0A70AFB640D2CCD83FF0DBA0396ADE1C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0A70AFB640D2CCD83FF0DBA0396ADE1C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_61F7AB394F5ECB2F0A2D80898156710F
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_61F7AB394F5ECB2F0A2D80898156710F_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8EF9420441123AAC0953898CE4413607
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_8EF9420441123AAC0953898CE4413607_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F8F0D2594E76A9538DF3728422CB48CD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F8F0D2594E76A9538DF3728422CB48CD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B04881CC469856F39DA65BA57C5AFA7B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_B04881CC469856F39DA65BA57C5AFA7B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F75B9DB54597ED3041C5D6BDC9A235A4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F75B9DB54597ED3041C5D6BDC9A235A4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_481778E14C5E9224853AB896207AD788
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_481778E14C5E9224853AB896207AD788_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1CAF922A4C61CA42C7AEE899F3729751
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_1CAF922A4C61CA42C7AEE899F3729751_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6469303242F43471C83C13976F9B7082
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_6469303242F43471C83C13976F9B7082_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2E0300964C1FAC88E8262AB59ADD57B5
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2E0300964C1FAC88E8262AB59ADD57B5_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EC2F2B3743CAC36B442FD5BE7BE0BD60
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_EC2F2B3743CAC36B442FD5BE7BE0BD60_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_27F741C64F61941530184BB6B20AB3AC
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_27F741C64F61941530184BB6B20AB3AC_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CA9EA6E4405A0CC789899581D1D2A81D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CA9EA6E4405A0CC789899581D1D2A81D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_46A3072749184B22D2D2C5A99C062F4C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_46A3072749184B22D2D2C5A99C062F4C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F07470324549329352A5FC83A05D3564
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_F07470324549329352A5FC83A05D3564_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7C250D894A8A8B7B1F39A5BAD3A70CFA
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_7C250D894A8A8B7B1F39A5BAD3A70CFA_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_72B3E6054B49A7F03BAB569FF54DE88A
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_72B3E6054B49A7F03BAB569FF54DE88A_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3AC0433849C45EBFB1DDECA51AFD123E
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_3AC0433849C45EBFB1DDECA51AFD123E_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9E34291843B12A8257A6B39CF12F6EF7
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_9E34291843B12A8257A6B39CF12F6EF7_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CA154EE64167CB1FCF526F831FA521BD
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_CA154EE64167CB1FCF526F831FA521BD_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_55DC49C4417DA9FAB52587B52F24724C
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_55DC49C4417DA9FAB52587B52F24724C_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2B3C29D24CEEC671998E049AD6A48FB4
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_2B3C29D24CEEC671998E049AD6A48FB4_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_428389B946525A33A7031F996E9E723B
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_428389B946525A33A7031F996E9E723B_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0D2FEA4E4BC7A9622EDAD9B27E1F17A1
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_0D2FEA4E4BC7A9622EDAD9B27E1F17A1_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_17A8015243A255F3FCCC128510F54F4D
struct UBoy_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Boy_AnimBP_AnimGraphNode_TransitionResult_17A8015243A255F3FCCC128510F54F4D_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.BlueprintInitializeAnimation
struct UBoy_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.BlueprintUpdateAnimation
struct UBoy_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetEnableIK_BPI
struct UBoy_AnimBP_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_AnimObjectNotify
struct UBoy_AnimBP_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdlePoseByID BPI
struct UBoy_AnimBP_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.ForceStanding
struct UBoy_AnimBP_C_ForceStanding_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set Sitting BPI
struct UBoy_AnimBP_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set IdleState BPI
struct UBoy_AnimBP_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set Sleeping BPI
struct UBoy_AnimBP_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SetMontageType
struct UBoy_AnimBP_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set Range Strength
struct UBoy_AnimBP_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OverrideCanPerfromHitAction
struct UBoy_AnimBP_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.HoldableHitAction
struct UBoy_AnimBP_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnEndStageInteraction
struct UBoy_AnimBP_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnLoopStageInteraction
struct UBoy_AnimBP_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.OnStartStageInteraction
struct UBoy_AnimBP_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Loop Montage
struct UBoy_AnimBP_C_Loop_Montage_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.ChangeAnimLoopState
struct UBoy_AnimBP_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.CancelAnimationLoops
struct UBoy_AnimBP_C_CancelAnimationLoops_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.HoldableAction
struct UBoy_AnimBP_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set RF_BPI
struct UBoy_AnimBP_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set CrouchingSpeed BPI
struct UBoy_AnimBP_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set SprintingSpeed BPI
struct UBoy_AnimBP_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set RunningSpeed BPI
struct UBoy_AnimBP_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set WalkingSpeed BPI
struct UBoy_AnimBP_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_TurningInPlace BPI
struct UBoy_AnimBP_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_IdleEntryState BPI
struct UBoy_AnimBP_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Pivot BPI
struct UBoy_AnimBP_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_MovementMode BPI
struct UBoy_AnimBP_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_Gait BPI
struct UBoy_AnimBP_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_Stance BPI
struct UBoy_AnimBP_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_RotationMode BPI
struct UBoy_AnimBP_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_Aiming BPI
struct UBoy_AnimBP_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Play_GetUp_Anim BPI
struct UBoy_AnimBP_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.SavePoseSnapshot_BPI
struct UBoy_AnimBP_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.Set ALS_ViewMode BPI
struct UBoy_AnimBP_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.ShowTraces_BPI
struct UBoy_AnimBP_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_SelectGroundSittingPose
struct UBoy_AnimBP_C_AnimNotify_SelectGroundSittingPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_SelectSittingPose
struct UBoy_AnimBP_C_AnimNotify_SelectSittingPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_IdleTransitionBool
struct UBoy_AnimBP_C_AnimNotify_IdleTransitionBool_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_GetRandomTalkingPose
struct UBoy_AnimBP_C_AnimNotify_GetRandomTalkingPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_GetRandomOtherPose
struct UBoy_AnimBP_C_AnimNotify_GetRandomOtherPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_GetRandomLookingPose
struct UBoy_AnimBP_C_AnimNotify_GetRandomLookingPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_GetRandomStandingPose
struct UBoy_AnimBP_C_AnimNotify_GetRandomStandingPose_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EnteredSleeping
struct UBoy_AnimBP_C_AnimNotify_EnteredSleeping_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EnteredSitting
struct UBoy_AnimBP_C_AnimNotify_EnteredSitting_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartWakeUp
struct UBoy_AnimBP_C_AnimNotify_StartWakeUp_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EndGoToSleep
struct UBoy_AnimBP_C_AnimNotify_EndGoToSleep_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EndSleep
struct UBoy_AnimBP_C_AnimNotify_EndSleep_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartSleep
struct UBoy_AnimBP_C_AnimNotify_StartSleep_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EndGetUp
struct UBoy_AnimBP_C_AnimNotify_EndGetUp_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartGetUp
struct UBoy_AnimBP_C_AnimNotify_StartGetUp_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EndSitting
struct UBoy_AnimBP_C_AnimNotify_EndSitting_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartSitting
struct UBoy_AnimBP_C_AnimNotify_StartSitting_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_InteractWithActor
struct UBoy_AnimBP_C_AnimNotify_InteractWithActor_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayPickUpAnim
struct UBoy_AnimBP_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_PickUpItem
struct UBoy_AnimBP_C_AnimNotify_PickUpItem_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StopAiming
struct UBoy_AnimBP_C_AnimNotify_StopAiming_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartAiming
struct UBoy_AnimBP_C_AnimNotify_StartAiming_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_PerformInteraction
struct UBoy_AnimBP_C_AnimNotify_PerformInteraction_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_DisableHitAction
struct UBoy_AnimBP_C_AnimNotify_DisableHitAction_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_HoldableTickStop
struct UBoy_AnimBP_C_AnimNotify_HoldableTickStop_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_HoldableTickStart
struct UBoy_AnimBP_C_AnimNotify_HoldableTickStart_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_EndingStageFinished
struct UBoy_AnimBP_C_AnimNotify_EndingStageFinished_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_LoopStageFinished
struct UBoy_AnimBP_C_AnimNotify_LoopStageFinished_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_BeginningStageFinished
struct UBoy_AnimBP_C_AnimNotify_BeginningStageFinished_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StopSnappingIK
struct UBoy_AnimBP_C_AnimNotify_StopSnappingIK_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartSnappingIK
struct UBoy_AnimBP_C_AnimNotify_StartSnappingIK_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_ResetSnapping
struct UBoy_AnimBP_C_AnimNotify_ResetSnapping_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_StartSnapping
struct UBoy_AnimBP_C_AnimNotify_StartSnapping_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_SnapPoint
struct UBoy_AnimBP_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_RF_to_LF
struct UBoy_AnimBP_C_AnimNotify_RF_to_LF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_LF_to_RF
struct UBoy_AnimBP_C_AnimNotify_LF_to_RF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CRF_to_CLF
struct UBoy_AnimBP_C_AnimNotify_CRF_to_CLF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CLF_to_CRF
struct UBoy_AnimBP_C_AnimNotify_CLF_to_CRF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_RF_to_CRF
struct UBoy_AnimBP_C_AnimNotify_RF_to_CRF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CRF_to_RF
struct UBoy_AnimBP_C_AnimNotify_CRF_to_RF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CRF_to_N
struct UBoy_AnimBP_C_AnimNotify_CRF_to_N_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_N_to_CRF
struct UBoy_AnimBP_C_AnimNotify_N_to_CRF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CLF_to_LF
struct UBoy_AnimBP_C_AnimNotify_CLF_to_LF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_LF_to_CLF
struct UBoy_AnimBP_C_AnimNotify_LF_to_CLF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_CLF_to_N
struct UBoy_AnimBP_C_AnimNotify_CLF_to_N_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_N_to_CLF
struct UBoy_AnimBP_C_AnimNotify_N_to_CLF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_RF_to_N
struct UBoy_AnimBP_C_AnimNotify_RF_to_N_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_N_to_RF
struct UBoy_AnimBP_C_AnimNotify_N_to_RF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_LF_to_N
struct UBoy_AnimBP_C_AnimNotify_LF_to_N_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_N_to_LF
struct UBoy_AnimBP_C_AnimNotify_N_to_LF_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.IdleTransition
struct UBoy_AnimBP_C_IdleTransition_Params
{
	class UAnimMontage*                                Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Left_Stopping
struct UBoy_AnimBP_C_AnimNotify_Left_Stopping_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Entered_Stopping
struct UBoy_AnimBP_C_AnimNotify_Entered_Stopping_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Land
struct UBoy_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Left_Pivot
struct UBoy_AnimBP_C_AnimNotify_Left_Pivot_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Entered_Pivot
struct UBoy_AnimBP_C_AnimNotify_Entered_Pivot_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Entered_NotMoving
struct UBoy_AnimBP_C_AnimNotify_Entered_NotMoving_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Left_Moving
struct UBoy_AnimBP_C_AnimNotify_Left_Moving_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Entered_Moving
struct UBoy_AnimBP_C_AnimNotify_Entered_Moving_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.AnimNotify_Left_NotMoving
struct UBoy_AnimBP_C_AnimNotify_Left_NotMoving_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Reset Player Controller State
struct UBoy_AnimBP_C_Reset_Player_Controller_State_Params
{
};

// Function Boy_AnimBP.Boy_AnimBP_C.Change Player Controller State
struct UBoy_AnimBP_C_Change_Player_Controller_State_Params
{
	struct FST_MontagesSettings                        MontageSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Boy_AnimBP.Boy_AnimBP_C.PlayMontage(Networked)
struct UBoy_AnimBP_C_PlayMontage_Networked__Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Boy_AnimBP.Boy_AnimBP_C.ExecuteUbergraph_Boy_AnimBP
struct UBoy_AnimBP_C_ExecuteUbergraph_Boy_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
