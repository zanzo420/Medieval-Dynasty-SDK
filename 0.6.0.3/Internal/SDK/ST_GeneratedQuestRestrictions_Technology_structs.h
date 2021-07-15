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

// UserDefinedStruct ST_GeneratedQuestRestrictions_Technology.ST_GeneratedQuestRestrictions_Technology
// 0x00B0
struct FST_GeneratedQuestRestrictions_Technology
{
	bool                                               UseOrConditionInsteadOfAnd__Minimal_11_1CECDE7644450DA7115043A0C4EB9061; // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BPW2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>, int> MinimalTechnology_8_661B8A6C43A75D93CB2D938E49282E30;      // 0x0008(0x0050) (Edit, BlueprintVisible)
	bool                                               UseOrConditionInsteadOfAnd__Maximal_14_8125C83344E03D110B27E88BDBB21BAD; // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3IE6[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>, int> MaximalTechnology_10_C7B1CCB24C59372F7413EDAE1819587E;     // 0x0060(0x0050) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
