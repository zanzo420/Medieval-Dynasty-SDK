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

// BlueprintGeneratedClass BP_BTT_LookForFood.BP_BTT_LookForFood_C
// 0x00BC (FullSize[0x0164] - InheritedSize[0x00A8])
class UBP_BTT_LookForFood_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EatingTime;                                                // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RNVN[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      NearestFood;                                               // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x00F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseHomeBase_;                                              // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L6SI[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Comp_NeedSystem_C*                       NeedSystem;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanEat;                                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CL0C[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MoveRadius;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     FoodLocation;                                              // 0x0158(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_LookForFood.BP_BTT_LookForFood_C");
		return ptr;
	}



	void GetDistanceAndDirection(const struct FVector& Target, const struct FVector& Current, float* DistanceFood, struct FVector* DirectionFood);
	void GetTargetLocation(const struct FVector& Target, struct FVector* Location);
	void OnFail_9EE022AA43A22A1841354FBA7BDD2DB1(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void EventPlayEatAnimation();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_LookForFood(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
