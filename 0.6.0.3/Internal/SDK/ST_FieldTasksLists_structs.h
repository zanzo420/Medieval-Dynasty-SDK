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

// UserDefinedStruct ST_FieldTasksLists.ST_FieldTasksLists
// 0x0032
struct FST_FieldTasksLists
{
	class ABP_MasterField_C*                           Field_2_DB0F6D89450FE553DDE6618319FC7170;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldActivities_E_FieldActivities>   Activities_10_33142A434B07AAE7D6F32B9D1F019628;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R60G[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority_7_18BBE0B3495FC3F8FC548E99A0A8826D;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        ChunksID_22_9422762B4710150FFFD8EC8301817630;              // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FVector>                             Destination_23_4CF9CDF1488E0AAC9F9B21A12B0B7F32;           // 0x0020(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_Tools_E_Tools>                       NeedItem_14_73AB4DA445E1664088FE42B557F75145;              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOccupied_17_1E6389D04384F720EEE21C8D27CF43AD;            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
