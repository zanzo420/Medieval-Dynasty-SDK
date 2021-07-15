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

// UserDefinedStruct ST_Challenge_DeliverItems_Generic.ST_Challenge_DeliverItems_Generic
// 0x0038
struct FST_Challenge_DeliverItems_Generic
{
	TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> ItemsType_2_9A134C734355723C650C84BF81142A6E;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PFFN[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        MaxQuantity_9_37521D7B4D80CA144153AABB9969F6D2;            // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<int>                                        MinQuantity_10_5037BFEC4E49571E42F1EAA035D3B707;           // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Challenge_ItemForDeliver_Generic> Items_14_0D61884849FFB749E93F37B7AA67D3F0;                 // 0x0028(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
