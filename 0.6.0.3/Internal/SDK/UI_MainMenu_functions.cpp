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

// Function UI_MainMenu.UI_MainMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MainMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnKeyDown");

	UUI_MainMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_MainMenu.UI_MainMenu_C.PreviousSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.PreviousSection");

	UUI_MainMenu_C_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.NextSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.NextSection");

	UUI_MainMenu_C_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.CheckContinueVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::CheckContinueVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CheckContinueVisibility");

	UUI_MainMenu_C_CheckContinueVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.GetSaveFileNameForContinue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveSlotName                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                           SaveSlotFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::GetSaveFileNameForContinue(struct FString* SaveSlotName, bool* SaveSlotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetSaveFileNameForContinue");

	UUI_MainMenu_C_GetSaveFileNameForContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveSlotName != nullptr)
		*SaveSlotName = params.SaveSlotName;
	if (SaveSlotFound != nullptr)
		*SaveSlotFound = params.SaveSlotFound;

}


// Function UI_MainMenu.UI_MainMenu_C.AdditionalAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::AdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.AdditionalAction");

	UUI_MainMenu_C_AdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.DropAction");

	UUI_MainMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.CancelAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CancelAction");

	UUI_MainMenu_C_CancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.MakeButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::MakeButtonActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.MakeButtonActive");

	UUI_MainMenu_C_MakeButtonActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.MakeButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::MakeButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.MakeButtonsUnactive");

	UUI_MainMenu_C_MakeButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ConfirmSelection");

	UUI_MainMenu_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.DecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.DecreaseIndex");

	UUI_MainMenu_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.IncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.IncreaseIndex");

	UUI_MainMenu_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");

	UUI_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.NewGame
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::NewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.NewGame");

	UUI_MainMenu_C_NewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Quit
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Quit");

	UUI_MainMenu_C_Quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Load
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Load");

	UUI_MainMenu_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Settings
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Settings");

	UUI_MainMenu_C_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.SetActivityOnHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::SetActivityOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SetActivityOnHovered");

	UUI_MainMenu_C_SetActivityOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Tick");

	UUI_MainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Continue
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Continue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Continue");

	UUI_MainMenu_C_Continue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.FadeAnimation");

	UUI_MainMenu_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.Credits
// (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Credits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Credits");

	UUI_MainMenu_C_Credits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");

	UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
