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

// UserDefinedStruct ST_Goal_EquipItem.ST_Goal_EquipItem
// 0x0030
struct FST_Goal_EquipItem
{
	struct FText                                       GoalText_2_EDA397F547CE97D314A1FC8EB0BA72F2;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               IsArmor__7_25FCFFBC4943E3DCABB41EB5E5CFE6EF;               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> OutfitType_16_A71B4681416AC130A93C99A408869F8D;            // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ItemType_12_0D957AC94ECD21BC880717A71F720DB4;              // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MustBeEquipped__15_4228F4E749AE5E408AD2DB909609BC5C;       // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldBeSpecificItem__21_D56C1D1244CC075DE6F9B1B1600326EF; // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7MH6[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         SpecificItem_22_F217E4274B5E752EA8FC0EB8AA85CBD0;          // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
