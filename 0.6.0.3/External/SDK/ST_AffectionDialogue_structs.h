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

// UserDefinedStruct ST_AffectionDialogue.ST_AffectionDialogue
// 0x0070
struct FST_AffectionDialogue
{
	struct FText                                       PlayerText_11_6750B7DC4E459D372402DC832C06909B;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Weight_24_0391040442749056E5786ABCF1E73A95;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AffectionLevelRequired_19_BAA1659B4B25FEDFB40A1892E72108DA; // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_NPCPersonality_E_NPCPersonality>, struct FST_AffectionDialogueResponse> Responses_27_65E465D5453F85FC184874A729270506;             // 0x0020(0x0050) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
