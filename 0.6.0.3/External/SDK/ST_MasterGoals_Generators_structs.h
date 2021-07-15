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

// UserDefinedStruct ST_MasterGoals_Generators.ST_MasterGoals_Generators
// 0x02E0
struct FST_MasterGoals_Generators
{
	TEnumAsByte<E_GoalTypes_E_GoalTypes>               Type_2_67370FA648288E1D870278A032FEF45F;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JFE3[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Goal_Hunt_Generators                    HuntGoal_132_C9E052124BEC72172A667288EADC600C;             // 0x0008(0x0040) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Acquire_Generators                 AcquireGoal_149_24156E8643798A293504C9A9BA91DFAA;          // 0x0048(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Talks_Generators                   TalkGoal_134_6222BD0B4113BFC4BF5DDCA2C13DEE4F;             // 0x0078(0x0140) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Find                               FindGoal_39_20CD00374F81C101B7021EABDE4718B4;              // 0x01B8(0x0048) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_WaitForTimes_Generators            WaitForTimeGoal_141_5C47508C4D60348E88B1EE8CFE802A2D;      // 0x0200(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_ArcheryContest_Generators          ArcheryContestGoal_142_711D36014BA2DF93000AE5BDFC9C593B;   // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_TalkToPeople_Generators            TalkToPeopleGoal_143_581E1CA04C9A950AF78B8EA0C96A392E;     // 0x0238(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_RemoveFoliage_Generators           RemoveFoliageGoal_146_F079F683486F8C6095C28493239765C6;    // 0x0268(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_ConvincePeople_Generators          ConvinceGoal_147_FE3720C34F101CEBC2A2B6A19C17C13D;         // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_SendPeopleToKing_Generators        SendPeopleGoal_148_FC0CA48046EFC8DEADCA35AED35D851C;       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_VillageMood                        VillageMoodGoal_131_3BC818574BAE3219246C28953AAEC81D;      // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GoalLimitedByTime__99_D36B74344F08A66216F9C5BB9893E5B7;    // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NVE9[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Time                                    BaseTimeForGoal_110_4507406944EA153962D3E0AEEA4ABDD4;      // 0x02B0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Time                                    TimeForGoal_101_094A215F473DED6413A9A48D1C31B191;          // 0x02C8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
