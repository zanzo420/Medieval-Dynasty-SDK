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

// UserDefinedStruct ST_Spawner_Item.ST_Spawner_Item
// 0x0054
struct FST_Spawner_Item
{
	struct FTransform                                  SpawnPoint_2_79E158C942D92EE28188C1A4EF30CB1E;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FST_ItemResource                            Item_8_101554ED45FC76283172B69961A2625B;                   // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                               SimulatePhysics_16_E10643074D060EAD87A112BFF127D38B;       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GUIA[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ConditionMin_12_8654A8574A903D91F1BE7E84F17405EB;          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ConditionMax_14_A157AE4F4B06656D09A1C7A0BDDE58D0;          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
