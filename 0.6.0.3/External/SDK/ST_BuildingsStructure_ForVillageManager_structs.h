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

// UserDefinedStruct ST_BuildingsStructure_ForVillageManager.ST_BuildingsStructure_ForVillageManager
// 0x0018
struct FST_BuildingsStructure_ForVillageManager
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType_5_4169649942E48B99379DFDB36E1C5AD5;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L77Q[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SimplifiedBuildingUnlockedStructure> BuildingStructure_7_19187DC64037D5A9B8291EACF02790E3;      // 0x0008(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
