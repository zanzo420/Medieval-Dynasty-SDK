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

// BlueprintGeneratedClass BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C
// 0x00C4 (FullSize[0x016C] - InheritedSize[0x00A8])
class UBP_BTT_HusbandryGoToRestPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSleepLocation;                                           // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LLWB[0xF];                                     // 0x00C1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SleepLocation;                                             // 0x00D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FBlackboardKeySelector                      SleepSlotIndex;                                            // 0x0100(0x0028) (Edit, BlueprintVisible)
	class ABP_MasterBuilding_C*                        HomeReference;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MovementIterator;                                          // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8218[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      RestState;                                                 // 0x0138(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     DoorPoint;                                                 // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C");
		return ptr;
	}



	void GetDistanceAndDirection(const struct FVector& Targ, const struct FVector& Cur, float* Distance, struct FVector* Direction);
	void GetTargetLocation(const struct FVector& Target, struct FVector* Location);
	void OnFail_86AAE00B4E55E723A8DED38FF33A6CAE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_86AAE00B4E55E723A8DED38FF33A6CAE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_HusbandryGoToRestPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
