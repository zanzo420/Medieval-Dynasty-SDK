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

// UserDefinedStruct ST_SAVE_Inventory.ST_SAVE_Inventory
// 0x0029
struct FST_SAVE_Inventory
{
	struct FName                                       ID_8_4F27866A4A6D5E95B59001A7FC0A0EB3;                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index_35_34C0B54A4FAE1CB5D74DC989994036E4;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAssigned_37_2C778F904A5BEEEF5660A09809ADF7AE;            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               IsEquipped_14_A2ECB0B841020266159B76A3CF958675;            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E89D[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuickSlotID_36_F7F9EDBB4514B1557B1F9FB606C58033;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Condition_20_CCC5799440957C122EC1B5B7CD149D34;             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Freshness_32_16EF0F6B4BDB49968937E7818101A742;             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity_23_50AE22D04A3D7347E4065A89669A08B5;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HP_26_6D4396FD41F514AABBF6B1AAFB9F4FF8;                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Owner_40_50586F604221F39DD98A2A8D8AB785F1;                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
