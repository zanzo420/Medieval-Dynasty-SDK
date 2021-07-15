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

// UserDefinedStruct ST_EventEffect_PlayerParameters.ST_EventEffect_PlayerParameters
// 0x0030
struct FST_EventEffect_PlayerParameters
{
	TEnumAsByte<E_EventEffect_PlayerType_E_EventEffect_PlayerType> ParameterType_14_296F33F546264731A4BAD49EF14FD6BB;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6NO7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RangeMin_8_0DAA216749F509FE93E2F599ED828A47;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RangeMax_9_7460E282427A7C38C603549A540DA23B;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RangeIterator_10_26C5252247BAA9A18A904E992845F932;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SkillRestriction>                SkillType_23_63A2974B4E27E7A3BD219980E173EF6D;             // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemRestriction>                 Items_19_9FDF1EA245583AD1E3D4C8A3C7B37F4C;                 // 0x0020(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
