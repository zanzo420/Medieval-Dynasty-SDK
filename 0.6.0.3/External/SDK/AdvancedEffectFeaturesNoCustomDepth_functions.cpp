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

void FAdvancedEffectFeaturesNoCustomDepth::AfterRead()
{
	READ_PTR_FULL(BlendMask_15_664A106449FD3C01747ABC9174124057, UTexture2D);
}

void FAdvancedEffectFeaturesNoCustomDepth::BeforeDelete()
{
	DELE_PTR_FULL(BlendMask_15_664A106449FD3C01747ABC9174124057);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
