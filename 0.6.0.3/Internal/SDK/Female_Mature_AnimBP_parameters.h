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

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetInteractionEndpoint
struct UFemale_Mature_AnimBP_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetPhysicsHandle
struct UFemale_Mature_AnimBP_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayMountAnimation
struct UFemale_Mature_AnimBP_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetProfessionData
struct UFemale_Mature_AnimBP_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetIsInDialogue_BPI
struct UFemale_Mature_AnimBP_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetSystemManager
struct UFemale_Mature_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetBaseCharacterWorldLocation
struct UFemale_Mature_AnimBP_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayHolsterAnimation
struct UFemale_Mature_AnimBP_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetHeadTransform
struct UFemale_Mature_AnimBP_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetStatsComponent
struct UFemale_Mature_AnimBP_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetProfession
struct UFemale_Mature_AnimBP_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetCurrentPickUpAnim
struct UFemale_Mature_AnimBP_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetIsAnyMontageFromMapPlaying
struct UFemale_Mature_AnimBP_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.isPlayer
struct UFemale_Mature_AnimBP_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetCameraViewDirection
struct UFemale_Mature_AnimBP_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Get ALS_Stance BPI
struct UFemale_Mature_AnimBP_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimGraph
struct UFemale_Mature_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetPelvisDip
struct UFemale_Mature_AnimBP_C_GetPelvisDip_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNPCUnoptimized
struct UFemale_Mature_AnimBP_C_OnNPCUnoptimized_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNPCOptimized
struct UFemale_Mature_AnimBP_C_OnNPCOptimized_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CheckALSStance
struct UFemale_Mature_AnimBP_C_CheckALSStance_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNPCActive
struct UFemale_Mature_AnimBP_C_OnNPCActive_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNPCDeactive
struct UFemale_Mature_AnimBP_C_OnNPCDeactive_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.VerifyPoseID
struct UFemale_Mature_AnimBP_C_VerifyPoseID_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetTalkingPoseExcludes
struct UFemale_Mature_AnimBP_C_GetTalkingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetStandingPoseExcludes
struct UFemale_Mature_AnimBP_C_GetStandingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.UpdateIKState
struct UFemale_Mature_AnimBP_C_UpdateIKState_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetCurrentSeason
struct UFemale_Mature_AnimBP_C_GetCurrentSeason_Params
{
	int                                                Season;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetPoseID
struct UFemale_Mature_AnimBP_C_SetPoseID_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.RandomizeAmountOfLoopsForSitting
struct UFemale_Mature_AnimBP_C_RandomizeAmountOfLoopsForSitting_Params
{
	float                                              Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SelectBreakMontage
struct UFemale_Mature_AnimBP_C_SelectBreakMontage_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SelectWorkMontage
struct UFemale_Mature_AnimBP_C_SelectWorkMontage_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Update Range Strength
struct UFemale_Mature_AnimBP_C_Update_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CheckIfShouldPlayAnotherLoop
struct UFemale_Mature_AnimBP_C_CheckIfShouldPlayAnotherLoop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetFullBodyAimOffset
struct UFemale_Mature_AnimBP_C_SetFullBodyAimOffset_Params
{
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetMontageAimOffset
struct UFemale_Mature_AnimBP_C_SetMontageAimOffset_Params
{
	class UBlendSpaceBase*                             MontageAimOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CheckIfNewMontage
struct UFemale_Mature_AnimBP_C_CheckIfNewMontage_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.IsAnyMontageFromMapPlaying
struct UFemale_Mature_AnimBP_C_IsAnyMontageFromMapPlaying_Params
{
	bool                                               AnyMontagePlaying;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetMontageSetting
struct UFemale_Mature_AnimBP_C_SetMontageSetting_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetMontageSettings
struct UFemale_Mature_AnimBP_C_GetMontageSettings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CheckIfIsLookingDown
struct UFemale_Mature_AnimBP_C_CheckIfIsLookingDown_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SelectMontageDependingOnTheAngle
struct UFemale_Mature_AnimBP_C_SelectMontageDependingOnTheAngle_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetDefaultValues 
struct UFemale_Mature_AnimBP_C_SetDefaultValues__Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetReferences
struct UFemale_Mature_AnimBP_C_SetReferences_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateLandPredictionAlpha
struct UFemale_Mature_AnimBP_C_CalculateLandPredictionAlpha_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateInAirLeaningValues
struct UFemale_Mature_AnimBP_C_CalculateInAirLeaningValues_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.On ALS_MovementMode Changed
struct UFemale_Mature_AnimBP_C_On_ALS_MovementMode_Changed_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculatePlayRates
struct UFemale_Mature_AnimBP_C_CalculatePlayRates_Params
{
	float                                              WalkAnimSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunAnimSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateGaitValue
struct UFemale_Mature_AnimBP_C_CalculateGaitValue_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.On ALS_Stance Changed
struct UFemale_Mature_AnimBP_C_On_ALS_Stance_Changed_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.TurnInPlace (Responsive)
struct UFemale_Mature_AnimBP_C_TurnInPlace__Responsive__Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateStartPosition
struct UFemale_Mature_AnimBP_C_CalculateStartPosition_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.GetVariablesFromBaseCharacterBP
struct UFemale_Mature_AnimBP_C_GetVariablesFromBaseCharacterBP_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.TurnInPlace (Delay)
struct UFemale_Mature_AnimBP_C_TurnInPlace__Delay__Params
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

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateAimOffset
struct UFemale_Mature_AnimBP_C_CalculateAimOffset_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateGroundedLeaningValues
struct UFemale_Mature_AnimBP_C_CalculateGroundedLeaningValues_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CalculateMovementDirection
struct UFemale_Mature_AnimBP_C_CalculateMovementDirection_Params
{
	float                                              DirectionThresholdMin;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DirectionThresholdMax;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_148632AA4FE945F3CAB89CA4B6EFAC43
struct UFemale_Mature_AnimBP_C_OnCompleted_148632AA4FE945F3CAB89CA4B6EFAC43_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_148632AA4FE945F3CAB89CA4B6EFAC43
struct UFemale_Mature_AnimBP_C_OnBlendOut_148632AA4FE945F3CAB89CA4B6EFAC43_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_148632AA4FE945F3CAB89CA4B6EFAC43
struct UFemale_Mature_AnimBP_C_OnInterrupted_148632AA4FE945F3CAB89CA4B6EFAC43_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_148632AA4FE945F3CAB89CA4B6EFAC43
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_148632AA4FE945F3CAB89CA4B6EFAC43_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_148632AA4FE945F3CAB89CA4B6EFAC43
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_148632AA4FE945F3CAB89CA4B6EFAC43_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_2D02D750492FA4FF6B639DA3590AF352
struct UFemale_Mature_AnimBP_C_OnCompleted_2D02D750492FA4FF6B639DA3590AF352_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_2D02D750492FA4FF6B639DA3590AF352
struct UFemale_Mature_AnimBP_C_OnBlendOut_2D02D750492FA4FF6B639DA3590AF352_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_2D02D750492FA4FF6B639DA3590AF352
struct UFemale_Mature_AnimBP_C_OnInterrupted_2D02D750492FA4FF6B639DA3590AF352_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_2D02D750492FA4FF6B639DA3590AF352
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_2D02D750492FA4FF6B639DA3590AF352_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_2D02D750492FA4FF6B639DA3590AF352
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_2D02D750492FA4FF6B639DA3590AF352_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_4CF8D8A34C1396A9C638968946314FEF
struct UFemale_Mature_AnimBP_C_OnCompleted_4CF8D8A34C1396A9C638968946314FEF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_4CF8D8A34C1396A9C638968946314FEF
struct UFemale_Mature_AnimBP_C_OnBlendOut_4CF8D8A34C1396A9C638968946314FEF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_4CF8D8A34C1396A9C638968946314FEF
struct UFemale_Mature_AnimBP_C_OnInterrupted_4CF8D8A34C1396A9C638968946314FEF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_4CF8D8A34C1396A9C638968946314FEF
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_4CF8D8A34C1396A9C638968946314FEF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_4CF8D8A34C1396A9C638968946314FEF
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_4CF8D8A34C1396A9C638968946314FEF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_692AFD09441BA1F1BBF6C29374DAD437
struct UFemale_Mature_AnimBP_C_OnCompleted_692AFD09441BA1F1BBF6C29374DAD437_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_692AFD09441BA1F1BBF6C29374DAD437
struct UFemale_Mature_AnimBP_C_OnBlendOut_692AFD09441BA1F1BBF6C29374DAD437_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_692AFD09441BA1F1BBF6C29374DAD437
struct UFemale_Mature_AnimBP_C_OnInterrupted_692AFD09441BA1F1BBF6C29374DAD437_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_692AFD09441BA1F1BBF6C29374DAD437
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_692AFD09441BA1F1BBF6C29374DAD437_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_692AFD09441BA1F1BBF6C29374DAD437
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_692AFD09441BA1F1BBF6C29374DAD437_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_35573788491B9EB599E1A597F49E9407
struct UFemale_Mature_AnimBP_C_OnCompleted_35573788491B9EB599E1A597F49E9407_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_35573788491B9EB599E1A597F49E9407
struct UFemale_Mature_AnimBP_C_OnBlendOut_35573788491B9EB599E1A597F49E9407_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_35573788491B9EB599E1A597F49E9407
struct UFemale_Mature_AnimBP_C_OnInterrupted_35573788491B9EB599E1A597F49E9407_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_35573788491B9EB599E1A597F49E9407
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_35573788491B9EB599E1A597F49E9407_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_35573788491B9EB599E1A597F49E9407
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_35573788491B9EB599E1A597F49E9407_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA
struct UFemale_Mature_AnimBP_C_OnCompleted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA
struct UFemale_Mature_AnimBP_C_OnBlendOut_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA
struct UFemale_Mature_AnimBP_C_OnInterrupted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_5C56C2344DDA4D95432807BB040D9DD0
struct UFemale_Mature_AnimBP_C_OnCompleted_5C56C2344DDA4D95432807BB040D9DD0_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_5C56C2344DDA4D95432807BB040D9DD0
struct UFemale_Mature_AnimBP_C_OnBlendOut_5C56C2344DDA4D95432807BB040D9DD0_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_5C56C2344DDA4D95432807BB040D9DD0
struct UFemale_Mature_AnimBP_C_OnInterrupted_5C56C2344DDA4D95432807BB040D9DD0_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_5C56C2344DDA4D95432807BB040D9DD0
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_5C56C2344DDA4D95432807BB040D9DD0_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_5C56C2344DDA4D95432807BB040D9DD0
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_5C56C2344DDA4D95432807BB040D9DD0_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_BD63C0534CF1FC779D132791FC559124
struct UFemale_Mature_AnimBP_C_OnCompleted_BD63C0534CF1FC779D132791FC559124_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_BD63C0534CF1FC779D132791FC559124
struct UFemale_Mature_AnimBP_C_OnBlendOut_BD63C0534CF1FC779D132791FC559124_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_BD63C0534CF1FC779D132791FC559124
struct UFemale_Mature_AnimBP_C_OnInterrupted_BD63C0534CF1FC779D132791FC559124_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_BD63C0534CF1FC779D132791FC559124
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_BD63C0534CF1FC779D132791FC559124_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_BD63C0534CF1FC779D132791FC559124
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_BD63C0534CF1FC779D132791FC559124_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_D07E53514389305B73B4EEBAD348811C
struct UFemale_Mature_AnimBP_C_OnCompleted_D07E53514389305B73B4EEBAD348811C_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_D07E53514389305B73B4EEBAD348811C
struct UFemale_Mature_AnimBP_C_OnBlendOut_D07E53514389305B73B4EEBAD348811C_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_D07E53514389305B73B4EEBAD348811C
struct UFemale_Mature_AnimBP_C_OnInterrupted_D07E53514389305B73B4EEBAD348811C_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_D07E53514389305B73B4EEBAD348811C
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_D07E53514389305B73B4EEBAD348811C_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_D07E53514389305B73B4EEBAD348811C
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_D07E53514389305B73B4EEBAD348811C_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_42B5EC8D42FC2B0D6A367E99F9BB18C8
struct UFemale_Mature_AnimBP_C_OnCompleted_42B5EC8D42FC2B0D6A367E99F9BB18C8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_42B5EC8D42FC2B0D6A367E99F9BB18C8
struct UFemale_Mature_AnimBP_C_OnBlendOut_42B5EC8D42FC2B0D6A367E99F9BB18C8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_42B5EC8D42FC2B0D6A367E99F9BB18C8
struct UFemale_Mature_AnimBP_C_OnInterrupted_42B5EC8D42FC2B0D6A367E99F9BB18C8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_42B5EC8D42FC2B0D6A367E99F9BB18C8
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_42B5EC8D42FC2B0D6A367E99F9BB18C8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_42B5EC8D42FC2B0D6A367E99F9BB18C8
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_42B5EC8D42FC2B0D6A367E99F9BB18C8_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnCompleted_7C49ECDD40EAF43EA73E54BEF932193F
struct UFemale_Mature_AnimBP_C_OnCompleted_7C49ECDD40EAF43EA73E54BEF932193F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnBlendOut_7C49ECDD40EAF43EA73E54BEF932193F
struct UFemale_Mature_AnimBP_C_OnBlendOut_7C49ECDD40EAF43EA73E54BEF932193F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnInterrupted_7C49ECDD40EAF43EA73E54BEF932193F
struct UFemale_Mature_AnimBP_C_OnInterrupted_7C49ECDD40EAF43EA73E54BEF932193F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyBegin_7C49ECDD40EAF43EA73E54BEF932193F
struct UFemale_Mature_AnimBP_C_OnNotifyBegin_7C49ECDD40EAF43EA73E54BEF932193F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnNotifyEnd_7C49ECDD40EAF43EA73E54BEF932193F
struct UFemale_Mature_AnimBP_C_OnNotifyEnd_7C49ECDD40EAF43EA73E54BEF932193F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetMountAnimalType BPI
struct UFemale_Mature_AnimBP_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.UpdateIKAlpha
struct UFemale_Mature_AnimBP_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayMountSpecial
struct UFemale_Mature_AnimBP_C_PlayMountSpecial_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayMountStopAnimation
struct UFemale_Mature_AnimBP_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set Caught Prey BPI
struct UFemale_Mature_AnimBP_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnDeath
struct UFemale_Mature_AnimBP_C_OnDeath_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_BCD1C9C1488E090818AA56A8ADB23374
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_BCD1C9C1488E090818AA56A8ADB23374_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A8BFBDDF48E994F65A4A8389CCA25E10
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A8BFBDDF48E994F65A4A8389CCA25E10_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_39743B0D4CDBDE2428F53C94A51945BB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_39743B0D4CDBDE2428F53C94A51945BB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_4EE7D94949EE1C4A9A7CC5A01D52C7A8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_4EE7D94949EE1C4A9A7CC5A01D52C7A8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Knockback
struct UFemale_Mature_AnimBP_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.WaitForCrafting
struct UFemale_Mature_AnimBP_C_WaitForCrafting_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_0AD7CFCB424990091A93F397635B51D4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_0AD7CFCB424990091A93F397635B51D4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_EE1879B8402363EED62E84AACF6E665B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_EE1879B8402363EED62E84AACF6E665B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_289FBC53417115EA15FB1D8C7465B17A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_289FBC53417115EA15FB1D8C7465B17A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7AA1797C4FC7B46D65FD31A3267A412E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7AA1797C4FC7B46D65FD31A3267A412E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_B692196D49A03449D60AA68BC4F6AD67
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_B692196D49A03449D60AA68BC4F6AD67_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A921324144B40B6AD36AD4800F21FB86
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A921324144B40B6AD36AD4800F21FB86_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_926C664047F3731BE7814F95C7D5A95E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_926C664047F3731BE7814F95C7D5A95E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_85BFA52F4EB6AB5E7C450FBD4307E61C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_85BFA52F4EB6AB5E7C450FBD4307E61C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_EFB3648644CB18E098BA67937DD92BF6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_EFB3648644CB18E098BA67937DD92BF6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EB20F70C410C6EE3052B5B8E7C35C495
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EB20F70C410C6EE3052B5B8E7C35C495_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_88A7666D42DE5ED89B316C85EFE5A32A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_88A7666D42DE5ED89B316C85EFE5A32A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E19787E04A0B828FF54FF3962F7C197D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E19787E04A0B828FF54FF3962F7C197D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6927239E4A90597ECED8F4B954937D9D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6927239E4A90597ECED8F4B954937D9D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A28CCA4C4EC5DE687BF768AFA1BFF8BC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A28CCA4C4EC5DE687BF768AFA1BFF8BC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_64A9B9704ACD20CF2D9ED29930B9865E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_64A9B9704ACD20CF2D9ED29930B9865E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F8D14C324C57E6475A156FAE448A9124
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F8D14C324C57E6475A156FAE448A9124_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4310E8D9442A5E804A5A11B99B304126
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4310E8D9442A5E804A5A11B99B304126_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3083B5B3480D7B5AE2904D8F42B896D4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3083B5B3480D7B5AE2904D8F42B896D4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_75C3680D4BD1C5540A5AA894DD44E59D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_75C3680D4BD1C5540A5AA894DD44E59D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32ED0ABF48FA6E49F0A287A61A82FD4A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32ED0ABF48FA6E49F0A287A61A82FD4A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_74F5FB414FD1D9F3D6F65CB748615835
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_74F5FB414FD1D9F3D6F65CB748615835_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ABCA13040AD98E4755BB2A5958FE4E8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ABCA13040AD98E4755BB2A5958FE4E8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A55F19214BD50382EAA556A496DF1BB6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A55F19214BD50382EAA556A496DF1BB6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E8CE3914491BCF1C73CD77A1B450319D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E8CE3914491BCF1C73CD77A1B450319D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE5CCD5B4B2DCF532179D2B1D16E811F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE5CCD5B4B2DCF532179D2B1D16E811F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_31412B02442C75EFFD8333B0C0C9D260
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_31412B02442C75EFFD8333B0C0C9D260_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetIsInWater
struct UFemale_Mature_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4FA7D0DE43E19897FB9ED787373A2816
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4FA7D0DE43E19897FB9ED787373A2816_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9EFFAC8649CC32ABE79FFC9B01ADF9F5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9EFFAC8649CC32ABE79FFC9B01ADF9F5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A0A646644668A4EA59D09AE91ECD34C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A0A646644668A4EA59D09AE91ECD34C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_BreakMontageInterrupted
struct UFemale_Mature_AnimBP_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_BreakMontageBlendOut
struct UFemale_Mature_AnimBP_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_BreakMontageComplete
struct UFemale_Mature_AnimBP_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6EA80854BF88BF73B91088C3E3FFD14
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6EA80854BF88BF73B91088C3E3FFD14_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_WorkLoopsFinished
struct UFemale_Mature_AnimBP_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_WorkLoopIncreased
struct UFemale_Mature_AnimBP_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A7C7ED204F0C158778D1ECA38F019342
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A7C7ED204F0C158778D1ECA38F019342_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_61EE020146C495C4581CD29F3B35E4D4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_61EE020146C495C4581CD29F3B35E4D4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_70F978F84058CCF462942BABD7564BD6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_70F978F84058CCF462942BABD7564BD6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F0B5779B4364ECCB1158FCA33EF5F29F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F0B5779B4364ECCB1158FCA33EF5F29F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_WorkMontageInterrupted
struct UFemale_Mature_AnimBP_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_886345C847D79E9A674512B875DB5129
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_886345C847D79E9A674512B875DB5129_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CF8F27BA4A3B83323DB8ED97A415E30B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CF8F27BA4A3B83323DB8ED97A415E30B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_WorkMontageComplete
struct UFemale_Mature_AnimBP_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdleOtherPose BPI
struct UFemale_Mature_AnimBP_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ED39F4C4BF6B4A266AF3C90A8715080
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ED39F4C4BF6B4A266AF3C90A8715080_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdleLookingPose BPI
struct UFemale_Mature_AnimBP_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35B46EFA426669D57FA087A4C059EE8C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35B46EFA426669D57FA087A4C059EE8C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdleTalkingPose BPI
struct UFemale_Mature_AnimBP_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B87E75F741CA97C3AFD0B8961B42305E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B87E75F741CA97C3AFD0B8961B42305E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdleStandingPose BPI
struct UFemale_Mature_AnimBP_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetMontageSettings
struct UFemale_Mature_AnimBP_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_49EBB1B14E954994A9BB1E96A2863236
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_49EBB1B14E954994A9BB1E96A2863236_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SelectPickUpAnim
struct UFemale_Mature_AnimBP_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_HolsterWeapon
struct UFemale_Mature_AnimBP_C_AnimNotify_HolsterWeapon_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED30E3E34C038FC4F01EE7BEC181B4EB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED30E3E34C038FC4F01EE7BEC181B4EB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayCraftingAnimation
struct UFemale_Mature_AnimBP_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20BCEDBE42ADBE4B6BF16B99857B8C69
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20BCEDBE42ADBE4B6BF16B99857B8C69_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StopMovement
struct UFemale_Mature_AnimBP_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StopRotation
struct UFemale_Mature_AnimBP_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3188AB904260FFCA9766E5A22FF5234E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3188AB904260FFCA9766E5A22FF5234E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_LimitCamera
struct UFemale_Mature_AnimBP_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayerLookAt
struct UFemale_Mature_AnimBP_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6D1AC39842ED142F1303A3A41BAF109B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6D1AC39842ED142F1303A3A41BAF109B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetMontageType
struct UFemale_Mature_AnimBP_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_095103D647628C75C41396BD8D2F9418
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_095103D647628C75C41396BD8D2F9418_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_DDA25DB3499E8A11D94DBE9883A98EE4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_DDA25DB3499E8A11D94DBE9883A98EE4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A30FA5A647B853753FF9CEA66C9A1DF8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A30FA5A647B853753FF9CEA66C9A1DF8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_CCE07BD5421C6442B1A42381025B09AA
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_CCE07BD5421C6442B1A42381025B09AA_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9445F78D4B45937965586399F2F3F205
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9445F78D4B45937965586399F2F3F205_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_D2D555E54C1333AC0291E08A5C080F90
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_D2D555E54C1333AC0291E08A5C080F90_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_83F24BED444244656D471F8CF9710AE5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_83F24BED444244656D471F8CF9710AE5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E83839A94F6DCDC5AD2F47BA20EC5C3E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E83839A94F6DCDC5AD2F47BA20EC5C3E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_881F82144091A2CDB32E8383A6290B48
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_881F82144091A2CDB32E8383A6290B48_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7B0042BC459D7102C31CCD87DC3A7FA5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7B0042BC459D7102C31CCD87DC3A7FA5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE8695D84B6167A1DD76089113575702
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE8695D84B6167A1DD76089113575702_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_3732EF9D4EC0842CEA42EF9195E66A12
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_3732EF9D4EC0842CEA42EF9195E66A12_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_913720C2437DC7EE4A536AB3AED2BF3B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_913720C2437DC7EE4A536AB3AED2BF3B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AD6951074DDBCCE59669A1AD93BD89E4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AD6951074DDBCCE59669A1AD93BD89E4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_61281C88407F757DBB15D982F34D7C47
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_61281C88407F757DBB15D982F34D7C47_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_88ACB265438603598553FE94B9F446DB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_88ACB265438603598553FE94B9F446DB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_AFF0F6C34814A72EBF2E25AEB3DE14DA
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_AFF0F6C34814A72EBF2E25AEB3DE14DA_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_F42A7E8E4477644878914F9222101126
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_F42A7E8E4477644878914F9222101126_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_735CED97489B18CE1D2909AC143408A8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_735CED97489B18CE1D2909AC143408A8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_806808B143298E4F29E530AAB7A20CE9
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_806808B143298E4F29E530AAB7A20CE9_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayerMoveForInteraction
struct UFemale_Mature_AnimBP_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE35BC6448EA868532FFA98163FE9CDB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE35BC6448EA868532FFA98163FE9CDB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetStrengthAlpha
struct UFemale_Mature_AnimBP_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_01B4C1BB426153C7059628BEFFCCF2E5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_01B4C1BB426153C7059628BEFFCCF2E5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A583139D4C7F3A82F59868A396FDF078
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A583139D4C7F3A82F59868A396FDF078_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6DB4DD854F7E5BFD6184C8A73A56599F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6DB4DD854F7E5BFD6184C8A73A56599F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetToolType
struct UFemale_Mature_AnimBP_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D845763F4AF01D5B6E33DFA428787A69
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D845763F4AF01D5B6E33DFA428787A69_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BE3F36EF41A5176D7FF520A1F449F1F0
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BE3F36EF41A5176D7FF520A1F449F1F0_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CameraShake_BPI
struct UFemale_Mature_AnimBP_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AddCharacterRotation_BPI
struct UFemale_Mature_AnimBP_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E4CA372F43828C522A57E0B1575A0DAE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E4CA372F43828C522A57E0B1575A0DAE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F9DC53BA4D7DD6B37E42EFAD56760A64
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F9DC53BA4D7DD6B37E42EFAD56760A64_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A9F4D8C24AA1FCE10E487089CE2F163D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A9F4D8C24AA1FCE10E487089CE2F163D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3DA52B4747D6FE2F75B527912A7603B5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3DA52B4747D6FE2F75B527912A7603B5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_707C179244BB7A7D35FE36B5B3E064D6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_707C179244BB7A7D35FE36B5B3E064D6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BB0021C1496038BB9F0AE99036921676
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BB0021C1496038BB9F0AE99036921676_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_56EFEF2542B21753EB3680A18FCD6A3F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_56EFEF2542B21753EB3680A18FCD6A3F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5C012C1F4559A747D7F34E9B7A659D8A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5C012C1F4559A747D7F34E9B7A659D8A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FCDD92FB47C20E429D3A40A8C7D22052
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FCDD92FB47C20E429D3A40A8C7D22052_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9DC6D12F4F4FCB81157E088D00B7C7A6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9DC6D12F4F4FCB81157E088D00B7C7A6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_66F0DDFA44E4555B8BC2559DEE8EF008
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_66F0DDFA44E4555B8BC2559DEE8EF008_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_80DF23D44912B1AD9CD0F2A0F640F2DD
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_80DF23D44912B1AD9CD0F2A0F640F2DD_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9851C1FF48A054614AB601BD210D3B4A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9851C1FF48A054614AB601BD210D3B4A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_334097544DEADBC2AC9C67B9C3762BB8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_334097544DEADBC2AC9C67B9C3762BB8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3D6F1AF144ED41520FFB2DAB26AD4800
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3D6F1AF144ED41520FFB2DAB26AD4800_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2CBEA53B4F792D688F26198C99D128A9
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2CBEA53B4F792D688F26198C99D128A9_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9988DE254FDE0619D4FCE8B08BA215F2
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9988DE254FDE0619D4FCE8B08BA215F2_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0FF1F8A6489C53665609C89B09C9EFCE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0FF1F8A6489C53665609C89B09C9EFCE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_58BC477C4B27ABF74A0B739A7F9D3849
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_58BC477C4B27ABF74A0B739A7F9D3849_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_171F54834E1C9A7117E7E1890979DA13
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_171F54834E1C9A7117E7E1890979DA13_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4064378492FDA16449E20B0A1415774
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4064378492FDA16449E20B0A1415774_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5553D28F4B86AFD5EF9B8DA4A10ACB6D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5553D28F4B86AFD5EF9B8DA4A10ACB6D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_599652B64B4DB277A7C372962B802768
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_599652B64B4DB277A7C372962B802768_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0B534A5844AE924AB9AD05866A495500
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0B534A5844AE924AB9AD05866A495500_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C29E49B045EC9C264AF3DA8C8A21F6B7
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C29E49B045EC9C264AF3DA8C8A21F6B7_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D64DDBDF47C04FADB14F56A3EAA291AA
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D64DDBDF47C04FADB14F56A3EAA291AA_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2770E90743384A7E4DD87D85330FC8C6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2770E90743384A7E4DD87D85330FC8C6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_108257394CEF9B147B7D589A20BA8064
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_108257394CEF9B147B7D589A20BA8064_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_498E9A9F42B34D2EF9A7AEBBBE09C702
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_498E9A9F42B34D2EF9A7AEBBBE09C702_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F203FEAD469824C623DF888AE1DF9E93
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F203FEAD469824C623DF888AE1DF9E93_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4B8AE3AA4D8A61C31D3B739FDFFA824C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4B8AE3AA4D8A61C31D3B739FDFFA824C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B06E93422DC5616DE77F8D5A38CE40
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B06E93422DC5616DE77F8D5A38CE40_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F69183154A5A5C2A5C9924A3FBB23A3B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F69183154A5A5C2A5C9924A3FBB23A3B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F1D7B98F45F57F012BA162AFD6968ECE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F1D7B98F45F57F012BA162AFD6968ECE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4571D9DB473EDB4915A8EF868201C888
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4571D9DB473EDB4915A8EF868201C888_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E6F3B8F54F8A84150B205AA5B8B25369
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E6F3B8F54F8A84150B205AA5B8B25369_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84B740264C559D7468AAB981FFB4B8F3
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84B740264C559D7468AAB981FFB4B8F3_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FB197A5D40DAF7B18EAACC8AF2D3047A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FB197A5D40DAF7B18EAACC8AF2D3047A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D37503A548EC9706B85E558947B8C3D8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D37503A548EC9706B85E558947B8C3D8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_28DE5308477EE002F7A13C96A4F49BC5
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_28DE5308477EE002F7A13C96A4F49BC5_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35903F54405B877C87238CAA61094FE7
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35903F54405B877C87238CAA61094FE7_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1F646D904049F881931425A0D0FEF80B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1F646D904049F881931425A0D0FEF80B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_90E650A54687A2B7BF0421B20BC47093
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_90E650A54687A2B7BF0421B20BC47093_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EF0C4FB346D72BDEE30B938C64BF7FE1
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EF0C4FB346D72BDEE30B938C64BF7FE1_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C95BE02A45D4DA2944BF3492DF907D5D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C95BE02A45D4DA2944BF3492DF907D5D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4FCBC4E426F73F97C3ADAAD788E2BB1
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4FCBC4E426F73F97C3ADAAD788E2BB1_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C67A0E61431BF264A7489DA1AABCDA71
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C67A0E61431BF264A7489DA1AABCDA71_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_856395D5417F7AF661BE42AE79468807
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_856395D5417F7AF661BE42AE79468807_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3CACD56E406C86D38F6C94A8AE510F2F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3CACD56E406C86D38F6C94A8AE510F2F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F310EAA485C9DF716E7FB87F45F00B9
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F310EAA485C9DF716E7FB87F45F00B9_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0E0A0F03407C145A33B1D5B42FC08D7F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0E0A0F03407C145A33B1D5B42FC08D7F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F31D3C5F4F6D3B2A22FBB2822251C011
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F31D3C5F4F6D3B2A22FBB2822251C011_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D0A7B6774F52B5D76E6E6C91A89DB7DE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D0A7B6774F52B5D76E6E6C91A89DB7DE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B3D61BB5431D6604C5594F8EC40B86AB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B3D61BB5431D6604C5594F8EC40B86AB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C336118B4AA459587CD4B59DE649F712
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C336118B4AA459587CD4B59DE649F712_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_1CA093304BE9FA9EB505BFAABF917848
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_1CA093304BE9FA9EB505BFAABF917848_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_07FBADA040E73D2CEBA90EA9D07D01E7
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_07FBADA040E73D2CEBA90EA9D07D01E7_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_9DB0815049C05216BCFEBEB907262FF2
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_9DB0815049C05216BCFEBEB907262FF2_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_18E4145B4E32A35EC9BD55A4175ED685
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_18E4145B4E32A35EC9BD55A4175ED685_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C9D46E1345215B51185A5EAA1588157A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C9D46E1345215B51185A5EAA1588157A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C01DCB2D4400270D51A7A8B0E4051E5B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C01DCB2D4400270D51A7A8B0E4051E5B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B69A009349C4A88A318CE7A68F5FD590
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B69A009349C4A88A318CE7A68F5FD590_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CCDABFF848CFD581882AD8A802AD84FE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CCDABFF848CFD581882AD8A802AD84FE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D41B9F6847F6A29DEE2C53AA1F45E7B4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D41B9F6847F6A29DEE2C53AA1F45E7B4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D13EB09F48AF13115A284781B404BC7A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D13EB09F48AF13115A284781B404BC7A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B82BCE4893C19918C58A8C084A15DD
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B82BCE4893C19918C58A8C084A15DD_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2B8356F8421E9A235B8745B89081A450
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2B8356F8421E9A235B8745B89081A450_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_683ACFBD42856FCDE93334A280AF5496
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_683ACFBD42856FCDE93334A280AF5496_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F778AC6A419CDF150CDA96BCF0F84B8C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F778AC6A419CDF150CDA96BCF0F84B8C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9B7CCF1E4718DC7D6D0E24B728FFCDCC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9B7CCF1E4718DC7D6D0E24B728FFCDCC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_321A6FD14049408E37CD3F950F4CFD9A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_321A6FD14049408E37CD3F950F4CFD9A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE016DC44A0AAF64226BD898BF1E477B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE016DC44A0AAF64226BD898BF1E477B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_68F5378449524C536EEFDEA06EDA4960
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_68F5378449524C536EEFDEA06EDA4960_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1146408A44D827EF9372C1A58A64A912
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1146408A44D827EF9372C1A58A64A912_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BCDD92104D4D90103D111EB85987DD88
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BCDD92104D4D90103D111EB85987DD88_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EC110F6A461D21089022819F1928B44C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EC110F6A461D21089022819F1928B44C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_449725824103BFAC0421CFB4D73F2201
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_449725824103BFAC0421CFB4D73F2201_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CFA2E07C4F6458EAA5F0609DF2C3C34D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CFA2E07C4F6458EAA5F0609DF2C3C34D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_25643F044E053D2A5C800DBEF9EB266E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_25643F044E053D2A5C800DBEF9EB266E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84C4AB5D45597D2815D24BB3C4E4409E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84C4AB5D45597D2815D24BB3C4E4409E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9BD5031B4C08097537FAB080EFAEDA92
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9BD5031B4C08097537FAB080EFAEDA92_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE69A35D46BB2F5F724884A88ED23D87
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE69A35D46BB2F5F724884A88ED23D87_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C90118E843E33FF9EB1457B8D8229925
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C90118E843E33FF9EB1457B8D8229925_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E38B30E545E43C1658277BBA9AEF1D28
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E38B30E545E43C1658277BBA9AEF1D28_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8A39496040D41794828B719C72F14E34
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8A39496040D41794828B719C72F14E34_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_063806C8458510D7D684949A9BE48605
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_063806C8458510D7D684949A9BE48605_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6A91CCAF44F9EA9BC7932DB7D9043F76
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6A91CCAF44F9EA9BC7932DB7D9043F76_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_13A03CA54DD175C107CB06B3658E557A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_13A03CA54DD175C107CB06B3658E557A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1295F82E4D1B753A61A3428146A9A41C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1295F82E4D1B753A61A3428146A9A41C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_08650047494C9B52035BDEBD42884274
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_08650047494C9B52035BDEBD42884274_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_78FAFCB849B0322B2C97459A05A9FDAC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_78FAFCB849B0322B2C97459A05A9FDAC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5691B17140999378640B27B99842C6B3
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5691B17140999378640B27B99842C6B3_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7CD4818C4C17918C5BC340BBCF1AAD9C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7CD4818C4C17918C5BC340BBCF1AAD9C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6362895483F393938EB9291A55DD209
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6362895483F393938EB9291A55DD209_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5BA76CAB4773CD23BCF4BEA592DD14C7
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5BA76CAB4773CD23BCF4BEA592DD14C7_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4D3E8B8A404DA719EAACB489EAC58C61
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4D3E8B8A404DA719EAACB489EAC58C61_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_96908AF24FC6B462E0FE098665D2A51F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_96908AF24FC6B462E0FE098665D2A51F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A1FE0C243D394EF7B4D17AC4E589FA1
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A1FE0C243D394EF7B4D17AC4E589FA1_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED0C67004D8E61510A6D38B10E10A78D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED0C67004D8E61510A6D38B10E10A78D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5CC547124C3BCD8DBE77749F3EF176ED
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5CC547124C3BCD8DBE77749F3EF176ED_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_87B3D2044B0EA1C1B8A1F69892852ECD
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_87B3D2044B0EA1C1B8A1F69892852ECD_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_99D5DA1B4092736FAB47DC94CDF30DB4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_99D5DA1B4092736FAB47DC94CDF30DB4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1B6F22E84EEFA54266DB1E9EA0DDDADA
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1B6F22E84EEFA54266DB1E9EA0DDDADA_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_799A9EFA41DED8C039E827B33D21E89C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_799A9EFA41DED8C039E827B33D21E89C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9010687C4753701638E10F976C4D3E34
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9010687C4753701638E10F976C4D3E34_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA9BE88B4D9B0C21A7749B9089CC9CB4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA9BE88B4D9B0C21A7749B9089CC9CB4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_11F6433840220AF0EEC7C2A50535D11E
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_11F6433840220AF0EEC7C2A50535D11E_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8BA108434654FB94370924AECA0C612D
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8BA108434654FB94370924AECA0C612D_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FACE2E624B027251DE13E8BF462C0EB7
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FACE2E624B027251DE13E8BF462C0EB7_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_62F3B79441DBEA9968B40AB01E6B7531
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_62F3B79441DBEA9968B40AB01E6B7531_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4C441FBD4D148C06EAA14F80F6170C16
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4C441FBD4D148C06EAA14F80F6170C16_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20C398E4479892DE9AC7B38B1F14A545
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20C398E4479892DE9AC7B38B1F14A545_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DB1B561541070A10C5C71A83003EDC9B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DB1B561541070A10C5C71A83003EDC9B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F7EBFE534D2292B0549405A661E846DC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F7EBFE534D2292B0549405A661E846DC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A80EDC22407EEE47BF8A7F938F4575B8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A80EDC22407EEE47BF8A7F938F4575B8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2D3FD604CCDA59FCCA2BBA23E81CBDE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2D3FD604CCDA59FCCA2BBA23E81CBDE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DCD3EF1A459AD66ADB60F084ECCE4E7C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DCD3EF1A459AD66ADB60F084ECCE4E7C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C834FA7D4E252A8519FECA86873B6B97
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C834FA7D4E252A8519FECA86873B6B97_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_81727679496E01015A448983C2AD0583
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_81727679496E01015A448983C2AD0583_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1064D7A74B4E5ABA6298D1AC39F4F445
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1064D7A74B4E5ABA6298D1AC39F4F445_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E525FBE14D0419B106B61FA935DC33F2
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E525FBE14D0419B106B61FA935DC33F2_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_23C785BE45DD4544E0120EB1BB3C041A
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_23C785BE45DD4544E0120EB1BB3C041A_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B29024704F8AC6B2D564E4B9C9F4ACC4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B29024704F8AC6B2D564E4B9C9F4ACC4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F4475CCF4A2991ADDC257D998CFEFD29
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F4475CCF4A2991ADDC257D998CFEFD29_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2CD54DC44146619AA167CB42D271F7F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2CD54DC44146619AA167CB42D271F7F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B919707C490D8B101B526AA2D9E90BD8
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B919707C490D8B101B526AA2D9E90BD8_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_559186B94AD9E3B15E4167811B94D838
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_559186B94AD9E3B15E4167811B94D838_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9E15F0474269BB6BC8F9A19E1A0E1631
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9E15F0474269BB6BC8F9A19E1A0E1631_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D5388B054724E8E19ECF0A9B39749586
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D5388B054724E8E19ECF0A9B39749586_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8DEBB1FE4E68BE4EC9FAE4AF9784FB89
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8DEBB1FE4E68BE4EC9FAE4AF9784FB89_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8F34E228444C77029D7CB584DBA64242
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8F34E228444C77029D7CB584DBA64242_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_234F107C4937B0280518E1ABE424EB91
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_234F107C4937B0280518E1ABE424EB91_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_316917B241DE3BCCAADB319B94D6ED77
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_316917B241DE3BCCAADB319B94D6ED77_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B373BD2A410870F4AF1E2987EEA5DB77
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B373BD2A410870F4AF1E2987EEA5DB77_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1D134D664A03641F2C726080E98C200F
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1D134D664A03641F2C726080E98C200F_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_145EAAD94D661788736304852AF4EBE1
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_145EAAD94D661788736304852AF4EBE1_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9A11166448905D3CFFB903B12A448FBE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9A11166448905D3CFFB903B12A448FBE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8E93FD1D45CA93FBD31EF7BA3A18366C
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8E93FD1D45CA93FBD31EF7BA3A18366C_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_706F5BEE4CAD67A587786283C674EAB3
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_706F5BEE4CAD67A587786283C674EAB3_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_01367C4045F67ED063D124A83A174071
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_01367C4045F67ED063D124A83A174071_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8FCED9EE4FF131F3E40EF2A00E334FA6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8FCED9EE4FF131F3E40EF2A00E334FA6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AB2FA2FF45CA3F59EA41078C1787FE26
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AB2FA2FF45CA3F59EA41078C1787FE26_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CD3D1CA5441D7B2A76DC299C5BE9FEB4
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CD3D1CA5441D7B2A76DC299C5BE9FEB4_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4CD7DD7A4DB0DFE145C9A2A8D4B58972
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4CD7DD7A4DB0DFE145C9A2A8D4B58972_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F36A255422E7EFF3D5F9296D08880CC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F36A255422E7EFF3D5F9296D08880CC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE3D94E34A9F349B755F2581450A0467
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE3D94E34A9F349B755F2581450A0467_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7211499249D32A4CA4152481DE48114B
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7211499249D32A4CA4152481DE48114B_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8158112F411BAEF079035DA188A760E1
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8158112F411BAEF079035DA188A760E1_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32EBE59845347B0E8C4AACA01DA96338
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32EBE59845347B0E8C4AACA01DA96338_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9D38DEDD43E872F251B337A7A94F3907
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9D38DEDD43E872F251B337A7A94F3907_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA5CAFC34F06D77729843392CC0B3672
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA5CAFC34F06D77729843392CC0B3672_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9FF75859407566F64C6D28ABD533DBE6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9FF75859407566F64C6D28ABD533DBE6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_27DD6D8B4588F254FDC85ABFE0074549
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_27DD6D8B4588F254FDC85ABFE0074549_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_00AA17D2484B905DF43E5AB192EF53BE
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_00AA17D2484B905DF43E5AB192EF53BE_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B05A253941431ACADD3162BCB4969E13
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B05A253941431ACADD3162BCB4969E13_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_03FC3344430C963F57B84FB104F2BBC0
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_03FC3344430C963F57B84FB104F2BBC0_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6B43099B4767A755B52CF08DDE7E7A84
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6B43099B4767A755B52CF08DDE7E7A84_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B0F3DE06488A562A0CB6DBACBCE20D15
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B0F3DE06488A562A0CB6DBACBCE20D15_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7499D7BA408E06DA6D8075A2352481B9
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7499D7BA408E06DA6D8075A2352481B9_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F14D1E424C14205B73279487BDC06398
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F14D1E424C14205B73279487BDC06398_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_95E48737454DD92269204E81487B4F87
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_95E48737454DD92269204E81487B4F87_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7241824E4CFE41407808F48D2C1921AC
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7241824E4CFE41407808F48D2C1921AC_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_499C74EB4F9A0CC333E7F099F1EA06F6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_499C74EB4F9A0CC333E7F099F1EA06F6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_311768534B859AF41C94E9A1733C11CB
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_311768534B859AF41C94E9A1733C11CB_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_47EC074A4D00F7CEFC63AFB309B4BA47
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_47EC074A4D00F7CEFC63AFB309B4BA47_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B34E180B44918AEFE85F508EAB5465A6
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B34E180B44918AEFE85F508EAB5465A6_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2DB85F7444C64E45EC8D37B3A74165CD
struct UFemale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2DB85F7444C64E45EC8D37B3A74165CD_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.BlueprintInitializeAnimation
struct UFemale_Mature_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.BlueprintUpdateAnimation
struct UFemale_Mature_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SetEnableIK_BPI
struct UFemale_Mature_AnimBP_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_AnimObjectNotify
struct UFemale_Mature_AnimBP_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdlePoseByID BPI
struct UFemale_Mature_AnimBP_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.ForceStanding
struct UFemale_Mature_AnimBP_C_ForceStanding_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set Sitting BPI
struct UFemale_Mature_AnimBP_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set BreakState BPI
struct UFemale_Mature_AnimBP_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set WorkState BPI
struct UFemale_Mature_AnimBP_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set IdleState BPI
struct UFemale_Mature_AnimBP_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set Sleeping BPI
struct UFemale_Mature_AnimBP_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set Range Strength
struct UFemale_Mature_AnimBP_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OverrideCanPerfromHitAction
struct UFemale_Mature_AnimBP_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.HoldableHitAction
struct UFemale_Mature_AnimBP_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnEndStageInteraction
struct UFemale_Mature_AnimBP_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnLoopStageInteraction
struct UFemale_Mature_AnimBP_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.OnStartStageInteraction
struct UFemale_Mature_AnimBP_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Loop Montage
struct UFemale_Mature_AnimBP_C_Loop_Montage_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.ChangeAnimLoopState
struct UFemale_Mature_AnimBP_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.CancelAnimationLoops
struct UFemale_Mature_AnimBP_C_CancelAnimationLoops_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.HoldableAction
struct UFemale_Mature_AnimBP_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set RF_BPI
struct UFemale_Mature_AnimBP_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set CrouchingSpeed BPI
struct UFemale_Mature_AnimBP_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set SprintingSpeed BPI
struct UFemale_Mature_AnimBP_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set RunningSpeed BPI
struct UFemale_Mature_AnimBP_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set WalkingSpeed BPI
struct UFemale_Mature_AnimBP_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_TurningInPlace BPI
struct UFemale_Mature_AnimBP_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_IdleEntryState BPI
struct UFemale_Mature_AnimBP_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Pivot BPI
struct UFemale_Mature_AnimBP_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_MovementMode BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_Gait BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_Stance BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_RotationMode BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_Aiming BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Play_GetUp_Anim BPI
struct UFemale_Mature_AnimBP_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.SavePoseSnapshot_BPI
struct UFemale_Mature_AnimBP_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Set ALS_ViewMode BPI
struct UFemale_Mature_AnimBP_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.ShowTraces_BPI
struct UFemale_Mature_AnimBP_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EnteredSleeping
struct UFemale_Mature_AnimBP_C_AnimNotify_EnteredSleeping_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EnteredSitting
struct UFemale_Mature_AnimBP_C_AnimNotify_EnteredSitting_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_SelectGroundSittingPose
struct UFemale_Mature_AnimBP_C_AnimNotify_SelectGroundSittingPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_SelectSittingPose
struct UFemale_Mature_AnimBP_C_AnimNotify_SelectSittingPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_DespawnAnimItem
struct UFemale_Mature_AnimBP_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_SpawnAnimItem
struct UFemale_Mature_AnimBP_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_IdleTransitionBool
struct UFemale_Mature_AnimBP_C_AnimNotify_IdleTransitionBool_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_GetRandomTalkingPose
struct UFemale_Mature_AnimBP_C_AnimNotify_GetRandomTalkingPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_GetRandomOtherPose
struct UFemale_Mature_AnimBP_C_AnimNotify_GetRandomOtherPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_GetRandomLookingPose
struct UFemale_Mature_AnimBP_C_AnimNotify_GetRandomLookingPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_GetRandomStandingPose
struct UFemale_Mature_AnimBP_C_AnimNotify_GetRandomStandingPose_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartWakeUp
struct UFemale_Mature_AnimBP_C_AnimNotify_StartWakeUp_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EndGoToSleep
struct UFemale_Mature_AnimBP_C_AnimNotify_EndGoToSleep_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EndSleep
struct UFemale_Mature_AnimBP_C_AnimNotify_EndSleep_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartSleep
struct UFemale_Mature_AnimBP_C_AnimNotify_StartSleep_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EndGetUp
struct UFemale_Mature_AnimBP_C_AnimNotify_EndGetUp_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartGetUp
struct UFemale_Mature_AnimBP_C_AnimNotify_StartGetUp_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EndSitting
struct UFemale_Mature_AnimBP_C_AnimNotify_EndSitting_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartSitting
struct UFemale_Mature_AnimBP_C_AnimNotify_StartSitting_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_InteractWithActor
struct UFemale_Mature_AnimBP_C_AnimNotify_InteractWithActor_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayPickUpAnim
struct UFemale_Mature_AnimBP_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_PickUpItem
struct UFemale_Mature_AnimBP_C_AnimNotify_PickUpItem_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StopAiming
struct UFemale_Mature_AnimBP_C_AnimNotify_StopAiming_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartAiming
struct UFemale_Mature_AnimBP_C_AnimNotify_StartAiming_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_PerformInteraction
struct UFemale_Mature_AnimBP_C_AnimNotify_PerformInteraction_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_DisableHitAction
struct UFemale_Mature_AnimBP_C_AnimNotify_DisableHitAction_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_HoldableTickStop
struct UFemale_Mature_AnimBP_C_AnimNotify_HoldableTickStop_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_HoldableTickStart
struct UFemale_Mature_AnimBP_C_AnimNotify_HoldableTickStart_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_InteractionTypeObject
struct UFemale_Mature_AnimBP_C_AnimNotify_InteractionTypeObject_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_InteractionTypeGround
struct UFemale_Mature_AnimBP_C_AnimNotify_InteractionTypeGround_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_InteractionTypeBasic
struct UFemale_Mature_AnimBP_C_AnimNotify_InteractionTypeBasic_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_EndingStageFinished
struct UFemale_Mature_AnimBP_C_AnimNotify_EndingStageFinished_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_LoopStageFinished
struct UFemale_Mature_AnimBP_C_AnimNotify_LoopStageFinished_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_BeginningStageFinished
struct UFemale_Mature_AnimBP_C_AnimNotify_BeginningStageFinished_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StopSnappingIK
struct UFemale_Mature_AnimBP_C_AnimNotify_StopSnappingIK_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartSnappingIK
struct UFemale_Mature_AnimBP_C_AnimNotify_StartSnappingIK_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_ResetSnapping
struct UFemale_Mature_AnimBP_C_AnimNotify_ResetSnapping_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_StartSnapping
struct UFemale_Mature_AnimBP_C_AnimNotify_StartSnapping_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_SnapPoint
struct UFemale_Mature_AnimBP_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_RF_to_LF
struct UFemale_Mature_AnimBP_C_AnimNotify_RF_to_LF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_LF_to_RF
struct UFemale_Mature_AnimBP_C_AnimNotify_LF_to_RF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CRF_to_CLF
struct UFemale_Mature_AnimBP_C_AnimNotify_CRF_to_CLF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CLF_to_CRF
struct UFemale_Mature_AnimBP_C_AnimNotify_CLF_to_CRF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_RF_to_CRF
struct UFemale_Mature_AnimBP_C_AnimNotify_RF_to_CRF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CRF_to_RF
struct UFemale_Mature_AnimBP_C_AnimNotify_CRF_to_RF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CRF_to_N
struct UFemale_Mature_AnimBP_C_AnimNotify_CRF_to_N_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_N_to_CRF
struct UFemale_Mature_AnimBP_C_AnimNotify_N_to_CRF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CLF_to_LF
struct UFemale_Mature_AnimBP_C_AnimNotify_CLF_to_LF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_LF_to_CLF
struct UFemale_Mature_AnimBP_C_AnimNotify_LF_to_CLF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_CLF_to_N
struct UFemale_Mature_AnimBP_C_AnimNotify_CLF_to_N_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_N_to_CLF
struct UFemale_Mature_AnimBP_C_AnimNotify_N_to_CLF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_RF_to_N
struct UFemale_Mature_AnimBP_C_AnimNotify_RF_to_N_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_N_to_RF
struct UFemale_Mature_AnimBP_C_AnimNotify_N_to_RF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_LF_to_N
struct UFemale_Mature_AnimBP_C_AnimNotify_LF_to_N_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_N_to_LF
struct UFemale_Mature_AnimBP_C_AnimNotify_N_to_LF_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.IdleTransition
struct UFemale_Mature_AnimBP_C_IdleTransition_Params
{
	class UAnimMontage*                                Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Left_Stopping
struct UFemale_Mature_AnimBP_C_AnimNotify_Left_Stopping_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Entered_Stopping
struct UFemale_Mature_AnimBP_C_AnimNotify_Entered_Stopping_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Land
struct UFemale_Mature_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Left_Pivot
struct UFemale_Mature_AnimBP_C_AnimNotify_Left_Pivot_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Entered_Pivot
struct UFemale_Mature_AnimBP_C_AnimNotify_Entered_Pivot_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Entered_NotMoving
struct UFemale_Mature_AnimBP_C_AnimNotify_Entered_NotMoving_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Left_Moving
struct UFemale_Mature_AnimBP_C_AnimNotify_Left_Moving_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Entered_Moving
struct UFemale_Mature_AnimBP_C_AnimNotify_Entered_Moving_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.AnimNotify_Left_NotMoving
struct UFemale_Mature_AnimBP_C_AnimNotify_Left_NotMoving_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.StopBreakAnimation
struct UFemale_Mature_AnimBP_C_StopBreakAnimation_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayBreakAnimation
struct UFemale_Mature_AnimBP_C_PlayBreakAnimation_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.StopWorkAnimation
struct UFemale_Mature_AnimBP_C_StopWorkAnimation_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayWorkAnimation
struct UFemale_Mature_AnimBP_C_PlayWorkAnimation_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Reset Player Controller State
struct UFemale_Mature_AnimBP_C_Reset_Player_Controller_State_Params
{
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.Change Player Controller State
struct UFemale_Mature_AnimBP_C_Change_Player_Controller_State_Params
{
	struct FST_MontagesSettings                        MontageSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.PlayMontage(Networked)
struct UFemale_Mature_AnimBP_C_PlayMontage_Networked__Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Female_Mature_AnimBP.Female_Mature_AnimBP_C.ExecuteUbergraph_Female_Mature_AnimBP
struct UFemale_Mature_AnimBP_C_ExecuteUbergraph_Female_Mature_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
