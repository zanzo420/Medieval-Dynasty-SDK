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

// UserDefinedStruct ST_Goal_Talks_Generators.ST_Goal_Talks_Generators
// 0x0140
struct FST_Goal_Talks_Generators
{
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UDialogue*                                   Dialogue_32_3B0756644ED14D4839EBF88A049F01E2;              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DeliverItemsToCompleteGoal__39_CD8365234F7AEFC2A10720BB13D298F1; // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MustDeliverAllItemsAtOnce__51_D46BD49746AE167F307171A1EFEF136C; // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseItemsFromStoragesAlso__54_EDFDA5D747E821E4A6A4D08CB8E04F43; // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LLM6[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_GenerateItemsForQuest_Generator         ItemsToDeliver_55_DDE244304DE4C58FF6F3BC8BD25F406E;        // 0x0028(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions  PersonToTalkToRestrictions_52_953900A546EC33484B1FB9B010EFB6FF; // 0x0040(0x0100) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
