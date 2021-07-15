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

// Function UI_HUD_Status_ExtractionTrance.UI_HUD_Status_ExtractionTrance_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUD_Status_ExtractionTrance_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Status_ExtractionTrance.UI_HUD_Status_ExtractionTrance_C.Construct");

	UUI_HUD_Status_ExtractionTrance_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_Status_ExtractionTrance.UI_HUD_Status_ExtractionTrance_C.ExecuteUbergraph_UI_HUD_Status_ExtractionTrance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Status_ExtractionTrance_C::ExecuteUbergraph_UI_HUD_Status_ExtractionTrance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Status_ExtractionTrance.UI_HUD_Status_ExtractionTrance_C.ExecuteUbergraph_UI_HUD_Status_ExtractionTrance");

	UUI_HUD_Status_ExtractionTrance_C_ExecuteUbergraph_UI_HUD_Status_ExtractionTrance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HUD_Status_ExtractionTrance_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icn_TimerBar, UImage);
	READ_PTR_FULL(Img_TranceIcon, UImage);
	READ_PTR_FULL(StatusWoodcutterTrance, UCanvasPanel);
	READ_PTR_FULL(txt_NumberOfStacks, UTextBlock);
}

void UUI_HUD_Status_ExtractionTrance_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icn_TimerBar);
	DELE_PTR_FULL(Img_TranceIcon);
	DELE_PTR_FULL(StatusWoodcutterTrance);
	DELE_PTR_FULL(txt_NumberOfStacks);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
