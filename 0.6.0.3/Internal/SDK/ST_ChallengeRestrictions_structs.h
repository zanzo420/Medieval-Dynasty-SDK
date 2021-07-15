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

// UserDefinedStruct ST_ChallengeRestrictions.ST_ChallengeRestrictions
// 0x0040
struct FST_ChallengeRestrictions
{
	TArray<int>                                        RequiredSeason_3_930D7ACF4F55C4734100E9BB7505D393;         // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_GeneratedQuestRestrictions_Technology> TechnologyRestriction_6_A1B8FEB64D83D06E57F430AF64DA6E3A;  // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                MinNumberOfMaleNPCs_13_232E860647F30AFECE4972BDA602D03A;   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinNumberOfFemaleNPCs_14_518ABB634BBDA8D8B88EB6ADDCCA9501; // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_KingdomStatus_E_KingdomStatus>       RequiredKingdomStatus_21_C8C97E6C45AB3D6793DA069E8C741AC7; // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L0FM[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 KingTypesRestriction_22_5B5E9FF94C2C905BB7B827954268E8C6;  // 0x0030(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
