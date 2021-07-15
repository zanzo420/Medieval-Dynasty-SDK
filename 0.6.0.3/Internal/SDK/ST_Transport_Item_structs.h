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

// UserDefinedStruct ST_Transport_Item.ST_Transport_Item
// 0x0022
struct FST_Transport_Item
{
	struct FDataTableRowHandle                         ItemHandler_2_D592F23A409BE093F797D5B8325D7D01;            // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	TArray<int>                                        BaseTransportPerHour_27_62B9692C47FC72EC4AF8BAAAFF49FC84;  // 0x0010(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_Buildings_E_Buildings>               TakenFrom_30_290BEFEE434DDAA77922F8B1C51E1694;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Production_StoragePlaces_E_Production_StoragePlaces> StoragePlace_12_57A6AE2B4CB7586DA81BE8A8A99B1EB2;          // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
