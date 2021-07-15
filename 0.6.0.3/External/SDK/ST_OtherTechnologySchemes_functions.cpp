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

void FST_OtherTechnologySchemes::AfterRead()
{
	READ_PTR_FULL(Icon_16_289052504B6139C370BD0E8AB9AD931D, UTexture2D);
}

void FST_OtherTechnologySchemes::BeforeDelete()
{
	DELE_PTR_FULL(Icon_16_289052504B6139C370BD0E8AB9AD931D);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
