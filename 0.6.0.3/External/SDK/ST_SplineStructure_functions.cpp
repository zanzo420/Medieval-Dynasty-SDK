﻿// Name: Medieval Dynasty, Version: 0.6.0.3

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

void FST_SplineStructure::AfterRead()
{
	READ_PTR_FULL(BuildingClass_92_D0A4637948415EDC3BB10E8473C522F5, UClass);
}

void FST_SplineStructure::BeforeDelete()
{
	DELE_PTR_FULL(BuildingClass_92_D0A4637948415EDC3BB10E8473C522F5);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
