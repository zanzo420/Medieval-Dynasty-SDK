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

// UserDefinedStruct ST_MasterGoals.ST_MasterGoals
// 0x05A8
struct FST_MasterGoals
{
	TEnumAsByte<E_GoalTypes_E_GoalTypes>               Type_2_67370FA648288E1D870278A032FEF45F;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QO5T[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Goal_Custom                             CustomGoal_35_0C9B6462458DC31295E2DB92D1F333F8;            // 0x0008(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Hunt                               HuntGoal_36_C9E052124BEC72172A667288EADC600C;              // 0x0060(0x0048) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Acquire                            DeliverGoal_37_24156E8643798A293504C9A9BA91DFAA;           // 0x00A8(0x0048) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Talks                              TalkGoal_38_6222BD0B4113BFC4BF5DDCA2C13DEE4F;              // 0x00F0(0x0178) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Find                               FindGoal_39_20CD00374F81C101B7021EABDE4718B4;              // 0x0268(0x0048) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_EquipItem                          EquipGoal_50_60BE23B24CDEF1998B57389980E6368D;             // 0x02B0(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Sleep                              SleepGoal_55_C04462EC4B58F5150B6807A0056593E8;             // 0x02E0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Build                              BuildGoal_56_39D53F5B4280A86CAEC098822A0260EF;             // 0x0300(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_PledgeTask                         PledgeTaskGoal_59_547615EA4893089BF2107DAE8F6096F7;        // 0x0358(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_GetRidOf                           GetRidOfGoal_71_3AA9A641441B41ED9744BAAA36850851;          // 0x0378(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_VillageParameters                  VillageParameters_79_97BD1C044B1F69B7D334518FD26450D8;     // 0x0398(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_SpendTalentPoints                  SpendTalentPoints_83_55145C6448DB9259FE04A696853E340F;     // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_Family                             FamilyGoal_87_8035690B4BD293D17AD869A2B03EC9A2;            // 0x03D8(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Population                         PopulationGoal_90_3FDC8B664F65C2E7FF9CA4BA62D187D9;        // 0x0400(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_WaitForTimes                       WaitForTimeGoal_93_5C47508C4D60348E88B1EE8CFE802A2D;       // 0x0428(0x0040) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_ArcheryContest                     ArcheryContestGoal_107_711D36014BA2DF93000AE5BDFC9C593B;   // 0x0468(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_TalkToPeople                       TalkToPeopleGoal_113_581E1CA04C9A950AF78B8EA0C96A392E;     // 0x0480(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_Flirt                              FlirtGoal_116_52235D1D4A876D284A1FAEAFF1D9F3A4;            // 0x04B0(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_CompleteQuests                     CompleteQuestsGoal_119_F5A389254A39337B058252B046387EF0;   // 0x04D8(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_RemoveFoliage                      RemoveFoliageGoal_122_F079F683486F8C6095C28493239765C6;    // 0x0500(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_ConvincePeople                     ConvinceGoal_125_FE3720C34F101CEBC2A2B6A19C17C13D;         // 0x0530(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_SendPeopleToKing                   SendPeopleGoal_128_FC0CA48046EFC8DEADCA35AED35D851C;       // 0x0550(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Goal_VillageMood                        VillageMoodGoal_131_3BC818574BAE3219246C28953AAEC81D;      // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_GoalState_E_GoalState>               GoalCompleted_72_CAF8FA4040D3E3CD5A0B43A07602CA59;         // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GoalLimitedByTime__99_D36B74344F08A66216F9C5BB9893E5B7;    // 0x0575(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PQ5B[0x2];                                     // 0x0576(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Time                                    BaseTimeForGoal_110_4507406944EA153962D3E0AEEA4ABDD4;      // 0x0578(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Time                                    TimeForGoal_101_094A215F473DED6413A9A48D1C31B191;          // 0x0590(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
