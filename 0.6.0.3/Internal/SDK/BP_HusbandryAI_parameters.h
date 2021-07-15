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

// Function BP_HusbandryAI.BP_HusbandryAI_C.Check Sleep Slot
struct ABP_HusbandryAI_C_Check_Sleep_Slot_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.CalculateEssentialVariables
struct ABP_HusbandryAI_C_CalculateEssentialVariables_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMounted
struct ABP_HusbandryAI_C_OnIsMounted_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMount
struct ABP_HusbandryAI_C_OnIsMount_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountCameraRotation
struct ABP_HusbandryAI_C_GetMountCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnInputDirectionChanged
struct ABP_HusbandryAI_C_OnInputDirectionChanged_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSprintKeyDown
struct ABP_HusbandryAI_C_GetSprintKeyDown_Params
{
	bool                                               IsSprintKeyDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetShouldSprint
struct ABP_HusbandryAI_C_GetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.PlayerCameraRotationUpdate
struct ABP_HusbandryAI_C_PlayerCameraRotationUpdate_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.CheckIfShouldResetCamera
struct ABP_HusbandryAI_C_CheckIfShouldResetCamera_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraPitch
struct ABP_HusbandryAI_C_UpdateCameraPitch_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraYaw
struct ABP_HusbandryAI_C_UpdateCameraYaw_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.InterpTurnMultiplier
struct ABP_HusbandryAI_C_InterpTurnMultiplier_Params
{
	float                                              TurnMultiplierTarget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.InterpMovementType
struct ABP_HusbandryAI_C_InterpMovementType_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ShouldSprint
struct ABP_HusbandryAI_C_ShouldSprint_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementVars
struct ABP_HusbandryAI_C_UpdateMovementVars_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementType
struct ABP_HusbandryAI_C_UpdateMovementType_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedChangingSeats
struct ABP_HusbandryAI_C_OnRiderFinishedChangingSeats_Params
{
	class AActor*                                      rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                newSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                oldSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedDismounting
struct ABP_HusbandryAI_C_OnRiderFinishedDismounting_Params
{
	class AActor*                                      dismountedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedMounting
struct ABP_HusbandryAI_C_OnRiderFinishedMounting_Params
{
	class AActor*                                      mountedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountAtPosition
struct ABP_HusbandryAI_C_CanMountAtPosition_Params
{
	struct FVector                                     riderLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               desiredMountingPosition;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountActor
struct ABP_HusbandryAI_C_CanMountActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataAtIndex
struct ABP_HusbandryAI_C_GetSeatDataAtIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataById
struct ABP_HusbandryAI_C_GetSeatDataById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatAtIndex
struct ABP_HusbandryAI_C_ClearSeatAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatById
struct ABP_HusbandryAI_C_ClearSeatById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedAtIndex
struct ABP_HusbandryAI_C_SetSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedById
struct ABP_HusbandryAI_C_SetSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedAtIndex
struct ABP_HusbandryAI_C_IsSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.FindAvailableMountingPosition
struct ABP_HusbandryAI_C_FindAvailableMountingPosition_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     riderLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeatData                                   outSeatData;                                               // (Parm, OutParm)
	int                                                outSeatIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetCurrentRiderCount
struct ABP_HusbandryAI_C_GetCurrentRiderCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetDriver
struct ABP_HusbandryAI_C_GetDriver_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMaxRiders
struct ABP_HusbandryAI_C_GetMaxRiders_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedById
struct ABP_HusbandryAI_C_IsSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountBody
struct ABP_HusbandryAI_C_GetMountBody_Params
{
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeDismountDirection
struct ABP_HusbandryAI_C_GetRelativeDismountDirection_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeMountDirection
struct ABP_HusbandryAI_C_GetRelativeMountDirection_Params
{
	class APawn*                                       rider;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.HasDriver
struct ABP_HusbandryAI_C_HasDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.HasPassangers
struct ABP_HusbandryAI_C_HasPassangers_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverReady
struct ABP_HusbandryAI_C_IsDriverReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverSeat
struct ABP_HusbandryAI_C_IsDriverSeat_Params
{
	struct FSeatData                                   SeatData;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableByPawn
struct ABP_HusbandryAI_C_IsMountableByPawn_Params
{
	class APawn*                                       newRider;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableActor
struct ABP_HusbandryAI_C_IsMountableActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.MustHaveDriver
struct ABP_HusbandryAI_C_MustHaveDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountablePawnComponent
struct ABP_HusbandryAI_C_GetMountablePawnComponent_Params
{
	class UMountablePawnComponent*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetCharacterPawn
struct ABP_HusbandryAI_C_GetCharacterPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToDismount
struct ABP_HusbandryAI_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToMount
struct ABP_HusbandryAI_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToMount
struct ABP_HusbandryAI_C_ChangeBehaviorTreeToMount_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToHusbandry
struct ABP_HusbandryAI_C_ChangeBehaviorTreeToHusbandry_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCapacity
struct ABP_HusbandryAI_C_UpdateCapacity_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Sell
struct ABP_HusbandryAI_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Buy
struct ABP_HusbandryAI_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetForSale
struct ABP_HusbandryAI_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetHusbandryDataFromSave
struct ABP_HusbandryAI_C_SetHusbandryDataFromSave_Params
{
	struct FST_SAVE_HusbandryAnimals                   HusbandryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetHusbandryDataToSave
struct ABP_HusbandryAI_C_GetHusbandryDataToSave_Params
{
	struct FST_SAVE_HusbandryAnimals                   HusbandryData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetTaskFromActor
struct ABP_HusbandryAI_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.fnAnimRest_ChooseIndex
struct ABP_HusbandryAI_C_fnAnimRest_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetFleeingTimer
struct ABP_HusbandryAI_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.GetFear
struct ABP_HusbandryAI_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__FinishedFunc
struct ABP_HusbandryAI_C_RotationResetTL__FinishedFunc_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__UpdateFunc
struct ABP_HusbandryAI_C_RotationResetTL__UpdateFunc_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnFail_6B4002F24643F98A6D00D99BD8F9D5C6
struct ABP_HusbandryAI_C_OnFail_6B4002F24643F98A6D00D99BD8F9D5C6_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6
struct ABP_HusbandryAI_C_OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct ABP_HusbandryAI_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
struct ABP_HusbandryAI_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetShouldSprint
struct ABP_HusbandryAI_C_SetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.CameraRotationReset
struct ABP_HusbandryAI_C_CameraRotationReset_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ResetCameraRotation
struct ABP_HusbandryAI_C_ResetCameraRotation_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotationReset
struct ABP_HusbandryAI_C_StopCameraRotationReset_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotation
struct ABP_HusbandryAI_C_StopCameraRotation_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMountCameraFoV
struct ABP_HusbandryAI_C_UpdateMountCameraFoV_Params
{
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Close
struct ABP_HusbandryAI_C_OnSummoned_Close_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Far
struct ABP_HusbandryAI_C_OnSummoned_Far_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummonFinished
struct ABP_HusbandryAI_C_OnSummonFinished_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.LookAtOnMount
struct ABP_HusbandryAI_C_LookAtOnMount_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Backwards_Axis
struct ABP_HusbandryAI_C_Backwards_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Left_Axis
struct ABP_HusbandryAI_C_Left_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.JumpPressed
struct ABP_HusbandryAI_C_JumpPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.JumpReleased
struct ABP_HusbandryAI_C_JumpReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SprintPressed
struct ABP_HusbandryAI_C_SprintPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SprintReleased
struct ABP_HusbandryAI_C_SprintReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Right_Axis
struct ABP_HusbandryAI_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Down_Axis
struct ABP_HusbandryAI_C_Down_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.DismountPressed
struct ABP_HusbandryAI_C_DismountPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.DismountReleased
struct ABP_HusbandryAI_C_DismountReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Dismount
struct ABP_HusbandryAI_C_Dismount_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.WalkPressed
struct ABP_HusbandryAI_C_WalkPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetInputDirection
struct ABP_HusbandryAI_C_SetInputDirection_Params
{
	int                                                InputDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveBeginPlay
struct ABP_HusbandryAI_C_ReceiveBeginPlay_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.EventEngagementStart
struct ABP_HusbandryAI_C_EventEngagementStart_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveAnyDamage
struct ABP_HusbandryAI_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Fleeing
struct ABP_HusbandryAI_C_Fleeing_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetFear
struct ABP_HusbandryAI_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetEngageTargetBPI
struct ABP_HusbandryAI_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.Starving
struct ABP_HusbandryAI_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SnapRotationAndLocation
struct ABP_HusbandryAI_C_SnapRotationAndLocation_Params
{
	struct FVector                                     NewLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSweep;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bTeleport;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestStart
struct ABP_HusbandryAI_C_DayCycle_RestStart_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestEnd
struct ABP_HusbandryAI_C_DayCycle_RestEnd_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetTaskInActor
struct ABP_HusbandryAI_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeTaskIsOccupied
struct ABP_HusbandryAI_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveDestroyed
struct ABP_HusbandryAI_C_ReceiveDestroyed_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.SetForSale
struct ABP_HusbandryAI_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnMinuteUpdate
struct ABP_HusbandryAI_C_OnMinuteUpdate_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.OnHouseAssigned
struct ABP_HusbandryAI_C_OnHouseAssigned_Params
{
};

// Function BP_HusbandryAI.BP_HusbandryAI_C.ExecuteUbergraph_BP_HusbandryAI
struct ABP_HusbandryAI_C_ExecuteUbergraph_BP_HusbandryAI_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
