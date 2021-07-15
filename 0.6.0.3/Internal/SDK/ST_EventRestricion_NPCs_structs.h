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

// UserDefinedStruct ST_EventRestricion_NPCs.ST_EventRestricion_NPCs
// 0x0060
struct FST_EventRestricion_NPCs
{
	bool                                               MoodBelow__7_6AEB39CF471F7655A004009BB1D82CAB;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H3D5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mood_8_227D677A441A00ADBFAAFFA3331CB44C;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredVillagers_5_D481538C4C5A42522929988AB0F152DC;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DX93[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ExcludeAge_13_3E61C5C7433F527AA721CEA267416F1F[0x50];      // 0x000C(0x0050) UNKNOWN PROPERTY: SetProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
