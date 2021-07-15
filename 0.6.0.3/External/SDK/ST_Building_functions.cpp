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

void FST_Building::AfterRead()
{
	READ_PTR_FULL(Icon_45_B0C90AE14B05A514E925D08246EB99C5, UTexture2D);
	READ_PTR_FULL(BuildingClass_20_D0A4637948415EDC3BB10E8473C522F5, UClass);
	READ_PTR_FULL(SkeletonBuildingMesh_88_7B16B3F14210EADC1B4B22A746AD8FAC, UStaticMesh);
}

void FST_Building::BeforeDelete()
{
	DELE_PTR_FULL(Icon_45_B0C90AE14B05A514E925D08246EB99C5);
	DELE_PTR_FULL(BuildingClass_20_D0A4637948415EDC3BB10E8473C522F5);
	DELE_PTR_FULL(SkeletonBuildingMesh_88_7B16B3F14210EADC1B4B22A746AD8FAC);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
