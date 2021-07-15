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

// UserDefinedStruct ST_GenerateObjectivesForQuest.ST_GenerateObjectivesForQuest
// 0x00C0
struct FST_GenerateObjectivesForQuest
{
	struct FST_GeneratedQuestRestrictions_Technology   TechnologyRestictions_5_9DB8A975422E7D03F3DA6996A625AAE7;  // 0x0000(0x00B0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_QuestObjective>                  Objectives_7_2E85E1AA402F4A5B10295181C620E609;             // 0x00B0(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
