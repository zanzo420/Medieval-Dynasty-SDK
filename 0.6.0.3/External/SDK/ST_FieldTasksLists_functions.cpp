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

void FST_FieldTasksLists::AfterRead()
{
	READ_PTR_FULL(Field_2_DB0F6D89450FE553DDE6618319FC7170, ABP_MasterField_C);
}

void FST_FieldTasksLists::BeforeDelete()
{
	DELE_PTR_FULL(Field_2_DB0F6D89450FE553DDE6618319FC7170);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
