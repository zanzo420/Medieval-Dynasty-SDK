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

// UserDefinedStruct ST_QuestInfo_Generators.ST_QuestInfo_Generators
// 0x0320
struct FST_QuestInfo_Generators
{
	struct FName                                       QuestID_38_7BA6032F4D2786BDD742958980780B0E;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_3_5D2BD6C041E961D204DEE58649580481;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_QuestCategories_E_QuestCategories>   Category_5_3F9CD7B34498DC27ACE65D88B31F4EC9;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6122[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description_8_CDF99D7C4F708C33E5AB71AF2F79099F;            // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FST_GeneratedQuestRestrictions_Main         RestrictionsForGenerator_84_A296082945844B7D3EA2F49E6C0C3064; // 0x0040(0x01E8) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_GenerateObjectivesForQuest_Generator> GenerateObjectivesAndRewardForQuest_88_ADA0E9C44576CEAF250F60833634C48E; // 0x0228(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	struct FST_QuestReward_Generator                   CompletionReward_86_A22815F248046F0828C245A1FB71C7FE;      // 0x0238(0x00C8) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_QuestObjective_Generator>        QuestObjectives_82_A3C4FB214AAA7EAAF9CAAA849961E628;       // 0x0300(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	int                                                Duration_31_196C34394ECEAC57CE005F86BD88975C;              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SeasonalCheckForDuration_32_AA8A21484DAED07E75D882A3F71BE0D6; // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasQuestRewardGiven_60_0C79F05A473D01936405B3AFE0AE565B;   // 0x0315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DR3S[0x2];                                     // 0x0316(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_QuestFailPenalty                        QuestFailPenalty_81_5D6D335743E20E1DB33AB39F099FF99F;      // 0x0318(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
