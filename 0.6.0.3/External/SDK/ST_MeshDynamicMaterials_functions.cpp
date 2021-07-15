// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FST_MeshDynamicMaterials::AfterRead()
{
	READ_PTR_FULL(Mesh_8_231EFF4840480E046CDEF9A04FBE7A7A, UMeshComponent);
}

void FST_MeshDynamicMaterials::BeforeDelete()
{
	DELE_PTR_FULL(Mesh_8_231EFF4840480E046CDEF9A04FBE7A7A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
