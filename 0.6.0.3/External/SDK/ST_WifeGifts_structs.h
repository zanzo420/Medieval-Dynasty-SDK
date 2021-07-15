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

// UserDefinedStruct ST_WifeGifts.ST_WifeGifts
// 0x0048
struct FST_WifeGifts
{
	struct FText                                       TierDialogue_2_4E4A3ECC42BE753CD5843D8C70B1EA81;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LowAffectionDialogue_4_9840EED64CACCCFB01E99F88625F0D03;   // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       VeryLowAffectionDialogue_6_896DE3144453D206B96E97BA325B294B; // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
