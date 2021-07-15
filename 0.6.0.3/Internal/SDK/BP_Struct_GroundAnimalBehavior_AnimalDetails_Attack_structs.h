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

// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack.BP_Struct_GroundAnimalBehavior_AnimalDetails_Attack
// 0x0015
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack
{
	TEnumAsByte<BP_Enum_MeleeDamageType_EBP_Enum_MeleeDamageType> MeleeDamageType_2_83E4E9F74F475BCE4ED7F7AEC99E503A;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QBKB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageAmount_14_E2E41E2B4C6AD1A1CF7B83AA757ED6DF;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackFrequency_5_8F6C0B344098E7A6604FF8B07B5E3E6F;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AggroTimer_7_464BCFE04E90AB6D34D28D96A9449D67;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisengageCD_11_BD935CE243E07628A8E2BA8D4591F6D5;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Dontmovewhileattacking_17_BD7AEB3144FEACAA92E84C96A67FDA3D; // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
