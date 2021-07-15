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

// BlueprintGeneratedClass BP_BTS_SetAIState.BP_BTS_SetAIState_C
// 0x031C (FullSize[0x03B4] - InheritedSize[0x0098])
class UBP_BTS_SetAIState_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      RunMode;                                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class ABP_GroundAnimalBase_C*                      GroundAnimalBase;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusToActivate;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>      AIState;                                                   // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DDVT[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      State;                                                     // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BiggestNeed;                                               // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PredictiveMovement;                                        // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      EngageBehavior;                                            // 0x0180(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FoundBait;                                                 // 0x01A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FeedingBehavior;                                           // 0x01D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Resting_;                                                  // 0x01F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DefenseState;                                              // 0x0220(0x0028) (Edit, BlueprintVisible)
	bool                                               FoundPlayer_;                                              // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_00GZ[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CurrentLocation;                                           // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PreviousLocation;                                          // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StuckCounter;                                              // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Stuck;                                                     // 0x0268(0x0028) (Edit, BlueprintVisible)
	float                                              MinStuckDistance;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxStuckTimes;                                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionReductionPercent;                                 // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasNewCollision;                                           // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7Y2F[0x3];                                     // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              oCapsuleRadius;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewCollisionTime;                                          // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckMovementObstacles;                                    // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CQFP[0x3];                                     // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObstacleCheckFreq;                                         // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugMovementObstacles;                                    // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_07HB[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x02B8(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     SpawnLocation;                                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RelocateCounter;                                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RelocationChecks;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZOD7[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      EngageActor;                                               // 0x02F8(0x0028) (Edit, BlueprintVisible)
	struct FTimerHandle                                ObstacleCheckHandler;                                      // 0x0320(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               StopForEngageAnim;                                         // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_18OL[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WakeUpTime;                                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SleepTime;                                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FirstTimeAI;                                               // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DP7E[0x3];                                     // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ShouldBeAwaken;                                            // 0x0338(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      HasWokenUp;                                                // 0x0360(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Action;                                                    // 0x0388(0x0028) (Edit, BlueprintVisible)
	float                                              CurrentTime;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTS_SetAIState.BP_BTS_SetAIState_C");
		return ptr;
	}



	void On_Time_Of_Day_Changed(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay);
	void fnInactiveResting();
	void fnCheckMovement();
	void fnEnableComponents();
	void fnCheckPlayerDistance();
	void fnDetermineAIState();
	void EventCheckPlayerDistance();
	void EventCheckMovement();
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ResetEatDoOnce();
	void ResetDrinkDoOnce();
	void ResetEngageAnim();
	void StopEngageAnim();
	void StopAnim();
	void EventSetNewCollision();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void EventDisengage();
	void ExecuteUbergraph_BP_BTS_SetAIState(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
