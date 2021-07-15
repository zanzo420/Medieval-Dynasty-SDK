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

// UserDefinedStruct ST_Challenge_ItemForDeliver.ST_Challenge_ItemForDeliver
// 0x0038
struct FST_Challenge_ItemForDeliver
{
	struct FDataTableRowHandle                         Item_9_40A9D57F4AEB903157B2AAAC320A1C2C;                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	TArray<int>                                        MaxQuantity_10_10169AAB4F2128320B4C36BE6815F7E5;           // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<int>                                        MinQuantity_11_0BF523D94681B55D21092DB2F5B6D591;           // 0x0020(0x0010) (Edit, BlueprintVisible)
	int                                                QuantityToDeliver_14_98E22ADB45D9CD397380B8A9F8782A71;     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QuantityDelivered_17_3AC011AF42480A30761DC9A5F655A1B1;     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
