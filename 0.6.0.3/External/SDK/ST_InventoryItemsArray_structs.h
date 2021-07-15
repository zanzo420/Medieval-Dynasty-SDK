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

// UserDefinedStruct ST_InventoryItemsArray.ST_InventoryItemsArray
// 0x0010
struct FST_InventoryItemsArray
{
	TArray<struct FST_ItemInventorys>                  Items_3_D270B57A4C1BFF2E48F4959E383134C8;                  // 0x0000(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
