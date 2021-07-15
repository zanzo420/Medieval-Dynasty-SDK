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

// BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C
// 0x0138 (FullSize[0x0358] - InheritedSize[0x0220])
class ABP_MasterProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAudioComponent*                             Audio;                                                     // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProjectileMovementComponent*                ProjectileMovement;                                        // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialSpeed;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulsePower;                                              // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceRadius;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDrawDebugTrace>                VisualizeTrace;                                            // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_INT6[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FVector>                 LastSocketLocations;                                       // 0x0260(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Socket;                                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              IgnoreActorsHit;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               IgnoredCollisionProfileNames;                              // 0x02C8(0x0010) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         Item;                                                      // 0x02D8(0x0010) (Edit, BlueprintVisible, NoDestructor)
	float                                              ItemHP;                                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                     InitialLocation;                                           // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PullPercent;                                               // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ToolDamage;                                                // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               UseDestroyChance;                                          // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LF0V[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceToDestroyOnHit;                                      // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CausesBleeding;                                            // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F0V9[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BleedDamage;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               DestroyPreventionTags;                                     // 0x0320(0x0010) (Edit, BlueprintVisible)
	bool                                               ShouldAttach;                                              // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_URML[0x2];                                     // 0x0332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Velocity;                                                  // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AppliedDamage;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QPN1[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectileGravityScale;                                    // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ProjectileTypeGravityModifier;                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SC_Hit;                                                    // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C");
		return ptr;
	}



	void ShouldSimulatePhysics(TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, class AActor* Target, bool* SimulatePhysics, bool* AddImpulse);
	void PlayHitSoundAtLocation(const struct FVector& Location, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
	struct FVector CalculateImpaleAmount(const struct FVector& LocalLocation, float BoneDamagePercent);
	void CheckTags(class AActor* ActorToCheck, bool* Success);
	void Hit_Bone_Detection(const struct FName& HitBoneName, float* DamagePercent, bool* ShouldAttach);
	void ApplyHitImpulse(class UPrimitiveComponent* Component, const struct FVector& HitNormal, const struct FName& BoneName);
	void SpawnImpaledItem(class USceneComponent* Component, const struct FName& SocketName, class AActor* Owner, const struct FVector& Location, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, const struct FName& Item_Row_Name);
	void Hit(const struct FHitResult& Hit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Trace();
	void ReceiveTick(float DeltaSeconds);
	void UpdateLastSocketPositions();
	void BreakLoop();
	void ExecuteUbergraph_BP_MasterProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
