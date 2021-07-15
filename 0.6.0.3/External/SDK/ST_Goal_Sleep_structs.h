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

// UserDefinedStruct ST_Goal_Sleep.ST_Goal_Sleep
// 0x0019
struct FST_Goal_Sleep
{
	struct FText                                       GoalText_5_AC2B796D4CAB574F6AFC34A57B4B7A50;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               ForSeason__6_112245B94ACF099C715F2C90813647AC;             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
