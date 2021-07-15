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

// BlueprintGeneratedClass BP_BTT_LayDown.BP_BTT_LayDown_C
// 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
class UBP_BTT_LayDown_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x00B0(0x0028) (Edit, BlueprintVisible)
	class APawn*                                       PawnRef;                                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      LayingDown;                                                // 0x00E8(0x0028) (Edit, BlueprintVisible)
	bool                                               LayDown;                                                   // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RXAH[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BiggestNeed;                                               // 0x0118(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_LayDown.BP_BTT_LayDown_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_LayDown(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
