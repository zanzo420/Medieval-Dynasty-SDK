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

// BlueprintGeneratedClass BP_HusbandryAI.BP_HusbandryAI_C
// 0x0111 (FullSize[0x0CE1] - InheritedSize[0x0BD0])
class ABP_HusbandryAI_C : public ABP_GroundAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMountablePawnComponent*                     MountablePawn;                                             // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              RotationResetTL_Alpha_8BBDACFE4B8242BF03B89796C476E015;    // 0x0BE0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             RotationResetTL__Direction_8BBDACFE4B8242BF03B89796C476E015; // 0x0BE4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1OMD[0x3];                                     // 0x0BE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RotationResetTL;                                           // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_AI_POI_Base_C*                           HomeBasePrey;                                              // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FearRadious;                                               // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FearHit;                                                   // 0x0BFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2JL9[0x3];                                     // 0x0BFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     FearLocation;                                              // 0x0C00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseCapacity;                                               // 0x0C0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TA1U[0x3];                                     // 0x0C0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentCapacity;                                           // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CRW0[0x4];                                     // 0x0C14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_TaskList                                Task;                                                      // 0x0C18(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RestAnimIndex;                                             // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanEscape;                                                 // 0x0C3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForSale;                                                   // 0x0C3D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1SU3[0x2];                                     // 0x0C3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CapacityPerMinute;                                         // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementType;                                              // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnDirection;                                             // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SprintKeyDown;                                             // 0x0C4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OYR6[0x3];                                     // 0x0C4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                SprintTimerHandle;                                         // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TargetMovementType;                                        // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeedType;                                              // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintSpeedType;                                           // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnMultiplier;                                            // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForwardAxis;                                               // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0ZXS[0x4];                                     // 0x0C6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CameraRotationResetTimerHandle;                            // 0x0C70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              PitchAxis;                                                 // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YawAxis;                                                   // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                CameraUpdateTimerHandle;                                   // 0x0C80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DismountTimerHandle;                                       // 0x0C88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerStopAnimationIndex;                                  // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWalkEnabled;                                             // 0x0C94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VariableShouldSprint;                                      // 0x0C95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2IY0[0x2];                                     // 0x0C96(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InputDirection;                                            // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForwardInputInterpSpeed;                                   // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWakingUp;                                                // 0x0CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UpdateIK;                                                  // 0x0CA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockCamera;                                               // 0x0CA6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJBH[0x1];                                     // 0x0CA7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 MountSpeedCurve;                                           // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                       PlayerReference;                                           // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   SummonFinishedCue;                                         // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MountJumpMontage;                                          // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MountStopMontage;                                          // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMountSpecial;                                           // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HusbandryAI.BP_HusbandryAI_C");
		return ptr;
	}



	bool Check_Sleep_Slot();
	void CalculateEssentialVariables();
	void OnIsMounted();
	void OnIsMount();
	void GetMountCameraRotation(struct FRotator* Rotation);
	void OnInputDirectionChanged();
	void GetSprintKeyDown(bool* IsSprintKeyDown);
	void GetShouldSprint(bool* ShouldSprint);
	void PlayerCameraRotationUpdate();
	void CheckIfShouldResetCamera();
	void UpdateCameraPitch(float Value);
	void UpdateCameraYaw(float Value);
	void InterpTurnMultiplier(float TurnMultiplierTarget, float InterpSpeed);
	void InterpMovementType(float Axis, float InterpSpeed);
	void ShouldSprint();
	void UpdateMovementVars();
	void UpdateMovementType();
	bool OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId);
	bool OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId);
	bool OnRiderFinishedMounting(class AActor* mountedActor, int seatId);
	bool CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition);
	bool CanMountActor();
	bool GetSeatDataAtIndex(int Index, struct FSeatData* SeatData);
	bool GetSeatDataById(int seatId, struct FSeatData* SeatData);
	bool ClearSeatAtIndex(int seatIndex);
	bool ClearSeatById(int seatId);
	bool SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider);
	bool SetSeatOccupiedById(int seatId, class APawn* rider);
	bool IsSeatOccupiedAtIndex(int seatIndex);
	bool FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex);
	int GetCurrentRiderCount();
	class APawn* GetDriver();
	int GetMaxRiders();
	bool IsSeatOccupiedById(int seatId);
	class UMeshComponent* GetMountBody(int seatId);
	AdsMountingSystem_EMountingDirection GetRelativeDismountDirection(class APawn* rider);
	AdsMountingSystem_EMountingDirection GetRelativeMountDirection(class APawn* rider);
	bool HasDriver();
	bool HasPassangers();
	bool IsDriverReady();
	bool IsDriverSeat(const struct FSeatData& SeatData);
	bool IsMountableByPawn(class APawn* newRider);
	bool IsMountableActor();
	bool MustHaveDriver();
	class UMountablePawnComponent* GetMountablePawnComponent();
	class APawn* GetCharacterPawn();
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	void ChangeBehaviorTreeToMount();
	void ChangeBehaviorTreeToHusbandry();
	void UpdateCapacity();
	void GetPrice_Sell(int* Price);
	void GetPrice_Buy(int* Price);
	void GetForSale(bool* ForSale);
	void SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData);
	void GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void fnAnimRest_ChooseIndex(int* Animation_Index);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void GetFear(int* FearFactor);
	void RotationResetTL__FinishedFunc();
	void RotationResetTL__UpdateFunc();
	void OnFail_6B4002F24643F98A6D00D99BD8F9D5C6(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void SetShouldSprint(bool ShouldSprint);
	void CameraRotationReset();
	void ResetCameraRotation();
	void StopCameraRotationReset();
	void StopCameraRotation();
	void UpdateMountCameraFoV(float FieldOfView);
	void OnSummoned_Close();
	void OnSummoned_Far();
	void OnSummonFinished();
	void LookAtOnMount(const struct FRotator& Rotation);
	void Backwards_Axis(float Axis_Value);
	void Left_Axis(float Axis_Value);
	void JumpPressed(const struct FKey& Key);
	void JumpReleased(const struct FKey& Key);
	void SprintPressed(const struct FKey& Key);
	void SprintReleased(const struct FKey& Key);
	void Right_Axis(float Axis_Value);
	void Down_Axis(float Axis_Value);
	void DismountPressed(const struct FKey& Key);
	void DismountReleased(const struct FKey& Key);
	void Dismount();
	void WalkPressed(const struct FKey& Key);
	void SetInputDirection(int InputDirection);
	void ReceiveBeginPlay();
	void EventEngagementStart();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Fleeing();
	void SetFear(int Fear);
	void SetEngageTargetBPI(class AActor* Causer);
	void Starving(float HungerDamage);
	void SnapRotationAndLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport);
	void DayCycle_RestStart();
	void DayCycle_RestEnd();
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void ReceiveDestroyed();
	void SetForSale(bool ForSale);
	void OnMinuteUpdate();
	void OnHouseAssigned();
	void ExecuteUbergraph_BP_HusbandryAI(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
