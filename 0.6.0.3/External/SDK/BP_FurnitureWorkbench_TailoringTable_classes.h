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

// BlueprintGeneratedClass BP_FurnitureWorkbench_TailoringTable.BP_FurnitureWorkbench_TailoringTable_C
// 0x0018 (FullSize[0x0500] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_TailoringTable_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        Cloth;                                                     // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_TailoringTable.BP_FurnitureWorkbench_TailoringTable_C");
		return ptr;
	}



	void GetNPCInteractTime(float* Time);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void FinishFurniture(bool Load);
	void ExecuteUbergraph_BP_FurnitureWorkbench_TailoringTable(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
