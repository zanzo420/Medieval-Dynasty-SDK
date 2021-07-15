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

// Function UI_Crosshair.UI_Crosshair_C.ChangeCrosshairStateCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Crosshair_C::ChangeCrosshairStateCrosshair(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.ChangeCrosshairStateCrosshair");

	UUI_Crosshair_C_ChangeCrosshairStateCrosshair_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
