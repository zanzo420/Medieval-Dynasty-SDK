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

// Class AdsMountingSystem.AdsMountingSystemLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdsMountingSystemLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.AdsMountingSystemLibrary");
		return ptr;
	}



	void STATIC_TranslateVectorRelative(const struct FTransform& Transform, const struct FVector& offsetValue, struct FVector* outVector);
	bool STATIC_SeatManager_SetSeatOccupiedById(struct FSeatManager* inSeatManager, int seatId, class APawn* occupyingPawn);
	bool STATIC_SeatManager_SetSeatOccupiedAtIndex(struct FSeatManager* inSeatManager, int seatIndex, class APawn* occupyingPawn);
	bool STATIC_SeatManager_IsSeatOccupiedById(const struct FSeatManager& inSeatManager, int seatId);
	bool STATIC_SeatManager_IsSeatOccupiedAtIndex(const struct FSeatManager& inSeatManager, int seatIndex);
	bool STATIC_SeatManager_IsDriverSeatId(const struct FSeatManager& inSeatManager, int seatId);
	bool STATIC_SeatManager_HasAvailableSeats(const struct FSeatManager& inSeatManager);
	bool STATIC_SeatManager_GetSeatDataById(const struct FSeatManager& inSeatManager, int seatId, struct FSeatData* SeatData);
	bool STATIC_SeatManager_GetSeatDataAtIndex(const struct FSeatManager& inSeatManager, int seatDataIndex, struct FSeatData* SeatData);
	int STATIC_SeatManager_GetNumSeats(const struct FSeatManager& inSeatManager);
	int STATIC_SeatManager_GetNumRiders(const struct FSeatManager& inSeatManager);
	bool STATIC_SeatManager_GetDriverSeat(const struct FSeatManager& inSeatManager, struct FSeatData* outDriverSeatData);
	bool STATIC_SeatManager_FindAvailableMountingPosition(const struct FSeatManager& inSeatManager, AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, const struct FTransform& MountPosition, int* outSeatDataIndex);
	bool STATIC_SeatManager_ClearOccupierById(struct FSeatManager* inSeatManager, int seatId);
	bool STATIC_SeatManager_ClearOccupierAtIndex(struct FSeatManager* inSeatManager, int seatIndex);
	AdsMountingSystem_EMountingDirection GetRelativeMountingPosition(class AActor* mountActor, class AActor* riderActor, bool ignoreForwared, bool ignoreRight, bool ignoreUp);
	float STATIC_GetAngleFromUpBetweenActors(class AActor* mainActor, class AActor* targetActor);
	float STATIC_GetAngleFromRightBetweenActors(class AActor* mainActor, class AActor* targetActor);
	float STATIC_GetAngleFromForwardBetweenActors(class AActor* mainActor, class AActor* targetActor);
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.AnimNotify_ChangeSeatsFinished
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_ChangeSeatsFinished : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.AnimNotify_ChangeSeatsFinished");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.AnimNotify_DismountFinished
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_DismountFinished : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.AnimNotify_DismountFinished");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.AnimNotify_MountingFinished
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_MountingFinished : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.AnimNotify_MountingFinished");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.ADMUnifiedControllerPawn
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UADMUnifiedControllerPawn : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.ADMUnifiedControllerPawn");
		return ptr;
	}



	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PerformMountPawn(class APawn* mountOrRider);
	bool PerformDismountPawn(class APawn* mountOrRider);
	bool IsMounted();
	bool IsCharacterMountable();
	class APawn* GetCharacterPawn();
	class AActor* GetCharacterMount();
	class AController* GetCharacterController();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.LinkedMountActor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULinkedMountActor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.LinkedMountActor");
		return ptr;
	}



	class AActor* SetMasterActor(class AActor* masterActor);
	int SetLinkedSeatId(int seatId);
	class AActor* GetMasterActor();
	int GetLinkedSeatId();
	class UMeshComponent* GetLinkedActorMesh();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.LinkedMountActorOwner
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULinkedMountActorOwner : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.LinkedMountActorOwner");
		return ptr;
	}



	class AActor* SetLinkedActor(class AActor* newLinkedActor, int seatId);
	TArray<class AActor*> GetLinkedActors();
	class AActor* GetLinkedActor(int seatId);
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.MountablePawnInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMountablePawnInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountablePawnInterface");
		return ptr;
	}



	bool SetSeatOccupiedById(int seatId, class APawn* rider);
	bool SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider);
	bool SetSeatOccupied(int seatIndex, class APawn* rider);
	bool OnRiderFinishedMounting(class AActor* mountedActor, int seatId);
	bool OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId);
	bool OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId);
	bool MustHaveDriver();
	bool IsSeatOccupiedById(int seatId);
	bool IsSeatOccupiedAtIndex(int seatIndex);
	bool IsMountablePawn();
	bool IsMountableByPawn(class APawn* newRider);
	bool IsMountableActor();
	bool IsDriverSeat(const struct FSeatData& SeatData);
	bool IsDriverReady();
	bool HasPassangers();
	bool HasDriver();
	bool GetSeatDataById(int seatId, struct FSeatData* SeatData);
	bool GetSeatDataAtIndex(int Index, struct FSeatData* SeatData);
	AdsMountingSystem_EMountingDirection GetRelativePositionToMount(class APawn* rider);
	AdsMountingSystem_EMountingDirection GetRelativeMountDirection(class APawn* rider);
	AdsMountingSystem_EMountingDirection GetRelativeDismountDirection(class APawn* rider);
	class UMeshComponent* GetMountBody(int seatId);
	class UMountablePawnComponent* GetMountablePawnComponent();
	int GetMaxRiders();
	class APawn* GetDriver();
	AdsMountingSystem_EMountingDirection GetDismountDirection(class APawn* rider);
	int GetCurrentRiderCount();
	bool FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex);
	bool ClearSeatByIndex(int seatIndex);
	bool ClearSeatById(int seatId);
	bool ClearSeatAtIndex(int seatIndex);
	bool CanMountPawn();
	bool CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition);
	bool CanMountActor();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.MountingSystemDebugInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMountingSystemDebugInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountingSystemDebugInterface");
		return ptr;
	}



	int SetPlayerDebugId(int newDebugId);
	int GetPlayerDebugId();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.MountRiderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMountRiderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountRiderInterface");
		return ptr;
	}



	bool StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);
	bool StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse);
	bool SetRiderCollisionEnabled(bool shouldEnable);
	bool PlayMoveToSeatAnimation(int currentSeatId, int oldSeatId);
	bool PlayMountingAnimation(AdsMountingSystem_EMountingDirection Position);
	bool PlayDismountingAnimation(AdsMountingSystem_EMountingDirection Position);
	bool OnMoveToMountingLocationCompleted();
	bool OnMountingPawnFinished(class AActor* newMountActor);
	bool OnDismountingPawnFinished(class AActor* oldPawnMount);
	bool OnChangeToNewSeatCompleted();
	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);
	bool IsSeatedOnMount();
	bool IsDriver();
	int GetSeatId();
	class UMeshComponent* GetRiderMesh();
	class UMountRiderComponent* GetMountRiderComponent();
	int GetDebugId();
	TArray<class USkeletalMeshComponent*> GetAllRiderSkeletalMeshes();
	bool BeginMountingPawn(class APawn* newMountPawn);
	bool BeginDismountingPawn(class APawn* dismountedPawn);
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.RiderControllerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URiderControllerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.RiderControllerInterface");
		return ptr;
	}



	bool PossessCharacter(class APawn* characterToPossess);
	bool OnRiderRemoved(class AActor* removedRider, int seatId);
	bool OnRiderAdded(class AActor* newRider, int seatId);
	bool OnOtherRiderChangedSeats(class AActor* otherRider, int oldSeatId, int newSeatId);
	bool OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, const struct FMountActionResponse& Response);
	bool OnDismountActionFailed(class AActor* currentMount, const struct FMountActionResponse& Response);
	bool OnChangeSeatActionFailed(const struct FMountActionResponse& Response);
	class URiderControllerComponent* GetRiderControllerComponent();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.MountablePawnComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UMountablePawnComponent : public UActorComponent
{
public:
	bool                                               bIsMountable;                                              // 0x00B0(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2V35[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSeatManager                                SeatManager;                                               // 0x00B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountablePawnComponent");
		return ptr;
	}



	bool SetSeatOccupiedById(int seatId, class APawn* rider);
	bool SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider);
	bool SetSeatOccupied(int seatIndex, class APawn* rider);
	bool SetRiderBySeatId(class APawn* newRider, int seatId);
	bool SetRiderAtSeatIndex(class APawn* newRider, int seatIndex);
	bool SetRider(class APawn* newRider, int seatId);
	bool SetIsMountable(bool IsMountable);
	void RiderFinishedMounting(class AActor* Actor, int seatId);
	void RiderFinishedDismounting(class AActor* dismountedActor, int seatId);
	void RiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId);
	bool MustHaveDriver();
	bool IsSeatOccupiedById(int seatId);
	bool IsSeatOccupiedAtIndex(int seatIndex);
	bool IsPossessableMount();
	bool IsMounted();
	bool IsMountable();
	bool IsDriverSeatId(int seatId);
	bool IsDriverSeat(const struct FSeatData& SeatData);
	bool HasDriver();
	bool GetSeatDataById(int seatId, struct FSeatData* SeatData);
	bool GetSeatDataAtIndex(int Index, struct FSeatData* SeatData);
	class APawn* GetRiderBySeatId(int seatId);
	class APawn* GetRiderAtIndex(int seatIndex);
	class APawn* GetRider(int seatId);
	int GetNumSeats();
	int GetNumRiders();
	class APawn* GetDriver();
	AdsMountingSystem_EMountingDirection GetDefaultPositionForSeatById(int seatId);
	AdsMountingSystem_EMountingDirection GetDefaultPositionForSeatAtIndex(int seatIndex);
	bool FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex);
	bool ClearSeatByIndex(int seatIndex);
	bool ClearSeatById(int seatId);
	bool ClearSeatAtIndex(int seatIndex);
	bool CanMount();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.MountRiderComponent
// 0x00D0 (FullSize[0x0180] - InheritedSize[0x00B0])
class UMountRiderComponent : public UActorComponent
{
public:
	bool                                               bIsMounted;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsSeated;                                                 // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDriver;                                                 // 0x00B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowOverrideMovementReplication;                         // 0x00B3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsRootMotionValidationForAnimationEnabled;                // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AdsMountingSystem_EMountingBehaviorType            mountingPossessionBehavior;                                // 0x00B5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AdsMountingSystem_EDismountingBehaviorType         dismountingPossessionBehavior;                             // 0x00B6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AdsMountingSystem_EMountingBehaviorType            mountingAttachmentBehavior;                                // 0x00B7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AdsMountingSystem_EDismountingBehaviorType         dismountingAttachmentBehavior;                             // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D98K[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      currentMount;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      previousMount;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      LinkedMountActor;                                          // 0x00D0(0x0008) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class APawn>                        owningPawn;                                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                                 riderController;                                           // 0x00E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSeatData                                   currentSeatData;                                           // 0x00E8(0x0030) (Edit, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HWRP[0x1];                                     // 0x0118(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	AdsMountingSystem_EMountingDirection               currentDismountDirection;                                  // 0x0119(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JUB5[0x2];                                     // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     relativeMeshLocation;                                      // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    relativeMeshRotation;                                      // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMountingAction                             currentAction;                                             // 0x0134(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMountingAction                             previousAction;                                            // 0x0140(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RX9B[0xC];                                     // 0x014C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRiderAttachedToMount;                                    // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnRiderDetachedFromMount;                                  // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5BCR[0x8];                                     // 0x0178(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountRiderComponent");
		return ptr;
	}



	void UpdateRootMeshRelativeLocation();
	bool ShouldTeleportToDismountLocation();
	void SetRootMotionValidationForAnimationEnabled(bool IsRootMotionValidationForAnimationEnabled);
	void SetRiderController(class AController* Controller);
	void SetMovementReplication(bool enableMovementReplication, bool onlyAllowAutonomousTickPose);
	void Reset();
	bool PawnFinishedMounting();
	bool PawnFinishedDismounting();
	bool PawnFinishedChangingSeats();
	void OnRep_IsMounted(bool previousMountedState);
	void OnRep_DismountDirection();
	void OnRep_CurrentSeatData();
	void OnRep_CurrentMount();
	void OnRep_CurrentAction();
	bool OnCharacterMounted(bool bPlayMountingAnimation);
	bool OnCharacterDismounted();
	bool OnCharacterChangedSeats(bool bPlayAnimation);
	void MULTICAST_OnCharacterDismounted(AdsMountingSystem_EMountingDirection dismountDirection);
	bool MoveToMountingLocationComplete();
	bool MountPawn(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response);
	bool IsSeated();
	bool IsRootMotionValidationForAnimationEnabled();
	bool IsMounted();
	bool IsDriver();
	int GetSeatId();
	class AController* GetRiderController();
	class AActor* GetPreviousMount();
	class APawn* GetOwningPawn();
	class AActor* GetLinkedMountActor();
	struct FVector GetDismountLocation(AdsMountingSystem_EMountingDirection directionToDismount);
	struct FSeatData GetCurrentSeatData();
	class AActor* GetCurrentMount();
	bool DismountPawn(class AActor* dismountActor, struct FMountActionResponse* Response);
	bool DismountFinished();
	void DetachRiderFromMount();
	bool ChangeSeatToIndex(int seatIndex, struct FMountActionResponse* Response);
	bool ChangeSeatById(int seatId, struct FMountActionResponse* Response);
	void AttachRiderToMount();
	void AllowControllerToPossessMount();
	void AllowControllerToPossessCharacter();
	void AfterRead();
	void BeforeDelete();

};

// Class AdsMountingSystem.RiderControllerComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class URiderControllerComponent : public UActorComponent
{
public:
	class APawn*                                       ownedPawn;                                                 // 0x00B0(0x0008) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      mountActor;                                                // 0x00B8(0x0008) (Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      LinkedMountActor;                                          // 0x00C0(0x0008) (Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AController>                  ownedController;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnRiderAdded;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnRiderRemoved;                                            // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnOtherRiderChangedSeat;                                   // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.RiderControllerComponent");
		return ptr;
	}



	void SetOwnedPawn(class APawn* newOwnedPawn);
	void SetMountPawn(class APawn* newMountActor);
	void SetMountActor(class AActor* newMountActor);
	class AActor* SetLinkedMountActor(class AActor* newLinkedMountActor);
	void SetControlledPawn(class APawn* newControlledPawn);
	void RiderRemoved(class AActor* removedRider, int seatId);
	void RiderAdded(class AActor* newRider, int seatId);
	void Reset();
	bool PerformMountPawn(class APawn* newMountActor, struct FMountActionResponse* Response);
	bool PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response);
	bool PerformDismountPawn(class APawn* dismountingActor, struct FMountActionResponse* Response);
	bool PerformDismountActor(class AActor* dismountingActor, struct FMountActionResponse* Response);
	void OtherRiderChangedSeat(class AActor* otherRider, int newSeatId, int oldSeatId);
	bool IsMounted();
	class AController* GetOwningController();
	class APawn* GetOwnedPawn();
	class APawn* GetMountPawn();
	class AActor* GetMountActor();
	class AActor* GetLinkedMountActor();
	void ClearMount();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
