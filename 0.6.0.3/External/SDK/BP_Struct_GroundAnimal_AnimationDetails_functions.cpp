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

void FBP_Struct_GroundAnimal_AnimationDetails::AfterRead()
{
	READ_PTR_FULL(AnimationMontage_2_6DA37C3447ACA652299A898A2000EAAF, UAnimMontage);
	READ_PTR_FULL(SoundCue_13_451BE7144C74F51BC0DC70ADFE0B2801, USoundBase);
	READ_PTR_FULL(SoundAttenuation_24_A3A2CC34459699273600CBBC45A49025, USoundAttenuation);
	READ_PTR_FULL(SoundConcurrencySettings_27_E79729CA4CF32E587157C498DE58472A, USoundConcurrency);
}

void FBP_Struct_GroundAnimal_AnimationDetails::BeforeDelete()
{
	DELE_PTR_FULL(AnimationMontage_2_6DA37C3447ACA652299A898A2000EAAF);
	DELE_PTR_FULL(SoundCue_13_451BE7144C74F51BC0DC70ADFE0B2801);
	DELE_PTR_FULL(SoundAttenuation_24_A3A2CC34459699273600CBBC45A49025);
	DELE_PTR_FULL(SoundConcurrencySettings_27_E79729CA4CF32E587157C498DE58472A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
