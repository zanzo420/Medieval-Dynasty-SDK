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

// UserDefinedStruct ST_Goal_Flirt.ST_Goal_Flirt
// 0x0024
struct FST_Goal_Flirt
{
	struct FText                                       GoalText_2_EEC26A174836841FBF3FB88C9EE0BDB6;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                NeededAffection_6_415EC8EC4CC2B3FB97066097F2B2524A;        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfWomenToFlirt_9_0388D1C34EC33157D30BEB8EBEC4E90D;   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberFlirted_10_C780E69D4A6DD5058B66E6A2187B92B1;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
