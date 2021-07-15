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

// BlueprintGeneratedClass BP_BTT_WakeUp.BP_BTT_WakeUp_C
// 0x0101 (FullSize[0x01A9] - InheritedSize[0x00A8])
class UBP_BTT_WakeUp_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AI_POI_Base_C*                           HomeBase;                                                  // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MoveCounter;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalMoves;                                                // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitTime;                                                  // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Resting;                                                   // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4UR[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Resting_;                                                  // 0x00D8(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HideMesh;                                                  // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RBM2[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BiggestNeed;                                               // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      HasWokenUp;                                                // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      SleepSlotIndex;                                            // 0x0180(0x0028) (Edit, BlueprintVisible)
	bool                                               CanWakeUp;                                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_WakeUp.BP_BTT_WakeUp_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void WakeUp();
	void TeleportToStartPoint();
	void ExecuteUbergraph_BP_BTT_WakeUp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
