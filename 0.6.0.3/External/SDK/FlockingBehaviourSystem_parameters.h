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

// Function FlockingBehaviourSystem.Boid.ShouldUpdateRotation
struct ABoid_ShouldUpdateRotation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.SetGoalSeekingForce
struct ABoid_SetGoalSeekingForce_Params
{
	float                                              ForceMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.OnSpawnedBP
struct ABoid_OnSpawnedBP_Params
{
};

// Function FlockingBehaviourSystem.Boid.OnGoalReached
struct ABoid_OnGoalReached_Params
{
	class ABoid*                                       Boid;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.OnArrivedAtGoal
struct ABoid_OnArrivedAtGoal_Params
{
};

// Function FlockingBehaviourSystem.Boid.GetTurnSpeed
struct ABoid_GetTurnSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.GetSpeed
struct ABoid_GetSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.GetRotationTurnSpeed
struct ABoid_GetRotationTurnSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Boid.GetPerceptionRadius
struct ABoid_GetPerceptionRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.BoidSkeletal.GetSkeletalMeshComponent
struct ABoidSkeletal_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.BoidStatic.GetStaticMeshComponent
struct ABoidStatic_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateSeparationForce
struct AFlock_UpdateSeparationForce_Params
{
	float                                              NewSeparationForce;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateGoalSeekingForce
struct AFlock_UpdateGoalSeekingForce_Params
{
	float                                              Force;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateForceWeightToAllCustomForces
struct AFlock_UpdateForceWeightToAllCustomForces_Params
{
	float                                              NewWeightValue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateForces
struct AFlock_UpdateForces_Params
{
	float                                              NewAlignmentForce;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewCohesionForce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewSeparationForce;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateCustomForceWeight
struct AFlock_UpdateCustomForceWeight_Params
{
	int                                                ForceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewWeightValue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateCohesionForce
struct AFlock_UpdateCohesionForce_Params
{
	float                                              NewCohesionForce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.UpdateAlignmentForce
struct AFlock_UpdateAlignmentForce_Params
{
	float                                              NewAlignmentForce;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.SpawnBoids
struct AFlock_SpawnBoids_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ABoid*>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.SpawnBoid
struct AFlock_SpawnBoid_Params
{
	class ABoid*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.SetNewGoal
struct AFlock_SetNewGoal_Params
{
	class AGoal*                                       NewGoalActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.RemoveBoids
struct AFlock_RemoveBoids_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.RemoveBoid_ID
struct AFlock_RemoveBoid_ID_Params
{
	int                                                UniqueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.RemoveBoid
struct AFlock_RemoveBoid_Params
{
	class ABoid*                                       BoidToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.KillAllBoids
struct AFlock_KillAllBoids_Params
{
};

// Function FlockingBehaviourSystem.Flock.InitializeFlock
struct AFlock_InitializeFlock_Params
{
};

// Function FlockingBehaviourSystem.Flock.GetSeparationForce
struct AFlock_GetSeparationForce_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.GetFlockLocation
struct AFlock_GetFlockLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.GetCustomFlockForces
struct AFlock_GetCustomFlockForces_Params
{
	TMap<class UFlockForce*, float>                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.GetCustomFlockForce
struct AFlock_GetCustomFlockForce_Params
{
	int                                                ForceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFlockForce*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.GetCohesionForce
struct AFlock_GetCohesionForce_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.GetAlignmentForce
struct AFlock_GetAlignmentForce_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.EnableFlock
struct AFlock_EnableFlock_Params
{
};

// Function FlockingBehaviourSystem.Flock.EnableCustomForce
struct AFlock_EnableCustomForce_Params
{
	int                                                ForceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.EnableAllCustomForces
struct AFlock_EnableAllCustomForces_Params
{
};

// Function FlockingBehaviourSystem.Flock.DisableFlock
struct AFlock_DisableFlock_Params
{
};

// Function FlockingBehaviourSystem.Flock.DisableCustomForce
struct AFlock_DisableCustomForce_Params
{
	int                                                ForceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Flock.DisableAllCustomForces
struct AFlock_DisableAllCustomForces_Params
{
};

// Function FlockingBehaviourSystem.FlockForce.CalculateForce
struct UFlockForce_CalculateForce_Params
{
	class ABoid*                                       Boid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOctreeElement>                      NeighboringBoids;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.FlockGoalPoint.SelectGoalOwner
struct AFlockGoalPoint_SelectGoalOwner_Params
{
};

// Function FlockingBehaviourSystem.Goal.SetNewGoalLocation
struct AGoal_SetNewGoalLocation_Params
{
	struct FVector                                     NewLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.SetGoalLocation
struct AGoal_SetGoalLocation_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.SetFlock
struct AGoal_SetFlock_Params
{
	class AFlock*                                      InFlock;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.SetAllGoalsLocation
struct AGoal_SetAllGoalsLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.ResetGoalLocation
struct AGoal_ResetGoalLocation_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.ResetAllGoalsLocation
struct AGoal_ResetAllGoalsLocation_Params
{
};

// Function FlockingBehaviourSystem.Goal.NextLocation
struct AGoal_NextLocation_Params
{
};

// Function FlockingBehaviourSystem.Goal.IsRandomlyGenerating
struct AGoal_IsRandomlyGenerating_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.IncrementConfirmations
struct AGoal_IncrementConfirmations_Params
{
};

// Function FlockingBehaviourSystem.Goal.GetTotalLocations
struct AGoal_GetTotalLocations_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetRequiredConfirmations
struct AGoal_GetRequiredConfirmations_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetRange
struct AGoal_GetRange_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetOriginalLocation
struct AGoal_GetOriginalLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetGoalPoint
struct AGoal_GetGoalPoint_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFlockGoalPoint*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetGoalLocation
struct AGoal_GetGoalLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetCurrentConfirmations
struct AGoal_GetCurrentConfirmations_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetAllGoalPointsInWorld
struct AGoal_GetAllGoalPointsInWorld_Params
{
	TArray<class AFlockGoalPoint*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.GetAcceptanceRadius
struct AGoal_GetAcceptanceRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.Goal.FindNewLocation
struct AGoal_FindNewLocation_Params
{
	Engine_EPlaneConstraintAxisSetting                 PlaneConstraintAxis;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnZ
struct ASpatialPartitioner_ShiftOctreeOriginOnZ_Params
{
	float                                              InZOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnY
struct ASpatialPartitioner_ShiftOctreeOriginOnY_Params
{
	float                                              InYOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnX
struct ASpatialPartitioner_ShiftOctreeOriginOnX_Params
{
	float                                              InXOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOrigin
struct ASpatialPartitioner_ShiftOctreeOrigin_Params
{
	struct FVector                                     InOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.SetNewOctreeOrigin
struct ASpatialPartitioner_SetNewOctreeOrigin_Params
{
	struct FVector                                     NewOctreeLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.Initialize
struct ASpatialPartitioner_Initialize_Params
{
	bool                                               bDrawDebugElements;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      InDebugColor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDebugLineThickness;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.HasBeenInitialized
struct ASpatialPartitioner_HasBeenInitialized_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.GetElementsWithinBounds
struct ASpatialPartitioner_GetElementsWithinBounds_Params
{
	struct FBoxSphereBounds                            InBoundingBoxQuery;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FOctreeElement>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FlockingBehaviourSystem.SpatialPartitioner.AddOctreeElement
struct ASpatialPartitioner_AddOctreeElement_Params
{
	struct FOctreeElement                              InNewOctreeElement;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                InUniqueID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
