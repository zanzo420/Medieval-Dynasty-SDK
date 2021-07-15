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

void FST_PersonForTalkToPeople::AfterRead()
{
	READ_PTR_FULL(Dialogue_8_D48C00E5471AA1D06CBD038995B4EED5, UDialogue);
}

void FST_PersonForTalkToPeople::BeforeDelete()
{
	DELE_PTR_FULL(Dialogue_8_D48C00E5471AA1D06CBD038995B4EED5);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
