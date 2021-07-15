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

// UserDefinedStruct ST_Gift.ST_Gift
// 0x00A8
struct FST_Gift
{
	int                                                AffectionRequired_10_6DFBA48A4DABC1CD143505AC1C1AA65C;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0810[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_NPCPersonality_E_NPCPersonality>, struct FST_AffectionDialogueResponse> Responses_13_086D631444BF6C59DE545691EDD531C3;             // 0x0008(0x0050) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_NPCPersonality_E_NPCPersonality>, struct FST_WifeGifts> WifeResponses_20_A4DBD63B45B7A939BB93CEB98A91DC81;         // 0x0058(0x0050) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
