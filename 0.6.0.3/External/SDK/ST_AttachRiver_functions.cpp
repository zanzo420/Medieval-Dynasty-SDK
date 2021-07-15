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

void FST_AttachRiver::AfterRead()
{
	READ_PTR_FULL(RiverToAttachTo_2_C382435048719A7D80BF9288E4A7D726, ABP_FlowmapRiverSystem_C);
}

void FST_AttachRiver::BeforeDelete()
{
	DELE_PTR_FULL(RiverToAttachTo_2_C382435048719A7D80BF9288E4A7D726);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
