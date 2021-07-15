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

// BlueprintGeneratedClass BTTask_GetOutLocation.BTTask_GetOutLocation_C
// 0x008C (FullSize[0x0134] - InheritedSize[0x00A8])
class UBTTask_GetOutLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0100(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     RandomPoint;                                               // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_GetOutLocation.BTTask_GetOutLocation_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_GetOutLocation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
