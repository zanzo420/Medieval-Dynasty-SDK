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

// UserDefinedStruct ST_Goal_ArcheryContest_Generators.ST_Goal_ArcheryContest_Generators
// 0x0010
struct FST_Goal_ArcheryContest_Generators
{
	int                                                NumberOfProjectilesToShoot_11_86C208874E1F043A9DB618A46E1AB55A; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SpecificArcheryTarget_Tag_10_79A74B644C0E529CFC334F81DD5E7238; // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PointsToAchieve_15_2663B6A54ACF13E832EA0F922AAAE6E6;       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
