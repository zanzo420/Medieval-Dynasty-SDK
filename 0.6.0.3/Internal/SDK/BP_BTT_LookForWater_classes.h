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

// BlueprintGeneratedClass BP_BTT_LookForWater.BP_BTT_LookForWater_C
// 0x00C4 (FullSize[0x016C] - InheritedSize[0x00A8])
class UBP_BTT_LookForWater_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrinkingTime;                                              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G193[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      NearestWater;                                              // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x00F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseHomeBase_;                                              // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z5WL[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AcceptanceRadius;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoneDrinking;                                              // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HC7K[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Comp_NeedSystem_C*                       NeedSystem;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanDrink;                                                  // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J3FN[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x0138(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     WaterLocation;                                             // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_LookForWater.BP_BTT_LookForWater_C");
		return ptr;
	}



	void GetTargetLocation(const struct FVector& Target, struct FVector* Location);
	void GetDistanceAndDirection(const struct FVector& Target, const struct FVector& Current, float* Distance, struct FVector* Direction);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void EventPlayDrinkAnimation();
	void ExecuteUbergraph_BP_BTT_LookForWater(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
