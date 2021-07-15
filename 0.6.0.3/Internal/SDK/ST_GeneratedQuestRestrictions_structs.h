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

// UserDefinedStruct ST_GeneratedQuestRestrictions.ST_GeneratedQuestRestrictions
// 0x01C8
struct FST_GeneratedQuestRestrictions
{
	TArray<int>                                        RequiredSeason_42_421C532649607C7E1E983A81817FBC3E;        // 0x0000(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver_E_TalkToGoalRestriction_RelationToQuestGiver> RelationToPlayer_79_7EBDA70844C357248777E08C2DFD7DD0;      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_86NW[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_GeneratedQuestRestrictions_Technology   TechnologyRestriction_82_8081798F4C8CD0B0F4E0DCBA00FAD57A; // 0x0018(0x00B0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                MinimalReputation_86_D7E83739438429D6CCE938ADF7E97F32;     // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaximalReputation_88_286127F94B6E242F80B016B09A795241;     // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_Ownership    OwnershipRestriction_76_66641D3641AB2475078F948C45A9C766;  // 0x00D0(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCRestrictions_70_05C177AB4EF0804E8FE39CB627A78156;       // 0x00E8(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCPartnerRestrictions_71_B9014DFA44A245A8910FC187F66455CC; // 0x0120(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCChildRestrictions_72_15A1206A4D8C1E4E41923AB5A242F9A9;  // 0x0158(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCParentRestrictions_73_14A6F79946996562BEF57C99EC94CCF4; // 0x0190(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
