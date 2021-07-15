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

void FBS_AquaticInteraction::AfterRead()
{
	READ_PTR_FULL(Owner_25_3A6C815B42EBA54B541ACB86F6EEFB72, UBP_AquaticInteraction_C);
	READ_PTR_FULL(Surface_41_47A741AB49BD9C26C2B535A8C3CCC99C, ABP_AquaticSurface_C);
}

void FBS_AquaticInteraction::BeforeDelete()
{
	DELE_PTR_FULL(Owner_25_3A6C815B42EBA54B541ACB86F6EEFB72);
	DELE_PTR_FULL(Surface_41_47A741AB49BD9C26C2B535A8C3CCC99C);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
