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

// BlueprintGeneratedClass BP_Flock.BP_Flock_C
// 0x0124 (FullSize[0x0624] - InheritedSize[0x0500])
class ABP_Flock_C : public AFlock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         SpawnerIcon;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       ID;                                                        // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DayCountMin;                                               // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DayCountMax;                                               // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NightCountMin;                                             // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NightCountMax;                                             // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                    // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Available;                                                 // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8AHZ[0x2];                                     // 0x0556(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NightSpawnStartHour;                                       // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NightSpawnEndHour;                                         // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnRadius;                                               // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WanderDistance;                                            // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBoidMesh_Skeletal                          BoidMesh;                                                  // 0x0568(0x0060) (Edit, BlueprintVisible)
	int                                                NumberOfFishesDay;                                         // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfFishesNight;                                       // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNight;                                                   // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KFT1[0x7];                                     // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CheckForEntityHandle;                                      // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FleePoint;                                                 // 0x05E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Counter;                                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CounterResetPoint;                                         // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CheckForEntityTime;                                        // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetBehaviorTime;                                         // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Fleeing;                                                   // 0x05FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C8C7[0x3];                                     // 0x05FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementTolerance;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Panic;                                                     // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z2X1[0x3];                                     // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceToFlee;                                            // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WanderExtent;                                              // 0x060C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FleeFromLocation;                                          // 0x0618(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flock.BP_Flock_C");
		return ptr;
	}



	void CheckBoxRegionAngles(const struct FVector& ActorLocation, const struct FVector& DirectionVector_2, const struct FVector& DirectionVector_3, float Extent_2, float Extent_3, float* Distance);
	void CalculateBoxRegionFleeDistance(const struct FVector& ActorLocation, const struct FVector& ActorVector, float ExtentParam, bool* Success, float* VectorLength);
	void ClosestActorDistanceToBoids(class AActor* ClosestActor, const struct FVector& Location, bool* ShouldFlee);
	struct FVector CalculateFleeLocation(class AActor* ActorToFleeFrom, const struct FVector& LocationToFleeFrom);
	void CheckIfAnyEntityIsMoving(TArray<struct FHitResult>* HitResults, bool* Found, TArray<class AActor*>* MovingEntities);
	void DisableBoid(class ABoid* Boid);
	void EnableBoid(class ABoid* Boid);
	void CheckForEntity();
	void DeactivateFlock();
	void Activate_Flock();
	void SpawnFlock(int FlockSize, bool IsNight);
	void InitAfterLoad(const struct FST_SAVE_FishSpawners& Data);
	void GetDataToSave(struct FST_SAVE_FishSpawners* Data);
	void CheckAvailability();
	void Remove_Fish(class ABoid* BoidToRemove);
	void GetDistance(float* Distance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpawnFlockEvent(int BoidsToSpawn);
	void RemoveFlockEvent(int BoidsToRemove);
	void ReturnToNormalBehavior();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_BP_Flock(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
