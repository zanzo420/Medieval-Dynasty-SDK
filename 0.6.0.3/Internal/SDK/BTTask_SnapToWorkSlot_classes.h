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

// BlueprintGeneratedClass BTTask_SnapToWorkSlot.BTTask_SnapToWorkSlot_C
// 0x00E0 (FullSize[0x0188] - InheritedSize[0x00A8])
class UBTTask_SnapToWorkSlot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AAIController*                               AIControllerReference;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnReference;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00C0(0x0028) (Edit, BlueprintVisible)
	int                                                Check;                                                     // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HalfHeight;                                                // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      LookAtTarget;                                              // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x0118(0x0028) (Edit, BlueprintVisible)
	struct FTransform                                  Interact_Transform;                                        // 0x0140(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_SnapToWorkSlot.BTTask_SnapToWorkSlot_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SnapToWorkSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
