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

// UserDefinedStruct ST_Trade_Progress.ST_Trade_Progress
// 0x0028
struct FST_Trade_Progress
{
	bool                                               NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasWorkers_56_CDFD8A1140C5DF965D2BEBB4BFC0E310;            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2LVP[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Limit_67_68B9577C417A9A794ADA18B161ADE903;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession_32_DDDAB63E4ED04DDBDA630EADDBFE2675;            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     SkillType_31_16BEBB664784C756C661B2B470A7EEE4;             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;     // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;            // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F1DJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         ItemHandler_70_E3CA7F294299EF0415E84CBB9397973B;           // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
