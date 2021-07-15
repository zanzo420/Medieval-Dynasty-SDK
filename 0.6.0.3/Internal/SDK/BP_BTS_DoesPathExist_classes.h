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

// BlueprintGeneratedClass BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C
// 0x0110 (FullSize[0x01A8] - InheritedSize[0x0098])
class UBP_BTS_DoesPathExist_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      DoesPathExist;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      EngageActor;                                               // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Disengaging;                                               // 0x00F0(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      Actor;                                                     // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               IsPathValid;                                               // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DDG2[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Aggro;                                                     // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      HitWhenDisengaging;                                        // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FearFleeing;                                               // 0x0180(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTS_DoesPathExist(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
