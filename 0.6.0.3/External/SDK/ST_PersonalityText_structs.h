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

// UserDefinedStruct ST_PersonalityText.ST_PersonalityText
// 0x0050
struct FST_PersonalityText
{
	TMap<TEnumAsByte<E_NPCPersonality_E_NPCPersonality>, struct FText> Text_4_8677E1D044EE3779BC99309078DA8BCE;                   // 0x0000(0x0050) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
