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

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetInteractionEndpoint
struct UToddler_AnimBP_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetPhysicsHandle
struct UToddler_AnimBP_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayMountAnimation
struct UToddler_AnimBP_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetProfessionData
struct UToddler_AnimBP_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetIsInDialogue_BPI
struct UToddler_AnimBP_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetSystemManager
struct UToddler_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetBaseCharacterWorldLocation
struct UToddler_AnimBP_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayHolsterAnimation
struct UToddler_AnimBP_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetHeadTransform
struct UToddler_AnimBP_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetStatsComponent
struct UToddler_AnimBP_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetProfession
struct UToddler_AnimBP_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetCurrentPickUpAnim
struct UToddler_AnimBP_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetIsAnyMontageFromMapPlaying
struct UToddler_AnimBP_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.isPlayer
struct UToddler_AnimBP_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetCameraViewDirection
struct UToddler_AnimBP_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Get ALS_Stance BPI
struct UToddler_AnimBP_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimGraph
struct UToddler_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetPelvisDip
struct UToddler_AnimBP_C_GetPelvisDip_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNPCUnoptimized
struct UToddler_AnimBP_C_OnNPCUnoptimized_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNPCOptimized
struct UToddler_AnimBP_C_OnNPCOptimized_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CheckALSStance
struct UToddler_AnimBP_C_CheckALSStance_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNPCActive
struct UToddler_AnimBP_C_OnNPCActive_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNPCDeactive
struct UToddler_AnimBP_C_OnNPCDeactive_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.VerifyPoseID
struct UToddler_AnimBP_C_VerifyPoseID_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetStandingPoseExcludes
struct UToddler_AnimBP_C_GetStandingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.UpdateIKState
struct UToddler_AnimBP_C_UpdateIKState_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetCurrentSeason
struct UToddler_AnimBP_C_GetCurrentSeason_Params
{
	int                                                Season;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetPoseID
struct UToddler_AnimBP_C_SetPoseID_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Update Range Strength
struct UToddler_AnimBP_C_Update_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CheckIfShouldPlayAnotherLoop
struct UToddler_AnimBP_C_CheckIfShouldPlayAnotherLoop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetFullBodyAimOffset
struct UToddler_AnimBP_C_SetFullBodyAimOffset_Params
{
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetMontageAimOffset
struct UToddler_AnimBP_C_SetMontageAimOffset_Params
{
	class UBlendSpaceBase*                             MontageAimOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CheckIfNewMontage
struct UToddler_AnimBP_C_CheckIfNewMontage_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.IsAnyMontageFromMapPlaying
struct UToddler_AnimBP_C_IsAnyMontageFromMapPlaying_Params
{
	bool                                               AnyMontagePlaying;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetMontageSetting
struct UToddler_AnimBP_C_SetMontageSetting_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetMontageSettings
struct UToddler_AnimBP_C_GetMontageSettings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CheckIfIsLookingDown
struct UToddler_AnimBP_C_CheckIfIsLookingDown_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SelectMontageDependingOnTheAngle
struct UToddler_AnimBP_C_SelectMontageDependingOnTheAngle_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetDefaultValues 
struct UToddler_AnimBP_C_SetDefaultValues__Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetReferences
struct UToddler_AnimBP_C_SetReferences_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateLandPredictionAlpha
struct UToddler_AnimBP_C_CalculateLandPredictionAlpha_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateInAirLeaningValues
struct UToddler_AnimBP_C_CalculateInAirLeaningValues_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.On ALS_MovementMode Changed
struct UToddler_AnimBP_C_On_ALS_MovementMode_Changed_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculatePlayRates
struct UToddler_AnimBP_C_CalculatePlayRates_Params
{
	float                                              WalkAnimSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunAnimSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateGaitValue
struct UToddler_AnimBP_C_CalculateGaitValue_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.On ALS_Stance Changed
struct UToddler_AnimBP_C_On_ALS_Stance_Changed_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.TurnInPlace (Responsive)
struct UToddler_AnimBP_C_TurnInPlace__Responsive__Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateStartPosition
struct UToddler_AnimBP_C_CalculateStartPosition_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.GetVariablesFromBaseCharacterBP
struct UToddler_AnimBP_C_GetVariablesFromBaseCharacterBP_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.TurnInPlace (Delay)
struct UToddler_AnimBP_C_TurnInPlace__Delay__Params
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

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateAimOffset
struct UToddler_AnimBP_C_CalculateAimOffset_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateGroundedLeaningValues
struct UToddler_AnimBP_C_CalculateGroundedLeaningValues_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CalculateMovementDirection
struct UToddler_AnimBP_C_CalculateMovementDirection_Params
{
	float                                              DirectionThresholdMin;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DirectionThresholdMax;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_0DF6A45F4C50E340161AAB892E7B1421
struct UToddler_AnimBP_C_OnCompleted_0DF6A45F4C50E340161AAB892E7B1421_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_0DF6A45F4C50E340161AAB892E7B1421
struct UToddler_AnimBP_C_OnBlendOut_0DF6A45F4C50E340161AAB892E7B1421_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_0DF6A45F4C50E340161AAB892E7B1421
struct UToddler_AnimBP_C_OnInterrupted_0DF6A45F4C50E340161AAB892E7B1421_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_0DF6A45F4C50E340161AAB892E7B1421
struct UToddler_AnimBP_C_OnNotifyBegin_0DF6A45F4C50E340161AAB892E7B1421_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_0DF6A45F4C50E340161AAB892E7B1421
struct UToddler_AnimBP_C_OnNotifyEnd_0DF6A45F4C50E340161AAB892E7B1421_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_E8162AEA4004AFCFB3D65AA049F28171
struct UToddler_AnimBP_C_OnCompleted_E8162AEA4004AFCFB3D65AA049F28171_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_E8162AEA4004AFCFB3D65AA049F28171
struct UToddler_AnimBP_C_OnBlendOut_E8162AEA4004AFCFB3D65AA049F28171_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_E8162AEA4004AFCFB3D65AA049F28171
struct UToddler_AnimBP_C_OnInterrupted_E8162AEA4004AFCFB3D65AA049F28171_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_E8162AEA4004AFCFB3D65AA049F28171
struct UToddler_AnimBP_C_OnNotifyBegin_E8162AEA4004AFCFB3D65AA049F28171_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_E8162AEA4004AFCFB3D65AA049F28171
struct UToddler_AnimBP_C_OnNotifyEnd_E8162AEA4004AFCFB3D65AA049F28171_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetMountAnimalType BPI
struct UToddler_AnimBP_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_9E2C9CF1458D35C205ABA6978F283FB9
struct UToddler_AnimBP_C_OnCompleted_9E2C9CF1458D35C205ABA6978F283FB9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetEnableIK_BPI
struct UToddler_AnimBP_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_9E2C9CF1458D35C205ABA6978F283FB9
struct UToddler_AnimBP_C_OnBlendOut_9E2C9CF1458D35C205ABA6978F283FB9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.UpdateIKAlpha
struct UToddler_AnimBP_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_9E2C9CF1458D35C205ABA6978F283FB9
struct UToddler_AnimBP_C_OnInterrupted_9E2C9CF1458D35C205ABA6978F283FB9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayMountSpecial
struct UToddler_AnimBP_C_PlayMountSpecial_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayMountStopAnimation
struct UToddler_AnimBP_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_9E2C9CF1458D35C205ABA6978F283FB9
struct UToddler_AnimBP_C_OnNotifyBegin_9E2C9CF1458D35C205ABA6978F283FB9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_9E2C9CF1458D35C205ABA6978F283FB9
struct UToddler_AnimBP_C_OnNotifyEnd_9E2C9CF1458D35C205ABA6978F283FB9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set Caught Prey BPI
struct UToddler_AnimBP_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnDeath
struct UToddler_AnimBP_C_OnDeath_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_61EB9E844FD54B1AF49A94ADD8A78222
struct UToddler_AnimBP_C_OnCompleted_61EB9E844FD54B1AF49A94ADD8A78222_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_61EB9E844FD54B1AF49A94ADD8A78222
struct UToddler_AnimBP_C_OnBlendOut_61EB9E844FD54B1AF49A94ADD8A78222_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_61EB9E844FD54B1AF49A94ADD8A78222
struct UToddler_AnimBP_C_OnInterrupted_61EB9E844FD54B1AF49A94ADD8A78222_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_61EB9E844FD54B1AF49A94ADD8A78222
struct UToddler_AnimBP_C_OnNotifyBegin_61EB9E844FD54B1AF49A94ADD8A78222_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_61EB9E844FD54B1AF49A94ADD8A78222
struct UToddler_AnimBP_C_OnNotifyEnd_61EB9E844FD54B1AF49A94ADD8A78222_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_B53749DB447CCFA05ECC81ABBE232892
struct UToddler_AnimBP_C_OnCompleted_B53749DB447CCFA05ECC81ABBE232892_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_B53749DB447CCFA05ECC81ABBE232892
struct UToddler_AnimBP_C_OnBlendOut_B53749DB447CCFA05ECC81ABBE232892_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Knockback
struct UToddler_AnimBP_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_B53749DB447CCFA05ECC81ABBE232892
struct UToddler_AnimBP_C_OnInterrupted_B53749DB447CCFA05ECC81ABBE232892_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.WaitForCrafting
struct UToddler_AnimBP_C_WaitForCrafting_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_B53749DB447CCFA05ECC81ABBE232892
struct UToddler_AnimBP_C_OnNotifyBegin_B53749DB447CCFA05ECC81ABBE232892_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetIsInWater
struct UToddler_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_B53749DB447CCFA05ECC81ABBE232892
struct UToddler_AnimBP_C_OnNotifyEnd_B53749DB447CCFA05ECC81ABBE232892_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_BreakMontageInterrupted
struct UToddler_AnimBP_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_BreakMontageBlendOut
struct UToddler_AnimBP_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_BreakMontageComplete
struct UToddler_AnimBP_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set BreakState BPI
struct UToddler_AnimBP_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_WorkLoopsFinished
struct UToddler_AnimBP_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_WorkLoopIncreased
struct UToddler_AnimBP_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_WorkMontageInterrupted
struct UToddler_AnimBP_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_WorkMontageComplete
struct UToddler_AnimBP_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnCompleted_548CB49A4592686477CF36B71C214716
struct UToddler_AnimBP_C_OnCompleted_548CB49A4592686477CF36B71C214716_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set WorkState BPI
struct UToddler_AnimBP_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdleOtherPose BPI
struct UToddler_AnimBP_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdleLookingPose BPI
struct UToddler_AnimBP_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdleTalkingPose BPI
struct UToddler_AnimBP_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdleStandingPose BPI
struct UToddler_AnimBP_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetMontageSettings
struct UToddler_AnimBP_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SelectPickUpAnim
struct UToddler_AnimBP_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnBlendOut_548CB49A4592686477CF36B71C214716
struct UToddler_AnimBP_C_OnBlendOut_548CB49A4592686477CF36B71C214716_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_HolsterWeapon
struct UToddler_AnimBP_C_AnimNotify_HolsterWeapon_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnInterrupted_548CB49A4592686477CF36B71C214716
struct UToddler_AnimBP_C_OnInterrupted_548CB49A4592686477CF36B71C214716_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyBegin_548CB49A4592686477CF36B71C214716
struct UToddler_AnimBP_C_OnNotifyBegin_548CB49A4592686477CF36B71C214716_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_DespawnAnimItem
struct UToddler_AnimBP_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_SpawnAnimItem
struct UToddler_AnimBP_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnNotifyEnd_548CB49A4592686477CF36B71C214716
struct UToddler_AnimBP_C_OnNotifyEnd_548CB49A4592686477CF36B71C214716_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayCraftingAnimation
struct UToddler_AnimBP_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StopMovement
struct UToddler_AnimBP_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StopRotation
struct UToddler_AnimBP_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_LimitCamera
struct UToddler_AnimBP_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayerLookAt
struct UToddler_AnimBP_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayerMoveForInteraction
struct UToddler_AnimBP_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetStrengthAlpha
struct UToddler_AnimBP_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetToolType
struct UToddler_AnimBP_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CameraShake_BPI
struct UToddler_AnimBP_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AddCharacterRotation_BPI
struct UToddler_AnimBP_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_EB8F8BDE483568BF53FB9289C76D3039
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_EB8F8BDE483568BF53FB9289C76D3039_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_D7981D0D4FB7723B7AA43682B9A3EB3A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_D7981D0D4FB7723B7AA43682B9A3EB3A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_459ACE5D48D427A5BBEBDEBEE26B5820
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_459ACE5D48D427A5BBEBDEBEE26B5820_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_ECD07778426A6CD3A0247289A4982D96
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_ECD07778426A6CD3A0247289A4982D96_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_60A8BE6F4BCE9FA4FAF28E96829845B3
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_60A8BE6F4BCE9FA4FAF28E96829845B3_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4D723EFB4DA8F87F556EDBB03A0FE4C6
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4D723EFB4DA8F87F556EDBB03A0FE4C6_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_6EED694C471C0B18AD5D29B06E7FEB3F
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_6EED694C471C0B18AD5D29B06E7FEB3F_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3738D5274DA480E07D82DC82A1ABF85E
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3738D5274DA480E07D82DC82A1ABF85E_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_7D12F30A477B2DBCB7FBB2865C419C79
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_7D12F30A477B2DBCB7FBB2865C419C79_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CDCBECF74118EEBB599920A9CD2442D9
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CDCBECF74118EEBB599920A9CD2442D9_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_73A8F3CD4B1B7894A8CF07A49BC146D4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_73A8F3CD4B1B7894A8CF07A49BC146D4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_0C030926447519DF01A119ACA9530FB4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_0C030926447519DF01A119ACA9530FB4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4F763A8948F5242C3A4A6B957F70AE3E
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4F763A8948F5242C3A4A6B957F70AE3E_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_044B923C47B279C821EA5E9A370AC464
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_044B923C47B279C821EA5E9A370AC464_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0F1AFBD548DC31FC8917A4840A73835B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0F1AFBD548DC31FC8917A4840A73835B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_8014DA7748D638E0C160E1B99DE1F43C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_8014DA7748D638E0C160E1B99DE1F43C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C3C360294FC651D5582762B7F2823497
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C3C360294FC651D5582762B7F2823497_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_20497A2544F87F7AB34A6F91C64286E6
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_20497A2544F87F7AB34A6F91C64286E6_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ADB266484661BA2F44047CBC17F0D2E0
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ADB266484661BA2F44047CBC17F0D2E0_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4ADA5DB04AF93CE7ACB85290DC2DA348
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4ADA5DB04AF93CE7ACB85290DC2DA348_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_56F5AAB84A69D97941082A94240CD87A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_56F5AAB84A69D97941082A94240CD87A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_69DDD24F4954E8AA419C34B14E79F7EA
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_69DDD24F4954E8AA419C34B14E79F7EA_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E25E4C8341B570DCF4BB2F9AF38F8A17
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E25E4C8341B570DCF4BB2F9AF38F8A17_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B1FEFDDB474EAB09DDDDB78F3B6538EB
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B1FEFDDB474EAB09DDDDB78F3B6538EB_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C981458C4AE3235619C08C8FA7AC4B2C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C981458C4AE3235619C08C8FA7AC4B2C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_87DBAF4D49CB080717163ABD5F03C76F
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_87DBAF4D49CB080717163ABD5F03C76F_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F1DFAB464F770AAD9CC83683A28323DD
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F1DFAB464F770AAD9CC83683A28323DD_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B55AD2A4925D7B1B5AC5FB2D8338AB8
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B55AD2A4925D7B1B5AC5FB2D8338AB8_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D082768E472AB92A0C090E8DFB3FC0D4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D082768E472AB92A0C090E8DFB3FC0D4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B81B4B894ADB3AE3839A0CB27B77ADA4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B81B4B894ADB3AE3839A0CB27B77ADA4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EDE2AF544DD0887307050BBFADCB9EC8
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EDE2AF544DD0887307050BBFADCB9EC8_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AF12682444CEF54093376C84CED380A2
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AF12682444CEF54093376C84CED380A2_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0657A8FA454461856AE845A059AB53C4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0657A8FA454461856AE845A059AB53C4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_808FE06A44D96FB93B1DBC9BDC2C41BC
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_808FE06A44D96FB93B1DBC9BDC2C41BC_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A7C2E42449EF4B784F847D8D8B3C52B2
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A7C2E42449EF4B784F847D8D8B3C52B2_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3D8307404E3590E897608E9E59E94843
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3D8307404E3590E897608E9E59E94843_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11CC0B46402A1F809EE4FEB3509EF214
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11CC0B46402A1F809EE4FEB3509EF214_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_305C7C7745DBDE93809B42B17757CCE0
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_305C7C7745DBDE93809B42B17757CCE0_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_27C9BB7140AA1124C4A8738941C341A0
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_27C9BB7140AA1124C4A8738941C341A0_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_920A2CB64C86FD69666320BADCFE2435
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_920A2CB64C86FD69666320BADCFE2435_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E278825E44B7E94B59BCEAB3E07349B4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E278825E44B7E94B59BCEAB3E07349B4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9D97BD2446C4BD66EF55558EBC8D1249
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9D97BD2446C4BD66EF55558EBC8D1249_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_38C7C86942D56C4A2A8BE0AAB5B0AE81
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_38C7C86942D56C4A2A8BE0AAB5B0AE81_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A0ED7A9413908A6681762A732E7E797
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A0ED7A9413908A6681762A732E7E797_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3CFFD7D74C503C51559B72BF3A0017FF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3CFFD7D74C503C51559B72BF3A0017FF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_C3A303724E2E0BAA68339F85CE531B61
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_C3A303724E2E0BAA68339F85CE531B61_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_A7AFC36643654CF6A97220A6A636D8D6
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_A7AFC36643654CF6A97220A6A636D8D6_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E2D6D43B4785A945F63BA693E5C31087
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E2D6D43B4785A945F63BA693E5C31087_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D88BE9E84D3AB741A0D7C08BB28FB7B2
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D88BE9E84D3AB741A0D7C08BB28FB7B2_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_841B72BD4BE836ABC041CEBDA2CC9A6A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_841B72BD4BE836ABC041CEBDA2CC9A6A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_80B21437410B0592CA720CA8448847C1
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_80B21437410B0592CA720CA8448847C1_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3E99F4C8435D3A596ECF878D3C96AACB
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3E99F4C8435D3A596ECF878D3C96AACB_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_B429416C4F4E920446FAA9B361494DF7
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_B429416C4F4E920446FAA9B361494DF7_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B6F3A65C425F051893C6A4A75DF14712
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B6F3A65C425F051893C6A4A75DF14712_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CBAB7298431DE1D0591790B8FFBE24FF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CBAB7298431DE1D0591790B8FFBE24FF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_2BAC446444EB5FD3E3401CA669BA9E65
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_2BAC446444EB5FD3E3401CA669BA9E65_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_5A45A2AD490CA8FEF55F3E8953543F7E
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_5A45A2AD490CA8FEF55F3E8953543F7E_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_314F0B8E466B86ABFB25618A89D50382
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_314F0B8E466B86ABFB25618A89D50382_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B3CCB2584A4869E1FEB55F986AF08567
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B3CCB2584A4869E1FEB55F986AF08567_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_700BEF554F413B9ECA3B70899E97FDFF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_700BEF554F413B9ECA3B70899E97FDFF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_0A8F30FB433A967DD3BC07B0FF975989
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_0A8F30FB433A967DD3BC07B0FF975989_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4888EC3C4EDC5B55EC8090849D20E792
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4888EC3C4EDC5B55EC8090849D20E792_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_15CA90B241C6B1F9B06AC180929CB9FD
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_15CA90B241C6B1F9B06AC180929CB9FD_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_F79E138449D14F72FADFE18FC15EC77B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_F79E138449D14F72FADFE18FC15EC77B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_23A0B76346852CE12C1EC2AE1A3A894C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_23A0B76346852CE12C1EC2AE1A3A894C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_88D8FBF8431FD4C545263F9B1ECAD06D
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_88D8FBF8431FD4C545263F9B1ECAD06D_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C7B47807476AAA5709F0D1834DE92A3B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C7B47807476AAA5709F0D1834DE92A3B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0BACFB3B40D83E12B7C4CBA12AF8F56F
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0BACFB3B40D83E12B7C4CBA12AF8F56F_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3BA4BDF14630E8B70D9FF68A375D76C8
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3BA4BDF14630E8B70D9FF68A375D76C8_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9FCE57F948C2737CE921199A7A072C69
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9FCE57F948C2737CE921199A7A072C69_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7BB4989141C8155AA56B1FB0BAC476B2
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7BB4989141C8155AA56B1FB0BAC476B2_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_951EFF9E470082BC65496387A48A5537
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_951EFF9E470082BC65496387A48A5537_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B20F5F6D49D1DFB54807F0BF90B9BD4A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B20F5F6D49D1DFB54807F0BF90B9BD4A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1295D26A47DF65837C28369B0AF4DE35
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1295D26A47DF65837C28369B0AF4DE35_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EAC407A648A0E8F1D2BDF5A7E86EA0CF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EAC407A648A0E8F1D2BDF5A7E86EA0CF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_57F7FDEC4728B6F34AD81B892ADADB5B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_57F7FDEC4728B6F34AD81B892ADADB5B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C84C0B9A43F3920BD6964BA71A3C72C6
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C84C0B9A43F3920BD6964BA71A3C72C6_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A72D7B94A0EAEEBCB60818EE5852903
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A72D7B94A0EAEEBCB60818EE5852903_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D4B6AFCB499249D4AD4936AAC1FAE332
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D4B6AFCB499249D4AD4936AAC1FAE332_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5D23144E47C2A74B37AC42B2C1C6AA4A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5D23144E47C2A74B37AC42B2C1C6AA4A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1C6E20824D963F8789D29E9386A7A06C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1C6E20824D963F8789D29E9386A7A06C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_DBBD12464D37DAC35DD9A7ACD911F195
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_DBBD12464D37DAC35DD9A7ACD911F195_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D15A574A64541C9616D1931E318E42
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D15A574A64541C9616D1931E318E42_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA35CDC4A84CE35F9B48F98C0F415D4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA35CDC4A84CE35F9B48F98C0F415D4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0D621D9947DF051BE005C09A5C148399
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0D621D9947DF051BE005C09A5C148399_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4422D31147C54F63EB8D6D9DA0224FEF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4422D31147C54F63EB8D6D9DA0224FEF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E78610CF43172EC7110344990F249633
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E78610CF43172EC7110344990F249633_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9686A07A445A4768E1DEB4A76252ED0E
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9686A07A445A4768E1DEB4A76252ED0E_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_745F64A24707CC78A80129830FC9C908
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_745F64A24707CC78A80129830FC9C908_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_37DC9F984B096A3881CA7AA510184954
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_37DC9F984B096A3881CA7AA510184954_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A6E8A384CD69A1256EE9C8DB6AA36B6
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A6E8A384CD69A1256EE9C8DB6AA36B6_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_BC3EC135459AAF9A40312C9FF89D6088
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_BC3EC135459AAF9A40312C9FF89D6088_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A4217FE14CEA6645C1EFDBB7ACFEAB20
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A4217FE14CEA6645C1EFDBB7ACFEAB20_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1ABA2B92418F70545D47E682010B0FA7
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1ABA2B92418F70545D47E682010B0FA7_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ECA5998E45337E43924FF39044B8EF18
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ECA5998E45337E43924FF39044B8EF18_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA99E6645000BC7B979B7816C01FA7C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA99E6645000BC7B979B7816C01FA7C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B3AEB6B4A291D48D61B6B9EEAB8EAEA
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B3AEB6B4A291D48D61B6B9EEAB8EAEA_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D2A7786E4511D331023228A48638243E
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D2A7786E4511D331023228A48638243E_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2633D1DB44B834B1FDCC2C8F6F9D4E9B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2633D1DB44B834B1FDCC2C8F6F9D4E9B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4B2E088C49AD8DB8BFD322B46EAD2E81
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4B2E088C49AD8DB8BFD322B46EAD2E81_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3109A8ED43A0995EA43B38819E882EBC
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3109A8ED43A0995EA43B38819E882EBC_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7E83CCDB475A23A5447E7D9ED4D788EC
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7E83CCDB475A23A5447E7D9ED4D788EC_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E1200B7249FD120639E0518536B25B83
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E1200B7249FD120639E0518536B25B83_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AD7939C3424DAB52FD2EF2BEBA22B51A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AD7939C3424DAB52FD2EF2BEBA22B51A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_36718BB043CE0BB132C6D8A7DBDBE1DC
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_36718BB043CE0BB132C6D8A7DBDBE1DC_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C97D553E4B74871BF3A07683E53226AC
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C97D553E4B74871BF3A07683E53226AC_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CEC2FDCB4B44FF82931FF89B2656C74D
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CEC2FDCB4B44FF82931FF89B2656C74D_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_82F6843C4986FCE216E323BAC93E916B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_82F6843C4986FCE216E323BAC93E916B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_831280114FD900D93563C8B7BB1182F3
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_831280114FD900D93563C8B7BB1182F3_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CED85A4F4FDEE25AC39E5AB91067F026
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CED85A4F4FDEE25AC39E5AB91067F026_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5080960544838E6B79C7BA942F3CF59F
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5080960544838E6B79C7BA942F3CF59F_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_548905BB4A808D75C48ACA8E84F28F80
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_548905BB4A808D75C48ACA8E84F28F80_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A5884554637FAECD998C5A24D690C00
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A5884554637FAECD998C5A24D690C00_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_68DCC446412C9FD22151839D1FDDAFC3
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_68DCC446412C9FD22151839D1FDDAFC3_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1E0F61E04D48C27AC81AE98B2DFE9DB1
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1E0F61E04D48C27AC81AE98B2DFE9DB1_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_FCACB124473CBCE96A37C68757AB7D25
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_FCACB124473CBCE96A37C68757AB7D25_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E965C4E248B243B100B488A53B7DE749
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E965C4E248B243B100B488A53B7DE749_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_25BBBD5249EC09E80A7100902017BDB9
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_25BBBD5249EC09E80A7100902017BDB9_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B0633D9D4DDA142EB2BD7BAE9EA28786
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B0633D9D4DDA142EB2BD7BAE9EA28786_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D7B76C434610827B4A209AFD9ED59C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D7B76C434610827B4A209AFD9ED59C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_32EB64D8441BF6601FC1F189AD0018FA
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_32EB64D8441BF6601FC1F189AD0018FA_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE30A6F54FD8BA1EF507838527CDE78C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE30A6F54FD8BA1EF507838527CDE78C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2FAE82BD424CBA65FBD1DF82C8D9DB06
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2FAE82BD424CBA65FBD1DF82C8D9DB06_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6FA7B4204B70546FB2C05DB3D91E2237
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6FA7B4204B70546FB2C05DB3D91E2237_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_475964694D37075E8199D0B014E8D412
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_475964694D37075E8199D0B014E8D412_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B5CCE92A4B9F2AFE7CDA989CF78EFA81
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B5CCE92A4B9F2AFE7CDA989CF78EFA81_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_365BA2EF4226B5D0CAB18BBB805B8DC4
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_365BA2EF4226B5D0CAB18BBB805B8DC4_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9666A2AC43016A2B824E85B5B09FE636
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9666A2AC43016A2B824E85B5B09FE636_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6A7266974B934B77631F67B82373771B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6A7266974B934B77631F67B82373771B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6359FC5349E80AF4656D5B891A838D2C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6359FC5349E80AF4656D5B891A838D2C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C20442F249237B508149EAB66C311D6F
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C20442F249237B508149EAB66C311D6F_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AB72CEE141737047EF192B8D0CE7CC9A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AB72CEE141737047EF192B8D0CE7CC9A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A98FA335445EC17D1666D3B169BE6CA5
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A98FA335445EC17D1666D3B169BE6CA5_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_12F6F6624D84415A639EF7B3555183A0
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_12F6F6624D84415A639EF7B3555183A0_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F31EE08E49AEDE66877B8D880321BD85
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F31EE08E49AEDE66877B8D880321BD85_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_94F395DF4B753923EA95AC928FDC3B01
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_94F395DF4B753923EA95AC928FDC3B01_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6BC2EDEC4118BEC65E82FDB43BB9FCFF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6BC2EDEC4118BEC65E82FDB43BB9FCFF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_562EADC6427E9902BF40F8A10467D53A
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_562EADC6427E9902BF40F8A10467D53A_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11319D704B277D327B03369AEA22E63C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11319D704B277D327B03369AEA22E63C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_78B17B75421697C976E201B1E6DCD3DF
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_78B17B75421697C976E201B1E6DCD3DF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F6B08EDF430BC7122D8455A25B73543B
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F6B08EDF430BC7122D8455A25B73543B_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B09B058841C43A4BE1E34E92401E1193
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B09B058841C43A4BE1E34E92401E1193_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D17A0E3444BEF354BBE2BD86985FB64C
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D17A0E3444BEF354BBE2BD86985FB64C_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_460063C644B4D52BE270758AED7191BA
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_460063C644B4D52BE270758AED7191BA_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7EC09A6245E4D29CB336F9896BA5CC26
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7EC09A6245E4D29CB336F9896BA5CC26_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE9FCFF74C64B56CF21473A1137B418D
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE9FCFF74C64B56CF21473A1137B418D_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_CD31E95F4062C817200A8B890121B3F1
struct UToddler_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_CD31E95F4062C817200A8B890121B3F1_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.BlueprintInitializeAnimation
struct UToddler_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.BlueprintUpdateAnimation
struct UToddler_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_AnimObjectNotify
struct UToddler_AnimBP_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdlePoseByID BPI
struct UToddler_AnimBP_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set IdleState BPI
struct UToddler_AnimBP_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.ForceStanding
struct UToddler_AnimBP_C_ForceStanding_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set Sitting BPI
struct UToddler_AnimBP_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set Sleeping BPI
struct UToddler_AnimBP_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SetMontageType
struct UToddler_AnimBP_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set Range Strength
struct UToddler_AnimBP_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OverrideCanPerfromHitAction
struct UToddler_AnimBP_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.HoldableHitAction
struct UToddler_AnimBP_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnEndStageInteraction
struct UToddler_AnimBP_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnLoopStageInteraction
struct UToddler_AnimBP_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.OnStartStageInteraction
struct UToddler_AnimBP_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Loop Montage
struct UToddler_AnimBP_C_Loop_Montage_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.ChangeAnimLoopState
struct UToddler_AnimBP_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.CancelAnimationLoops
struct UToddler_AnimBP_C_CancelAnimationLoops_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.HoldableAction
struct UToddler_AnimBP_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set RF_BPI
struct UToddler_AnimBP_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set CrouchingSpeed BPI
struct UToddler_AnimBP_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set SprintingSpeed BPI
struct UToddler_AnimBP_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set RunningSpeed BPI
struct UToddler_AnimBP_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set WalkingSpeed BPI
struct UToddler_AnimBP_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_TurningInPlace BPI
struct UToddler_AnimBP_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_IdleEntryState BPI
struct UToddler_AnimBP_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Pivot BPI
struct UToddler_AnimBP_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_MovementMode BPI
struct UToddler_AnimBP_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_Gait BPI
struct UToddler_AnimBP_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_Stance BPI
struct UToddler_AnimBP_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_RotationMode BPI
struct UToddler_AnimBP_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_Aiming BPI
struct UToddler_AnimBP_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Play_GetUp_Anim BPI
struct UToddler_AnimBP_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.SavePoseSnapshot_BPI
struct UToddler_AnimBP_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Set ALS_ViewMode BPI
struct UToddler_AnimBP_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.ShowTraces_BPI
struct UToddler_AnimBP_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_GetRandomOtherPose
struct UToddler_AnimBP_C_AnimNotify_GetRandomOtherPose_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_GetRandomStandingPose
struct UToddler_AnimBP_C_AnimNotify_GetRandomStandingPose_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_IdleTransitionBool
struct UToddler_AnimBP_C_AnimNotify_IdleTransitionBool_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EnteredSleeping
struct UToddler_AnimBP_C_AnimNotify_EnteredSleeping_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EnteredSitting
struct UToddler_AnimBP_C_AnimNotify_EnteredSitting_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartWakeUp
struct UToddler_AnimBP_C_AnimNotify_StartWakeUp_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EndGoToSleep
struct UToddler_AnimBP_C_AnimNotify_EndGoToSleep_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EndSleep
struct UToddler_AnimBP_C_AnimNotify_EndSleep_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartSleep
struct UToddler_AnimBP_C_AnimNotify_StartSleep_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EndGetUp
struct UToddler_AnimBP_C_AnimNotify_EndGetUp_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartGetUp
struct UToddler_AnimBP_C_AnimNotify_StartGetUp_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EndSitting
struct UToddler_AnimBP_C_AnimNotify_EndSitting_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartSitting
struct UToddler_AnimBP_C_AnimNotify_StartSitting_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_InteractWithActor
struct UToddler_AnimBP_C_AnimNotify_InteractWithActor_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayPickUpAnim
struct UToddler_AnimBP_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_PickUpItem
struct UToddler_AnimBP_C_AnimNotify_PickUpItem_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StopAiming
struct UToddler_AnimBP_C_AnimNotify_StopAiming_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartAiming
struct UToddler_AnimBP_C_AnimNotify_StartAiming_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_PerformInteraction
struct UToddler_AnimBP_C_AnimNotify_PerformInteraction_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_DisableHitAction
struct UToddler_AnimBP_C_AnimNotify_DisableHitAction_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_HoldableTickStop
struct UToddler_AnimBP_C_AnimNotify_HoldableTickStop_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_HoldableTickStart
struct UToddler_AnimBP_C_AnimNotify_HoldableTickStart_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_EndingStageFinished
struct UToddler_AnimBP_C_AnimNotify_EndingStageFinished_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_LoopStageFinished
struct UToddler_AnimBP_C_AnimNotify_LoopStageFinished_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_BeginningStageFinished
struct UToddler_AnimBP_C_AnimNotify_BeginningStageFinished_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StopSnappingIK
struct UToddler_AnimBP_C_AnimNotify_StopSnappingIK_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartSnappingIK
struct UToddler_AnimBP_C_AnimNotify_StartSnappingIK_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_ResetSnapping
struct UToddler_AnimBP_C_AnimNotify_ResetSnapping_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_StartSnapping
struct UToddler_AnimBP_C_AnimNotify_StartSnapping_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_SnapPoint
struct UToddler_AnimBP_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_RF_to_LF
struct UToddler_AnimBP_C_AnimNotify_RF_to_LF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_LF_to_RF
struct UToddler_AnimBP_C_AnimNotify_LF_to_RF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CRF_to_CLF
struct UToddler_AnimBP_C_AnimNotify_CRF_to_CLF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CLF_to_CRF
struct UToddler_AnimBP_C_AnimNotify_CLF_to_CRF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_RF_to_CRF
struct UToddler_AnimBP_C_AnimNotify_RF_to_CRF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CRF_to_RF
struct UToddler_AnimBP_C_AnimNotify_CRF_to_RF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CRF_to_N
struct UToddler_AnimBP_C_AnimNotify_CRF_to_N_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_N_to_CRF
struct UToddler_AnimBP_C_AnimNotify_N_to_CRF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CLF_to_LF
struct UToddler_AnimBP_C_AnimNotify_CLF_to_LF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_LF_to_CLF
struct UToddler_AnimBP_C_AnimNotify_LF_to_CLF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_CLF_to_N
struct UToddler_AnimBP_C_AnimNotify_CLF_to_N_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_N_to_CLF
struct UToddler_AnimBP_C_AnimNotify_N_to_CLF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_RF_to_N
struct UToddler_AnimBP_C_AnimNotify_RF_to_N_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_N_to_RF
struct UToddler_AnimBP_C_AnimNotify_N_to_RF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_LF_to_N
struct UToddler_AnimBP_C_AnimNotify_LF_to_N_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_N_to_LF
struct UToddler_AnimBP_C_AnimNotify_N_to_LF_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.IdleTransition
struct UToddler_AnimBP_C_IdleTransition_Params
{
	class UAnimMontage*                                Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Left_Stopping
struct UToddler_AnimBP_C_AnimNotify_Left_Stopping_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Entered_Stopping
struct UToddler_AnimBP_C_AnimNotify_Entered_Stopping_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Land
struct UToddler_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Left_Pivot
struct UToddler_AnimBP_C_AnimNotify_Left_Pivot_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Entered_Pivot
struct UToddler_AnimBP_C_AnimNotify_Entered_Pivot_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Entered_NotMoving
struct UToddler_AnimBP_C_AnimNotify_Entered_NotMoving_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Left_Moving
struct UToddler_AnimBP_C_AnimNotify_Left_Moving_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Entered_Moving
struct UToddler_AnimBP_C_AnimNotify_Entered_Moving_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.AnimNotify_Left_NotMoving
struct UToddler_AnimBP_C_AnimNotify_Left_NotMoving_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Reset Player Controller State
struct UToddler_AnimBP_C_Reset_Player_Controller_State_Params
{
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.Change Player Controller State
struct UToddler_AnimBP_C_Change_Player_Controller_State_Params
{
	struct FST_MontagesSettings                        MontageSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.PlayMontage(Networked)
struct UToddler_AnimBP_C_PlayMontage_Networked__Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Toddler_AnimBP.Toddler_AnimBP_C.ExecuteUbergraph_Toddler_AnimBP
struct UToddler_AnimBP_C_ExecuteUbergraph_Toddler_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
