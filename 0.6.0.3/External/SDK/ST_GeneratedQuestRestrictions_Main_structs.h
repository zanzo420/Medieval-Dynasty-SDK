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

// UserDefinedStruct ST_GeneratedQuestRestrictions_Main.ST_GeneratedQuestRestrictions_Main
// 0x01E8
struct FST_GeneratedQuestRestrictions_Main
{
	TArray<int>                                        RequiredSeason_42_421C532649607C7E1E983A81817FBC3E;        // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FST_GeneratedQuestRestrictions_Technology   TechnologyRestriction_82_8081798F4C8CD0B0F4E0DCBA00FAD57A; // 0x0010(0x00B0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TEnumAsByte<E_TalkToGoalRestriction_RelationToQuestGiver_E_TalkToGoalRestriction_RelationToQuestGiver> RelationToPlayer_79_7EBDA70844C357248777E08C2DFD7DD0;      // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KNUN[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinimalReputation_86_D7E83739438429D6CCE938ADF7E97F32;     // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaximalReputation_88_286127F94B6E242F80B016B09A795241;     // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_31JY[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_GeneratedQuestRestrictions_Ownership    OwnershipRestriction_76_66641D3641AB2475078F948C45A9C766;  // 0x00D0(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCRestrictions_70_05C177AB4EF0804E8FE39CB627A78156;       // 0x00E8(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCPartnerRestrictions_71_B9014DFA44A245A8910FC187F66455CC; // 0x0120(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCChildRestrictions_72_15A1206A4D8C1E4E41923AB5A242F9A9;  // 0x0158(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GeneratedQuestRestrictions_NPC          NPCParentRestrictions_73_14A6F79946996562BEF57C99EC94CCF4; // 0x0190(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                MinNumberOfMaleNPCs_93_8AD3D0274316B786FF4A39B09A4DC7B6;   // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinNumberOfFemaleNPCs_94_4418B24C4E8824166E9E4F85FEF68ED7; // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckKingdomStatus_100_A11B35B841D7FA74795728A81F0D2A35;   // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_KingdomStatus_E_KingdomStatus>       RequiredKingdomStatus_101_FDB2285B47609A758372CBBB60D7D218; // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8S50[0x6];                                     // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 KingTypesRestriction_104_2BA213F346571370F4724096904CA343; // 0x01D8(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
