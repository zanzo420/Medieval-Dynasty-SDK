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

void FST_Challange::AfterRead()
{
	READ_PTR_FULL(Icon_39_BA7F728F4A22F6E2C18E32A07885F495, UTexture2D);
}

void FST_Challange::BeforeDelete()
{
	DELE_PTR_FULL(Icon_39_BA7F728F4A22F6E2C18E32A07885F495);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
