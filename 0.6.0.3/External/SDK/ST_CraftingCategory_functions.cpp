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

void FST_CraftingCategory::AfterRead()
{
	READ_PTR_FULL(CategoryIcon_12_5725155D4C68FB70889C86BDB5044F5A, UTexture2D);
}

void FST_CraftingCategory::BeforeDelete()
{
	DELE_PTR_FULL(CategoryIcon_12_5725155D4C68FB70889C86BDB5044F5A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
