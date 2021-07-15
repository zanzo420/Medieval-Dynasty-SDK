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

// BlueprintGeneratedClass BTTask_StartTalk.BTTask_StartTalk_C
// 0x0100 (FullSize[0x01A8] - InheritedSize[0x00A8])
class UBTTask_StartTalk_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      Talk;                                                      // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00D8(0x0028) (Edit, BlueprintVisible)
	class APawn*                                       PawnReference;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TaskState;                                                 // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Player;                                                    // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Furniture;                                                 // 0x0180(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_StartTalk.BTTask_StartTalk_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_StartTalk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
