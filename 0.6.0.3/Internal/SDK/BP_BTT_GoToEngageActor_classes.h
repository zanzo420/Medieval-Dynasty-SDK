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

// BlueprintGeneratedClass BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C
// 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
class UBP_BTT_GoToEngageActor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      EngageActor;                                               // 0x00C0(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WI5T[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Stuck;                                                     // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x0118(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_GoToEngageActor.BP_BTT_GoToEngageActor_C");
		return ptr;
	}



	void OnFail_233296EE442B38CE0D789FA98E25AB41(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_233296EE442B38CE0D789FA98E25AB41(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_BTT_GoToEngageActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
