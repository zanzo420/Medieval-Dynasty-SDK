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

void FST_Item_Crafting_ItemRecipes::AfterRead()
{
	READ_PTR_FULL(RecipeIcon_17_20E5A0744109E39F66EE06ABF4F2CA3A, UTexture2D);
}

void FST_Item_Crafting_ItemRecipes::BeforeDelete()
{
	DELE_PTR_FULL(RecipeIcon_17_20E5A0744109E39F66EE06ABF4F2CA3A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
