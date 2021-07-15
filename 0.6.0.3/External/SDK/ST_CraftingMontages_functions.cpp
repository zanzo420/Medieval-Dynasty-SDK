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

void FST_CraftingMontages::AfterRead()
{
	READ_PTR_FULL(Normal_3_B1B627144E85B73329ABA3BC2FE5A418, UAnimMontage);
	READ_PTR_FULL(Fast_4_AEDC26774D63F5CD3A63C1AC1184813A, UAnimMontage);
}

void FST_CraftingMontages::BeforeDelete()
{
	DELE_PTR_FULL(Normal_3_B1B627144E85B73329ABA3BC2FE5A418);
	DELE_PTR_FULL(Fast_4_AEDC26774D63F5CD3A63C1AC1184813A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
