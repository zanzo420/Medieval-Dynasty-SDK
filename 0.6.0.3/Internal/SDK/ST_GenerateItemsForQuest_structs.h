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

// UserDefinedStruct ST_GenerateItemsForQuest.ST_GenerateItemsForQuest
// 0x0028
struct FST_GenerateItemsForQuest
{
	int                                                HowMuchItemsToPick_2_17044A474F46EE5F461138A036812F01;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_11SX[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Quest_ItemsToPickFrom>           ItemsToPickFrom_6_E4E861F34FD7B7B726B09CBED8708E46;        // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Quest_PickedItemsFromGenerator>  PickedItems_9_F54B717A4779ED80449BC8BDE0DC39B4;            // 0x0018(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
