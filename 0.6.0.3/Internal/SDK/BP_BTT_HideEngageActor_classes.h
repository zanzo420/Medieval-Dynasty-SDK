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

// BlueprintGeneratedClass BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C
// 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
class UBP_BTT_HideEngageActor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      FleeLocation;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AIState;                                                   // 0x00E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x0110(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C");
		return ptr;
	}



	void OnFail_BB50F10642FB762ED9F30499A3E3E377(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_BB50F10642FB762ED9F30499A3E3E377(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_HideEngageActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
