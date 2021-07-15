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

// UserDefinedStruct ST_CharacterSkillsAndTallents.ST_CharacterSkillsAndTallents
// 0x00C0
struct FST_CharacterSkillsAndTallents
{
	struct FST_CharacterSkillsValues                   Extraction_20_1188465F45406E03DD12A2A7F6B3B2D3;            // 0x0000(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Hunting_22_21CF44994B8E6E3619D0CC9C9EFF926F;               // 0x0020(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Farming_32_403800AC4DDB3008FAB4EEAAB9F37111;               // 0x0040(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Diplomacy_28_52C5FA454FEE04974630B29EC0558952;             // 0x0060(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Survival_29_5F3A8F434D679F2362A8FAB8FAE60DF4;              // 0x0080(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Crafting_31_C8B0DED74FE3E5D42B3509A8E67D6812;              // 0x00A0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
