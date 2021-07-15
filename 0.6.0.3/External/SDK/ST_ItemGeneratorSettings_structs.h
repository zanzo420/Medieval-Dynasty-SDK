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

// UserDefinedStruct ST_ItemGeneratorSettings.ST_ItemGeneratorSettings
// 0x0024
struct FST_ItemGeneratorSettings
{
	struct FST_ItemResource                            Item_2_304A479A4E98ED65BB47998B5E4FB640;                   // 0x0000(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                              MinCondition_8_A5D992394E45D46A8EA4A5976DF7799D;           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCondition_10_7DE7DB1D48C29FAC184FFAB880A56F99;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Probability_5_459096464A389151BE2C44A0DF944F86;            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
