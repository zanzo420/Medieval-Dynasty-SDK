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

// UserDefinedStruct ST_EventEffect_NPCParameter.ST_EventEffect_NPCParameter
// 0x0028
struct FST_EventEffect_NPCParameter
{
	TEnumAsByte<E_EventEffect_NPCType_E_EventEffect_NPCType> Illness_37_DC542E6E40F3842F5E125FBAB19D21B5;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsePrecent__41_13E5800C4C925373AD0F9096A5DD285A;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UGOY[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NPCCountMinRange_43_1B737B12495E631BC597C6ACFFD7E7C9;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NPCCountMaxRange_42_3E627DC54584AAACBE512A961243EADE;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NPCCountRangeIterator_22_CE151E07444DD93F6A54FCB31DE2B79A; // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProductionChange_45_E05F90574B7FDB024D69F884737787CA;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoodChange_39_99907BF7453C7901CBB27E92C37E352E;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SkillRestriction>                ChangeNPCSkill_36_04AF37904B88F4C354F180AB872A0216;        // 0x0018(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
