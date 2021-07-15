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

// BlueprintGeneratedClass BP_HoldableItem_ShearingScissors.BP_HoldableItem_ShearingScissors_C
// 0x0017 (FullSize[0x06A9] - InheritedSize[0x0692])
class ABP_HoldableItem_ShearingScissors_C : public ABP_MasterHoldableItem_C
{
public:
	unsigned char                                      UnknownData_0D6U[0x6];                                     // 0x0692(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoldableItem_ShearingScissors.BP_HoldableItem_ShearingScissors_C");
		return ptr;
	}



	void OnNotifyEnd_E2B6926F4493F1424075BBB4EE1B1565(const struct FName& NotifyName);
	void OnNotifyBegin_E2B6926F4493F1424075BBB4EE1B1565(const struct FName& NotifyName);
	void OnInterrupted_E2B6926F4493F1424075BBB4EE1B1565(const struct FName& NotifyName);
	void OnBlendOut_E2B6926F4493F1424075BBB4EE1B1565(const struct FName& NotifyName);
	void OnCompleted_E2B6926F4493F1424075BBB4EE1B1565(const struct FName& NotifyName);
	void LeftMouseInput(bool KeyDown);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HoldableItem_ShearingScissors(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
