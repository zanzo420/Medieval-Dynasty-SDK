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

void FST_MontagesSettings::AfterRead()
{
	READ_PTR_FULL(Montage_12_DE6E58A144B4F884EC06C6AA4A445833, UAnimMontage);
	READ_PTR_FULL(MontageAimOffset_33_B47A28CE44252F7591A7F282E2B64D61, UBlendSpaceBase);
	READ_PTR_FULL(FullBodyAimOffset_34_504323FE4C20BFC7C5B1C798CA19FEB0, UBlendSpaceBase);
}

void FST_MontagesSettings::BeforeDelete()
{
	DELE_PTR_FULL(Montage_12_DE6E58A144B4F884EC06C6AA4A445833);
	DELE_PTR_FULL(MontageAimOffset_33_B47A28CE44252F7591A7F282E2B64D61);
	DELE_PTR_FULL(FullBodyAimOffset_34_504323FE4C20BFC7C5B1C798CA19FEB0);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
