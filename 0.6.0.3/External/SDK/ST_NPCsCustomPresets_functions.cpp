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

void FST_NPCsCustomPresets::AfterRead()
{
	READ_PTR_FULL(Head_10_189903684BD0EF902406DFB9C9D3B56C, USkeletalMesh);
	READ_PTR_FULL(Hair_11_89F3A23D4D3193FB806071AA61D4499E, USkeletalMesh);
}

void FST_NPCsCustomPresets::BeforeDelete()
{
	DELE_PTR_FULL(Head_10_189903684BD0EF902406DFB9C9D3B56C);
	DELE_PTR_FULL(Hair_11_89F3A23D4D3193FB806071AA61D4499E);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
