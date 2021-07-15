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

void FST_Skills::AfterRead()
{
	READ_PTR_FULL(Icon_19_66080C2A4E15D66F84D68AB8B101A3EE, UTexture2D);
}

void FST_Skills::BeforeDelete()
{
	DELE_PTR_FULL(Icon_19_66080C2A4E15D66F84D68AB8B101A3EE);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
