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


void UUI_Crosshair_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(AimTarget, UCanvasPanel);
	READ_PTR_FULL(Bottom, UImage);
	READ_PTR_FULL(InteractionTarget, UCanvasPanel);
	READ_PTR_FULL(Left, UImage);
	READ_PTR_FULL(MainTargetPanel, UCanvasPanel);
	READ_PTR_FULL(Right, UImage);
	READ_PTR_FULL(Target, UImage);
	READ_PTR_FULL(Top, UImage);
}

void UUI_Crosshair_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(AimTarget);
	DELE_PTR_FULL(Bottom);
	DELE_PTR_FULL(InteractionTarget);
	DELE_PTR_FULL(Left);
	DELE_PTR_FULL(MainTargetPanel);
	DELE_PTR_FULL(Right);
	DELE_PTR_FULL(Target);
	DELE_PTR_FULL(Top);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
