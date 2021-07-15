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

// UserDefinedStruct ST_OutfitsPresets.ST_OutfitsPresets
// 0x00C0
struct FST_OutfitsPresets
{
	struct FST_ItemColors                              Neck_23_BC460B904E4C7A10AA47DBB853C50ACE;                  // 0x0000(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemColors                              Hat_18_D310376F4693906FC3F497862C9092A6;                   // 0x0020(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemColors                              Torso_19_431E37864073747CA163D9B91EC8F44A;                 // 0x0040(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemColors                              Hands_20_764C0CC74F59888D51BEF1BC9BFAE7C1;                 // 0x0060(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemColors                              Legs_21_4B9AD6D94A4BE601337F5D9656768619;                  // 0x0080(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemColors                              Feet_22_2BB60E284A021C6CB0C9D2B5AAD0B96C;                  // 0x00A0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
