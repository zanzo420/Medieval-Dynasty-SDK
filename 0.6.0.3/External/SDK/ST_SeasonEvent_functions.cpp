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

void FST_SeasonEvent::AfterRead()
{
	READ_PTR_FULL(Icon_9_29BD7BC143913E397216ADACC3B15161, UTexture2D);
}

void FST_SeasonEvent::BeforeDelete()
{
	DELE_PTR_FULL(Icon_9_29BD7BC143913E397216ADACC3B15161);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
