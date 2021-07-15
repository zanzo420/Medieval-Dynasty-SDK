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

// UserDefinedStruct ST_QuestObjective_OnFailed.ST_QuestObjective_OnFailed
// 0x0048
struct FST_QuestObjective_OnFailed
{
	TArray<struct FST_MasterGoals>                     ObjectiveGoals_6_6188896140ECEA7BA537D885228B6736;         // 0x0000(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                               CompletesQuest__8_406F7BEA4EA2B43DE01C7C9DB45F6384;        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P0KC[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Goal_ChangeDialogue>             ChangeDialoguesOnObjectiveStart_23_F2A917F54BD959D0BB590F948C214A91; // 0x0018(0x0010) (Edit, BlueprintVisible)
	bool                                               StartUpdatesDescription__28_932A3A474587B1AE962B66BB16E2A8FF; // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IMFO[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description_38_B4D4042E40238C37995229BE10199447;           // 0x0030(0x0018) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
