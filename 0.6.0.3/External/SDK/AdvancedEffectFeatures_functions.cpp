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

void FAdvancedEffectFeatures::AfterRead()
{
	READ_PTR_FULL(BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5, UTexture2D);
}

void FAdvancedEffectFeatures::BeforeDelete()
{
	DELE_PTR_FULL(BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
