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

// BlueprintGeneratedClass BTTask_StartInteractTavern.BTTask_StartInteractTavern_C
// 0x0138 (FullSize[0x01E0] - InheritedSize[0x00A8])
class UBTTask_StartInteractTavern_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LookAtTarget;                                              // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0128(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Furniture;                                                 // 0x0150(0x0028) (Edit, BlueprintVisible)
	int                                                InteractionSlotIndex;                                      // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HalfHeight;                                                // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Interact_Transform;                                        // 0x0180(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APawn*                                       PawnReference;                                             // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x01B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x01C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Check;                                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BQ6J[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               AIControllerReference;                                     // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_StartInteractTavern.BTTask_StartInteractTavern_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_StartInteractTavern(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
