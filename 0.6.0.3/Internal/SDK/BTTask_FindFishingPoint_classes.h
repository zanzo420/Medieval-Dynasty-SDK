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

// BlueprintGeneratedClass BTTask_FindFishingPoint.BTTask_FindFishingPoint_C
// 0x0120 (FullSize[0x01C8] - InheritedSize[0x00A8])
class UBTTask_FindFishingPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentTask;                                               // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TaskState;                                                 // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x0158(0x0028) (Edit, BlueprintVisible)
	int                                                Check;                                                     // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K4T8[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0188(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     WorkLocation;                                              // 0x01B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x01BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FindFishingPoint.BTTask_FindFishingPoint_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FindFishingPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
