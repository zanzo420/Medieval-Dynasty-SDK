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

void FBP_Struct_GroundAnimalBehavior_Location::AfterRead()
{
	READ_PTR_FULL(BoundsReference_5_4EFA7D8F43D0E4DC1E054CA2C6374E21, ABP_AI_BoundingBox_C);
}

void FBP_Struct_GroundAnimalBehavior_Location::BeforeDelete()
{
	DELE_PTR_FULL(BoundsReference_5_4EFA7D8F43D0E4DC1E054CA2C6374E21);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
