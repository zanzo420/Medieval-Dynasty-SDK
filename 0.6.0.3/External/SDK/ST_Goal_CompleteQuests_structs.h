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

// UserDefinedStruct ST_Goal_CompleteQuests.ST_Goal_CompleteQuests
// 0x0021
struct FST_Goal_CompleteQuests
{
	struct FText                                       GoalText_5_C823C5EB4A9655085449AFBAA0B37B43;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                NumberToComplete_8_049B3F9A4C6D878D03B01AB34CDF2B1B;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberCompleted_9_8613366142C25DC545CD928176BDD133;        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MustBeCompletedDuringOneSeason__10_34C03B034C9AC8489A87688CFD9C4174; // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
