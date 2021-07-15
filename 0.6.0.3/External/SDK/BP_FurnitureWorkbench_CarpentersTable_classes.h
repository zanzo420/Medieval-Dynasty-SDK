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

// BlueprintGeneratedClass BP_FurnitureWorkbench_CarpentersTable.BP_FurnitureWorkbench_CarpentersTable_C
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_CarpentersTable_C : public ABP_MasterFurniture_Workbench_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_CarpentersTable.BP_FurnitureWorkbench_CarpentersTable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
