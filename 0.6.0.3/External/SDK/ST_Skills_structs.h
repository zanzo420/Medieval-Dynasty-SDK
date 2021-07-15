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

// UserDefinedStruct ST_Skills.ST_Skills
// 0x0060
struct FST_Skills
{
	TEnumAsByte<E_Skills_E_Skills>                     SkillType_28_8B7793DE4A6334DE80056CB456DB1137;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_06DE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_19_66080C2A4E15D66F84D68AB8B101A3EE;                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_4_99B5D5284D3A2B37F5FB43B938D72657;                   // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_11_A4B109C146E261C2EB0669853227F2A3;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	int                                                ActualLevel_8_B37F32B14080A27F438B67AC422C6B73;            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualProgress_29_0CAA163D49FB43022CBDD984CDA2FABE;        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      ProgressNeededToLevel_31_77505F8945FC4FB5774F9191E64AAFEB; // 0x0048(0x0010) (Edit, BlueprintVisible)
	int                                                MaxLevel_22_5008B9AE4C69F21674EA948A576437F1;              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SkillPointsToSpend_25_79AF26B04AAE1EB82BBA20A28CFC67E3;    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
