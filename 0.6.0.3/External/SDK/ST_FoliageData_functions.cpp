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

void FST_FoliageData::AfterRead()
{
	READ_PTR_FULL(FoliageType_23_16BE06A44A565BC6FE7DD4B660E8A01F, UFoliageType);
}

void FST_FoliageData::BeforeDelete()
{
	DELE_PTR_FULL(FoliageType_23_16BE06A44A565BC6FE7DD4B660E8A01F);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
