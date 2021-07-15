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

void AP_InitPawn_C::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void AP_InitPawn_C::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
