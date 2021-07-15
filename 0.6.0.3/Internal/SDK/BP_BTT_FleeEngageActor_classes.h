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

// BlueprintGeneratedClass BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C
// 0x0114 (FullSize[0x01BC] - InheritedSize[0x00A8])
class UBP_BTT_FleeEngageActor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      FleeLocation;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AIState;                                                   // 0x00E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x0110(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3AYH[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      FearFleeing;                                               // 0x0140(0x0028) (Edit, BlueprintVisible)
	float                                              Speed;                                                     // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Acceleration;                                              // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      SensedActorLocation;                                       // 0x0170(0x0028) (Edit, BlueprintVisible)
	int                                                MoveToStep;                                                // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToSpawnPoint;                                      // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AnimalSpawnLocation;                                       // 0x01A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x01B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C");
		return ptr;
	}



	void OnFail_AC7F7D494DC809C45F21408B8B28554A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_AC7F7D494DC809C45F21408B8B28554A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_7647726D469B9D85153AAB82E464FA2B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_7647726D469B9D85153AAB82E464FA2B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void MoveToFleeLocation();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_FleeEngageActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
