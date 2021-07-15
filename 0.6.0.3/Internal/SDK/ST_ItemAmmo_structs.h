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

// UserDefinedStruct ST_ItemAmmo.ST_ItemAmmo
// 0x0030
struct FST_ItemAmmo
{
	TEnumAsByte<E_Ammo_E_Ammo>                         ToolType_7_470C90FB4A4FAC54DE8267911C11F662;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CMBX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ProjectileClass_12_0B95F94245C55429626C82B945BFD43C[0x28]; // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
