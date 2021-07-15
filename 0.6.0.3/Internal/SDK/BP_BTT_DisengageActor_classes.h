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

// BlueprintGeneratedClass BP_BTT_DisengageActor.BP_BTT_DisengageActor_C
// 0x0178 (FullSize[0x0220] - InheritedSize[0x00A8])
class UBP_BTT_DisengageActor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DisengageLocation;                                         // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MW7X[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AJRV[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      FearFleeing;                                               // 0x0100(0x0028) (Edit, BlueprintVisible)
	float                                              Distance;                                                  // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToSpawnPoint;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AnimalSpawnLocation;                                       // 0x0130(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x013C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Disengaging;                                               // 0x0148(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DoesPathExist;                                             // 0x0170(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Aggro;                                                     // 0x0198(0x0028) (Edit, BlueprintVisible)
	struct FTimerHandle                                TimerHandle;                                               // 0x01C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      HitWhenDisengaging;                                        // 0x01C8(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceClose;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NGUY[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      EngageActor;                                               // 0x01F8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_DisengageActor.BP_BTT_DisengageActor_C");
		return ptr;
	}



	void FilterWaypoints();
	void OnFail_06B6FFD54D40C65B40BD11A257E332B5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_06B6FFD54D40C65B40BD11A257E332B5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void DisengageStart();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void MoveToFleeLocation();
	void ExecuteUbergraph_BP_BTT_DisengageActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
