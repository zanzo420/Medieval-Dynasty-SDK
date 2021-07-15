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

// Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraRotation
struct ABP_AnimalBase_C_GetMountCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetSprintKeyDown
struct ABP_AnimalBase_C_GetSprintKeyDown_Params
{
	bool                                               IsSprintKeyDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetShouldSprint
struct ABP_AnimalBase_C_GetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CanMountActor
struct ABP_AnimalBase_C_CanMountActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CanMountAtPosition
struct ABP_AnimalBase_C_CanMountAtPosition_Params
{
	struct FVector                                     riderLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               desiredMountingPosition;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CanMountPawn
struct ABP_AnimalBase_C_CanMountPawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatAtIndex
struct ABP_AnimalBase_C_ClearSeatAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatById
struct ABP_AnimalBase_C_ClearSeatById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatByIndex
struct ABP_AnimalBase_C_ClearSeatByIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.FindAvailableMountingPosition
struct ABP_AnimalBase_C_FindAvailableMountingPosition_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     riderLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   outSeatData;                                               // (Parm, OutParm)
	int                                                outSeatIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetCurrentRiderCount
struct ABP_AnimalBase_C_GetCurrentRiderCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetDismountDirection
struct ABP_AnimalBase_C_GetDismountDirection_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetDriver
struct ABP_AnimalBase_C_GetDriver_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetMaxRiders
struct ABP_AnimalBase_C_GetMaxRiders_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetMountablePawnComponent
struct ABP_AnimalBase_C_GetMountablePawnComponent_Params
{
	class UMountablePawnComponent*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetMountBody
struct ABP_AnimalBase_C_GetMountBody_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeDismountDirection
struct ABP_AnimalBase_C_GetRelativeDismountDirection_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeMountDirection
struct ABP_AnimalBase_C_GetRelativeMountDirection_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativePositionToMount
struct ABP_AnimalBase_C_GetRelativePositionToMount_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataAtIndex
struct ABP_AnimalBase_C_GetSeatDataAtIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataById
struct ABP_AnimalBase_C_GetSeatDataById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.HasDriver
struct ABP_AnimalBase_C_HasDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.HasPassangers
struct ABP_AnimalBase_C_HasPassangers_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverReady
struct ABP_AnimalBase_C_IsDriverReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverSeat
struct ABP_AnimalBase_C_IsDriverSeat_Params
{
	struct FSeatData                                   SeatData;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableActor
struct ABP_AnimalBase_C_IsMountableActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableByPawn
struct ABP_AnimalBase_C_IsMountableByPawn_Params
{
	class APawn*                                       newRider;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsMountablePawn
struct ABP_AnimalBase_C_IsMountablePawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedAtIndex
struct ABP_AnimalBase_C_IsSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedById
struct ABP_AnimalBase_C_IsSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.MustHaveDriver
struct ABP_AnimalBase_C_MustHaveDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedChangingSeats
struct ABP_AnimalBase_C_OnRiderFinishedChangingSeats_Params
{
	class AActor*                                      rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                newSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                oldSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedDismounting
struct ABP_AnimalBase_C_OnRiderFinishedDismounting_Params
{
	class AActor*                                      dismountedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedMounting
struct ABP_AnimalBase_C_OnRiderFinishedMounting_Params
{
	class AActor*                                      mountedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupied
struct ABP_AnimalBase_C_SetSeatOccupied_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedAtIndex
struct ABP_AnimalBase_C_SetSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedById
struct ABP_AnimalBase_C_SetSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterController
struct ABP_AnimalBase_C_GetCharacterController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterMount
struct ABP_AnimalBase_C_GetCharacterMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterPawn
struct ABP_AnimalBase_C_GetCharacterPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsCharacterMountable
struct ABP_AnimalBase_C_IsCharacterMountable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsMounted
struct ABP_AnimalBase_C_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.PerformDismountPawn
struct ABP_AnimalBase_C_PerformDismountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.PerformMountPawn
struct ABP_AnimalBase_C_PerformMountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToDismount
struct ABP_AnimalBase_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToMount
struct ABP_AnimalBase_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsGrabbable
struct ABP_AnimalBase_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsItemNeeded
struct ABP_AnimalBase_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractItem
struct ABP_AnimalBase_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsItemInteractable
struct ABP_AnimalBase_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAdditionalStatus
struct ABP_AnimalBase_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractAdditionalStatus
struct ABP_AnimalBase_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetFishData
struct ABP_AnimalBase_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetID
struct ABP_AnimalBase_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractionDistance
struct ABP_AnimalBase_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetOff-HandItem
struct ABP_AnimalBase_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCondition
struct ABP_AnimalBase_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractCondition
struct ABP_AnimalBase_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsToolNeeded
struct ABP_AnimalBase_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetOwnershipType
struct ABP_AnimalBase_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTitle
struct ABP_AnimalBase_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractResources
struct ABP_AnimalBase_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetFluidType
struct ABP_AnimalBase_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool_UI
struct ABP_AnimalBase_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable_UI
struct ABP_AnimalBase_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractTime
struct ABP_AnimalBase_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable
struct ABP_AnimalBase_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetTaskFromActor
struct ABP_AnimalBase_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractIcon
struct ABP_AnimalBase_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CheckOccupied
struct ABP_AnimalBase_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractAnimation
struct ABP_AnimalBase_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetResourceType
struct ABP_AnimalBase_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetHeldItem
struct ABP_AnimalBase_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCount
struct ABP_AnimalBase_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool
struct ABP_AnimalBase_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractName
struct ABP_AnimalBase_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAction
struct ABP_AnimalBase_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractable
struct ABP_AnimalBase_C_IsInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPressUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowTimerUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOnlyName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRowName BPI
struct ABP_AnimalBase_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalHeight
struct ABP_AnimalBase_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalWorldLocation
struct ABP_AnimalBase_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Sell
struct ABP_AnimalBase_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Buy
struct ABP_AnimalBase_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetForSale
struct ABP_AnimalBase_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetInventoryComponent
struct ABP_AnimalBase_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetSystemManager
struct ABP_AnimalBase_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CheckIsBuilding
struct ABP_AnimalBase_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetFleeingTimer
struct ABP_AnimalBase_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetFear
struct ABP_AnimalBase_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimal
struct ABP_AnimalBase_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToHusbandry
struct ABP_AnimalBase_C_ChangeBehaviorTreeToHusbandry_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToMount
struct ABP_AnimalBase_C_ChangeBehaviorTreeToMount_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMounted
struct ABP_AnimalBase_C_OnIsMounted_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMount
struct ABP_AnimalBase_C_OnIsMount_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ChooseMaxWalkSpeed
struct ABP_AnimalBase_C_ChooseMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.UpdateAnimalMovementSettings
struct ABP_AnimalBase_C_UpdateAnimalMovementSettings_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.CalculateEncumberedSpeed
struct ABP_AnimalBase_C_CalculateEncumberedSpeed_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.AddItems
struct ABP_AnimalBase_C_AddItems_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.AddDamageCauser
struct ABP_AnimalBase_C_AddDamageCauser_Params
{
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetDamageCauserTag
struct ABP_AnimalBase_C_GetDamageCauserTag_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tag;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersStatus
struct ABP_AnimalBase_C_UpdateCausersStatus_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausers
struct ABP_AnimalBase_C_UpdateCausers_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryDataFromSave
struct ABP_AnimalBase_C_SetHusbandryDataFromSave_Params
{
	struct FST_SAVE_HusbandryAnimals                   HusbandryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetHusbandryDataToSave
struct ABP_AnimalBase_C_GetHusbandryDataToSave_Params
{
	struct FST_SAVE_HusbandryAnimals                   HusbandryData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.TeleportTowardMoveLocation
struct ABP_AnimalBase_C_TeleportTowardMoveLocation_Params
{
	struct FVector                                     Goal;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ResetStuckCounter
struct ABP_AnimalBase_C_ResetStuckCounter_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.IncreaseStuckCounter
struct ABP_AnimalBase_C_IncreaseStuckCounter_Params
{
	struct FVector                                     Goal;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.LootImpaledItems
struct ABP_AnimalBase_C_LootImpaledItems_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnOwnershipSwap
struct ABP_AnimalBase_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CalculateMaxWalkSpeed
struct ABP_AnimalBase_C_CalculateMaxWalkSpeed_Params
{
	float                                              WalkSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetMaxWalkSpeed
struct ABP_AnimalBase_C_SetMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.AnimalBleed
struct ABP_AnimalBase_C_AnimalBleed_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetCurrentHP
struct ABP_AnimalBase_C_SetCurrentHP_Params
{
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.LimitRotation
struct ABP_AnimalBase_C_LimitRotation_Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalRotationModeChanged
struct ABP_AnimalBase_C_OnAnimalRotationModeChanged_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalGaitModeChanged
struct ABP_AnimalBase_C_OnAnimalGaitModeChanged_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetLookingRotation
struct ABP_AnimalBase_C_GetLookingRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CalculateEssentialVariables
struct ABP_AnimalBase_C_CalculateEssentialVariables_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.LookingDirectionWithOffset
struct ABP_AnimalBase_C_LookingDirectionWithOffset_Params
{
	float                                              OffsetInterpSpeed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NE_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NW_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SE_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SW_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ChooseVelocity
struct ABP_AnimalBase_C_ChooseVelocity_Params
{
	struct FVector                                     Velocity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.CalculateAnimalRotationRate
struct ABP_AnimalBase_C_CalculateAnimalRotationRate_Params
{
	float                                              SlowSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SlowSpeedRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FastSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FastSpeedRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalPawnMovementModeChanged
struct ABP_AnimalBase_C_OnAnimalPawnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimInstance
struct ABP_AnimalBase_C_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalMovementModeChanged
struct ABP_AnimalBase_C_OnAnimalMovementModeChanged_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalRotation
struct ABP_AnimalBase_C_SetAnimalRotation_Params
{
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InterpRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.AddAnimalRotation
struct ABP_AnimalBase_C_AddAnimalRotation_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.fnGetAuthority
struct ABP_AnimalBase_C_fnGetAuthority_Params
{
	bool                                               HasAuthority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript
struct ABP_AnimalBase_C_UserConstructionScript_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountCameraFoV
struct ABP_AnimalBase_C_UpdateMountCameraFoV_Params
{
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Backwards_Axis
struct ABP_AnimalBase_C_Backwards_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Left_Axis
struct ABP_AnimalBase_C_Left_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.JumpPressed
struct ABP_AnimalBase_C_JumpPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.JumpReleased
struct ABP_AnimalBase_C_JumpReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.MountSpecial
struct ABP_AnimalBase_C_MountSpecial_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SprintPressed
struct ABP_AnimalBase_C_SprintPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SprintReleased
struct ABP_AnimalBase_C_SprintReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Right_Axis
struct ABP_AnimalBase_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Down_Axis
struct ABP_AnimalBase_C_Down_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.DismountPressed
struct ABP_AnimalBase_C_DismountPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.DismountReleased
struct ABP_AnimalBase_C_DismountReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.MountStop
struct ABP_AnimalBase_C_MountStop_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.WalkPressed
struct ABP_AnimalBase_C_WalkPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.WalkReleased
struct ABP_AnimalBase_C_WalkReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetShouldSprint
struct ABP_AnimalBase_C_SetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.LookAtOnMount
struct ABP_AnimalBase_C_LookAtOnMount_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetOccupied
struct ABP_AnimalBase_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetTaskInActor
struct ABP_AnimalBase_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ChangeTaskIsOccupied
struct ABP_AnimalBase_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ToolInteract
struct ABP_AnimalBase_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.IsLookedAt
struct ABP_AnimalBase_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ShowInspectorUI
struct ABP_AnimalBase_C_ShowInspectorUI_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.InteractWithImpaledItem
struct ABP_AnimalBase_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.StartAttackFunction
struct ABP_AnimalBase_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.StopAttackFunction
struct ABP_AnimalBase_C_StopAttackFunction_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.Remove
struct ABP_AnimalBase_C_Remove_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.CheckDistance
struct ABP_AnimalBase_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.AddItemToHouse
struct ABP_AnimalBase_C_AddItemToHouse_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetFear
struct ABP_AnimalBase_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetEngageTargetBPI
struct ABP_AnimalBase_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnWakeUp
struct ABP_AnimalBase_C_OnWakeUp_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.Starving
struct ABP_AnimalBase_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnSleep
struct ABP_AnimalBase_C_OnSleep_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalMovementMode BPI
struct ABP_AnimalBase_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetForSale
struct ABP_AnimalBase_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountEquipment
struct ABP_AnimalBase_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePossessed
struct ABP_AnimalBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Close
struct ABP_AnimalBase_C_OnSummoned_Close_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Far
struct ABP_AnimalBase_C_OnSummoned_Far_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnSummonFinished
struct ABP_AnimalBase_C_OnSummonFinished_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay
struct ABP_AnimalBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveTick
struct ABP_AnimalBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Interact
struct ABP_AnimalBase_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.InteractStart
struct ABP_AnimalBase_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.InteractCancel
struct ABP_AnimalBase_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveDestroyed
struct ABP_AnimalBase_C_ReceiveDestroyed_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.UnpauseBrain
struct ABP_AnimalBase_C_UnpauseBrain_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.PauseBrain
struct ABP_AnimalBase_C_PauseBrain_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.OnMoveForSkinningFinished
struct ABP_AnimalBase_C_OnMoveForSkinningFinished_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.InteractInput
struct ABP_AnimalBase_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalBase.BP_AnimalBase_C.PerformActorInteraction
struct ABP_AnimalBase_C_PerformActorInteraction_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.AddImpaledItem
struct ABP_AnimalBase_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.RemoveImpaledItem
struct ABP_AnimalBase_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.EnableNPC
struct ABP_AnimalBase_C_EnableNPC_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.DisableNPC
struct ABP_AnimalBase_C_DisableNPC_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.NoneOptimization
struct ABP_AnimalBase_C_NoneOptimization_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.CloseOptimization
struct ABP_AnimalBase_C_CloseOptimization_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.MediumOptimization
struct ABP_AnimalBase_C_MediumOptimization_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.FarOptimization
struct ABP_AnimalBase_C_FarOptimization_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.SetIsInWater
struct ABP_AnimalBase_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.EventDead
struct ABP_AnimalBase_C_EventDead_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.DealtDamage
struct ABP_AnimalBase_C_DealtDamage_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePointDamage
struct ABP_AnimalBase_C_ReceivePointDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ShotFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Splat
struct ABP_AnimalBase_C_Splat_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmitterTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ParticleTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Normal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                           PhysMat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.BleedCancel
struct ABP_AnimalBase_C_BleedCancel_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.CauseBleeding
struct ABP_AnimalBase_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveAnyDamage
struct ABP_AnimalBase_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.EndFalling
struct ABP_AnimalBase_C_EndFalling_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.StartFalling
struct ABP_AnimalBase_C_StartFalling_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.FallingEvent
struct ABP_AnimalBase_C_FallingEvent_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.Set ALS_RotationMode Event
struct ABP_AnimalBase_C_Set_ALS_RotationMode_Event_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         New_ALS_RotationMode;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_Gait Event
struct ABP_AnimalBase_C_Set_Animal_Gait_Event_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         New_ALS_Gait;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.K2_OnMovementModeChanged
struct ABP_AnimalBase_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_MovementMode Event
struct ABP_AnimalBase_C_Set_Animal_MovementMode_Event_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         New_ALS_MovementMode;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase
struct ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
