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

// UserDefinedStruct ST_EventButtonRestrictions.ST_EventButtonRestrictions
// 0x00D0
struct FST_EventButtonRestrictions
{
	TEnumAsByte<E_EventButtonRestrictions_E_EventButtonRestrictions> RestrictionType_5_06C0A07A4C754568185220964ACE0090;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StatMustBeEqualOrHigher__14_30B7048248540ACDE8269E9AF7112A1E; // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BKK6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_SkillRestriction                        SkillRestriction_16_B781433A468EFE37E5AD2EA1159B338B;      // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ComparedNumberOfCoins_17_BF68552343059A500D9806BC2DD40CC0; // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_VillageRestriction                      VillageParameters_21_C58825824368DF8395F648AFD0F12641;     // 0x0010(0x00B0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_ItemRestriction>                 Items_25_7E71BA12447BAC454AD95F9E3D2D73E8;                 // 0x00C0(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
