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

void FST_Spawner_Furniture::AfterRead()
{
	READ_PTR_FULL(Furniture_6_38EB51A04B0595524F9162A86C7DABF9, UClass);
}

void FST_Spawner_Furniture::BeforeDelete()
{
	DELE_PTR_FULL(Furniture_6_38EB51A04B0595524F9162A86C7DABF9);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
