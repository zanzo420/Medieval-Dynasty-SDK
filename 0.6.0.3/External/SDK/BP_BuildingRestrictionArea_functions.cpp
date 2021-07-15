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

// Function BP_BuildingRestrictionArea.BP_BuildingRestrictionArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BuildingRestrictionArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildingRestrictionArea.BP_BuildingRestrictionArea_C.UserConstructionScript");

	ABP_BuildingRestrictionArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BuildingRestrictionArea_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
}

void ABP_BuildingRestrictionArea_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(TextRender);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
