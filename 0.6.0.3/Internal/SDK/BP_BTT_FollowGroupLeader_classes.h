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

// BlueprintGeneratedClass BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C
// 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
class UBP_BTT_FollowGroupLeader_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Comp_Group_C*                            CompGroup;                                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLeaderDistance;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V581[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x00D0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C");
		return ptr;
	}



	void OnFail_65D251AF4601D2AD6F293CA9DE634A2A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_65D251AF4601D2AD6F293CA9DE634A2A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_A2155C0041AD8D9B69E479A657FA809A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_A2155C0041AD8D9B69E479A657FA809A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void EventFollowLeader();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_FollowGroupLeader(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
