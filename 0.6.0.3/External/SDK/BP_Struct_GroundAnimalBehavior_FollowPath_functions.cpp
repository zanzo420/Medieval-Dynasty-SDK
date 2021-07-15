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

void FBP_Struct_GroundAnimalBehavior_FollowPath::AfterRead()
{
	READ_PTR_FULL(PathToFollow_13_F43683A1458A5AC61898FA99BEA48DFF, ABP_AIPath_C);
}

void FBP_Struct_GroundAnimalBehavior_FollowPath::BeforeDelete()
{
	DELE_PTR_FULL(PathToFollow_13_F43683A1458A5AC61898FA99BEA48DFF);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
