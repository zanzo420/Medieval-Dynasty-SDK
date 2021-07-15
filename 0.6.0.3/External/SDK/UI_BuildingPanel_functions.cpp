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

// Function UI_BuildingPanel.UI_BuildingPanel_C.Update HUDBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// UMG_ESlateVisibility           Action1Visibility              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Action1                        (BlueprintVisible, BlueprintReadOnly, Parm)
// UMG_ESlateVisibility           Action2Visibility              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Action2                        (BlueprintVisible, BlueprintReadOnly, Parm)
// UMG_ESlateVisibility           Action3Visibility              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Action3                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> WarningType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingPanel_C::Update_HUDBuilding(UMG_ESlateVisibility Visibility, const struct FText& Name, UMG_ESlateVisibility Action1Visibility, const struct FText& Action1, UMG_ESlateVisibility Action2Visibility, const struct FText& Action2, UMG_ESlateVisibility Action3Visibility, const struct FText& Action3, TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> WarningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingPanel.UI_BuildingPanel_C.Update HUDBuilding");

	UUI_BuildingPanel_C_Update_HUDBuilding_Params params;
	params.Visibility = Visibility;
	params.Name = Name;
	params.Action1Visibility = Action1Visibility;
	params.Action1 = Action1;
	params.Action2Visibility = Action2Visibility;
	params.Action2 = Action2;
	params.Action3Visibility = Action3Visibility;
	params.Action3 = Action3;
	params.WarningType = WarningType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingPanel.UI_BuildingPanel_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingPanel_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingPanel.UI_BuildingPanel_C.ChangeSteeringType_Event_1");

	UUI_BuildingPanel_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingPanel.UI_BuildingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingPanel.UI_BuildingPanel_C.Construct");

	UUI_BuildingPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingPanel.UI_BuildingPanel_C.UpdateIcons
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingPanel_C::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingPanel.UI_BuildingPanel_C.UpdateIcons");

	UUI_BuildingPanel_C_UpdateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingPanel.UI_BuildingPanel_C.ExecuteUbergraph_UI_BuildingPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingPanel_C::ExecuteUbergraph_UI_BuildingPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingPanel.UI_BuildingPanel_C.ExecuteUbergraph_UI_BuildingPanel");

	UUI_BuildingPanel_C_ExecuteUbergraph_UI_BuildingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingPanel_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Action1_txt, UTextBlock);
	READ_PTR_FULL(Action2_txt, UTextBlock);
	READ_PTR_FULL(Action3_txt, UTextBlock);
	READ_PTR_FULL(ActionBox1, UHorizontalBox);
	READ_PTR_FULL(ActionBox2, UHorizontalBox);
	READ_PTR_FULL(ActionBox3, UHorizontalBox);
	READ_PTR_FULL(BuildingWarning_txt, UTextBlock);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Mainpanel, UVerticalBox);
	READ_PTR_FULL(Name_txt, UTextBlock);
	READ_PTR_FULL(txt_NextLetter, UTextBlock);
	READ_PTR_FULL(txt_PreviousLetter, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_4, UWidgetSwitcher);
	READ_PTR_FULL(HudReference, UUI_HUD_C);
}

void UUI_BuildingPanel_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Action1_txt);
	DELE_PTR_FULL(Action2_txt);
	DELE_PTR_FULL(Action3_txt);
	DELE_PTR_FULL(ActionBox1);
	DELE_PTR_FULL(ActionBox2);
	DELE_PTR_FULL(ActionBox3);
	DELE_PTR_FULL(BuildingWarning_txt);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Mainpanel);
	DELE_PTR_FULL(Name_txt);
	DELE_PTR_FULL(txt_NextLetter);
	DELE_PTR_FULL(txt_PreviousLetter);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
	DELE_PTR_FULL(WidgetSwitcher_4);
	DELE_PTR_FULL(HudReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
