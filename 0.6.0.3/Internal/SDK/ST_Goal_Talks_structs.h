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

// UserDefinedStruct ST_Goal_Talks.ST_Goal_Talks
// 0x0178
struct FST_Goal_Talks
{
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     NPCID_49_DCBBCFBB48CD033D1CC270B568C66896;                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       NPCName_27_24156E8643798A293504C9A9BA91DFAA;               // 0x0028(0x0018) (Edit, BlueprintVisible)
	class UDialogue*                                   Dialogue_32_3B0756644ED14D4839EBF88A049F01E2;              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DeliverItemsToCompleteGoal__39_CD8365234F7AEFC2A10720BB13D298F1; // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MustDeliverAllItemsAtOnce__51_D46BD49746AE167F307171A1EFEF136C; // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseItemsFromStoragesAlso__54_EDFDA5D747E821E4A6A4D08CB8E04F43; // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K1WI[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_GenerateItemsForQuest                   ItemsToDeliver_43_DDE244304DE4C58FF6F3BC8BD25F406E;        // 0x0050(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions  PersonToTalkToRestrictions_52_953900A546EC33484B1FB9B010EFB6FF; // 0x0078(0x0100) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
