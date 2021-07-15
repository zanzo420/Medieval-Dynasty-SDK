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

// BlueprintGeneratedClass BP_MasterAnimHoldable.BP_MasterAnimHoldable_C
// 0x0026 (FullSize[0x06B8] - InheritedSize[0x0692])
class ABP_MasterAnimHoldable_C : public ABP_MasterHoldableItem_C
{
public:
	unsigned char                                      UnknownData_65DX[0x6];                                     // 0x0692(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              ScaleItem_Alpha_267600A64D1DFC68F2E2F194FEA5AEE4;          // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ScaleItem__Direction_267600A64D1DFC68F2E2F194FEA5AEE4;     // 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VJX8[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScaleItem;                                                 // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndLoopSectionDuration;                                    // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterAnimHoldable.BP_MasterAnimHoldable_C");
		return ptr;
	}



	void ScaleItem__FinishedFunc();
	void ScaleItem__UpdateFunc();
	void DespawnItem();
	void SpawnItem();
	void ReceiveBeginPlay();
	void HoldableNotify(const struct FName& NotifyName);
	void ExecuteUbergraph_BP_MasterAnimHoldable(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
