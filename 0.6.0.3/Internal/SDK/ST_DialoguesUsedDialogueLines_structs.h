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

// UserDefinedStruct ST_DialoguesUsedDialogueLines.ST_DialoguesUsedDialogueLines
// 0x0058
struct FST_DialoguesUsedDialogueLines
{
	class UDialogue*                                   DialogueReference_4_15E6E1304003CF2F1ED1C39896F06447;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int, struct FST_LineState>                    LinesStates_11_CC7CFB4F4CE96AE80D985EB510E1535C;           // 0x0008(0x0050) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
