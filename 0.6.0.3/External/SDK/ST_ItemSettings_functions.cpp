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

void FST_ItemSettings::AfterRead()
{
	READ_PTR_FULL(Icon_13_97F7A1E7482864A723E09AA3C0F762D3, UTexture2D);
	READ_PTR_FULL(Consume_Sound_84_FCF2F9CD4059189844F19E95C474BFE1, USoundCue);
}

void FST_ItemSettings::BeforeDelete()
{
	DELE_PTR_FULL(Icon_13_97F7A1E7482864A723E09AA3C0F762D3);
	DELE_PTR_FULL(Consume_Sound_84_FCF2F9CD4059189844F19E95C474BFE1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
