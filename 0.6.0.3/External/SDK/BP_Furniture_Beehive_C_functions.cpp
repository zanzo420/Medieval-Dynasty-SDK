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

void ABP_Furniture_Beehive_C_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMeshComponent);
}

void ABP_Furniture_Beehive_C_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(Mesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
