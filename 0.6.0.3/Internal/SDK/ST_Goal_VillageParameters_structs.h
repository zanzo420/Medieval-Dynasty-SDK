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

// UserDefinedStruct ST_Goal_VillageParameters.ST_Goal_VillageParameters
// 0x0038
struct FST_Goal_VillageParameters
{
	struct FText                                       Goal_18_CEC9885644219766FE041C9B16AE3A1B;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> ParameterType_8_A87A5F49462850EC51C80B9F41B30A3C;          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9NB[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberNeededToComplete_6_3ED5DF8D4A3DD2E087CCAEB5108AD2D7; // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActualNumber_7_6E2352784F74802CD70B4A8DF454A025;           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBuildingTypes__14_78AE84F346359294DE89B2887571CB58;     // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XMU7[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Buildings_E_Buildings>>       BuildingType_15_946C1C66461581DFBBD43592CF8621CC;          // 0x0028(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
