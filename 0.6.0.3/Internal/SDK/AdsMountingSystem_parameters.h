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

// Function AdsMountingSystem.AdsMountingSystemLibrary.TranslateVectorRelative
struct UAdsMountingSystemLibrary_TranslateVectorRelative_Params
{
	struct FTransform                                  Transform;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     offsetValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     outVector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedById
struct UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedById_Params
{
	struct FSeatManager                                inSeatManager;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       occupyingPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedAtIndex
struct UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedAtIndex_Params
{
	struct FSeatManager                                inSeatManager;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       occupyingPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedById
struct UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedById_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedAtIndex
struct UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedAtIndex_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsDriverSeatId
struct UAdsMountingSystemLibrary_SeatManager_IsDriverSeatId_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_HasAvailableSeats
struct UAdsMountingSystemLibrary_SeatManager_HasAvailableSeats_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataById
struct UAdsMountingSystemLibrary_SeatManager_GetSeatDataById_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataAtIndex
struct UAdsMountingSystemLibrary_SeatManager_GetSeatDataAtIndex_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatDataIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumSeats
struct UAdsMountingSystemLibrary_SeatManager_GetNumSeats_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumRiders
struct UAdsMountingSystemLibrary_SeatManager_GetNumRiders_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetDriverSeat
struct UAdsMountingSystemLibrary_SeatManager_GetDriverSeat_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSeatData                                   outDriverSeatData;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_FindAvailableMountingPosition
struct UAdsMountingSystemLibrary_SeatManager_FindAvailableMountingPosition_Params
{
	struct FSeatManager                                inSeatManager;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     riderLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  MountPosition;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                outSeatDataIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierById
struct UAdsMountingSystemLibrary_SeatManager_ClearOccupierById_Params
{
	struct FSeatManager                                inSeatManager;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierAtIndex
struct UAdsMountingSystemLibrary_SeatManager_ClearOccupierAtIndex_Params
{
	struct FSeatManager                                inSeatManager;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.GetRelativeMountingPosition
struct UAdsMountingSystemLibrary_GetRelativeMountingPosition_Params
{
	class AActor*                                      mountActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      riderActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignoreForwared;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignoreRight;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignoreUp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromUpBetweenActors
struct UAdsMountingSystemLibrary_GetAngleFromUpBetweenActors_Params
{
	class AActor*                                      mainActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      targetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromRightBetweenActors
struct UAdsMountingSystemLibrary_GetAngleFromRightBetweenActors_Params
{
	class AActor*                                      mainActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      targetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromForwardBetweenActors
struct UAdsMountingSystemLibrary_GetAngleFromForwardBetweenActors_Params
{
	class AActor*                                      mainActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      targetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToMount
struct UADMUnifiedControllerPawn_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      linkedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToDismount
struct UADMUnifiedControllerPawn_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformMountPawn
struct UADMUnifiedControllerPawn_PerformMountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformDismountPawn
struct UADMUnifiedControllerPawn_PerformDismountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.IsMounted
struct UADMUnifiedControllerPawn_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.IsCharacterMountable
struct UADMUnifiedControllerPawn_IsCharacterMountable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterPawn
struct UADMUnifiedControllerPawn_GetCharacterPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterMount
struct UADMUnifiedControllerPawn_GetCharacterMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterController
struct UADMUnifiedControllerPawn_GetCharacterController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActor.SetMasterActor
struct ULinkedMountActor_SetMasterActor_Params
{
	class AActor*                                      masterActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActor.SetLinkedSeatId
struct ULinkedMountActor_SetLinkedSeatId_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActor.GetMasterActor
struct ULinkedMountActor_GetMasterActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActor.GetLinkedSeatId
struct ULinkedMountActor_GetLinkedSeatId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActor.GetLinkedActorMesh
struct ULinkedMountActor_GetLinkedActorMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActorOwner.SetLinkedActor
struct ULinkedMountActorOwner_SetLinkedActor_Params
{
	class AActor*                                      newLinkedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActors
struct ULinkedMountActorOwner_GetLinkedActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActor
struct ULinkedMountActorOwner_GetLinkedActor_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedById
struct UMountablePawnInterface_SetSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedAtIndex
struct UMountablePawnInterface_SetSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupied
struct UMountablePawnInterface_SetSeatOccupied_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedMounting
struct UMountablePawnInterface_OnRiderFinishedMounting_Params
{
	class AActor*                                      mountedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedDismounting
struct UMountablePawnInterface_OnRiderFinishedDismounting_Params
{
	class AActor*                                      dismountedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedChangingSeats
struct UMountablePawnInterface_OnRiderFinishedChangingSeats_Params
{
	class AActor*                                      rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                newSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                oldSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.MustHaveDriver
struct UMountablePawnInterface_MustHaveDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedById
struct UMountablePawnInterface_IsSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedAtIndex
struct UMountablePawnInterface_IsSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsMountablePawn
struct UMountablePawnInterface_IsMountablePawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsMountableByPawn
struct UMountablePawnInterface_IsMountableByPawn_Params
{
	class APawn*                                       newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsMountableActor
struct UMountablePawnInterface_IsMountableActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsDriverSeat
struct UMountablePawnInterface_IsDriverSeat_Params
{
	struct FSeatData                                   SeatData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.IsDriverReady
struct UMountablePawnInterface_IsDriverReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.HasPassangers
struct UMountablePawnInterface_HasPassangers_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.HasDriver
struct UMountablePawnInterface_HasDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataById
struct UMountablePawnInterface_GetSeatDataById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataAtIndex
struct UMountablePawnInterface_GetSeatDataAtIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetRelativePositionToMount
struct UMountablePawnInterface_GetRelativePositionToMount_Params
{
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetRelativeMountDirection
struct UMountablePawnInterface_GetRelativeMountDirection_Params
{
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetRelativeDismountDirection
struct UMountablePawnInterface_GetRelativeDismountDirection_Params
{
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetMountBody
struct UMountablePawnInterface_GetMountBody_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetMountablePawnComponent
struct UMountablePawnInterface_GetMountablePawnComponent_Params
{
	class UMountablePawnComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetMaxRiders
struct UMountablePawnInterface_GetMaxRiders_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetDriver
struct UMountablePawnInterface_GetDriver_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetDismountDirection
struct UMountablePawnInterface_GetDismountDirection_Params
{
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.GetCurrentRiderCount
struct UMountablePawnInterface_GetCurrentRiderCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.FindAvailableMountingPosition
struct UMountablePawnInterface_FindAvailableMountingPosition_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     riderLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   outSeatData;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	int                                                outSeatIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.ClearSeatByIndex
struct UMountablePawnInterface_ClearSeatByIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.ClearSeatById
struct UMountablePawnInterface_ClearSeatById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.ClearSeatAtIndex
struct UMountablePawnInterface_ClearSeatAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.CanMountPawn
struct UMountablePawnInterface_CanMountPawn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.CanMountAtPosition
struct UMountablePawnInterface_CanMountAtPosition_Params
{
	struct FVector                                     riderLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               desiredMountingPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnInterface.CanMountActor
struct UMountablePawnInterface_CanMountActor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountingSystemDebugInterface.SetPlayerDebugId
struct UMountingSystemDebugInterface_SetPlayerDebugId_Params
{
	int                                                newDebugId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountingSystemDebugInterface.GetPlayerDebugId
struct UMountingSystemDebugInterface_GetPlayerDebugId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.StartPawnMounting
struct UMountRiderInterface_StartPawnMounting_Params
{
	class AActor*                                      newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      linkedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        mountingResponse;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.StartPawnDismounting
struct UMountRiderInterface_StartPawnDismounting_Params
{
	class AActor*                                      oldPawnMount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        mountingResponse;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.SetRiderCollisionEnabled
struct UMountRiderInterface_SetRiderCollisionEnabled_Params
{
	bool                                               shouldEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.PlayMoveToSeatAnimation
struct UMountRiderInterface_PlayMoveToSeatAnimation_Params
{
	int                                                currentSeatId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                oldSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.PlayMountingAnimation
struct UMountRiderInterface_PlayMountingAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.PlayDismountingAnimation
struct UMountRiderInterface_PlayDismountingAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.OnMoveToMountingLocationCompleted
struct UMountRiderInterface_OnMoveToMountingLocationCompleted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.OnMountingPawnFinished
struct UMountRiderInterface_OnMountingPawnFinished_Params
{
	class AActor*                                      newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.OnDismountingPawnFinished
struct UMountRiderInterface_OnDismountingPawnFinished_Params
{
	class AActor*                                      oldPawnMount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.OnChangeToNewSeatCompleted
struct UMountRiderInterface_OnChangeToNewSeatCompleted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.MoveToMountingLocation
struct UMountRiderInterface_MoveToMountingLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.IsSeatedOnMount
struct UMountRiderInterface_IsSeatedOnMount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.IsDriver
struct UMountRiderInterface_IsDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.GetSeatId
struct UMountRiderInterface_GetSeatId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.GetRiderMesh
struct UMountRiderInterface_GetRiderMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.GetMountRiderComponent
struct UMountRiderInterface_GetMountRiderComponent_Params
{
	class UMountRiderComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.GetDebugId
struct UMountRiderInterface_GetDebugId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.GetAllRiderSkeletalMeshes
struct UMountRiderInterface_GetAllRiderSkeletalMeshes_Params
{
	TArray<class USkeletalMeshComponent*>              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.BeginMountingPawn
struct UMountRiderInterface_BeginMountingPawn_Params
{
	class APawn*                                       newMountPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderInterface.BeginDismountingPawn
struct UMountRiderInterface_BeginDismountingPawn_Params
{
	class APawn*                                       dismountedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.PossessCharacter
struct URiderControllerInterface_PossessCharacter_Params
{
	class APawn*                                       characterToPossess;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnRiderRemoved
struct URiderControllerInterface_OnRiderRemoved_Params
{
	class AActor*                                      removedRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnRiderAdded
struct URiderControllerInterface_OnRiderAdded_Params
{
	class AActor*                                      newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnOtherRiderChangedSeats
struct URiderControllerInterface_OnOtherRiderChangedSeats_Params
{
	class AActor*                                      otherRider;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                oldSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                newSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnMountActionFailed
struct URiderControllerInterface_OnMountActionFailed_Params
{
	class AActor*                                      newMount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      newLinkedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnDismountActionFailed
struct URiderControllerInterface_OnDismountActionFailed_Params
{
	class AActor*                                      currentMount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.OnChangeSeatActionFailed
struct URiderControllerInterface_OnChangeSeatActionFailed_Params
{
	struct FMountActionResponse                        Response;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerInterface.GetRiderControllerComponent
struct URiderControllerInterface_GetRiderControllerComponent_Params
{
	class URiderControllerComponent*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedById
struct UMountablePawnComponent_SetSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedAtIndex
struct UMountablePawnComponent_SetSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupied
struct UMountablePawnComponent_SetSeatOccupied_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetRiderBySeatId
struct UMountablePawnComponent_SetRiderBySeatId_Params
{
	class APawn*                                       newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetRiderAtSeatIndex
struct UMountablePawnComponent_SetRiderAtSeatIndex_Params
{
	class APawn*                                       newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetRider
struct UMountablePawnComponent_SetRider_Params
{
	class APawn*                                       newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.SetIsMountable
struct UMountablePawnComponent_SetIsMountable_Params
{
	bool                                               IsMountable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedMounting
struct UMountablePawnComponent_RiderFinishedMounting_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedDismounting
struct UMountablePawnComponent_RiderFinishedDismounting_Params
{
	class AActor*                                      dismountedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedChangingSeats
struct UMountablePawnComponent_RiderFinishedChangingSeats_Params
{
	class AActor*                                      rider;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                newSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                oldSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.MustHaveDriver
struct UMountablePawnComponent_MustHaveDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedById
struct UMountablePawnComponent_IsSeatOccupiedById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedAtIndex
struct UMountablePawnComponent_IsSeatOccupiedAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsPossessableMount
struct UMountablePawnComponent_IsPossessableMount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsMounted
struct UMountablePawnComponent_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsMountable
struct UMountablePawnComponent_IsMountable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeatId
struct UMountablePawnComponent_IsDriverSeatId_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeat
struct UMountablePawnComponent_IsDriverSeat_Params
{
	struct FSeatData                                   SeatData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.HasDriver
struct UMountablePawnComponent_HasDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataById
struct UMountablePawnComponent_GetSeatDataById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataAtIndex
struct UMountablePawnComponent_GetSeatDataAtIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   SeatData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetRiderBySeatId
struct UMountablePawnComponent_GetRiderBySeatId_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetRiderAtIndex
struct UMountablePawnComponent_GetRiderAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetRider
struct UMountablePawnComponent_GetRider_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetNumSeats
struct UMountablePawnComponent_GetNumSeats_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetNumRiders
struct UMountablePawnComponent_GetNumRiders_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetDriver
struct UMountablePawnComponent_GetDriver_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatById
struct UMountablePawnComponent_GetDefaultPositionForSeatById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatAtIndex
struct UMountablePawnComponent_GetDefaultPositionForSeatAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdsMountingSystem_EMountingDirection               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.FindAvailableMountingPosition
struct UMountablePawnComponent_FindAvailableMountingPosition_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     riderLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSeatData                                   outSeatData;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	int                                                outSeatIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.ClearSeatByIndex
struct UMountablePawnComponent_ClearSeatByIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.ClearSeatById
struct UMountablePawnComponent_ClearSeatById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.ClearSeatAtIndex
struct UMountablePawnComponent_ClearSeatAtIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountablePawnComponent.CanMount
struct UMountablePawnComponent_CanMount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.UpdateRootMeshRelativeLocation
struct UMountRiderComponent_UpdateRootMeshRelativeLocation_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.ShouldTeleportToDismountLocation
struct UMountRiderComponent_ShouldTeleportToDismountLocation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.SetRootMotionValidationForAnimationEnabled
struct UMountRiderComponent_SetRootMotionValidationForAnimationEnabled_Params
{
	bool                                               IsRootMotionValidationForAnimationEnabled;                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.SetRiderController
struct UMountRiderComponent_SetRiderController_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.SetMovementReplication
struct UMountRiderComponent_SetMovementReplication_Params
{
	bool                                               enableMovementReplication;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               onlyAllowAutonomousTickPose;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.Reset
struct UMountRiderComponent_Reset_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.PawnFinishedMounting
struct UMountRiderComponent_PawnFinishedMounting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.PawnFinishedDismounting
struct UMountRiderComponent_PawnFinishedDismounting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.PawnFinishedChangingSeats
struct UMountRiderComponent_PawnFinishedChangingSeats_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.OnRep_IsMounted
struct UMountRiderComponent_OnRep_IsMounted_Params
{
	bool                                               previousMountedState;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.OnRep_DismountDirection
struct UMountRiderComponent_OnRep_DismountDirection_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentSeatData
struct UMountRiderComponent_OnRep_CurrentSeatData_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentMount
struct UMountRiderComponent_OnRep_CurrentMount_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentAction
struct UMountRiderComponent_OnRep_CurrentAction_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.OnCharacterMounted
struct UMountRiderComponent_OnCharacterMounted_Params
{
	bool                                               bPlayMountingAnimation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.OnCharacterDismounted
struct UMountRiderComponent_OnCharacterDismounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.OnCharacterChangedSeats
struct UMountRiderComponent_OnCharacterChangedSeats_Params
{
	bool                                               bPlayAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.MULTICAST_OnCharacterDismounted
struct UMountRiderComponent_MULTICAST_OnCharacterDismounted_Params
{
	AdsMountingSystem_EMountingDirection               dismountDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.MoveToMountingLocationComplete
struct UMountRiderComponent_MoveToMountingLocationComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.MountPawn
struct UMountRiderComponent_MountPawn_Params
{
	class AActor*                                      newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      newLinkedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.IsSeated
struct UMountRiderComponent_IsSeated_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.IsRootMotionValidationForAnimationEnabled
struct UMountRiderComponent_IsRootMotionValidationForAnimationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.IsMounted
struct UMountRiderComponent_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.IsDriver
struct UMountRiderComponent_IsDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetSeatId
struct UMountRiderComponent_GetSeatId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetRiderController
struct UMountRiderComponent_GetRiderController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetPreviousMount
struct UMountRiderComponent_GetPreviousMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetOwningPawn
struct UMountRiderComponent_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetLinkedMountActor
struct UMountRiderComponent_GetLinkedMountActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetDismountLocation
struct UMountRiderComponent_GetDismountLocation_Params
{
	AdsMountingSystem_EMountingDirection               directionToDismount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetCurrentSeatData
struct UMountRiderComponent_GetCurrentSeatData_Params
{
	struct FSeatData                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.GetCurrentMount
struct UMountRiderComponent_GetCurrentMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.DismountPawn
struct UMountRiderComponent_DismountPawn_Params
{
	class AActor*                                      dismountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.DismountFinished
struct UMountRiderComponent_DismountFinished_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.DetachRiderFromMount
struct UMountRiderComponent_DetachRiderFromMount_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.ChangeSeatToIndex
struct UMountRiderComponent_ChangeSeatToIndex_Params
{
	int                                                seatIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.ChangeSeatById
struct UMountRiderComponent_ChangeSeatById_Params
{
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.MountRiderComponent.AttachRiderToMount
struct UMountRiderComponent_AttachRiderToMount_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessMount
struct UMountRiderComponent_AllowControllerToPossessMount_Params
{
};

// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessCharacter
struct UMountRiderComponent_AllowControllerToPossessCharacter_Params
{
};

// Function AdsMountingSystem.RiderControllerComponent.SetOwnedPawn
struct URiderControllerComponent_SetOwnedPawn_Params
{
	class APawn*                                       newOwnedPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.SetMountPawn
struct URiderControllerComponent_SetMountPawn_Params
{
	class APawn*                                       newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.SetMountActor
struct URiderControllerComponent_SetMountActor_Params
{
	class AActor*                                      newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.SetLinkedMountActor
struct URiderControllerComponent_SetLinkedMountActor_Params
{
	class AActor*                                      newLinkedMountActor;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.SetControlledPawn
struct URiderControllerComponent_SetControlledPawn_Params
{
	class APawn*                                       newControlledPawn;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.RiderRemoved
struct URiderControllerComponent_RiderRemoved_Params
{
	class AActor*                                      removedRider;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.RiderAdded
struct URiderControllerComponent_RiderAdded_Params
{
	class AActor*                                      newRider;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seatId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.Reset
struct URiderControllerComponent_Reset_Params
{
};

// Function AdsMountingSystem.RiderControllerComponent.PerformMountPawn
struct URiderControllerComponent_PerformMountPawn_Params
{
	class APawn*                                       newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.PerformMountActor
struct URiderControllerComponent_PerformMountActor_Params
{
	class AActor*                                      newMountActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      newLinkedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.PerformDismountPawn
struct URiderControllerComponent_PerformDismountPawn_Params
{
	class APawn*                                       dismountingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.PerformDismountActor
struct URiderControllerComponent_PerformDismountActor_Params
{
	class AActor*                                      dismountingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.OtherRiderChangedSeat
struct URiderControllerComponent_OtherRiderChangedSeat_Params
{
	class AActor*                                      otherRider;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                newSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                oldSeatId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.IsMounted
struct URiderControllerComponent_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.GetOwningController
struct URiderControllerComponent_GetOwningController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.GetOwnedPawn
struct URiderControllerComponent_GetOwnedPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.GetMountPawn
struct URiderControllerComponent_GetMountPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.GetMountActor
struct URiderControllerComponent_GetMountActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.GetLinkedMountActor
struct URiderControllerComponent_GetLinkedMountActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdsMountingSystem.RiderControllerComponent.ClearMount
struct URiderControllerComponent_ClearMount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
