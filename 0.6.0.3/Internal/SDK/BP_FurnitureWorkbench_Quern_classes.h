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

// BlueprintGeneratedClass BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C
// 0x0010 (FullSize[0x04F8] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_Quern_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C");
		return ptr;
	}



	void DisableGhost();
	void ReceiveBeginPlay();
	void FinishFurniture(bool Load);
	void ExecuteUbergraph_BP_FurnitureWorkbench_Quern(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
