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

// UserDefinedStruct ST_SAVE_Events.ST_SAVE_Events
// 0x0038
struct FST_SAVE_Events
{
	float                                              Chance_2_88211D0E4D75368CECD797B3B0BB25DA;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalNumber_10_289B1C6F4E804A0F3FB6B3839289A90C;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LastEvents_9_87CD11D44098A7BDDF8BA6B9EBD1FDB6;             // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               EventQueue_14_D3E934934A227FD5CFA5FA86E1FD079C;            // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_EventHistory_Main>               EventHistory_18_8A0231464391AA370E075692BDFA7D6C;          // 0x0028(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
