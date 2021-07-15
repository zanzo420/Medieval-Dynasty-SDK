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

// UserDefinedStruct ST_QuestReward_Generator.ST_QuestReward_Generator
// 0x00C8
struct FST_QuestReward_Generator
{
	struct FST_GenerateItemsForQuest_Generator         Items_61_0EF38CEA4E8D860F984909914B92866D;                 // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                Liking_45_6F7DB08B49144B1A745A5E8BCBCC35D1;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Affection_46_50E0E2134B0085B095732FB24137EF9E;             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DynastyReputation_48_5D55F5544DF91AF2E861C49243525A08;     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K683[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_Skills_E_Skills>, int>          SkillExperience_43_1A39A82F454A6F275541FD9BD5545D5D;       // 0x0028(0x0050) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>, int> TechnologyPoints_56_48AC28C745ED750A805FDEAF45E7B6AF;      // 0x0078(0x0050) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
