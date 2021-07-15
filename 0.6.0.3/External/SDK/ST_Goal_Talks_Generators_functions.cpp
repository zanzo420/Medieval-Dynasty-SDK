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

void FST_Goal_Talks_Generators::AfterRead()
{
	READ_PTR_FULL(Dialogue_32_3B0756644ED14D4839EBF88A049F01E2, UDialogue);
}

void FST_Goal_Talks_Generators::BeforeDelete()
{
	DELE_PTR_FULL(Dialogue_32_3B0756644ED14D4839EBF88A049F01E2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
