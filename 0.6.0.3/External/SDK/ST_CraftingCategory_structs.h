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

// UserDefinedStruct ST_CraftingCategory.ST_CraftingCategory
// 0x0048
struct FST_CraftingCategory
{
	struct FText                                       CategoryName_3_E954F11A47D5F0012150239E4D293FC4;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       CategoryDescription_5_7353700F498716505EDAFD80337A80C7;    // 0x0018(0x0018) (Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 Recipes_22_C0CDE96F4DD883519894A0A1436A31C8;               // 0x0030(0x0010) (Edit, BlueprintVisible)
	class UTexture2D*                                  CategoryIcon_12_5725155D4C68FB70889C86BDB5044F5A;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
