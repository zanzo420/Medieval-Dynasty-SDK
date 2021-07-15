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

void FST_DayPreset::AfterRead()
{
	READ_PTR_FULL(CloudAndFogDensity_10_B8BA982143CEDB57993E17BEE89241DE, UCurveVector);
	READ_PTR_FULL(Wind_9_6527C6BB4A47F9245B420D99FEEF1CE6, UCurveFloat);
}

void FST_DayPreset::BeforeDelete()
{
	DELE_PTR_FULL(CloudAndFogDensity_10_B8BA982143CEDB57993E17BEE89241DE);
	DELE_PTR_FULL(Wind_9_6527C6BB4A47F9245B420D99FEEF1CE6);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
