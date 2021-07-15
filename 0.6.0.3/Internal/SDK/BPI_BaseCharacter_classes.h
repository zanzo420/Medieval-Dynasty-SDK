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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_BaseCharacter.BPI_BaseCharacter_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_BaseCharacter_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BaseCharacter.BPI_BaseCharacter_C");
		return ptr;
	}



	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);
	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);
	void SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType);
	void SetEnableIK_BPI(bool IK_Enabled);
	void UpdateIKAlpha(float Alpha);
	void PlayMountSpecial();
	void PlayMountStopAnimation(int AnimIndex);
	void PlayMountAnimation(AdsMountingSystem_EMountingDirection Position, TEnumAsByte<E_MountAnimType_E_MountAnimType> Type, bool* Success);
	void GetProfessionData(struct FST_Profession* ProfessionData);
	void Set_Caught_Prey_BPI(bool CaughtPrey);
	void GetIsInDialogue_BPI(bool* IsInDialogue);
	void OnDeath();
	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength);
	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName);
	void ForceStanding();
	void WaitForCrafting();
	void GetBaseCharacterWorldLocation(struct FVector* Location);
	void SetIsInWater(bool InWater, float Intensity);
	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID);
	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops);
	void PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools_E_Tools> ToolType, float* Duration, float* TakeOutDuration);
	void GetHeadTransform(struct FTransform* HeadTransform);
	void GetStatsComponent(class UBP_CharacterStatsComponent_C** StatsComponent);
	void GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession);
	void Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState);
	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings);
	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void AnimNotify_HolsterWeapon();
	void AnimNotify_DespawnAnimItem();
	void AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand);
	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime);
	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
	void AnimNotify_StopMovement(bool bStopMovementInput);
	void AnimNotify_StopRotation(bool StopRotationInput);
	void AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits);
	void PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation);
	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type);
	void GetIsAnyMontageFromMapPlaying(bool* Return_Value);
	void GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage);
	void PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void OverrideCanPerfromHitAction(bool CanPerfromHitAction);
	void SetStrengthAlpha(float Alpha);
	void Set_Range_Strength(float Strength);
	void HoldableHitAction(const struct FST_MontagesSettings& Action_Montage_Settings);
	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void AnimNotify_StopSnappingIK();
	void AnimNotify_StartSnappingIK();
	void ChangeAnimLoopState(bool IsLooping);
	void AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, const struct FName& LeftHandSocketName, const struct FName& RightHandSocketName);
	void isPlayer(bool* Player, class APC_Player_C** PlayerController);
	void GetCameraViewDirection(struct FVector* Forward);
	void Get_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance>* Stance);
	void SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void CancelAnimationLoops();
	void HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage);
	void Set_RF_BPI(bool RF);
	void CameraShake_BPI(class UClass* ShakeClass, float Scale);
	void Set_CrouchingSpeed_BPI(float CrouchingSpeed);
	void Set_SprintingSpeed_BPI(float SprintingSpeed);
	void Set_RunningSpeed_BPI(float RunningSpeed);
	void Set_WalkingSpeed_BPI(float WalkingSpeed);
	void ShowTraces_BPI(bool ShowTraces);
	void Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode);
	void AddCharacterRotation_BPI(const struct FRotator& AddAmount);
	void SavePoseSnapshot_BPI(const struct FName& PoseName);
	void Play_GetUp_Anim_BPI(bool FaceDown);
	void Set_ALS_Aiming_BPI(bool Aiming);
	void AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState);
	void AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight);
	void AnimNotify_Pivot_BPI(const struct FST_PivotParams& PivotParams);
	void Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode);
	void Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI);
	void Set_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance> ALS_Stance);
	void Set_ALS_Gait_BPI(TEnumAsByte<E_Gait_E_Gait> ALS_Gait);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
