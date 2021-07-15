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

// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUDTutorial_Master_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.Construct");

	UUI_HUDTutorial_Master_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDTutorial_Master_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ChangeSteeringType_Event_1");

	UUI_HUDTutorial_Master_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ExecuteUbergraph_UI_HUDTutorial_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDTutorial_Master_C::ExecuteUbergraph_UI_HUDTutorial_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDTutorial_Master.UI_HUDTutorial_Master_C.ExecuteUbergraph_UI_HUDTutorial_Master");

	UUI_HUDTutorial_Master_C_ExecuteUbergraph_UI_HUDTutorial_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HUDTutorial_Master_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_128, UImage);
	READ_PTR_FULL(Image_243, UImage);
	READ_PTR_FULL(Image_262, UImage);
	READ_PTR_FULL(Image_402, UImage);
	READ_PTR_FULL(Image_435, UImage);
	READ_PTR_FULL(txt_AdditionalInteractionLetter, UTextBlock);
	READ_PTR_FULL(txt_TutorialName, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_6, UWidgetSwitcher);
}

void UUI_HUDTutorial_Master_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_128);
	DELE_PTR_FULL(Image_243);
	DELE_PTR_FULL(Image_262);
	DELE_PTR_FULL(Image_402);
	DELE_PTR_FULL(Image_435);
	DELE_PTR_FULL(txt_AdditionalInteractionLetter);
	DELE_PTR_FULL(txt_TutorialName);
	DELE_PTR_FULL(WidgetSwitcher_6);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
