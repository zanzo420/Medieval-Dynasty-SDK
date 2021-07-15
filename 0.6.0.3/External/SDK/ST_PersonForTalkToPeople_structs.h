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

// UserDefinedStruct ST_PersonForTalkToPeople.ST_PersonForTalkToPeople
// 0x0030
struct FST_PersonForTalkToPeople
{
	struct FString                                     NPCID_6_DDDDFD72468A14A11EB67599BF6C7EFE;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       NPCName_7_C067FE85451DDBE0497C9EB232AFD527;                // 0x0010(0x0018) (Edit, BlueprintVisible)
	class UDialogue*                                   Dialogue_8_D48C00E5471AA1D06CBD038995B4EED5;               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
