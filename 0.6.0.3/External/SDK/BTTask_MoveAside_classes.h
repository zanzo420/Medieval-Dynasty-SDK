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

// BlueprintGeneratedClass BTTask_MoveAside.BTTask_MoveAside_C
// 0x0078 (FullSize[0x0120] - InheritedSize[0x00A8])
class UBTTask_MoveAside_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MoveAsideLocation;                                         // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Check;                                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00F0(0x0028) (Edit, BlueprintVisible)
	class AAIC_NPC_C*                                  AI_Controller_Reference;                                   // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_MoveAside.BTTask_MoveAside_C");
		return ptr;
	}



	void OnFail_9778F3344F8149F7680BDDA275445CB3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_9778F3344F8149F7680BDDA275445CB3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_F94844864058F86FFBA3A6943070C053(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_F94844864058F86FFBA3A6943070C053(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_BC77EFB341B9FC3F41283B9D6FA3B8E8(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_BC77EFB341B9FC3F41283B9D6FA3B8E8(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_6FC9B4AA41B535D28B51DFB4EDBF39F8(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_6FC9B4AA41B535D28B51DFB4EDBF39F8(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Finish();
	void ExecuteUbergraph_BTTask_MoveAside(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
