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

// UserDefinedStruct ST_CharacterStats.ST_CharacterStats
// 0x0038
struct FST_CharacterStats
{
	struct FText                                       Name_29_AC81216244835A9021D27488B0340C72;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Age_28_445CAC294F0F96D56B2DC7BB5FF76D2F;                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Sex_E_Sex>                           Sex_23_2FBC83324D17949E4C639FB6B28CF744;                   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M96V[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Food_2_AEC529664D10B974E3A3A09AA9450F51;                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Water_4_D927624C4B121E4C87699082363FD439;                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health_6_FB723AE44AFDF9A0BE6A79B90DCF8CEF;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DeadChance_11_F3FCC9004BA2B05E80AF3F88A0AE4B5F;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSick_31_6A05F4A84FA58C9B46F1CD8A6E68E4EE;                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsInjured_33_A6D6C1CD4CC4CE8B0BE6CDACFA1ACA61;             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WKM1[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mood_30_85A1656349B35ECBCA99929796203BFC;                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
