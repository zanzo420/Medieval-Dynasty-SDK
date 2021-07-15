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

// UserDefinedStruct ST_QuestObjective_Generator.ST_QuestObjective_Generator
// 0x0078
struct FST_QuestObjective_Generator
{
	TArray<struct FST_MasterGoals_Generators>          ObjectiveGoals_52_6188896140ECEA7BA537D885228B6736;        // 0x0000(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                               CompletesQuest__8_406F7BEA4EA2B43DE01C7C9DB45F6384;        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6BIF[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Goal_ChangeDialogue>             ChangeDialoguesOnObjectiveStart_23_F2A917F54BD959D0BB590F948C214A91; // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Goal_ChangeDialogue>             ChangeDialoguesOnObjectiveEnd_27_6A9BC1BA41BB9A89AEE6328810784E1D; // 0x0028(0x0010) (Edit, BlueprintVisible)
	bool                                               StartUpdatesDescription__28_932A3A474587B1AE962B66BB16E2A8FF; // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_61OY[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description_38_B4D4042E40238C37995229BE10199447;           // 0x0040(0x0018) (Edit, BlueprintVisible)
	bool                                               EndUpdatesDescription__50_CC9D0333467AF90C0A31AC990982C1F2; // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JJUS[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DescriptionOnEnd_51_19027AC046558C62449F06A1C2A1E317;      // 0x0060(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
