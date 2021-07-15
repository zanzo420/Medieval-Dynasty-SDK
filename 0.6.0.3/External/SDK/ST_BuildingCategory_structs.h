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

// UserDefinedStruct ST_BuildingCategory.ST_BuildingCategory
// 0x0018
struct FST_BuildingCategory
{
	TEnumAsByte<E_Buildings_E_Buildings>               BuildingType_2_41E987C8482C4A114A1FFF978A56E51E;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HP9T[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_MasterBuilding_C*>                ListOfBuildings_6_9405FD4F4E6E5645EAFA12BA59D7D48A;        // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
