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

// UserDefinedStruct ST_EventButtons.ST_EventButtons
// 0x0080
struct FST_EventButtons
{
	struct FText                                       ButtonDescription_9_61B964E048FE8FD3F7DCE29EF8954C07;      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ChoiceDescription_11_6848F1D3459C919C20750E91D29E2D0F;     // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ChoiceConsequences_19_982D3469440D924EF8F2D38617091B2F;    // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               ButtonHasEffect_1_28D958FD40C0600954AC74AAE5E29CB8;        // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KKNZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_MasterEventEffect>               EventEffects_5_B4B9BBC44E7B4D7D5B91E3B5D6CB0CC8;           // 0x0050(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_EventButtonRestrictions>         ButtonRestrictions_16_4FF81FA5419B4AFE7982E097A6B6FDB4;    // 0x0060(0x0010) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         NextEvent_23_C43E8D0443A6C27F615857B812C04554;             // 0x0070(0x0010) (Edit, BlueprintVisible, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
