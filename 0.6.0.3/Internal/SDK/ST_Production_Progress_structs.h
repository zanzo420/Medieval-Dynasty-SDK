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

// UserDefinedStruct ST_Production_Progress.ST_Production_Progress
// 0x0070
struct FST_Production_Progress
{
	bool                                               Overflow_49_D0E2433D44B3711FAD03C1A97D24F9BF;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoTool_61_D17F06EF45D3CDE6615043B2B7B5BD35;                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasWorkers_56_CDFD8A1140C5DF965D2BEBB4BFC0E310;            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOfProduction_59_68B9577C417A9A794ADA18B161ADE903;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Production_Recipe                       RecipeSettings_74_81F832E3403405B7B4B76DB5CFBAB39A;        // 0x0010(0x0040) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession_32_DDDAB63E4ED04DDBDA630EADDBFE2675;            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     SkillType_31_16BEBB664784C756C661B2B470A7EEE4;             // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;     // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;            // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverwriteCondition_72_F5EF043B4EA56EB4EC6683A16207E9C6;    // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2W10[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Condition_73_E15717924B0469A410D8EEBAD2CCC83E;             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7NCG[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemCache>                       Cache_78_BEBB73504FB681CD5DA06B820F476459;                 // 0x0060(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
