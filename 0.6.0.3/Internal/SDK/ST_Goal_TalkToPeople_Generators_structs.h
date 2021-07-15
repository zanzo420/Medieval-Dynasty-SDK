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

// UserDefinedStruct ST_Goal_TalkToPeople_Generators.ST_Goal_TalkToPeople_Generators
// 0x002C
struct FST_Goal_TalkToPeople_Generators
{
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FST_PersonForTalkToPeople>           PeopleToTalkTo_59_DCBBCFBB48CD033D1CC270B568C66896;        // 0x0018(0x0010) (Edit, BlueprintVisible)
	int                                                NumberOfPeopleToTalkTo_64_7DC1FF8148DE692C7D67D799F1D382CD; // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
