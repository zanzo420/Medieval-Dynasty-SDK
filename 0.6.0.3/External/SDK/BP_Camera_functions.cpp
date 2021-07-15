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

// Function BP_Camera.BP_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Camera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.UserConstructionScript");

	ABP_Camera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Camera_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(FP_ActionCamera, UCameraComponent);
}

void ABP_Camera_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(FP_ActionCamera);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
