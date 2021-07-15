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

void FBP_Struct_GroundAnimal_CurrentMontage::AfterRead()
{
	READ_PTR_FULL(Montagereference_9_86C690CD42133702D2013099FDC09C3C, UAnimMontage);
}

void FBP_Struct_GroundAnimal_CurrentMontage::BeforeDelete()
{
	DELE_PTR_FULL(Montagereference_9_86C690CD42133702D2013099FDC09C3C);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
