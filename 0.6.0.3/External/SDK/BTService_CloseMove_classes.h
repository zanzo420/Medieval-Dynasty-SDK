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

// BlueprintGeneratedClass BTService_CloseMove.BTService_CloseMove_C
// 0x006C (FullSize[0x0104] - InheritedSize[0x0098])
class UBTService_CloseMove_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00C8(0x0028) (Edit, BlueprintVisible)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_CloseMove.BTService_CloseMove_C");
		return ptr;
	}



	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTService_CloseMove(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
