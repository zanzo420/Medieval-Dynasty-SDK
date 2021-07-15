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

// UserDefinedStruct ST_Goal_Family.ST_Goal_Family
// 0x0024
struct FST_Goal_Family
{
	struct FText                                       GoalText_16_01CB1DEE4B8ABBF86CAA41BCE686129E;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               GoalForWife__1_AC762C3741DAD5AA1287EFA2C08814E4;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoesPlayerHaveWife_9_5EC52C0344CD9E383537DB85810CE606;     // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N9MY[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfChildrenNeeded_11_565294BA4B08B1EB12D748993F837AED; // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActualNumberOfChildren_13_10F9823B41F598F56846749FB545992C; // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
