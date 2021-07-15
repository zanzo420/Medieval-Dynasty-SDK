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

// BlueprintGeneratedClass BTService_SetOutsideNPCAIState.BTService_SetOutsideNPCAIState_C
// 0x0100 (FullSize[0x0198] - InheritedSize[0x0098])
class UBTService_SetOutsideNPCAIState_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       Pawn_Reference;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               AIControllerReference;                                     // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceState;                                      // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DailyCycle;                                                // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Rest;                                                      // 0x0158(0x0028) (Edit, BlueprintVisible)
	bool                                               IsFirstState;                                              // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G4DV[0x3];                                     // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomSleepHour;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomSleepMinute;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_48ZB[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemManagerReference;                                    // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_SetOutsideNPCAIState.BTService_SetOutsideNPCAIState_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTService_SetOutsideNPCAIState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
