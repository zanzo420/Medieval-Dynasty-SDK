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

void FST_Audio::AfterRead()
{
	READ_PTR_FULL(Sound_6_380709FD43F20E23D7316FB722C3D5B1, USoundCue);
}

void FST_Audio::BeforeDelete()
{
	DELE_PTR_FULL(Sound_6_380709FD43F20E23D7316FB722C3D5B1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
