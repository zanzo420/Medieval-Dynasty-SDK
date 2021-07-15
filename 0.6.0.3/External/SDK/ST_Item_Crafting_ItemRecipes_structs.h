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

// UserDefinedStruct ST_Item_Crafting_ItemRecipes.ST_Item_Crafting_ItemRecipes
// 0x0098
struct FST_Item_Crafting_ItemRecipes
{
	struct FName                                       RecipeID_14_7201BEC448BA425AC71BF3AB797F91D0;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  RecipeIcon_17_20E5A0744109E39F66EE06ABF4F2CA3A;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_20_4D73796241CE03023CA82B81889259A3;                  // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_27_906179EE45170CB1DCB8708E20223067;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	TArray<struct FST_ItemResource>                    Items_24_302259D54D4513507A50D6AE88D4ABB3;                 // 0x0040(0x0010) (Edit, BlueprintVisible)
	struct FST_ItemCraftins                            CraftingRecipe_5_361431694C3926250A8048B0090B4756;         // 0x0050(0x0048) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
