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

// UserDefinedStruct ST_Profession.ST_Profession
// 0x001A
struct FST_Profession
{
	struct FText                                       Name_4_BB3073E64E0B1CFA219447B0E7BFD45A;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Profession_E_Profession>             Type_6_F36A36284E3DEE38B58BFD9E5242A190;                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     Skill_8_B3D0EC034EE0437E723F4F87B2531BE7;                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
