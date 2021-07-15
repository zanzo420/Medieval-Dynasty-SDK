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

// BlueprintGeneratedClass BTTask_NPCTalking.BTTask_NPCTalking_C
// 0x00C8 (FullSize[0x0170] - InheritedSize[0x00A8])
class UBTTask_NPCTalking_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   TalkNPC;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TalkTimer;                                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      LookAtTarget;                                              // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FTimerHandle                                EndTalkTimer;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x0120(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceState;                                      // 0x0148(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_NPCTalking.BTTask_NPCTalking_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CanTalk();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void EndTalk();
	void ExecuteUbergraph_BTTask_NPCTalking(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
