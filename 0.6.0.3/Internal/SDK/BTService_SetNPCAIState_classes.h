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

// BlueprintGeneratedClass BTService_SetNPCAIState.BTService_SetNPCAIState_C
// 0x0170 (FullSize[0x0208] - InheritedSize[0x0098])
class UBTService_SetNPCAIState_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       Pawn_Reference;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class AAIController*                               AIControllerReference;                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DailyCycle;                                                // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Rest;                                                      // 0x0128(0x0028) (Edit, BlueprintVisible)
	class ABP_SystemsManager_C*                        SystemManagerReference;                                    // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      QuestBlocking;                                             // 0x0158(0x0028) (Edit, BlueprintVisible)
	int                                                MinWakeUpHour;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxWakeUpHour;                                             // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinWakeUpMinute;                                           // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxWakeUpMinute;                                           // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    BeginWakeUpTime;                                           // 0x0190(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    EndWakeUpTime;                                             // 0x019C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinSleepHour;                                              // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxSleepHour;                                              // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinSleepMinute;                                            // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    BeginSleepTime;                                            // 0x01B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    EndSleepTime;                                              // 0x01C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZHGS[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                EveningTimer;                                              // 0x01D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                NightTimer;                                                // 0x01D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      IsLoadGame;                                                // 0x01E0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_SetNPCAIState.BTService_SetNPCAIState_C");
		return ptr;
	}



	void CheckSleepStatus();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Night_SleepAfterSitting();
	void Evening_SleepAfterSitting();
	void EveningLife_AfterSitting();
	void CheckProfession();
	void ResetGates();
	void CheckMoveStatus();
	void ExecuteUbergraph_BTService_SetNPCAIState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
