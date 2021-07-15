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

// UserDefinedStruct ST_SkillRestriction.ST_SkillRestriction
// 0x0008
struct FST_SkillRestriction
{
	TEnumAsByte<E_Skills_E_Skills>                     Skill_2_52EECA8841AFBD79C742098161A3CBEC;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O2AE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillRequired_5_2D48C3AD48DB1A04C754B1BA9379153E;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
