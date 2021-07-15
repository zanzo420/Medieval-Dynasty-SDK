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

void FST_MasterTalent::AfterRead()
{
	READ_PTR_FULL(Icon_10_2523E89E4DBBE1B81F29B491E7BB8D09, UTexture2D);
}

void FST_MasterTalent::BeforeDelete()
{
	DELE_PTR_FULL(Icon_10_2523E89E4DBBE1B81F29B491E7BB8D09);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
