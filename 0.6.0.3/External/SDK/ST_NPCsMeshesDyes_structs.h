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

// UserDefinedStruct ST_NPCsMeshesDyes.ST_NPCsMeshesDyes
// 0x0480
struct FST_NPCsMeshesDyes
{
	struct FST_NPCItemColors                           Hat_26_D310376F4693906FC3F497862C9092A6;                   // 0x0000(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Neck_25_BC460B904E4C7A10AA47DBB853C50ACE;                  // 0x00C0(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Torso_27_431E37864073747CA163D9B91EC8F44A;                 // 0x0180(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Hands_28_764C0CC74F59888D51BEF1BC9BFAE7C1;                 // 0x0240(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Legs_29_4B9AD6D94A4BE601337F5D9656768619;                  // 0x0300(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Feet_30_2BB60E284A021C6CB0C9D2B5AAD0B96C;                  // 0x03C0(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
