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

// Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_Tutorial_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.Remove");

	UUI_HUD_Tutorial_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUD_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.Construct");

	UUI_HUD_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Tutorial_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.ChangeSteeringType_Event_1");

	UUI_HUD_Tutorial_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.ExecuteUbergraph_UI_HUD_Tutorial
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Tutorial_C::ExecuteUbergraph_UI_HUD_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Tutorial.UI_HUD_Tutorial_C.ExecuteUbergraph_UI_HUD_Tutorial");

	UUI_HUD_Tutorial_C_ExecuteUbergraph_UI_HUD_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HUD_Tutorial_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_161, UImage);
	READ_PTR_FULL(Image_172, UImage);
	READ_PTR_FULL(Img_Inspector_Gamepad, UImage);
	READ_PTR_FULL(Img_Inspector_Keyboard, UImage);
	READ_PTR_FULL(Img_Tabs_Gamepad, UImage);
	READ_PTR_FULL(Img_Tabs_Keyboard, UImage);
	READ_PTR_FULL(Img_Wheel_Gamepad, UImage);
	READ_PTR_FULL(Img_Wheel_Keyboard, UImage);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(ReturnBox, UHorizontalBox);
	READ_PTR_FULL(TabsBox, UHorizontalBox);
	READ_PTR_FULL(txt_InspectorLetter, UTextBlock);
	READ_PTR_FULL(txt_TabsLetter, UTextBlock);
	READ_PTR_FULL(txt_WheelLetter, UTextBlock);
	READ_PTR_FULL(WheelBox, UHorizontalBox);
	READ_PTR_FULL(WheelBox_2, UHorizontalBox);
	READ_PTR_FULL(WidgetSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
}

void UUI_HUD_Tutorial_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_161);
	DELE_PTR_FULL(Image_172);
	DELE_PTR_FULL(Img_Inspector_Gamepad);
	DELE_PTR_FULL(Img_Inspector_Keyboard);
	DELE_PTR_FULL(Img_Tabs_Gamepad);
	DELE_PTR_FULL(Img_Tabs_Keyboard);
	DELE_PTR_FULL(Img_Wheel_Gamepad);
	DELE_PTR_FULL(Img_Wheel_Keyboard);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(ReturnBox);
	DELE_PTR_FULL(TabsBox);
	DELE_PTR_FULL(txt_InspectorLetter);
	DELE_PTR_FULL(txt_TabsLetter);
	DELE_PTR_FULL(txt_WheelLetter);
	DELE_PTR_FULL(WheelBox);
	DELE_PTR_FULL(WheelBox_2);
	DELE_PTR_FULL(WidgetSwitcher);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
