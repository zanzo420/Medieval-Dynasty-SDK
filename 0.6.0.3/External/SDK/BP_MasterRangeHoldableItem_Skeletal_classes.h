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

// BlueprintGeneratedClass BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C
// 0x0014 (FullSize[0x06D0] - InheritedSize[0x06BC])
class ABP_MasterRangeHoldableItem_Skeletal_C : public ABP_MasterRangeHoldableItem_C
{
public:
	unsigned char                                      UnknownData_5R3X[0x4];                                     // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterRangeHoldableItem_Skeletal.BP_MasterRangeHoldableItem_Skeletal_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterRangeHoldableItem_Skeletal(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
