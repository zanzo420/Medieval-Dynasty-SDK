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

void FST_Animal::AfterRead()
{
	READ_PTR_FULL(Class_30_D0C4B42B4F295B36146D578A6C14A960, UClass);
}

void FST_Animal::BeforeDelete()
{
	DELE_PTR_FULL(Class_30_D0C4B42B4F295B36146D578A6C14A960);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
