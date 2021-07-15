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

// BlueprintGeneratedClass BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C
// 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
class UBTTask_FindHusbandryAnimal_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00B8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<E_Tools_E_Tools>                       L_NeedItem;                                                // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WUVW[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x00E8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C");
		return ptr;
	}



	void OnFail_629F0A244365D0611B575788700ED6CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_629F0A244365D0611B575788700ED6CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FindHusbandryAnimal(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
