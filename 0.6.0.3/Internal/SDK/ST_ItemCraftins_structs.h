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

// UserDefinedStruct ST_ItemCraftins.ST_ItemCraftins
// 0x0048
struct FST_ItemCraftins
{
	TEnumAsByte<E_CraftingRecipeType_E_CraftingRecipeType> RecipeType_35_D5F3FCF54C35163A28604184F177011A;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XS1Q[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeToCraft_5_B650D422438094DAC8D7D6BE79F263A2;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetFullCapacity__23_E82BF7A7429EDC3936ECB1A68F7B7E73;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TLMB[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemResource>                    CraftingResources_12_82D42C4B46FE9F0A19A8CA9E7E56189B;     // 0x0010(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolNeededForCrafting_45_227BB2A0414844657D288F964CB8E6D6; // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZEK0[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ToolCost_48_A2C2605D4288A1AC5905209ADF1E6160;              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLockedByTechnology_40_80B267AE49C06AD5F9675F8864164B1D;  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KNX9[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologySchemeCost_54_12EB6FCD4FAE12B360588F9792892E16;  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyNeededType_62_71DCF1644FB93EE3485164A39F69416D;  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NQG7[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologyNeededLevel_52_7D01BD4F4F81B76E892C1C89D43112FA; // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyRewardType_66_6D8A269C421784E9921998ABCB690DEC;  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RZSD[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TechnologyRewardValue_63_7D3302C24A5EA448E5D11A82E3BFB80B; // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     SkillRewardType_67_C9E285804C480AABD2DB12BFB0D314B6;       // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YL44[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkillRewardValue_68_BBA3011843FE50FE803164B5ED613E67;      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
