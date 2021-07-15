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

// UserDefinedStruct ST_SAVE_POI.ST_SAVE_POI
// 0x00A8
struct FST_SAVE_POI
{
	struct FGuid                                       ID_44_951B8DEE42BAA1C587B9258810684981;                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seasons_45_628716B54063757C55A764B50028A533;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CKJX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        NPCs_17_0329A5F14BB46EF972D2C89D9CCB524B;                  // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Spawner_Animal>             Animals_39_1EE135AC489D1EC5F3C0D1B1B3BEDEE2;               // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Spawner_Item>               Items_46_095990284506B00BE0B4BD95CA0B26E5;                 // 0x0038(0x0010) (Edit, BlueprintVisible)
	TMap<int, struct FST_InventoryItemsArray>          ItemsChest_35_8F737DF647056FF5E21E2DB9920C3B60;            // 0x0048(0x0050) (Edit, BlueprintVisible)
	TArray<int>                                        Custom_38_8CF67B4D47463068ECE194B353CF896E;                // 0x0098(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
