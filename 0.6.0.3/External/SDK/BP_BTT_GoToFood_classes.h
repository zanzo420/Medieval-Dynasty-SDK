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

// BlueprintGeneratedClass BP_BTT_GoToFood.BP_BTT_GoToFood_C
// 0x00E8 (FullSize[0x0190] - InheritedSize[0x00A8])
class UBP_BTT_GoToFood_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EatingTime;                                                // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRadius;                                                // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FoodLocation;                                              // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Action;                                                    // 0x0118(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      EatPointIndex;                                             // 0x0140(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Trough;                                                    // 0x0168(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_GoToFood.BP_BTT_GoToFood_C");
		return ptr;
	}



	void GetDistanceAndDirection(const struct FVector& Target, const struct FVector& Current, float* DistanceFood, struct FVector* DirectionFood);
	void GetTargetLocation(const struct FVector& Target, struct FVector* Location);
	void OnFail_482D2B094814E224F05E8A999DCCA269(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_482D2B094814E224F05E8A999DCCA269(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_2EB0B4A542BB0DB9510D2B9F31954744(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_GoToFood(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
