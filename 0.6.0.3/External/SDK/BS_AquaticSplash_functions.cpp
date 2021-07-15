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

void FBS_AquaticSplash::AfterRead()
{
	READ_PTR_FULL(SplashEffect_81_F337123A4FC29A0A7A8D348B0A40CDC4, UParticleSystem);
	READ_PTR_FULL(SplashSound_82_67AECE484557324346A8ABB042603C86, USoundCue);
}

void FBS_AquaticSplash::BeforeDelete()
{
	DELE_PTR_FULL(SplashEffect_81_F337123A4FC29A0A7A8D348B0A40CDC4);
	DELE_PTR_FULL(SplashSound_82_67AECE484557324346A8ABB042603C86);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
