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

// BlueprintGeneratedClass BTTask_WaitForTask.BTTask_WaitForTask_C
// 0x0138 (FullSize[0x01E0] - InheritedSize[0x00A8])
class UBTTask_WaitForTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TaskState;                                                 // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      WorkTask;                                                  // 0x0128(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0150(0x0028) (Edit, BlueprintVisible)
	class APawn*                                       PawnReference;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D195[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x0188(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      QuestBlocking;                                             // 0x01B0(0x0028) (Edit, BlueprintVisible)
	struct FTimerHandle                                CheckWorkTimer;                                            // 0x01D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_WaitForTask.BTTask_WaitForTask_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CheckWork();
	void ChangeActivity();
	void ExecuteUbergraph_BTTask_WaitForTask(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
