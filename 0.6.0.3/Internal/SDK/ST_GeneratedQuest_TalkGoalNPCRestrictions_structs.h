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

// UserDefinedStruct ST_GeneratedQuest_TalkGoalNPCRestrictions.ST_GeneratedQuest_TalkGoalNPCRestrictions
// 0x0100
struct FST_GeneratedQuest_TalkGoalNPCRestrictions
{
	bool                                               TalkToQuestGiver__79_37C6C95142D60E75FBC9AAAF38EFFB57;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver_E_TalkToGoalRestriction_RelationToQuestGiver> RelationToQuestGiver_81_70648E344F787298B318F493D8C51AE0;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BUVE[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_GeneratedQuestRestrictions_Ownership    OwnershipRestriction_76_66641D3641AB2475078F948C45A9C766;  // 0x0008(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCRestrictions_70_05C177AB4EF0804E8FE39CB627A78156;       // 0x0020(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCPartnerRestrictions_71_B9014DFA44A245A8910FC187F66455CC; // 0x0058(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCChildRestrictions_72_15A1206A4D8C1E4E41923AB5A242F9A9;  // 0x0090(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCParentRestrictions_73_14A6F79946996562BEF57C99EC94CCF4; // 0x00C8(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
