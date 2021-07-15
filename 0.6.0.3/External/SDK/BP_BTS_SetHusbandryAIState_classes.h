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

// BlueprintGeneratedClass BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C
// 0x0230 (FullSize[0x02C8] - InheritedSize[0x0098])
class UBP_BTS_SetHusbandryAIState_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      RunMode;                                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class ABP_GroundAnimalBase_C*                      GroundAnimalBase;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>      AIState;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7TSZ[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      State;                                                     // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BiggestNeed;                                               // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PredictiveMovement;                                        // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      EngageBehavior;                                            // 0x0180(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FeedingBehavior;                                           // 0x01A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Resting_;                                                  // 0x01D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DefenseState;                                              // 0x01F8(0x0028) (Edit, BlueprintVisible)
	bool                                               StopForEngageAnim;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstTimeAI;                                               // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GDWT[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ShouldBeAwaken;                                            // 0x0228(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      HasWokenUp;                                                // 0x0250(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Action;                                                    // 0x0278(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RestState;                                                 // 0x02A0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C");
		return ptr;
	}



	void OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay);
	void fnDetermineAIState();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ResetEatDoOnce();
	void ResetDrinkDoOnce();
	void ResetEngageAnim();
	void StopEngageAnim();
	void StopAnim();
	void ExecuteUbergraph_BP_BTS_SetHusbandryAIState(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
