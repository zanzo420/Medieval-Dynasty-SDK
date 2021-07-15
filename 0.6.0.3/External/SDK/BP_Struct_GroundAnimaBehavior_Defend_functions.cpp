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

void FBP_Struct_GroundAnimaBehavior_Defend::AfterRead()
{
	READ_PTR_FULL(SpecificDefenseLocation_13_0127B8504C11C623F2566896CB903011, ABP_AI_DefendLocation_C);
}

void FBP_Struct_GroundAnimaBehavior_Defend::BeforeDelete()
{
	DELE_PTR_FULL(SpecificDefenseLocation_13_0127B8504C11C623F2566896CB903011);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
