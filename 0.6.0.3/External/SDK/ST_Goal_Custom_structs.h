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

// UserDefinedStruct ST_Goal_Custom.ST_Goal_Custom
// 0x0058
struct FST_Goal_Custom
{
	bool                                               CustomGoal__6_0C9B6462458DC31295E2DB92D1F333F8;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_892V[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AdditionalName_11_24156E8643798A293504C9A9BA91DFAA;        // 0x0020(0x0018) (Edit, BlueprintVisible)
	int                                                AmountToHunt_14_6222BD0B4113BFC4BF5DDCA2C13DEE4F;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmountToDeliver_16_56C0C4E046BAA7D9B7BC839B417AAB1B;       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateQuestDescription__19_F8600A164C2D04D887A757912DCA22FB; // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdatedQuestDescription_22_C15CA9384102483B51F8AC9539F09EF8; // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LEIA[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        FollowingSubGoalIndices_26_F807F46E423205055B50429661EC4C43; // 0x0048(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
