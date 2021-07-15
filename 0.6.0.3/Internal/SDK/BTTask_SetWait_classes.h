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

// BlueprintGeneratedClass BTTask_SetWait.BTTask_SetWait_C
// 0x0178 (FullSize[0x0220] - InheritedSize[0x00A8])
class UBTTask_SetWait_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      DailyCycle;                                                // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentNPCBehavior;                                        // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TaskState;                                                 // 0x0128(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0150(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Task;                                                      // 0x0178(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentTask;                                               // 0x01A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x01C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceState;                                      // 0x01F0(0x0028) (Edit, BlueprintVisible)
	class APawn*                                       PawnReference;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_SetWait.BTTask_SetWait_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SetWait(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
