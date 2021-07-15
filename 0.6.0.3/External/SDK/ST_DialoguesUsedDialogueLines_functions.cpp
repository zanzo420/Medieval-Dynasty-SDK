// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FST_DialoguesUsedDialogueLines::AfterRead()
{
	READ_PTR_FULL(DialogueReference_4_15E6E1304003CF2F1ED1C39896F06447, UDialogue);
}

void FST_DialoguesUsedDialogueLines::BeforeDelete()
{
	DELE_PTR_FULL(DialogueReference_4_15E6E1304003CF2F1ED1C39896F06447);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
