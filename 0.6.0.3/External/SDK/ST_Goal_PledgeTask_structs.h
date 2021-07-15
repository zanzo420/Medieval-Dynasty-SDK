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

// UserDefinedStruct ST_Goal_PledgeTask.ST_Goal_PledgeTask
// 0x0020
struct FST_Goal_PledgeTask
{
	struct FText                                       GoalText_2_CB5E947B4F5AAB42786446972D14823B;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                NeededNumberOfNPCs_22_51A96B054FF5EDEDE54CF5A8F149D6D0;    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentNumberOfNPCs_23_BF320C4B4658D8C56BF79B8D90382404;   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
