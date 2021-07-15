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

// UserDefinedStruct ST_FoliageTargetsData.ST_FoliageTargetsData
// 0x0018
struct FST_FoliageTargetsData
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType_33_16BE06A44A565BC6FE7DD4B660E8A01F;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZC27[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_FoliageTarget>                   FoliageTargets_32_0A1C1AAF440C268365470086160F8644;        // 0x0008(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
