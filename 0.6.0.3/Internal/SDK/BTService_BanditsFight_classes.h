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

// BlueprintGeneratedClass BTService_BanditsFight.BTService_BanditsFight_C
// 0x00C0 (FullSize[0x0158] - InheritedSize[0x0098])
class UBTService_BanditsFight_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      Player;                                                    // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00F0(0x0028) (Edit, BlueprintVisible)
	class ABP_PlayerCharacter_C*                       PlayerReference;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KWZY[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0130(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_BanditsFight.BTService_BanditsFight_C");
		return ptr;
	}



	void SetSpeedByGait(TEnumAsByte<E_Gait_E_Gait> Gait_Type, float Factor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_BanditsFight(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
