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

void FST_SimplifiedBuildingUnlockedStructure::AfterRead()
{
	READ_PTR_FULL(Icon_7_25D330B94371350C4CA198B7C3C8F10F, UTexture2D);
}

void FST_SimplifiedBuildingUnlockedStructure::BeforeDelete()
{
	DELE_PTR_FULL(Icon_7_25D330B94371350C4CA198B7C3C8F10F);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
