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

// UserDefinedStruct ST_NPCsPresets.ST_NPCsPresets
// 0x04BC
struct FST_NPCsPresets
{
	struct FName                                       PresetID_28_6ED4DA98478F332F9ABE178ECD9206A7;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_Profession_E_Profession>>     Profession_20_54AF922F419AC9E94C37AEBDB8ABFB12;            // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_Seasons_E_Seasons>>           Seasons_22_8D5E40CA41C40FA12E871AB7D5FDBE75;               // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_Wealth_E_Wealth>>             Wealth_29_3E08FA8A48CDF19E77E5A291610CF1D5;                // 0x0028(0x0010) (Edit, BlueprintVisible)
	struct FST_NPCsMeshesDyes                          Meshes_17_2D514BD64965ABC3E50C93A5CAA49A4E;                // 0x0038(0x0480) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                Weight_25_D5B973364A964F57858C759B4604D5EA;                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
