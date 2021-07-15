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

// BlueprintGeneratedClass BTTask_InteractHusbandryAnimal.BTTask_InteractHusbandryAnimal_C
// 0x00B0 (FullSize[0x0158] - InheritedSize[0x00A8])
class UBTTask_InteractHusbandryAnimal_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceName;                                              // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceName;                                       // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Animal;                                                    // 0x0130(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_InteractHusbandryAnimal.BTTask_InteractHusbandryAnimal_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_InteractHusbandryAnimal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
