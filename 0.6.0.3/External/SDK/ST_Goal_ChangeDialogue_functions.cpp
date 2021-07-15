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

void FST_Goal_ChangeDialogue::AfterRead()
{
	READ_PTR_FULL(Dialogue_5_FA9C9120432A57509FE158A2A9871FC7, UDialogue);
}

void FST_Goal_ChangeDialogue::BeforeDelete()
{
	DELE_PTR_FULL(Dialogue_5_FA9C9120432A57509FE158A2A9871FC7);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
