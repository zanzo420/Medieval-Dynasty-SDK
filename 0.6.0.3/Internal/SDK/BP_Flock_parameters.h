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

// Function BP_Flock.BP_Flock_C.CheckBoxRegionAngles
struct ABP_Flock_C_CheckBoxRegionAngles_Params
{
	struct FVector                                     ActorLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DirectionVector_2;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DirectionVector_3;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extent_2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extent_3;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.CalculateBoxRegionFleeDistance
struct ABP_Flock_C_CalculateBoxRegionFleeDistance_Params
{
	struct FVector                                     ActorLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ActorVector;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtentParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VectorLength;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.ClosestActorDistanceToBoids
struct ABP_Flock_C_ClosestActorDistanceToBoids_Params
{
	class AActor*                                      ClosestActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldFlee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Flock.BP_Flock_C.CalculateFleeLocation
struct ABP_Flock_C_CalculateFleeLocation_Params
{
	class AActor*                                      ActorToFleeFrom;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocationToFleeFrom;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.CheckIfAnyEntityIsMoving
struct ABP_Flock_C_CheckIfAnyEntityIsMoving_Params
{
	TArray<struct FHitResult>                          HitResults;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              MovingEntities;                                            // (Parm, OutParm)
};

// Function BP_Flock.BP_Flock_C.DisableBoid
struct ABP_Flock_C_DisableBoid_Params
{
	class ABoid*                                       Boid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.EnableBoid
struct ABP_Flock_C_EnableBoid_Params
{
	class ABoid*                                       Boid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.CheckForEntity
struct ABP_Flock_C_CheckForEntity_Params
{
};

// Function BP_Flock.BP_Flock_C.DeactivateFlock
struct ABP_Flock_C_DeactivateFlock_Params
{
};

// Function BP_Flock.BP_Flock_C.Activate Flock
struct ABP_Flock_C_Activate_Flock_Params
{
};

// Function BP_Flock.BP_Flock_C.SpawnFlock
struct ABP_Flock_C_SpawnFlock_Params
{
	int                                                FlockSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Flock.BP_Flock_C.InitAfterLoad
struct ABP_Flock_C_InitAfterLoad_Params
{
	struct FST_SAVE_FishSpawners                       Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.GetDataToSave
struct ABP_Flock_C_GetDataToSave_Params
{
	struct FST_SAVE_FishSpawners                       Data;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.CheckAvailability
struct ABP_Flock_C_CheckAvailability_Params
{
};

// Function BP_Flock.BP_Flock_C.Remove Fish
struct ABP_Flock_C_Remove_Fish_Params
{
	class ABoid*                                       BoidToRemove;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.GetDistance
struct ABP_Flock_C_GetDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.UserConstructionScript
struct ABP_Flock_C_UserConstructionScript_Params
{
};

// Function BP_Flock.BP_Flock_C.ReceiveBeginPlay
struct ABP_Flock_C_ReceiveBeginPlay_Params
{
};

// Function BP_Flock.BP_Flock_C.SpawnFlockEvent
struct ABP_Flock_C_SpawnFlockEvent_Params
{
	int                                                BoidsToSpawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.RemoveFlockEvent
struct ABP_Flock_C_RemoveFlockEvent_Params
{
	int                                                BoidsToRemove;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Flock.BP_Flock_C.ReturnToNormalBehavior
struct ABP_Flock_C_ReturnToNormalBehavior_Params
{
};

// Function BP_Flock.BP_Flock_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
struct ABP_Flock_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_Flock.BP_Flock_C.ExecuteUbergraph_BP_Flock
struct ABP_Flock_C_ExecuteUbergraph_BP_Flock_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
