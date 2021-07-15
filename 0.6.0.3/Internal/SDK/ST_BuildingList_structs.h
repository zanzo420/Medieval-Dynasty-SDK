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

// UserDefinedStruct ST_BuildingList.ST_BuildingList
// 0x0018
struct FST_BuildingList
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_8_86B94F0F446BAE90632D0FA19FA1335C;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SGZE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_BuildingCategory>                Categories_9_BD6A7F984FB02D619D390C8A81C3EC0D;             // 0x0008(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
