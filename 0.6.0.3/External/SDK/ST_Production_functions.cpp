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

void FST_Production::AfterRead()
{
	READ_PTR_FULL(ProductionSettings_22_FF939E4D4A468967A937A4B85AA7F808, UDataTable);
}

void FST_Production::BeforeDelete()
{
	DELE_PTR_FULL(ProductionSettings_22_FF939E4D4A468967A937A4B85AA7F808);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
