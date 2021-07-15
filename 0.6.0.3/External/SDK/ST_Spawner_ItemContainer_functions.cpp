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

void FST_Spawner_ItemContainer::AfterRead()
{
	READ_PTR_FULL(ContainerType_12_A18A2CC64B4692A2DFECA385DBE00714, UClass);
}

void FST_Spawner_ItemContainer::BeforeDelete()
{
	DELE_PTR_FULL(ContainerType_12_A18A2CC64B4692A2DFECA385DBE00714);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
