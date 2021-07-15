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

// UserDefinedStruct ST_DevelopmentStage.ST_DevelopmentStage
// 0x0020
struct FST_DevelopmentStage
{
	struct FText                                       Name_5_71E4F7874177D7C8B101D594C1372205;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> Type_10_516F173644E7F4378BD4F1A713967AA6;                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X3Z3[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BuildingLimit_7_2B383F2A4DCCF3415AD797A3B00A4043;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
