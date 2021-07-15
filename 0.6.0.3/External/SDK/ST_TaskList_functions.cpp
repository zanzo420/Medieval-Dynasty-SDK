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

void FST_TaskList::AfterRead()
{
	READ_PTR_FULL(Actor_16_29C1BEF147C0C999E5C033BCC3886B0E, AActor);
}

void FST_TaskList::BeforeDelete()
{
	DELE_PTR_FULL(Actor_16_29C1BEF147C0C999E5C033BCC3886B0E);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
