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

// BlueprintGeneratedClass BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UBTService_OutsideCheckIsSitting_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       Pawn_Reference;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FTimerHandle                                NPCOptimizationTimer;                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C");
		return ptr;
	}



	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Optimization();
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTService_OutsideCheckIsSitting(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
