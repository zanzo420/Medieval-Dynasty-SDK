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

void FST_CharacterRelations::AfterRead()
{
	READ_PTR_FULL(Father_2_15777FB74D41F8E97E9C37A5D4AE1CA9, ABP_BaseCharacter_C);
	READ_PTR_FULL(Mother_4_66584BE24C00871ABA0368820EE0A8EA, ABP_BaseCharacter_C);
	READ_PTR_FULL(Partner_6_3F5D77D24556911A866BADA4ECA84BB1, ABP_BaseCharacter_C);
}

void FST_CharacterRelations::BeforeDelete()
{
	DELE_PTR_FULL(Father_2_15777FB74D41F8E97E9C37A5D4AE1CA9);
	DELE_PTR_FULL(Mother_4_66584BE24C00871ABA0368820EE0A8EA);
	DELE_PTR_FULL(Partner_6_3F5D77D24556911A866BADA4ECA84BB1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
