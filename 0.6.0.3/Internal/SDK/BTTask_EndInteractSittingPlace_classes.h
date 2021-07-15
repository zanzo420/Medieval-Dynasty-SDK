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

// BlueprintGeneratedClass BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C
// 0x009C (FullSize[0x0144] - InheritedSize[0x00A8])
class UBTTask_EndInteractSittingPlace_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00D8(0x0028) (Edit, BlueprintVisible)
	class APawn*                                       PawnReference;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SitFinishedTimer;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Furniture;                                                 // 0x0118(0x0028) (Edit, BlueprintVisible)
	int                                                InteractionSlotIndex;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C");
		return ptr;
	}



	void OnFail_F318084C4B6ACEDD25EED4984DCF74BE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnSitFinished();
	void Finish();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_EndInteractSittingPlace(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
