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

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetInteractionEndpoint
struct UMale_Mature_AnimBP_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetPhysicsHandle
struct UMale_Mature_AnimBP_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayMountAnimation
struct UMale_Mature_AnimBP_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetProfessionData
struct UMale_Mature_AnimBP_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetIsInDialogue_BPI
struct UMale_Mature_AnimBP_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetSystemManager
struct UMale_Mature_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetBaseCharacterWorldLocation
struct UMale_Mature_AnimBP_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayHolsterAnimation
struct UMale_Mature_AnimBP_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetHeadTransform
struct UMale_Mature_AnimBP_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetStatsComponent
struct UMale_Mature_AnimBP_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetProfession
struct UMale_Mature_AnimBP_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetCurrentPickUpAnim
struct UMale_Mature_AnimBP_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetIsAnyMontageFromMapPlaying
struct UMale_Mature_AnimBP_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.isPlayer
struct UMale_Mature_AnimBP_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetCameraViewDirection
struct UMale_Mature_AnimBP_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Get ALS_Stance BPI
struct UMale_Mature_AnimBP_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimGraph
struct UMale_Mature_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetPelvisDip
struct UMale_Mature_AnimBP_C_GetPelvisDip_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNPCUnoptimized
struct UMale_Mature_AnimBP_C_OnNPCUnoptimized_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNPCOptimized
struct UMale_Mature_AnimBP_C_OnNPCOptimized_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CheckALSStance
struct UMale_Mature_AnimBP_C_CheckALSStance_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNPCActive
struct UMale_Mature_AnimBP_C_OnNPCActive_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNPCDeactive
struct UMale_Mature_AnimBP_C_OnNPCDeactive_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.VerifyPoseID
struct UMale_Mature_AnimBP_C_VerifyPoseID_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetTalkingPoseExcludes
struct UMale_Mature_AnimBP_C_GetTalkingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetStandingPoseExcludes
struct UMale_Mature_AnimBP_C_GetStandingPoseExcludes_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.UpdateIKState
struct UMale_Mature_AnimBP_C_UpdateIKState_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetCurrentSeason
struct UMale_Mature_AnimBP_C_GetCurrentSeason_Params
{
	int                                                Season;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetPoseID
struct UMale_Mature_AnimBP_C_SetPoseID_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Log_StateMachine
struct UMale_Mature_AnimBP_C_Log_StateMachine_Params
{
	struct FString                                     inString;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LogPrinted;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.RandomizeAmountOfLoopsForSitting
struct UMale_Mature_AnimBP_C_RandomizeAmountOfLoopsForSitting_Params
{
	float                                              Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SelectBreakMontage
struct UMale_Mature_AnimBP_C_SelectBreakMontage_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SelectWorkMontage
struct UMale_Mature_AnimBP_C_SelectWorkMontage_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetCurrentHoldableMontage
struct UMale_Mature_AnimBP_C_SetCurrentHoldableMontage_Params
{
	class UAnimMontage*                                CurrentHoldableMontage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.IsMontagePlaying
struct UMale_Mature_AnimBP_C_IsMontagePlaying_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetHeldItem
struct UMale_Mature_AnimBP_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    Held_Item;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CheckIfShouldPlayAnotherLoop
struct UMale_Mature_AnimBP_C_CheckIfShouldPlayAnotherLoop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetFullBodyAimOffset
struct UMale_Mature_AnimBP_C_SetFullBodyAimOffset_Params
{
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetMontageAimOffset
struct UMale_Mature_AnimBP_C_SetMontageAimOffset_Params
{
	class UBlendSpaceBase*                             MontageAimOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CheckIfNewMontage
struct UMale_Mature_AnimBP_C_CheckIfNewMontage_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.IsAnyMontageFromMapPlaying
struct UMale_Mature_AnimBP_C_IsAnyMontageFromMapPlaying_Params
{
	bool                                               AnyMontagePlaying;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetMontageSetting
struct UMale_Mature_AnimBP_C_SetMontageSetting_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetMontageSettings
struct UMale_Mature_AnimBP_C_GetMontageSettings_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CheckIfIsLookingDown
struct UMale_Mature_AnimBP_C_CheckIfIsLookingDown_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SelectMontageDependingOnTheAngle
struct UMale_Mature_AnimBP_C_SelectMontageDependingOnTheAngle_Params
{
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        MontageSettings;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetDefaultValues 
struct UMale_Mature_AnimBP_C_SetDefaultValues__Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetReferences
struct UMale_Mature_AnimBP_C_SetReferences_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateLandPredictionAlpha
struct UMale_Mature_AnimBP_C_CalculateLandPredictionAlpha_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateInAirLeaningValues
struct UMale_Mature_AnimBP_C_CalculateInAirLeaningValues_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.On ALS_MovementMode Changed
struct UMale_Mature_AnimBP_C_On_ALS_MovementMode_Changed_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculatePlayRates
struct UMale_Mature_AnimBP_C_CalculatePlayRates_Params
{
	float                                              WalkAnimSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunAnimSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchAnimSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateGaitValue
struct UMale_Mature_AnimBP_C_CalculateGaitValue_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.On ALS_Stance Changed
struct UMale_Mature_AnimBP_C_On_ALS_Stance_Changed_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.TurnInPlace (Responsive)
struct UMale_Mature_AnimBP_C_TurnInPlace__Responsive__Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               Turn_Anims;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateStartPosition
struct UMale_Mature_AnimBP_C_CalculateStartPosition_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.GetVariablesFromBaseCharacterBP
struct UMale_Mature_AnimBP_C_GetVariablesFromBaseCharacterBP_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.TurnInPlace (Delay)
struct UMale_Mature_AnimBP_C_TurnInPlace__Delay__Params
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

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateAimOffset
struct UMale_Mature_AnimBP_C_CalculateAimOffset_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateGroundedLeaningValues
struct UMale_Mature_AnimBP_C_CalculateGroundedLeaningValues_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CalculateMovementDirection
struct UMale_Mature_AnimBP_C_CalculateMovementDirection_Params
{
	float                                              DirectionThresholdMin;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DirectionThresholdMax;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_5B4FF2714EEC646C50E378908440FF17
struct UMale_Mature_AnimBP_C_OnCompleted_5B4FF2714EEC646C50E378908440FF17_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_5B4FF2714EEC646C50E378908440FF17
struct UMale_Mature_AnimBP_C_OnBlendOut_5B4FF2714EEC646C50E378908440FF17_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_5B4FF2714EEC646C50E378908440FF17
struct UMale_Mature_AnimBP_C_OnInterrupted_5B4FF2714EEC646C50E378908440FF17_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_5B4FF2714EEC646C50E378908440FF17
struct UMale_Mature_AnimBP_C_OnNotifyBegin_5B4FF2714EEC646C50E378908440FF17_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_5B4FF2714EEC646C50E378908440FF17
struct UMale_Mature_AnimBP_C_OnNotifyEnd_5B4FF2714EEC646C50E378908440FF17_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_EF2EEEF24254DDF0E4CDA6AA5B8D876A
struct UMale_Mature_AnimBP_C_OnCompleted_EF2EEEF24254DDF0E4CDA6AA5B8D876A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_EF2EEEF24254DDF0E4CDA6AA5B8D876A
struct UMale_Mature_AnimBP_C_OnBlendOut_EF2EEEF24254DDF0E4CDA6AA5B8D876A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_EF2EEEF24254DDF0E4CDA6AA5B8D876A
struct UMale_Mature_AnimBP_C_OnInterrupted_EF2EEEF24254DDF0E4CDA6AA5B8D876A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_EF2EEEF24254DDF0E4CDA6AA5B8D876A
struct UMale_Mature_AnimBP_C_OnNotifyBegin_EF2EEEF24254DDF0E4CDA6AA5B8D876A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_EF2EEEF24254DDF0E4CDA6AA5B8D876A
struct UMale_Mature_AnimBP_C_OnNotifyEnd_EF2EEEF24254DDF0E4CDA6AA5B8D876A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_20C59E0F4DB9EBCCAFCEF480ACF21D2E
struct UMale_Mature_AnimBP_C_OnCompleted_20C59E0F4DB9EBCCAFCEF480ACF21D2E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_20C59E0F4DB9EBCCAFCEF480ACF21D2E
struct UMale_Mature_AnimBP_C_OnBlendOut_20C59E0F4DB9EBCCAFCEF480ACF21D2E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_20C59E0F4DB9EBCCAFCEF480ACF21D2E
struct UMale_Mature_AnimBP_C_OnInterrupted_20C59E0F4DB9EBCCAFCEF480ACF21D2E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_20C59E0F4DB9EBCCAFCEF480ACF21D2E
struct UMale_Mature_AnimBP_C_OnNotifyBegin_20C59E0F4DB9EBCCAFCEF480ACF21D2E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_20C59E0F4DB9EBCCAFCEF480ACF21D2E
struct UMale_Mature_AnimBP_C_OnNotifyEnd_20C59E0F4DB9EBCCAFCEF480ACF21D2E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_5A30337A4D083346A82E89B0A8F70529
struct UMale_Mature_AnimBP_C_OnCompleted_5A30337A4D083346A82E89B0A8F70529_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_5A30337A4D083346A82E89B0A8F70529
struct UMale_Mature_AnimBP_C_OnBlendOut_5A30337A4D083346A82E89B0A8F70529_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_5A30337A4D083346A82E89B0A8F70529
struct UMale_Mature_AnimBP_C_OnInterrupted_5A30337A4D083346A82E89B0A8F70529_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_5A30337A4D083346A82E89B0A8F70529
struct UMale_Mature_AnimBP_C_OnNotifyBegin_5A30337A4D083346A82E89B0A8F70529_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_5A30337A4D083346A82E89B0A8F70529
struct UMale_Mature_AnimBP_C_OnNotifyEnd_5A30337A4D083346A82E89B0A8F70529_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_84818D9F4E64E6129562DAB31AD96919
struct UMale_Mature_AnimBP_C_OnCompleted_84818D9F4E64E6129562DAB31AD96919_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_84818D9F4E64E6129562DAB31AD96919
struct UMale_Mature_AnimBP_C_OnBlendOut_84818D9F4E64E6129562DAB31AD96919_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_84818D9F4E64E6129562DAB31AD96919
struct UMale_Mature_AnimBP_C_OnInterrupted_84818D9F4E64E6129562DAB31AD96919_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_84818D9F4E64E6129562DAB31AD96919
struct UMale_Mature_AnimBP_C_OnNotifyBegin_84818D9F4E64E6129562DAB31AD96919_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_84818D9F4E64E6129562DAB31AD96919
struct UMale_Mature_AnimBP_C_OnNotifyEnd_84818D9F4E64E6129562DAB31AD96919_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_74702F4E438870B39EE15CAD12F06B10
struct UMale_Mature_AnimBP_C_OnCompleted_74702F4E438870B39EE15CAD12F06B10_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_74702F4E438870B39EE15CAD12F06B10
struct UMale_Mature_AnimBP_C_OnBlendOut_74702F4E438870B39EE15CAD12F06B10_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_74702F4E438870B39EE15CAD12F06B10
struct UMale_Mature_AnimBP_C_OnInterrupted_74702F4E438870B39EE15CAD12F06B10_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_74702F4E438870B39EE15CAD12F06B10
struct UMale_Mature_AnimBP_C_OnNotifyBegin_74702F4E438870B39EE15CAD12F06B10_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_74702F4E438870B39EE15CAD12F06B10
struct UMale_Mature_AnimBP_C_OnNotifyEnd_74702F4E438870B39EE15CAD12F06B10_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetMountAnimalType BPI
struct UMale_Mature_AnimBP_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.UpdateIKAlpha
struct UMale_Mature_AnimBP_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayMountSpecial
struct UMale_Mature_AnimBP_C_PlayMountSpecial_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_BF117CC1439D9E43126E6B97279E4AD5
struct UMale_Mature_AnimBP_C_OnCompleted_BF117CC1439D9E43126E6B97279E4AD5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayMountStopAnimation
struct UMale_Mature_AnimBP_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_BF117CC1439D9E43126E6B97279E4AD5
struct UMale_Mature_AnimBP_C_OnBlendOut_BF117CC1439D9E43126E6B97279E4AD5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_BF117CC1439D9E43126E6B97279E4AD5
struct UMale_Mature_AnimBP_C_OnInterrupted_BF117CC1439D9E43126E6B97279E4AD5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_BF117CC1439D9E43126E6B97279E4AD5
struct UMale_Mature_AnimBP_C_OnNotifyBegin_BF117CC1439D9E43126E6B97279E4AD5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_BF117CC1439D9E43126E6B97279E4AD5
struct UMale_Mature_AnimBP_C_OnNotifyEnd_BF117CC1439D9E43126E6B97279E4AD5_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set Caught Prey BPI
struct UMale_Mature_AnimBP_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Knockback
struct UMale_Mature_AnimBP_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetIsInWater
struct UMale_Mature_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_BreakMontageInterrupted
struct UMale_Mature_AnimBP_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_BreakMontageBlendOut
struct UMale_Mature_AnimBP_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_BreakMontageComplete
struct UMale_Mature_AnimBP_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_WorkLoopsFinished
struct UMale_Mature_AnimBP_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_WorkLoopIncreased
struct UMale_Mature_AnimBP_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_WorkMontageInterrupted
struct UMale_Mature_AnimBP_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_E0613A2242422866A3E5548B318FD57A
struct UMale_Mature_AnimBP_C_OnCompleted_E0613A2242422866A3E5548B318FD57A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_WorkMontageComplete
struct UMale_Mature_AnimBP_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdleOtherPose BPI
struct UMale_Mature_AnimBP_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdleLookingPose BPI
struct UMale_Mature_AnimBP_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdleTalkingPose BPI
struct UMale_Mature_AnimBP_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdleStandingPose BPI
struct UMale_Mature_AnimBP_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayerLookAt
struct UMale_Mature_AnimBP_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayerMoveForInteraction
struct UMale_Mature_AnimBP_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetToolType
struct UMale_Mature_AnimBP_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_E0613A2242422866A3E5548B318FD57A
struct UMale_Mature_AnimBP_C_OnBlendOut_E0613A2242422866A3E5548B318FD57A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CameraShake_BPI
struct UMale_Mature_AnimBP_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AddCharacterRotation_BPI
struct UMale_Mature_AnimBP_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_E0613A2242422866A3E5548B318FD57A
struct UMale_Mature_AnimBP_C_OnInterrupted_E0613A2242422866A3E5548B318FD57A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_E0613A2242422866A3E5548B318FD57A
struct UMale_Mature_AnimBP_C_OnNotifyBegin_E0613A2242422866A3E5548B318FD57A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_E0613A2242422866A3E5548B318FD57A
struct UMale_Mature_AnimBP_C_OnNotifyEnd_E0613A2242422866A3E5548B318FD57A_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_4B2D178C4F9516A5E7FF6593EC9F69A9
struct UMale_Mature_AnimBP_C_OnCompleted_4B2D178C4F9516A5E7FF6593EC9F69A9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_4B2D178C4F9516A5E7FF6593EC9F69A9
struct UMale_Mature_AnimBP_C_OnBlendOut_4B2D178C4F9516A5E7FF6593EC9F69A9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_4B2D178C4F9516A5E7FF6593EC9F69A9
struct UMale_Mature_AnimBP_C_OnInterrupted_4B2D178C4F9516A5E7FF6593EC9F69A9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_4B2D178C4F9516A5E7FF6593EC9F69A9
struct UMale_Mature_AnimBP_C_OnNotifyBegin_4B2D178C4F9516A5E7FF6593EC9F69A9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_4B2D178C4F9516A5E7FF6593EC9F69A9
struct UMale_Mature_AnimBP_C_OnNotifyEnd_4B2D178C4F9516A5E7FF6593EC9F69A9_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_E1C8968D46C7CCE78C583F9F0C9FC25E
struct UMale_Mature_AnimBP_C_OnCompleted_E1C8968D46C7CCE78C583F9F0C9FC25E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_E1C8968D46C7CCE78C583F9F0C9FC25E
struct UMale_Mature_AnimBP_C_OnBlendOut_E1C8968D46C7CCE78C583F9F0C9FC25E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_E1C8968D46C7CCE78C583F9F0C9FC25E
struct UMale_Mature_AnimBP_C_OnInterrupted_E1C8968D46C7CCE78C583F9F0C9FC25E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_E1C8968D46C7CCE78C583F9F0C9FC25E
struct UMale_Mature_AnimBP_C_OnNotifyBegin_E1C8968D46C7CCE78C583F9F0C9FC25E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_E1C8968D46C7CCE78C583F9F0C9FC25E
struct UMale_Mature_AnimBP_C_OnNotifyEnd_E1C8968D46C7CCE78C583F9F0C9FC25E_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_005729F147E3E491DA62D2B1429A9F83
struct UMale_Mature_AnimBP_C_OnCompleted_005729F147E3E491DA62D2B1429A9F83_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_005729F147E3E491DA62D2B1429A9F83
struct UMale_Mature_AnimBP_C_OnBlendOut_005729F147E3E491DA62D2B1429A9F83_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_005729F147E3E491DA62D2B1429A9F83
struct UMale_Mature_AnimBP_C_OnInterrupted_005729F147E3E491DA62D2B1429A9F83_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_005729F147E3E491DA62D2B1429A9F83
struct UMale_Mature_AnimBP_C_OnNotifyBegin_005729F147E3E491DA62D2B1429A9F83_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_005729F147E3E491DA62D2B1429A9F83
struct UMale_Mature_AnimBP_C_OnNotifyEnd_005729F147E3E491DA62D2B1429A9F83_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_26B2F4624AB296D86978779521501C6F
struct UMale_Mature_AnimBP_C_OnCompleted_26B2F4624AB296D86978779521501C6F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_26B2F4624AB296D86978779521501C6F
struct UMale_Mature_AnimBP_C_OnBlendOut_26B2F4624AB296D86978779521501C6F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_26B2F4624AB296D86978779521501C6F
struct UMale_Mature_AnimBP_C_OnInterrupted_26B2F4624AB296D86978779521501C6F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_26B2F4624AB296D86978779521501C6F
struct UMale_Mature_AnimBP_C_OnNotifyBegin_26B2F4624AB296D86978779521501C6F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_26B2F4624AB296D86978779521501C6F
struct UMale_Mature_AnimBP_C_OnNotifyEnd_26B2F4624AB296D86978779521501C6F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_8CF614E64D60B79F118543901B13C400
struct UMale_Mature_AnimBP_C_OnCompleted_8CF614E64D60B79F118543901B13C400_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_8CF614E64D60B79F118543901B13C400
struct UMale_Mature_AnimBP_C_OnBlendOut_8CF614E64D60B79F118543901B13C400_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_8CF614E64D60B79F118543901B13C400
struct UMale_Mature_AnimBP_C_OnInterrupted_8CF614E64D60B79F118543901B13C400_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_8CF614E64D60B79F118543901B13C400
struct UMale_Mature_AnimBP_C_OnNotifyBegin_8CF614E64D60B79F118543901B13C400_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_8CF614E64D60B79F118543901B13C400
struct UMale_Mature_AnimBP_C_OnNotifyEnd_8CF614E64D60B79F118543901B13C400_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_454E94D9420809581F2D87B617AB1762
struct UMale_Mature_AnimBP_C_OnCompleted_454E94D9420809581F2D87B617AB1762_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_454E94D9420809581F2D87B617AB1762
struct UMale_Mature_AnimBP_C_OnBlendOut_454E94D9420809581F2D87B617AB1762_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_454E94D9420809581F2D87B617AB1762
struct UMale_Mature_AnimBP_C_OnInterrupted_454E94D9420809581F2D87B617AB1762_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_454E94D9420809581F2D87B617AB1762
struct UMale_Mature_AnimBP_C_OnNotifyBegin_454E94D9420809581F2D87B617AB1762_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_454E94D9420809581F2D87B617AB1762
struct UMale_Mature_AnimBP_C_OnNotifyEnd_454E94D9420809581F2D87B617AB1762_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnCompleted_D7419F024A2E7942D8BD9690EB564E71
struct UMale_Mature_AnimBP_C_OnCompleted_D7419F024A2E7942D8BD9690EB564E71_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnBlendOut_D7419F024A2E7942D8BD9690EB564E71
struct UMale_Mature_AnimBP_C_OnBlendOut_D7419F024A2E7942D8BD9690EB564E71_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnInterrupted_D7419F024A2E7942D8BD9690EB564E71
struct UMale_Mature_AnimBP_C_OnInterrupted_D7419F024A2E7942D8BD9690EB564E71_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyBegin_D7419F024A2E7942D8BD9690EB564E71
struct UMale_Mature_AnimBP_C_OnNotifyBegin_D7419F024A2E7942D8BD9690EB564E71_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnNotifyEnd_D7419F024A2E7942D8BD9690EB564E71
struct UMale_Mature_AnimBP_C_OnNotifyEnd_D7419F024A2E7942D8BD9690EB564E71_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_C549B60843B4F4C3AAA8A4AE062FF0A6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_C549B60843B4F4C3AAA8A4AE062FF0A6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_6CA6CAF94DC69DB7CCEA1AA3437BC081
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_6CA6CAF94DC69DB7CCEA1AA3437BC081_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_888BD355442341EF7C9C928E612C3601
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_888BD355442341EF7C9C928E612C3601_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_9B2B8B394519E23172B464A5B57DA590
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_9B2B8B394519E23172B464A5B57DA590_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_601A924A442E143F97B3EA934ED9D3FB
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_601A924A442E143F97B3EA934ED9D3FB_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_350116B744B4E975071516838723DD56
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_350116B744B4E975071516838723DD56_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_46D38CE64597465C2720B6A6B31A14A1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_46D38CE64597465C2720B6A6B31A14A1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_4E2A8D58481AAB1498F5AFA281833562
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_4E2A8D58481AAB1498F5AFA281833562_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_20B2B9EA435D23583C26AF80F2A8ADA0
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_20B2B9EA435D23583C26AF80F2A8ADA0_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_F3B79B34414A1FA5668DE99E96B53366
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_F3B79B34414A1FA5668DE99E96B53366_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_9801AAA143E98C91DB68B79DC8D3974A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_9801AAA143E98C91DB68B79DC8D3974A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_0B9157134D6C35C50AB03EBA11B43091
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_0B9157134D6C35C50AB03EBA11B43091_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_95CD57B14ACB1D89479FDF86674A8149
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_95CD57B14ACB1D89479FDF86674A8149_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_D5FECE1942576EBDEC395499E7D95FEE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_D5FECE1942576EBDEC395499E7D95FEE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_B8EA2F484476C8AEFBBF4685F1BEEBA5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_B8EA2F484476C8AEFBBF4685F1BEEBA5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BDE7296D45C3F36FB461968B098AB968
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BDE7296D45C3F36FB461968B098AB968_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_CF4E69D54190F1736A7D60B4BE42CAC6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_CF4E69D54190F1736A7D60B4BE42CAC6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CE61575745944D4BBA564385BD3C80BC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CE61575745944D4BBA564385BD3C80BC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_407E6DDF4F2249B840EE899715C40E82
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_407E6DDF4F2249B840EE899715C40E82_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B79E53884F56D0C6F5698188E119ADC7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B79E53884F56D0C6F5698188E119ADC7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A992C98D4D4DE82681AEC59F16B297DA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A992C98D4D4DE82681AEC59F16B297DA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_207F657D46FD2392327ADBB4568AC7BE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_207F657D46FD2392327ADBB4568AC7BE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_416366394BD803BAA53D77B4E5F3E965
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_416366394BD803BAA53D77B4E5F3E965_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_59B7C41247D8033E9049749BDE6C8B6A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_59B7C41247D8033E9049749BDE6C8B6A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6B7712C4466C7A5BFCC38C9491B05FF8
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6B7712C4466C7A5BFCC38C9491B05FF8_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84448BDE4E0EA84EF5E3F2B25682F669
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84448BDE4E0EA84EF5E3F2B25682F669_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_06A5F3B3414A34CF20B7EDA7D5D59FE9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_06A5F3B3414A34CF20B7EDA7D5D59FE9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3332E87147E413A6C7F0F5A5F2BEC42C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3332E87147E413A6C7F0F5A5F2BEC42C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_803FFAAD46288A913F6F26B5D7466BEF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_803FFAAD46288A913F6F26B5D7466BEF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_09AE9A7348C671481927C683956EB449
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_09AE9A7348C671481927C683956EB449_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_641B98CB4DF08AAFFE563CBA18969DDC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_641B98CB4DF08AAFFE563CBA18969DDC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9D83771C452C6A3280E1438D9D94DE86
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9D83771C452C6A3280E1438D9D94DE86_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84FBCB434AFB32CE209FC0A608AB8D25
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84FBCB434AFB32CE209FC0A608AB8D25_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_78D72E054B84B3503561D48A9828DEE5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_78D72E054B84B3503561D48A9828DEE5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B5DCA3734BB8008E83FA328CF63A0862
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B5DCA3734BB8008E83FA328CF63A0862_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5EC3CAED4EF7CF57561D1DA9D2AC3936
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5EC3CAED4EF7CF57561D1DA9D2AC3936_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6EB369C9413093AF7AF24C960194C6B2
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6EB369C9413093AF7AF24C960194C6B2_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3F6D616B44E2E985F95A95852E6AEB2B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3F6D616B44E2E985F95A95852E6AEB2B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_E1D711C74BEDD61E83892D913B9C3703
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_E1D711C74BEDD61E83892D913B9C3703_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_40F21D5D4D178199125AB2A731866850
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_40F21D5D4D178199125AB2A731866850_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BD4873C04CB6CF914822C29F2F6F62FE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BD4873C04CB6CF914822C29F2F6F62FE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_247DBD644CFED74A773211A64805463F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_247DBD644CFED74A773211A64805463F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_24F6310C441C8C93B354F199B305DDF9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_24F6310C441C8C93B354F199B305DDF9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E9DE341342BB337B51422E9D13A6D9EC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E9DE341342BB337B51422E9D13A6D9EC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_937B5F5248CA546DDAA5DBADAAE33480
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_937B5F5248CA546DDAA5DBADAAE33480_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AD7F288A48D1B3A1F0172A8642835AD3
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AD7F288A48D1B3A1F0172A8642835AD3_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_87887DB343431846FCBF43B105F65800
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_87887DB343431846FCBF43B105F65800_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_2B70A85742C6269441C77894467217B9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_2B70A85742C6269441C77894467217B9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_64C86657405EF7333408C481134895E8
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_64C86657405EF7333408C481134895E8_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_83FE00C84EFB421DD8EAC597ACBE09D5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_83FE00C84EFB421DD8EAC597ACBE09D5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_386C32B74A36018B664AD8A748FC92BD
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_386C32B74A36018B664AD8A748FC92BD_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_CE198F384F79C7E7F5ED8888634F8B51
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_CE198F384F79C7E7F5ED8888634F8B51_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_1820F9B14ED12041F83ABFA4DB4B4CBF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_1820F9B14ED12041F83ABFA4DB4B4CBF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_857FF23045CB94563D9D9891F20EF099
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_857FF23045CB94563D9D9891F20EF099_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_FD991D004DC481C9855AED9CF73B6499
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_FD991D004DC481C9855AED9CF73B6499_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_D5E4A5D044F421AE6819148A9C0B0BB5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_D5E4A5D044F421AE6819148A9C0B0BB5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_23A1057A4B4BC95CFF95CEAE54430A69
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_23A1057A4B4BC95CFF95CEAE54430A69_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_00CA260D4FCE13D74C4C67AAD966F913
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_00CA260D4FCE13D74C4C67AAD966F913_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_9E8FF00B4CD682ABF30A678E646FB463
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_9E8FF00B4CD682ABF30A678E646FB463_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_03A2F2CF41C9AC72EF30F79F7CFDB91A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_03A2F2CF41C9AC72EF30F79F7CFDB91A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_F91BB2774E5CF501593277AFB04EA01E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_F91BB2774E5CF501593277AFB04EA01E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_7500BE2447E5CEEA9C7EE7B466D3C0CC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_7500BE2447E5CEEA9C7EE7B466D3C0CC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_762AB9324FFDF67EC4F5E4B5FF6CB0EC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_762AB9324FFDF67EC4F5E4B5FF6CB0EC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_BA83F8EA4BD5FADDC9D011B30DFFC980
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_BA83F8EA4BD5FADDC9D011B30DFFC980_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_FEEC7733483C26E45944959D5F4D6850
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_FEEC7733483C26E45944959D5F4D6850_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BCD938634E583DEB51AA489C0F7DCF77
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BCD938634E583DEB51AA489C0F7DCF77_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9C4B5DE74886421C92912CB4D52C195A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9C4B5DE74886421C92912CB4D52C195A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CCB1EC8942D2E5C06D26D1A9354B25F4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CCB1EC8942D2E5C06D26D1A9354B25F4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_079D38404CB608121D73B188A194F005
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_079D38404CB608121D73B188A194F005_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8A224F29431763AD50D752937EBD12B8
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8A224F29431763AD50D752937EBD12B8_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B93D89B1429AEA739422129972D347BA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B93D89B1429AEA739422129972D347BA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9242D91C4E60724E97AB7599913C53DC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9242D91C4E60724E97AB7599913C53DC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3C166E4C4B53204EFC87219A04D5C574
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3C166E4C4B53204EFC87219A04D5C574_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7F9D11CD411846BFA2251BAB4BEF2C29
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7F9D11CD411846BFA2251BAB4BEF2C29_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_81C013EE4112007CB3620588CF92FA75
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_81C013EE4112007CB3620588CF92FA75_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C053E0514D8C1DBD6442F7A7A4EAF47D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C053E0514D8C1DBD6442F7A7A4EAF47D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_38508B74414EC561F74BC993E9708F54
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_38508B74414EC561F74BC993E9708F54_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_508705B447E63925E12A5DB13907BB3F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_508705B447E63925E12A5DB13907BB3F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D93444C146A180E8899A5B99BAA9B3B6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D93444C146A180E8899A5B99BAA9B3B6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_258672834B97EC1AAEC1AC9E81F92105
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_258672834B97EC1AAEC1AC9E81F92105_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CF1AFDF145A291B7A4E2F494BAE6660D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CF1AFDF145A291B7A4E2F494BAE6660D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F72A47BC4FA9EE7E4BE3F18FBA8BCC63
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F72A47BC4FA9EE7E4BE3F18FBA8BCC63_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_16AAC7FE468D28087CEE16AD561B3454
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_16AAC7FE468D28087CEE16AD561B3454_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABAFDACF49E8A2FDE7F899A0FE3D0CB5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABAFDACF49E8A2FDE7F899A0FE3D0CB5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0CB4AA94491FBE56BBCED29A35123279
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0CB4AA94491FBE56BBCED29A35123279_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A5212DC6445DF4DE378167829484ADBF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A5212DC6445DF4DE378167829484ADBF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_09F72B78430DE7A6376D52B71B75F2D1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_09F72B78430DE7A6376D52B71B75F2D1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A4B5F7804D8A02D3B234ECA67A15026D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A4B5F7804D8A02D3B234ECA67A15026D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E728FA1D4198CC20521874B552F218E3
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E728FA1D4198CC20521874B552F218E3_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E3E8D2EB4F41D97AC24351AAA77A09D5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E3E8D2EB4F41D97AC24351AAA77A09D5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_244093F6474942316552BFBD48CD42CE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_244093F6474942316552BFBD48CD42CE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2F0894BC44A8D9EB67CFF8B72FC20007
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2F0894BC44A8D9EB67CFF8B72FC20007_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DFFDF48C497964E57CC990B76BCBC247
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DFFDF48C497964E57CC990B76BCBC247_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E141F4BB456C898B8A1D88A128F128E6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E141F4BB456C898B8A1D88A128F128E6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CECFA6AD4F34FFD6D531E6B88E1C0F34
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CECFA6AD4F34FFD6D531E6B88E1C0F34_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3A1D29264D7C49A25D6FF585DDA7F9A4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3A1D29264D7C49A25D6FF585DDA7F9A4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3538CAA54D696514034B78B17E5ACF31
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3538CAA54D696514034B78B17E5ACF31_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6A14CBE943158498BDB96D96E8BE400A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6A14CBE943158498BDB96D96E8BE400A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CFCCF4024758E569B83B7EAA8CC20E2C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CFCCF4024758E569B83B7EAA8CC20E2C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A8B42D474ED1F1A9E639ED872D65CE4F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A8B42D474ED1F1A9E639ED872D65CE4F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4FCA4A9746D739B71BD520926F70E3BF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4FCA4A9746D739B71BD520926F70E3BF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DE5E72074C0B9024689315B720656468
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DE5E72074C0B9024689315B720656468_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F659A387426A2EB477183CB5B667AD95
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F659A387426A2EB477183CB5B667AD95_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E66D2F0942AD59C7B17FC6A906024D06
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E66D2F0942AD59C7B17FC6A906024D06_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BF778C784756ABF2ABC120ABB8BB25F0
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BF778C784756ABF2ABC120ABB8BB25F0_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_06B51B064945C843F608A3A2F6692B24
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_06B51B064945C843F608A3A2F6692B24_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CF0E2FC142089C1396A92BA3E7E93B33
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CF0E2FC142089C1396A92BA3E7E93B33_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E04E2D4B4B448B51E0F795BF6F39FAB4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E04E2D4B4B448B51E0F795BF6F39FAB4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_341FA3314D84A467EEE0F5AB4189E556
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_341FA3314D84A467EEE0F5AB4189E556_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ACB89ED847B93BD6F3AA3BAEEA06B6DA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ACB89ED847B93BD6F3AA3BAEEA06B6DA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABC0251B40DB46BD01D1BD88F8D70285
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABC0251B40DB46BD01D1BD88F8D70285_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84DACC71427947BA733F23B22014DDB1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_84DACC71427947BA733F23B22014DDB1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1735AF8541AFC84F3A7E13AB9B69E290
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1735AF8541AFC84F3A7E13AB9B69E290_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_07E49F434D04F7711501E48EFF93441E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_07E49F434D04F7711501E48EFF93441E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1379C2AC446AA3FCAF42739FF097922F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1379C2AC446AA3FCAF42739FF097922F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FD46AC0F44B4C8D9E224598CCBF29C36
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FD46AC0F44B4C8D9E224598CCBF29C36_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B41B19054BA5BA160139299913F9A69D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B41B19054BA5BA160139299913F9A69D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2A1DD4C542FCB2F6948E8B942DE19F56
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2A1DD4C542FCB2F6948E8B942DE19F56_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BD7403FF4AE1162766EE6FBD8430DE9A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BD7403FF4AE1162766EE6FBD8430DE9A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7EE77506427688D115D2DAA2F7F2DB02
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7EE77506427688D115D2DAA2F7F2DB02_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_687230594D1FD5A71C8A8F891C454787
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_687230594D1FD5A71C8A8F891C454787_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C6C83228413E739345F29E817667CB72
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C6C83228413E739345F29E817667CB72_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B57F555C446D62665B396BAA6BCC4A84
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B57F555C446D62665B396BAA6BCC4A84_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_130AC7C448750921F6B5D8BD9BF21D05
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_BlendListByBool_130AC7C448750921F6B5D8BD9BF21D05_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EB8805EC4919165490E6088BACFB8B5E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EB8805EC4919165490E6088BACFB8B5E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B29D81B04963B973F84DBE8C3300AAC7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B29D81B04963B973F84DBE8C3300AAC7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B66C66484DD384C777F9B18B7DE07084
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B66C66484DD384C777F9B18B7DE07084_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B233F556466C14339194929F8FCCC1F1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B233F556466C14339194929F8FCCC1F1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B9FF7D5449F31497B08986833F088794
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B9FF7D5449F31497B08986833F088794_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_29E62BBE4799AEC1AAF6D6A7BAC7CB2C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_29E62BBE4799AEC1AAF6D6A7BAC7CB2C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DCAAF48C4C91CDF6D3A335BB7AEADDD2
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DCAAF48C4C91CDF6D3A335BB7AEADDD2_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E7831B3E47DA864556A80997BE10FB40
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E7831B3E47DA864556A80997BE10FB40_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0AE10BAE4DEA202A8CBB688E57C96352
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0AE10BAE4DEA202A8CBB688E57C96352_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_85E5BC8D4509428E3EEC9F94516F0AE7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_85E5BC8D4509428E3EEC9F94516F0AE7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D692B1924C84E375E21819B87068AD92
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D692B1924C84E375E21819B87068AD92_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1B3B5A4049DE3A095982B295AE0C624A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1B3B5A4049DE3A095982B295AE0C624A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A2AE5D4C4533C84DE6E9D59B913FAA4B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A2AE5D4C4533C84DE6E9D59B913FAA4B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F0F3483748697A6166523FB6D62585B1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F0F3483748697A6166523FB6D62585B1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_61042CFC48D3099D9DD7A4979E6D915D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_61042CFC48D3099D9DD7A4979E6D915D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8A7CCFEA4EE35AB61531AC9D5D73283C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8A7CCFEA4EE35AB61531AC9D5D73283C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7E0430D143FC49B887216496335CEEDE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7E0430D143FC49B887216496335CEEDE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0F01326E48AFC5B45CDFFFBFAD40D99D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0F01326E48AFC5B45CDFFFBFAD40D99D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_876C829847A4794085D3FC84856B9503
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_876C829847A4794085D3FC84856B9503_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DD0D5C37489C166A3AD327ADE30F576D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DD0D5C37489C166A3AD327ADE30F576D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A758ADB642BF1220B6F75E9C0DEABA35
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A758ADB642BF1220B6F75E9C0DEABA35_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F786D00845C058F94C564DB215374F58
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F786D00845C058F94C564DB215374F58_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2E3991B947DF385728937F9C81D6033C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2E3991B947DF385728937F9C81D6033C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E0CE343A47335C607C83D08CA4B360C1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E0CE343A47335C607C83D08CA4B360C1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D2C1EF534FAE21674465A4AA260984C7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D2C1EF534FAE21674465A4AA260984C7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B1F08F7F4A329B64F67642A8CCE7A63B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B1F08F7F4A329B64F67642A8CCE7A63B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6A43CA3E4BABA999AF1C349FACF05038
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6A43CA3E4BABA999AF1C349FACF05038_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EEE133604EB753B554D019A603FD8EB4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EEE133604EB753B554D019A603FD8EB4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_282FAD2244B7A8041A87CBAB96C8C7AF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_282FAD2244B7A8041A87CBAB96C8C7AF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F9620ABF4D3A5A08E4E6E5BE6019B7D9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F9620ABF4D3A5A08E4E6E5BE6019B7D9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3F808D0F4D3AD0171AFD8298F086ACC6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3F808D0F4D3AD0171AFD8298F086ACC6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C0527E0E4C0D18D1E6777097E70A1752
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C0527E0E4C0D18D1E6777097E70A1752_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4E83F46B4FCD1676BF47A6B0F7009CD9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4E83F46B4FCD1676BF47A6B0F7009CD9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7E7BD58D403F0E2331D07B91F12266C1
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7E7BD58D403F0E2331D07B91F12266C1_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FFF555BE48BFC9254E12B29664CF04DC
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FFF555BE48BFC9254E12B29664CF04DC_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1B07A5BB4CD6B805001AC8AF774272C5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1B07A5BB4CD6B805001AC8AF774272C5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4583918340329915955FED80959E359F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4583918340329915955FED80959E359F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B8D7C6604927FEF819D7E793FDA49F77
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B8D7C6604927FEF819D7E793FDA49F77_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5EE3C7D945369C003FBCEA9F1C0AD7EF
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5EE3C7D945369C003FBCEA9F1C0AD7EF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_177C41784324386149E70DA3C7909690
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_177C41784324386149E70DA3C7909690_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABD6AD644D958792B57145A93240E190
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_ABD6AD644D958792B57145A93240E190_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B526B1AD483141ED525D29AC41262B2C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B526B1AD483141ED525D29AC41262B2C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FE801A364C5B1C76A85588BC30DD912C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FE801A364C5B1C76A85588BC30DD912C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0F0024AD4FAD99EC6075D6988E770599
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0F0024AD4FAD99EC6075D6988E770599_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AD514EC64FB9DD649AEC93A699BE8D6A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AD514EC64FB9DD649AEC93A699BE8D6A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0A4537C44EF62413D0730D93ABB24174
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0A4537C44EF62413D0730D93ABB24174_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4FB35AD54608830E36E0909B57236370
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4FB35AD54608830E36E0909B57236370_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_78E436D04C8587AAFEA0BD840D182697
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_78E436D04C8587AAFEA0BD840D182697_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1A9B5CB64E6A65259B95E0A36454962A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1A9B5CB64E6A65259B95E0A36454962A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BA115A414FB28A0C208453BB2277CF0E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BA115A414FB28A0C208453BB2277CF0E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_86B0BDEA40CFD4529A50F6ADB6A6B788
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_86B0BDEA40CFD4529A50F6ADB6A6B788_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4810AEE840C3B3F8B0BCBCABBD449E2F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4810AEE840C3B3F8B0BCBCABBD449E2F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8E8D304645EFDAAB73AFDFBEEA03930D
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8E8D304645EFDAAB73AFDFBEEA03930D_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DFF581B74EDEC874F7D71D829D9F9BAD
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_DFF581B74EDEC874F7D71D829D9F9BAD_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_01055DB54B42D474100EB1991A77A2F7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_01055DB54B42D474100EB1991A77A2F7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_919679164B174EFA48BC16965CF40D13
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_919679164B174EFA48BC16965CF40D13_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4738838F4BC4E0F02159B7BECB036800
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4738838F4BC4E0F02159B7BECB036800_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_52263F114E18EDA23E9CD48AFE922FB4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_52263F114E18EDA23E9CD48AFE922FB4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_82897B0C4F4C46A1A29B03945518CFAA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_82897B0C4F4C46A1A29B03945518CFAA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C0FD433D48B64A9FFE67E9B48BFE2D46
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C0FD433D48B64A9FFE67E9B48BFE2D46_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BC36BA26407CE62298062B8FD2A92B1E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_BC36BA26407CE62298062B8FD2A92B1E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B01D0030490E8BF01DD8C4B5FF35288E
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_B01D0030490E8BF01DD8C4B5FF35288E_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_14EAAD394688A8CF9073BF9570F60A10
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_14EAAD394688A8CF9073BF9570F60A10_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0D3A85AF49A1D0BAC51CD0B4946E96F6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0D3A85AF49A1D0BAC51CD0B4946E96F6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F52C55FC41B20993A4C09795C8A18E7B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F52C55FC41B20993A4C09795C8A18E7B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4D650542404628B7E7E89CAC6C4AD0C0
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4D650542404628B7E7E89CAC6C4AD0C0_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8063048743AD4E374A4C279737EF253B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8063048743AD4E374A4C279737EF253B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A90A19174A1FC09933830ABED734005F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A90A19174A1FC09933830ABED734005F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_728E0B4E433BAE9ACB72BAA9AB718038
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_728E0B4E433BAE9ACB72BAA9AB718038_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AC3893B24199257E9F23A1996EE5328F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AC3893B24199257E9F23A1996EE5328F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A5A8CF3F44A1C05E2D005293171DAA02
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A5A8CF3F44A1C05E2D005293171DAA02_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C6EB0FDC44BC87A327B6DA8C24AFEE0C
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C6EB0FDC44BC87A327B6DA8C24AFEE0C_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_96D755114A27A84567A20F8F3054F23B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_96D755114A27A84567A20F8F3054F23B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F3CE8F4E4E48E83DD6E4E69EC5502F69
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F3CE8F4E4E48E83DD6E4E69EC5502F69_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E507427F4CEC26F3F7FCBBB96C6E2D84
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E507427F4CEC26F3F7FCBBB96C6E2D84_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8D2D6D9B4B63F7456F0C2E884EE1BDA4
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8D2D6D9B4B63F7456F0C2E884EE1BDA4_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_50C3AD5344310A29E97CFD832C869547
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_50C3AD5344310A29E97CFD832C869547_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_500736D04CAF7F32C4D683902EFAEF24
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_500736D04CAF7F32C4D683902EFAEF24_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_68FE5E1E407CA5C2FFE85F9591477524
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_68FE5E1E407CA5C2FFE85F9591477524_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C64D83A54FA80E8292CC3282A5857334
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_C64D83A54FA80E8292CC3282A5857334_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8B75EC614EBA0016AA25B18FDAB024BB
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8B75EC614EBA0016AA25B18FDAB024BB_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_623F587F4229620934354B9E0C6234E6
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_623F587F4229620934354B9E0C6234E6_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_44CFD9CE4AF234E1205560971EE7F7C7
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_44CFD9CE4AF234E1205560971EE7F7C7_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7D2A86A641E18457C47EC486D65118F5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7D2A86A641E18457C47EC486D65118F5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D3ED96C74E0433B0A3439B9481790C37
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D3ED96C74E0433B0A3439B9481790C37_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_81D5BC1C4F3265AE6D84A8ACAC3ED899
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_81D5BC1C4F3265AE6D84A8ACAC3ED899_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_603680DE4A757145BF56D083EC3C873A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_603680DE4A757145BF56D083EC3C873A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A2B9B08C40945B07842103A0BE1BB749
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A2B9B08C40945B07842103A0BE1BB749_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D8134D6B465633DBBF8E41B85F279A40
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D8134D6B465633DBBF8E41B85F279A40_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7BA78395423182DC7F0CFEB49255B052
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_7BA78395423182DC7F0CFEB49255B052_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_98EB23EC4E103140902E89A45EF543F2
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_98EB23EC4E103140902E89A45EF543F2_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2638D96346336F75878379BE7B0ECCC3
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2638D96346336F75878379BE7B0ECCC3_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D888B3794C63D8E76FEF5280F30DB497
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D888B3794C63D8E76FEF5280F30DB497_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_854EE99A4F738E9600AF57B64B69042B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_854EE99A4F738E9600AF57B64B69042B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8ACD1CDC4CEA6886ACDEC2959FA1443A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8ACD1CDC4CEA6886ACDEC2959FA1443A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E8D4707B4899C0537889D2AD2E7AAB2A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_E8D4707B4899C0537889D2AD2E7AAB2A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CD5DF4DD4EADE1A4A817FB8E3FCEB1A9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_CD5DF4DD4EADE1A4A817FB8E3FCEB1A9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EE2707CC4173335CAD9C5D9ADD1FF0E0
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EE2707CC4173335CAD9C5D9ADD1FF0E0_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A8E5B07042AEEE48A39AF4860236EA44
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_A8E5B07042AEEE48A39AF4860236EA44_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8365B6C040961EF0084BA3A0C49EE9B5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8365B6C040961EF0084BA3A0C49EE9B5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9729EB1247C80083D0CDB8AE4499AD2F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_9729EB1247C80083D0CDB8AE4499AD2F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_70030D7A48DF13DB4349C19C81F1D39A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_70030D7A48DF13DB4349C19C81F1D39A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5AF05AAD4252DAD25798198885CE7DA9
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5AF05AAD4252DAD25798198885CE7DA9_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AB807CFF43FE086593619685DA7FB256
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_AB807CFF43FE086593619685DA7FB256_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_11FFA55C45EAFCCA7DA4979834E1B3B8
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_11FFA55C45EAFCCA7DA4979834E1B3B8_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4A7453204BF9D93179279A95CD153C56
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4A7453204BF9D93179279A95CD153C56_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_367B0DAF4FF3F38A3510DA83435197BE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_367B0DAF4FF3F38A3510DA83435197BE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6979E501437B45691590848C58027E5B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6979E501437B45691590848C58027E5B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4E7373D845428625A5E3CB8C0525AE95
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_4E7373D845428625A5E3CB8C0525AE95_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5057435845932673536C07BAE48DEBAA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_5057435845932673536C07BAE48DEBAA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1746F1364277432BE71706AC8528F6DE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1746F1364277432BE71706AC8528F6DE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6760A7C64F1767EA6CEB9F915F6A8EDE
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6760A7C64F1767EA6CEB9F915F6A8EDE_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_29E72B044649168199DAA9A36661181B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_29E72B044649168199DAA9A36661181B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FFB1352549444E115931EB94518BCA79
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FFB1352549444E115931EB94518BCA79_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0352158F4553F2AF20ACC6975FCB7D63
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_0352158F4553F2AF20ACC6975FCB7D63_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3B5C57EA4CF09A5786E4E7936DB4D65A
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_3B5C57EA4CF09A5786E4E7936DB4D65A_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D02DB91D4BA65980666627B10EF5DA11
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D02DB91D4BA65980666627B10EF5DA11_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_26495E4B437A7E0E7B29D5960EBEB85B
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_26495E4B437A7E0E7B29D5960EBEB85B_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FEF5E7CB4E5A5370CAEC288379341C82
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_FEF5E7CB4E5A5370CAEC288379341C82_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_534CE3AB455A2236A7C15BB7882E5295
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_534CE3AB455A2236A7C15BB7882E5295_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F831FC94431F41C9FA196DAE0643A5DA
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_F831FC94431F41C9FA196DAE0643A5DA_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1690369A4B9971113808B2AE26E513FB
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_1690369A4B9971113808B2AE26E513FB_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D6D51190456288FB81F01EAD30303365
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_D6D51190456288FB81F01EAD30303365_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_60BE642F40CA9477F1AA42AE11947E07
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_60BE642F40CA9477F1AA42AE11947E07_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8FABE12C4A9298D91F358BB2510C7E7F
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_8FABE12C4A9298D91F358BB2510C7E7F_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2D52F2FE4E92D2A734398DAF3F305964
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_2D52F2FE4E92D2A734398DAF3F305964_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EF89B99C48F1DEF55621598153D22515
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_EF89B99C48F1DEF55621598153D22515_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6B91682C47DC0CD6C4BDC288BD126C71
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_6B91682C47DC0CD6C4BDC288BD126C71_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_539798AD48046766EC4566B13A4D84D5
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_539798AD48046766EC4566B13A4D84D5_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_19E0794C486E1801C96B9BAB83AB9E12
struct UMale_Mature_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Mature_AnimBP_AnimGraphNode_TransitionResult_19E0794C486E1801C96B9BAB83AB9E12_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.BlueprintInitializeAnimation
struct UMale_Mature_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.BlueprintUpdateAnimation
struct UMale_Mature_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetEnableIK_BPI
struct UMale_Mature_AnimBP_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnDeath
struct UMale_Mature_AnimBP_C_OnDeath_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdlePoseByID BPI
struct UMale_Mature_AnimBP_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_AnimObjectNotify
struct UMale_Mature_AnimBP_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.ForceStanding
struct UMale_Mature_AnimBP_C_ForceStanding_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set BreakState BPI
struct UMale_Mature_AnimBP_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set WorkState BPI
struct UMale_Mature_AnimBP_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set IdleState BPI
struct UMale_Mature_AnimBP_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetMontageSettings
struct UMale_Mature_AnimBP_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set Sitting BPI
struct UMale_Mature_AnimBP_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set Sleeping BPI
struct UMale_Mature_AnimBP_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetStrengthAlpha
struct UMale_Mature_AnimBP_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SetMontageType
struct UMale_Mature_AnimBP_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set Range Strength
struct UMale_Mature_AnimBP_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OverrideCanPerfromHitAction
struct UMale_Mature_AnimBP_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.HoldableHitAction
struct UMale_Mature_AnimBP_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnEndStageInteraction
struct UMale_Mature_AnimBP_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnLoopStageInteraction
struct UMale_Mature_AnimBP_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.OnStartStageInteraction
struct UMale_Mature_AnimBP_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Loop Montage
struct UMale_Mature_AnimBP_C_Loop_Montage_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.ChangeAnimLoopState
struct UMale_Mature_AnimBP_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.CancelAnimationLoops
struct UMale_Mature_AnimBP_C_CancelAnimationLoops_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.HoldableAction
struct UMale_Mature_AnimBP_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set RF_BPI
struct UMale_Mature_AnimBP_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set CrouchingSpeed BPI
struct UMale_Mature_AnimBP_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set SprintingSpeed BPI
struct UMale_Mature_AnimBP_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set RunningSpeed BPI
struct UMale_Mature_AnimBP_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set WalkingSpeed BPI
struct UMale_Mature_AnimBP_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_TurningInPlace BPI
struct UMale_Mature_AnimBP_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_IdleEntryState BPI
struct UMale_Mature_AnimBP_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Pivot BPI
struct UMale_Mature_AnimBP_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_MovementMode BPI
struct UMale_Mature_AnimBP_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_Gait BPI
struct UMale_Mature_AnimBP_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_Stance BPI
struct UMale_Mature_AnimBP_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_RotationMode BPI
struct UMale_Mature_AnimBP_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_Aiming BPI
struct UMale_Mature_AnimBP_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Play_GetUp_Anim BPI
struct UMale_Mature_AnimBP_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SavePoseSnapshot_BPI
struct UMale_Mature_AnimBP_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Set ALS_ViewMode BPI
struct UMale_Mature_AnimBP_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.ShowTraces_BPI
struct UMale_Mature_AnimBP_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.IncludeLoopEnd Event
struct UMale_Mature_AnimBP_C_IncludeLoopEnd_Event_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.WaitForCrafting
struct UMale_Mature_AnimBP_C_WaitForCrafting_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_SelectGroundSittingPose
struct UMale_Mature_AnimBP_C_AnimNotify_SelectGroundSittingPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_SelectSittingPose
struct UMale_Mature_AnimBP_C_AnimNotify_SelectSittingPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_IdleTransitionBool
struct UMale_Mature_AnimBP_C_AnimNotify_IdleTransitionBool_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_GetRandomTalkingPose
struct UMale_Mature_AnimBP_C_AnimNotify_GetRandomTalkingPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_GetRandomOtherPose
struct UMale_Mature_AnimBP_C_AnimNotify_GetRandomOtherPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_GetRandomLookingPose
struct UMale_Mature_AnimBP_C_AnimNotify_GetRandomLookingPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_GetRandomStandingPose
struct UMale_Mature_AnimBP_C_AnimNotify_GetRandomStandingPose_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_OffHandTickStop
struct UMale_Mature_AnimBP_C_AnimNotify_OffHandTickStop_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_OffHandTickStart
struct UMale_Mature_AnimBP_C_AnimNotify_OffHandTickStart_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.SelectPickUpAnim
struct UMale_Mature_AnimBP_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_HolsterWeapon
struct UMale_Mature_AnimBP_C_AnimNotify_HolsterWeapon_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_DespawnAnimItem
struct UMale_Mature_AnimBP_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_SpawnAnimItem
struct UMale_Mature_AnimBP_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayCraftingAnimation
struct UMale_Mature_AnimBP_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EnteredSleeping
struct UMale_Mature_AnimBP_C_AnimNotify_EnteredSleeping_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EnteredSitting
struct UMale_Mature_AnimBP_C_AnimNotify_EnteredSitting_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartWakeUp
struct UMale_Mature_AnimBP_C_AnimNotify_StartWakeUp_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EndGoToSleep
struct UMale_Mature_AnimBP_C_AnimNotify_EndGoToSleep_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EndSleep
struct UMale_Mature_AnimBP_C_AnimNotify_EndSleep_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartSleep
struct UMale_Mature_AnimBP_C_AnimNotify_StartSleep_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EndGetUp
struct UMale_Mature_AnimBP_C_AnimNotify_EndGetUp_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartGetUp
struct UMale_Mature_AnimBP_C_AnimNotify_StartGetUp_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EndSitting
struct UMale_Mature_AnimBP_C_AnimNotify_EndSitting_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartSitting
struct UMale_Mature_AnimBP_C_AnimNotify_StartSitting_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StopRotation
struct UMale_Mature_AnimBP_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StopMovement
struct UMale_Mature_AnimBP_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_LimitCamera
struct UMale_Mature_AnimBP_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_InteractWithActor
struct UMale_Mature_AnimBP_C_AnimNotify_InteractWithActor_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayPickUpAnim
struct UMale_Mature_AnimBP_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_PickUpItem
struct UMale_Mature_AnimBP_C_AnimNotify_PickUpItem_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StopAiming
struct UMale_Mature_AnimBP_C_AnimNotify_StopAiming_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartAiming
struct UMale_Mature_AnimBP_C_AnimNotify_StartAiming_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_PerformInteraction
struct UMale_Mature_AnimBP_C_AnimNotify_PerformInteraction_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_DisableHitAction
struct UMale_Mature_AnimBP_C_AnimNotify_DisableHitAction_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_HoldableTickStop
struct UMale_Mature_AnimBP_C_AnimNotify_HoldableTickStop_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_HoldableTickStart
struct UMale_Mature_AnimBP_C_AnimNotify_HoldableTickStart_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_EndingStageFinished
struct UMale_Mature_AnimBP_C_AnimNotify_EndingStageFinished_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_LoopStageFinished
struct UMale_Mature_AnimBP_C_AnimNotify_LoopStageFinished_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_BeginningStageFinished
struct UMale_Mature_AnimBP_C_AnimNotify_BeginningStageFinished_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StopSnappingIK
struct UMale_Mature_AnimBP_C_AnimNotify_StopSnappingIK_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartSnappingIK
struct UMale_Mature_AnimBP_C_AnimNotify_StartSnappingIK_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_ResetSnapping
struct UMale_Mature_AnimBP_C_AnimNotify_ResetSnapping_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_StartSnapping
struct UMale_Mature_AnimBP_C_AnimNotify_StartSnapping_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_SnapPoint
struct UMale_Mature_AnimBP_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_RF_to_LF
struct UMale_Mature_AnimBP_C_AnimNotify_RF_to_LF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_LF_to_RF
struct UMale_Mature_AnimBP_C_AnimNotify_LF_to_RF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CRF_to_CLF
struct UMale_Mature_AnimBP_C_AnimNotify_CRF_to_CLF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CLF_to_CRF
struct UMale_Mature_AnimBP_C_AnimNotify_CLF_to_CRF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_RF_to_CRF
struct UMale_Mature_AnimBP_C_AnimNotify_RF_to_CRF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CRF_to_RF
struct UMale_Mature_AnimBP_C_AnimNotify_CRF_to_RF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CRF_to_N
struct UMale_Mature_AnimBP_C_AnimNotify_CRF_to_N_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_N_to_CRF
struct UMale_Mature_AnimBP_C_AnimNotify_N_to_CRF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CLF_to_LF
struct UMale_Mature_AnimBP_C_AnimNotify_CLF_to_LF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_LF_to_CLF
struct UMale_Mature_AnimBP_C_AnimNotify_LF_to_CLF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_CLF_to_N
struct UMale_Mature_AnimBP_C_AnimNotify_CLF_to_N_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_N_to_CLF
struct UMale_Mature_AnimBP_C_AnimNotify_N_to_CLF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_RF_to_N
struct UMale_Mature_AnimBP_C_AnimNotify_RF_to_N_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_N_to_RF
struct UMale_Mature_AnimBP_C_AnimNotify_N_to_RF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_LF_to_N
struct UMale_Mature_AnimBP_C_AnimNotify_LF_to_N_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_N_to_LF
struct UMale_Mature_AnimBP_C_AnimNotify_N_to_LF_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.IdleTransition
struct UMale_Mature_AnimBP_C_IdleTransition_Params
{
	class UAnimMontage*                                Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Left_Stopping
struct UMale_Mature_AnimBP_C_AnimNotify_Left_Stopping_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Entered_Stopping
struct UMale_Mature_AnimBP_C_AnimNotify_Entered_Stopping_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Land
struct UMale_Mature_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Left_Pivot
struct UMale_Mature_AnimBP_C_AnimNotify_Left_Pivot_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Entered_Pivot
struct UMale_Mature_AnimBP_C_AnimNotify_Entered_Pivot_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Entered_NotMoving
struct UMale_Mature_AnimBP_C_AnimNotify_Entered_NotMoving_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Left_Moving
struct UMale_Mature_AnimBP_C_AnimNotify_Left_Moving_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Entered_Moving
struct UMale_Mature_AnimBP_C_AnimNotify_Entered_Moving_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.AnimNotify_Left_NotMoving
struct UMale_Mature_AnimBP_C_AnimNotify_Left_NotMoving_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.StopBreakAnimation
struct UMale_Mature_AnimBP_C_StopBreakAnimation_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayBreakAnimation
struct UMale_Mature_AnimBP_C_PlayBreakAnimation_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.StopWorkAnimation
struct UMale_Mature_AnimBP_C_StopWorkAnimation_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayWorkAnimation
struct UMale_Mature_AnimBP_C_PlayWorkAnimation_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayerSleep
struct UMale_Mature_AnimBP_C_PlayerSleep_Params
{
	bool                                               SleepState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Reset Player Controller State
struct UMale_Mature_AnimBP_C_Reset_Player_Controller_State_Params
{
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.Change Player Controller State
struct UMale_Mature_AnimBP_C_Change_Player_Controller_State_Params
{
	struct FST_MontagesSettings                        MontageSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.PlayMontage(Networked)
struct UMale_Mature_AnimBP_C_PlayMontage_Networked__Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Male_Mature_AnimBP.Male_Mature_AnimBP_C.ExecuteUbergraph_Male_Mature_AnimBP
struct UMale_Mature_AnimBP_C_ExecuteUbergraph_Male_Mature_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
