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

void FST_FoliageTarget::AfterRead()
{
	READ_PTR_FULL(Actor_34_2550C8EC41E9EE703055EC8A263CB2E5, AActor);
	READ_PTR_FULL(FoliageType_27_16BE06A44A565BC6FE7DD4B660E8A01F, UHierarchicalInstancedStaticMeshComponent);
}

void FST_FoliageTarget::BeforeDelete()
{
	DELE_PTR_FULL(Actor_34_2550C8EC41E9EE703055EC8A263CB2E5);
	DELE_PTR_FULL(FoliageType_27_16BE06A44A565BC6FE7DD4B660E8A01F);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
