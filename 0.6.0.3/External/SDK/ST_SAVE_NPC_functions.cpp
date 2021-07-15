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

void FST_SAVE_NPC::AfterRead()
{
	READ_PTR_FULL(ActualDialogue_184_DFBB0C574C2ACE6F2A459CAF7B26DF31, UDialogue);
}

void FST_SAVE_NPC::BeforeDelete()
{
	DELE_PTR_FULL(ActualDialogue_184_DFBB0C574C2ACE6F2A459CAF7B26DF31);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
