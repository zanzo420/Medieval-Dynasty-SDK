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

// UserDefinedStruct ST_GeneratedQuestRestrictions_NPC.ST_GeneratedQuestRestrictions_NPC
// 0x0038
struct FST_GeneratedQuestRestrictions_NPC
{
	bool                                               IsRestrictionRequired_1_AC7E73E44355F98743EC2E9B5C614E71;  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZCM7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Sex_E_Sex>>                   NPCRequiredSex_9_F54903794BA1484AAA680D87E7EC323D;         // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_Profession_E_Profession>>     NPCRequiredProfession_12_4E62CDA845BEA50712F392BD90375FEB; // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_CharacterType_E_CharacterType>> NPCRequiredAge_13_E49029754773FCF17AAA12B7B87F61AC;        // 0x0028(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
