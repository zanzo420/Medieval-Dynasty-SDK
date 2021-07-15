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

// BlueprintGeneratedClass BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C
// 0x013E (FullSize[0x07D0] - InheritedSize[0x0692])
class ABP_MasterMeleeHoldableItem_C : public ABP_MasterHoldableItem_C
{
public:
	unsigned char                                      UnknownData_AHSV[0x6];                                     // 0x0692(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                           OverlapCapsule;                                            // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Start_Trace_Point;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            End_Trace_Point;                                           // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                              HitActors;                                                 // 0x06C0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsAttacking;                                               // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UXVY[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  HitSoundDefault;                                           // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LookingDown;                                               // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AB0S[0x3];                                     // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookingDownAngle;                                          // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ChannelsToTrace;                                           // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TraceRadius;                                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayDebug;                                              // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GYRW[0x3];                                     // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                MultipleTracesHandle;                                      // 0x0700(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               UseSingleTrace;                                            // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JZ3T[0x3];                                     // 0x0709(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AbilityExtractionModificator;                              // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseToolSnapping;                                           // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RLQ1[0x7];                                     // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             HitParticleDefault;                                        // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundWood;                                              // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleWood;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundStone;                                             // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleStone;                                          // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundGrass;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleGrass;                                          // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundIron;                                              // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleIron;                                           // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundGround;                                            // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleGround;                                         // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundWater;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleWater;                                          // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundMeat;                                              // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleMeat;                                           // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSoundFabric;                                            // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticleFabric;                                         // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsePlayerHit;                                              // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4D5Y[0x7];                                     // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ActorHitTags;                                              // 0x07A8(0x0010) (Edit, BlueprintVisible)
	bool                                               LoopAnimation;                                             // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // 0x07B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasLookingDownAtStart;                                     // 0x07BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HMRX[0x5];                                     // 0x07BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               TagsToCheckWhenLookingDown;                                // 0x07C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C");
		return ptr;
	}



	void CalculateTracePosition(struct FVector* Start, struct FVector* End);
	void CheckIfIsLookingDown();
	void On_Tool_Interact_with_Foliage(int FoliageAmount, const struct FVector& Location);
	void PlayerHitTrace(bool* ValidHit);
	void Hitting(const struct FHitResult& HitResult);
	void ReceiveTick(float DeltaSeconds);
	void LeftMouseInput(bool KeyDown);
	void ResetHoldable();
	void FlipRotation(bool UnFlip);
	void SetTickEnabled(bool bEnabled);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Add_Hit_Actor(class AActor* HitActor);
	void SingleTrace();
	void MultipleTraces();
	void CheckForInteraction();
	void ReceiveBeginPlay();
	void MontageComplete(class UAnimMontage* Montage);
	void HitMontageComplete(class UAnimMontage* Montage);
	void DamageToolReset();
	void ExecuteUbergraph_BP_MasterMeleeHoldableItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
