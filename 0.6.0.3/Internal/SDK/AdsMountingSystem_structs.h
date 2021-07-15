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
// Enums
//---------------------------------------------------------------------------

// Enum AdsMountingSystem.EMountingActionType
enum class AdsMountingSystem_EMountingActionType : uint8_t
{
	EMountingActionType__NoAction  = 0,
	EMountingActionType__Mounting  = 1,
	EMountingActionType__Dismounting = 2,
	EMountingActionType__ChangingSeat = 3,
	EMountingActionType__ChangingToDriverSeat = 4,
	EMountingActionType__ChangingToPassangerSeat = 5,
	EMountingActionType__ChangeToLinkedActor = 6,
	EMountingActionType__ChangeToNewLinkedActor = 7,
	EMountingActionType__MAX       = 8,

};

// Enum AdsMountingSystem.EDismountingBehaviorType
enum class AdsMountingSystem_EDismountingBehaviorType : uint8_t
{
	EDismountingBehaviorType__Manuel = 0,
	EDismountingBehaviorType__Immediately = 1,
	EDismountingBehaviorType__RiderFinishedDismounting = 2,
	EDismountingBehaviorType__MAX  = 3,

};

// Enum AdsMountingSystem.EMountingBehaviorType
enum class AdsMountingSystem_EMountingBehaviorType : uint8_t
{
	EMountingBehaviorType__Manual  = 0,
	EMountingBehaviorType__RiderFinishedMoving = 1,
	EMountingBehaviorType__RiderFinishedMounting = 2,
	EMountingBehaviorType__MAX     = 3,

};

// Enum AdsMountingSystem.EMountActionStatusType
enum class AdsMountingSystem_EMountActionStatusType : uint8_t
{
	EMountActionStatusType__None   = 0,
	EMountActionStatusType__InvalidController = 1,
	EMountActionStatusType__InvalidPawn = 2,
	EMountActionStatusType__InvalidMount = 3,
	EMountActionStatusType__InvalidSeat = 4,
	EMountActionStatusType__NotAuthority = 5,
	EMountActionStatusType__InvalidOwningController = 6,
	EMountActionStatusType__RiderControllerInterfaceNotImplemented = 7,
	EMountActionStatusType__MountRiderInterfaceNotImplemented = 8,
	EMountActionStatusType__MountablePawnInterfaceNotImplemented = 9,
	EMountActionStatusType__UnifiedControllerPawnInterfaceNotImplemented = 10,
	EMountActionStatusType__LinkedMountActorOwnerInterfaceNotImplemented = 11,
	EMountActionStatusType__LinkedMountActorInterfaceNotImplemented = 12,
	EMountActionStatusType__MountingFailedForMountablePawn = 13,
	EMountActionStatusType__MountingFailedForOwnedPawn = 14,
	EMountActionStatusType__MountingFailedToFindAssociatedLinkedActor = 15,
	EMountActionStatusType__DismountingPawnMissMatch = 16,
	EMountActionStatusType__DismountingFailedForMountablePawn = 17,
	EMountActionStatusType__DismountingFailedForOwnedPawn = 18,
	EMountActionStatusType__FailedToRetrieveRiderController = 19,
	EMountActionStatusType__FailedRetrieveRiderControllerComponent = 20,
	EMountActionStatusType__CustomStatus = 21,
	EMountActionStatusType__MAX    = 22,

};

// Enum AdsMountingSystem.EMountingDirection
enum class AdsMountingSystem_EMountingDirection : uint8_t
{
	EMountingDirection__InvalidSide = 0,
	EMountingDirection__MountAnySide = 1,
	EMountingDirection__MountRightSide = 2,
	EMountingDirection__MountLeftSide = 3,
	EMountingDirection__MountFrontSide = 4,
	EMountingDirection__MountBackSide = 5,
	EMountingDirection__MountTopSide = 6,
	EMountingDirection__MountBottomSide = 7,
	EMountingDirection__MAX        = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdsMountingSystem.SeatMountingData
// 0x0020
struct FSeatMountingData
{
	AdsMountingSystem_EMountingDirection               MountPosition;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OLP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RelativeMountingOffset;                                    // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeDismountingOffset;                                 // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCustomDismountingOffset;                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_091L[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AdsMountingSystem.SeatData
// 0x0030
struct FSeatData
{
	int                                                seatId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T5C6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSeatMountingData>                   MountingData;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       SeatSocketName;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOccupied;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLinkedActor;                                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VFU[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       OccupyingActor;                                            // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STX0[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AdsMountingSystem.SeatManager
// 0x0020
struct FSeatManager
{
	TArray<struct FSeatData>                           Seats;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              MaxValidMountingDistanceSquared;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DriverSeatIndex;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DriverSeatId;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceDriverSeat;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPossessableMount;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PIT[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AdsMountingSystem.MountingAction
// 0x000C
struct FMountingAction
{
	AdsMountingSystem_EMountingActionType              MountingAction;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AAMX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                seatId;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActionId;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GD2E[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AdsMountingSystem.MountActionResponse
// 0x0003
struct FMountActionResponse
{
	AdsMountingSystem_EMountActionStatusType           ActionStatus;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomStatus;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AdsMountingSystem.SeatDataMemento
// 0x0010
struct FSeatDataMemento
{
	int                                                seatId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SeatSocketName;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOccupied;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4YE6[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
