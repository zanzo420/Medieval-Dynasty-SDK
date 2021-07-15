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

void FST_ItemsToRemove::AfterRead()
{
	READ_PTR_FULL(Place_5_0DFA331D412B8BD93C1D1E83C68C63BA, UInventoryComponent_C);
}

void FST_ItemsToRemove::BeforeDelete()
{
	DELE_PTR_FULL(Place_5_0DFA331D412B8BD93C1D1E83C68C63BA);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
