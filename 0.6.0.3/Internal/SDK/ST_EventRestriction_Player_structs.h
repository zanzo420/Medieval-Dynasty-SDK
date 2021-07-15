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

// UserDefinedStruct ST_EventRestriction_Player.ST_EventRestriction_Player
// 0x0030
struct FST_EventRestriction_Player
{
	TArray<struct FST_ItemRestriction>                 ItemsRequired_28_F48695864C748CD3FA87AE82AFE3180E;         // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SkillRestriction>                SkillsRequired_23_3A3FAD5F4CC75D16B56AE89D8613C280;        // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_BuildingTechnology>              TechnologiesRequired_24_1E99C8F8422447CE8D4EC799F69FC052;  // 0x0020(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
