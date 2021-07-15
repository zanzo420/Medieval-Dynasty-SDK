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

void FST_KeyMapping::AfterRead()
{
	READ_PTR_FULL(KeyIcon_8_60E68FF340AF9F62B9D66EB7B7336DC5, UTexture2D);
}

void FST_KeyMapping::BeforeDelete()
{
	DELE_PTR_FULL(KeyIcon_8_60E68FF340AF9F62B9D66EB7B7336DC5);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
