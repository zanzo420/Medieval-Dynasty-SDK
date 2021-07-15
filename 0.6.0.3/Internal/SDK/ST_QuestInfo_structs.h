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

// UserDefinedStruct ST_QuestInfo.ST_QuestInfo
// 0x03BC
struct FST_QuestInfo
{
	struct FName                                       QuestID_38_7BA6032F4D2786BDD742958980780B0E;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_3_5D2BD6C041E961D204DEE58649580481;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_QuestCategories_E_QuestCategories>   Category_5_3F9CD7B34498DC27ACE65D88B31F4EC9;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DN7N[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description_8_CDF99D7C4F708C33E5AB71AF2F79099F;            // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FST_GeneratedQuestRestrictions              RestrictionsForGeneratedQuests_49_A296082945844B7D3EA2F49E6C0C3064; // 0x0040(0x01C8) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ChallengeRestrictions                   RestrictionsForChallenges_77_F6B2EFA54A4A73FCA6B203A51DD896F9; // 0x0208(0x0040) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_GenerateQuestReward>             GenerateQuestReward_74_A7AE080541A134EF1150A0A51B20D338;   // 0x0248(0x0010) (Edit, BlueprintVisible)
	struct FST_QuestReward                             CompletionReward_24_A22815F248046F0828C245A1FB71C7FE;      // 0x0258(0x00E8) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_GenerateObjectivesForQuest>      GenerateObjectivesForQuest_70_ADA0E9C44576CEAF250F60833634C48E; // 0x0340(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FST_QuestObjective>                  QuestObjectives_42_A3C4FB214AAA7EAAF9CAAA849961E628;       // 0x0350(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	TEnumAsByte<E_QuestState_E_QuestState>             State_23_DFCF9AD04F25106777C87B88F01CC887;                 // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CPPP[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuestGiverNPCID_52_EFF2F8514820EFD26A38388C6F28872D;       // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       QuestGiver_48_B6B77A4E42001A9FA2A978B04572B3CA;            // 0x0378(0x0018) (Edit, BlueprintVisible)
	int                                                Duration_31_196C34394ECEAC57CE005F86BD88975C;              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SeasonalCheckForDuration_32_AA8A21484DAED07E75D882A3F71BE0D6; // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OJLD[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuestGiverMaxAge_58_37331E404AE7C7800BB0C28297D4A86B;      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BOH3[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 NextQuests_66_83B225014B04B26EBB48A4AFD9AB6C37;            // 0x03A0(0x0010) (Edit, BlueprintVisible)
	bool                                               WasQuestRewardGiven_60_0C79F05A473D01936405B3AFE0AE565B;   // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YMV1[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_QuestFailPenalty                        QuestFailPenalty_81_5D6D335743E20E1DB33AB39F099FF99F;      // 0x03B4(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
