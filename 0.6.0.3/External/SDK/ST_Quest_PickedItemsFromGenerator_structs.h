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

// UserDefinedStruct ST_Quest_PickedItemsFromGenerator.ST_Quest_PickedItemsFromGenerator
// 0x0018
struct FST_Quest_PickedItemsFromGenerator
{
	struct FDataTableRowHandle                         Item_6_A0A88C4D462366662467B9BA81666176;                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                AmountToDeliver_7_F5BCB56C4C98968AE109C58684CC72F6;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmountDelivered_8_0257A4D04498412EE97D638DC8B62DE7;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
