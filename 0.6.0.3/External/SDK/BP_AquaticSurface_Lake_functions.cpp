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

// Function BP_AquaticSurface_Lake.BP_AquaticSurface_Lake_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_Lake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface_Lake.BP_AquaticSurface_Lake_C.UserConstructionScript");

	ABP_AquaticSurface_Lake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AquaticSurface_Lake_C::AfterRead()
{
	ABP_AquaticSurface_C::AfterRead();

}

void ABP_AquaticSurface_Lake_C::BeforeDelete()
{
	ABP_AquaticSurface_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
