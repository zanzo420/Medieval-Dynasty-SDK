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

// UserDefinedStruct ST_QuestInfo_Save.ST_QuestInfo_Save
// 0x0149
struct FST_QuestInfo_Save
{
	struct FName                                       QuestID_38_7BA6032F4D2786BDD742958980780B0E;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Quest_PickedItemsFromGenerator>  PickedItems_58_A22815F248046F0828C245A1FB71C7FE;           // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FST_QuestReward                             QuestReward_70_012A98BD45DE45064F805D993DCDF650;           // 0x0018(0x00E8) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_QuestObjective>                  QuestObjectives_67_A3C4FB214AAA7EAAF9CAAA849961E628;       // 0x0100(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	TEnumAsByte<E_QuestState_E_QuestState>             State_23_DFCF9AD04F25106777C87B88F01CC887;                 // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LVJ4[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QuestGiverNPCID_52_EFF2F8514820EFD26A38388C6F28872D;       // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       QuestGiver_48_B6B77A4E42001A9FA2A978B04572B3CA;            // 0x0128(0x0018) (Edit, BlueprintVisible)
	int                                                Duration_31_196C34394ECEAC57CE005F86BD88975C;              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QuestGiverMaxAge_64_4EF56D73406801309AEE52806B02C76D;      // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasQuestRewardGiven_66_369B507D457E859AE418A3813A31CE9E;   // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
