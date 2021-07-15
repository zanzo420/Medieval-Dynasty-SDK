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

// UserDefinedStruct ST_EventRestrictions.ST_EventRestrictions
// 0x01AC
struct FST_EventRestrictions
{
	TEnumAsByte<E_EventRestrictions_E_EventRestrictions> RestrictionType_2_17127A814D8AB984CB2EDBBCA19F0E84;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_EventEffectRelevance_E_EventEffectRelevance> RestrictionRelevance_33_D344E7E94AB94707BC0B02A84438174F;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DB0F[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_EventRestricion_Animals                 AnimalsRestriction_15_CE5F08FE4C1EFD2BBF867B835917C1CC;    // 0x0008(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_EventRestricion_NPCs                    NPCsRestriction_16_6D8D4E2C4346490953BE8D82DB8BE0CA;       // 0x0060(0x0060) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_EventRestricion_Buildings               BuildingsRestriction_17_7D71E19841F81C26AED6E3B97756A67D;  // 0x00C0(0x0060) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_EventRestricion_Fields                  FieldsRestriction_18_AC6B6946496F36D784969294B53BD281;     // 0x0120(0x0004) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DG7E[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_EventRestriction_Player                 PlayerRestriction_27_477160D546EC2FE4229409B1098E5D3A;     // 0x0128(0x0030) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	unsigned char                                      Season_22_CC8280B747D4A4324A7D599F5AEA6416[0x50];          // 0x0158(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                Year_30_3F26FFA14B99A00983466397E984591A;                  // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
