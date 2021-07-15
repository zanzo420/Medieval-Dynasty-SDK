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

// Function UI_GameMenu.UI_GameMenu_C.CreateMenuNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Notifications_E_Notifications> NotificationType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          NotificationTimeOut            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_C::CreateMenuNotification(TEnumAsByte<E_Notifications_E_Notifications> NotificationType, const struct FText& WarningText, float NotificationTimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.CreateMenuNotification");

	UUI_GameMenu_C_CreateMenuNotification_Params params;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeOut = NotificationTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.PreviousSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.PreviousSection");

	UUI_GameMenu_C_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.NextSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.NextSection");

	UUI_GameMenu_C_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.AdditionalAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::AdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.AdditionalAction");

	UUI_GameMenu_C_AdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.DropAction");

	UUI_GameMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.CancelAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.CancelAction");

	UUI_GameMenu_C_CancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.MakeButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::MakeButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.MakeButtonsUnactive");

	UUI_GameMenu_C_MakeButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.MakeButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_C::MakeButtonActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.MakeButtonActive");

	UUI_GameMenu_C_MakeButtonActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.ConfirmSelection");

	UUI_GameMenu_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.DecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.DecreaseIndex");

	UUI_GameMenu_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.IncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.IncreaseIndex");

	UUI_GameMenu_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Construct");

	UUI_GameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Resume
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Resume");

	UUI_GameMenu_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Save
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Save");

	UUI_GameMenu_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Load
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Load");

	UUI_GameMenu_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Quit
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Quit");

	UUI_GameMenu_C_Quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.MainMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::MainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.MainMenu");

	UUI_GameMenu_C_MainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Settings
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Settings");

	UUI_GameMenu_C_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.SetActivityOnHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::SetActivityOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.SetActivityOnHovered");

	UUI_GameMenu_C_SetActivityOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Tick");

	UUI_GameMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.Unstuck
// (BlueprintCallable, BlueprintEvent)
void UUI_GameMenu_C::Unstuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Unstuck");

	UUI_GameMenu_C_Unstuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GameMenu_C::ExecuteUbergraph_UI_GameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu");

	UUI_GameMenu_C_ExecuteUbergraph_UI_GameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_GameMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(BorderMainMenuAcceptation, UBorder);
	READ_PTR_FULL(BorderQuitAcceptation, UBorder);
	READ_PTR_FULL(btn_Load, UUI_MenuButton_C);
	READ_PTR_FULL(btn_MainMenu, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Quit, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Resume, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Save, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Settings, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Unstuck, UUI_MenuButton_C);
	READ_PTR_FULL(Logo, UImage);
	READ_PTR_FULL(LowerMenuBar, UImage);
	READ_PTR_FULL(Main, UVerticalBox);
	READ_PTR_FULL(NotificationPanel, UVerticalBox);
	READ_PTR_FULL(SettingsField, UUI_OptionsVerticalMenu_C);
	READ_PTR_FULL(UI_LoadMenu, UUI_LoadMenu_C);
	READ_PTR_FULL(UI_SaveMenu, UUI_SaveMenu_C);
	READ_PTR_FULL(UpperMenuBar, UImage);
	READ_PTR_FULL(GameInstanceReference, UGI_MedievalDynasty_C);
}

void UUI_GameMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(BorderMainMenuAcceptation);
	DELE_PTR_FULL(BorderQuitAcceptation);
	DELE_PTR_FULL(btn_Load);
	DELE_PTR_FULL(btn_MainMenu);
	DELE_PTR_FULL(btn_Quit);
	DELE_PTR_FULL(btn_Resume);
	DELE_PTR_FULL(btn_Save);
	DELE_PTR_FULL(btn_Settings);
	DELE_PTR_FULL(btn_Unstuck);
	DELE_PTR_FULL(Logo);
	DELE_PTR_FULL(LowerMenuBar);
	DELE_PTR_FULL(Main);
	DELE_PTR_FULL(NotificationPanel);
	DELE_PTR_FULL(SettingsField);
	DELE_PTR_FULL(UI_LoadMenu);
	DELE_PTR_FULL(UI_SaveMenu);
	DELE_PTR_FULL(UpperMenuBar);
	DELE_PTR_FULL(GameInstanceReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
