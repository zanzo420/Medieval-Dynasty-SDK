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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_MeshDynamicMaterials.ST_MeshDynamicMaterials
// 0x0018
struct FST_MeshDynamicMaterials
{
	class UMeshComponent*                              Mesh_8_231EFF4840480E046CDEF9A04FBE7A7A;                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialReferences_6_623F5BBE41A8EC2DF1A5B98E97B488E9; // 0x0008(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
