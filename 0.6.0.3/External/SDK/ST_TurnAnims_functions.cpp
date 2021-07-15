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

void FST_TurnAnims::AfterRead()
{
	READ_PTR_FULL(Turn_L_Anim_2_983C7A52403A1B48BAEA18970749A107, UAnimMontage);
	READ_PTR_FULL(Turn_R_Anim_4_7EC252344532506C7E1C019B7FA474B1, UAnimMontage);
}

void FST_TurnAnims::BeforeDelete()
{
	DELE_PTR_FULL(Turn_L_Anim_2_983C7A52403A1B48BAEA18970749A107);
	DELE_PTR_FULL(Turn_R_Anim_4_7EC252344532506C7E1C019B7FA474B1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
