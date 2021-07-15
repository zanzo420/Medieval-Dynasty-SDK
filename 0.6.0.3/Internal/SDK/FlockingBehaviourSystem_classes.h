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

// Class FlockingBehaviourSystem.Boid
// 0x00B0 (FullSize[0x0330] - InheritedSize[0x0280])
class ABoid : public APawn
{
public:
	unsigned char                                      UnknownData_3FRD[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FOctreeElement>                      Boids;                                                     // 0x0288(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             SceneComponent;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoidMovementComponent*                      BoidMovementComponent;                                     // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFlock*                                      FlockOwner;                                                // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      Obstacle;                                                  // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C6Y3[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      World;                                                     // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_28ZR[0x68];                                    // 0x02C8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.Boid");
		return ptr;
	}



	bool ShouldUpdateRotation();
	void SetGoalSeekingForce(float ForceMultiplier);
	void OnSpawnedBP();
	void OnGoalReached(class ABoid* Boid);
	void OnArrivedAtGoal();
	float GetTurnSpeed();
	float GetSpeed();
	float GetRotationTurnSpeed();
	float GetPerceptionRadius();
};

// Class FlockingBehaviourSystem.BoidController
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class ABoidController : public AController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.BoidController");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.BoidMovementComponent
// 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
class UBoidMovementComponent : public UFloatingPawnMovement
{
public:
	class ABoid*                                       Owner;                                                     // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.BoidMovementComponent");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.BoidObstacle
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UBoidObstacle : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.BoidObstacle");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.BoidSkeletal
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class ABoidSkeletal : public ABoid
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.BoidSkeletal");
		return ptr;
	}



	class USkeletalMeshComponent* GetSkeletalMeshComponent();
};

// Class FlockingBehaviourSystem.BoidStatic
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class ABoidStatic : public ABoid
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.BoidStatic");
		return ptr;
	}



	class UStaticMeshComponent* GetStaticMeshComponent();
};

// Class FlockingBehaviourSystem.Flock
// 0x02E0 (FullSize[0x0500] - InheritedSize[0x0220])
class AFlock : public AActor
{
public:
	struct FVector                                     AverageBoidLocation;                                       // 0x0220(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FlockingBehaviourSystem_EFlockRegionType           RegionType;                                                // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI2E[0x3];                                     // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                         BillboardComponent;                                        // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bEnabled : 1;                                              // 0x0240(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FlockingBehaviourSystem_EFlockThreadType           ThreadMode;                                                // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z684[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoidSettings                               BoidSettings;                                              // 0x0248(0x0118) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FSpawnSettings                              SpawnSettings;                                             // 0x0360(0x0030) (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFlockSettings                              FlockSettings;                                             // 0x0390(0x00B0) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FFlockOctreeSettings                        OctreeSettings;                                            // 0x0440(0x0020) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFlockOptimizationSettings                  OptimizationSettings;                                      // 0x0460(0x0004) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q324[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASpatialPartitioner*                         SpatialPartitioner;                                        // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                     // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ABoid*>                               Boids;                                                     // 0x0478(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class UFlockForce*, float>                    CustomFlockForces;                                         // 0x0488(0x0050) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DUFD[0x28];                                    // 0x04D8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.Flock");
		return ptr;
	}



	void UpdateSeparationForce(float NewSeparationForce);
	void UpdateGoalSeekingForce(float Force);
	void UpdateForceWeightToAllCustomForces(float NewWeightValue);
	void UpdateForces(float NewAlignmentForce, float NewCohesionForce, float NewSeparationForce);
	void UpdateCustomForceWeight(int ForceIndex, float NewWeightValue);
	void UpdateCohesionForce(float NewCohesionForce);
	void UpdateAlignmentForce(float NewAlignmentForce);
	TArray<class ABoid*> SpawnBoids(int Amount);
	class ABoid* SpawnBoid();
	void SetNewGoal(class AGoal* NewGoalActor);
	void RemoveBoids(int Amount);
	void RemoveBoid_ID(int UniqueId);
	void RemoveBoid(class ABoid* BoidToRemove);
	void KillAllBoids();
	void InitializeFlock();
	float GetSeparationForce();
	struct FVector GetFlockLocation();
	TMap<class UFlockForce*, float> GetCustomFlockForces();
	class UFlockForce* GetCustomFlockForce(int ForceIndex);
	float GetCohesionForce();
	float GetAlignmentForce();
	void EnableFlock();
	void EnableCustomForce(int ForceIndex);
	void EnableAllCustomForces();
	void DisableFlock();
	void DisableCustomForce(int ForceIndex);
	void DisableAllCustomForces();
};

// Class FlockingBehaviourSystem.FlockForce
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFlockForce : public UObject
{
public:
	unsigned char                                      bEnabled : 1;                                              // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2D3T[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockForce");
		return ptr;
	}



	struct FVector CalculateForce(class ABoid* Boid, TArray<struct FOctreeElement> NeighboringBoids);
};

// Class FlockingBehaviourSystem.FlockForce_Align
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlockForce_Align : public UFlockForce
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockForce_Align");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.FlockForce_Cohere
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlockForce_Cohere : public UFlockForce
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockForce_Cohere");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.FlockForce_Separate
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlockForce_Separate : public UFlockForce
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockForce_Separate");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.FlockForce_Custom
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlockForce_Custom : public UFlockForce
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockForce_Custom");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.FlockGoalPoint
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class AFlockGoalPoint : public AActor
{
public:
	unsigned char                                      UnknownData_KYAZ[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                         BillboardComponent;                                        // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGoal*                                       OwningGoal;                                                // 0x0238(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bVisible;                                                  // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUsedAsFailsafePoint : 1;                                  // 0x0241(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EJ3U[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.FlockGoalPoint");
		return ptr;
	}



	void SelectGoalOwner();
};

// Class FlockingBehaviourSystem.Goal
// 0x00E0 (FullSize[0x0300] - InheritedSize[0x0220])
class AGoal : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                            // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                         BillboardComponent;                                        // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFlock*                                      Flock;                                                     // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     GoalLocation;                                              // 0x0238(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentConfirmations;                                      // 0x0244(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGoalSettings                               Settings;                                                  // 0x0248(0x0078) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOER[0x40];                                    // 0x02C0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.Goal");
		return ptr;
	}



	void SetNewGoalLocation(const struct FVector& NewLocation);
	void SetGoalLocation(int Index, const struct FVector& Location);
	void SetFlock(class AFlock* InFlock);
	void SetAllGoalsLocation(const struct FVector& Location);
	void ResetGoalLocation(int Index);
	void ResetAllGoalsLocation();
	void NextLocation();
	bool IsRandomlyGenerating();
	void IncrementConfirmations();
	int GetTotalLocations();
	int GetRequiredConfirmations();
	struct FVector GetRange();
	struct FVector GetOriginalLocation();
	class AFlockGoalPoint* GetGoalPoint(int Index);
	struct FVector GetGoalLocation();
	int GetCurrentConfirmations();
	TArray<class AFlockGoalPoint*> STATIC_GetAllGoalPointsInWorld();
	float GetAcceptanceRadius();
	void FindNewLocation(Engine_EPlaneConstraintAxisSetting PlaneConstraintAxis);
};

// Class FlockingBehaviourSystem.Obstacle
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AObstacle : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCastShadow;                                               // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_87PS[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.Obstacle");
		return ptr;
	}



};

// Class FlockingBehaviourSystem.SpatialPartitioner
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class ASpatialPartitioner : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                            // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                         BillboardComponent;                                        // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZOW[0x4C];                                    // 0x0234(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FlockingBehaviourSystem.SpatialPartitioner");
		return ptr;
	}



	void ShiftOctreeOriginOnZ(float InZOffset);
	void ShiftOctreeOriginOnY(float InYOffset);
	void ShiftOctreeOriginOnX(float InXOffset);
	void ShiftOctreeOrigin(const struct FVector& InOffset);
	void SetNewOctreeOrigin(const struct FVector& NewOctreeLocation);
	void Initialize(bool bDrawDebugElements, const struct FColor& InDebugColor, float InDebugLineThickness);
	bool HasBeenInitialized();
	TArray<struct FOctreeElement> GetElementsWithinBounds(const struct FBoxSphereBounds& InBoundingBoxQuery);
	void AddOctreeElement(const struct FOctreeElement& InNewOctreeElement, int InUniqueID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
