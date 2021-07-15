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

// UserDefinedStruct ST_MasterTalent.ST_MasterTalent
// 0x0058
struct FST_MasterTalent
{
	struct FText                                       TalentName_5_2A768D1E4B7435A47B11A38A0008B64E;             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TalentDescription_26_D00359B64EA891BD86E3DF960DBAFF0F;     // 0x0018(0x0018) (Edit, BlueprintVisible)
	TArray<float>                                      TalentValues_30_0A7004804E6718DD1A13F6A4ABE6DA00;          // 0x0030(0x0010) (Edit, BlueprintVisible)
	int                                                TalentTier_20_2BF25E984AB7C909EBDD56B73FFD3D91;            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0YEE[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_10_2523E89E4DBBE1B81F29B491E7BB8D09;                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTalentLevel_16_B01A5402437B39C0845430A6DED32DA5;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentTalentLevel_18_AD4F85A7414874CA72A7E69625046662;    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
