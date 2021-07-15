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

void FST_EventHistory_Consequences::AfterRead()
{
	READ_PTR_FULL(Image_9_2D5CBEA14C1E2789A328D886C5E47AA8, UObject);
}

void FST_EventHistory_Consequences::BeforeDelete()
{
	DELE_PTR_FULL(Image_9_2D5CBEA14C1E2789A328D886C5E47AA8);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
