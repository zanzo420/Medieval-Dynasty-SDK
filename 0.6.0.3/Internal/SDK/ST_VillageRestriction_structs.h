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

// UserDefinedStruct ST_VillageRestriction.ST_VillageRestriction
// 0x00AC
struct FST_VillageRestriction
{
	TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> RestrictionType_2_86E29F5B48271426E76598BC4C7019E4;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LUF0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ReputationRequired_5_3FD0496C493A695FE1AEB7A3405190A4;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_Buildings_E_Buildings>, int>    Building_21_D29D702344254587E0CD8E9C6FC70E8C;              // 0x0008(0x0050) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>, int> Technologies_14_D12A38924F4D25568A7371AFC4D7D74C;          // 0x0058(0x0050) (Edit, BlueprintVisible)
	int                                                Fields_18_EEA8BA4B43154D74A35AB7B7B2783699;                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
