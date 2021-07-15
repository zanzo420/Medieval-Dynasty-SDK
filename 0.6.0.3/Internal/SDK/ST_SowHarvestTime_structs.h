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

// UserDefinedStruct ST_SowHarvestTime.ST_SowHarvestTime
// 0x0002
struct FST_SowHarvestTime
{
	TEnumAsByte<E_Seasons_E_Seasons>                   PlantSeason_3_0FF5CA7A44A564A47B7D31A035357A25;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   HarvestSeason_4_8D815F5D4E12F0B8D00A51B2A0DB7603;          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
