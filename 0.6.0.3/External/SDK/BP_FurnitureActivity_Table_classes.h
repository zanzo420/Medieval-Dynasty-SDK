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

// BlueprintGeneratedClass BP_FurnitureActivity_Table.BP_FurnitureActivity_Table_C
// 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
class ABP_FurnitureActivity_Table_C : public ABP_MasterFurniture_Activity_StaticMesh_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureActivity_Table.BP_FurnitureActivity_Table_C");
		return ptr;
	}



	void DisableGhost();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
