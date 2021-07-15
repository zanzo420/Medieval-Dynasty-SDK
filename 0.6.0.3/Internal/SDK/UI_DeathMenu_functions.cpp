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

// Function UI_DeathMenu.UI_DeathMenu_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::BackAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.BackAction");

	UUI_DeathMenu_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.CancelAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.CancelAction");

	UUI_DeathMenu_C_CancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.MakeButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::MakeButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.MakeButtonsUnactive");

	UUI_DeathMenu_C_MakeButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.MakeButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DeathMenu_C::MakeButtonActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.MakeButtonActive");

	UUI_DeathMenu_C_MakeButtonActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.ConfirmSelection");

	UUI_DeathMenu_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.DecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.DecreaseIndex");

	UUI_DeathMenu_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.IncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.IncreaseIndex");

	UUI_DeathMenu_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_DeathMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.Construct");

	UUI_DeathMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.Load
// (BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.Load");

	UUI_DeathMenu_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.Quit
// (BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::Quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.Quit");

	UUI_DeathMenu_C_Quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.MainMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::MainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.MainMenu");

	UUI_DeathMenu_C_MainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.SetActivityOnHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_DeathMenu_C::SetActivityOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.SetActivityOnHovered");

	UUI_DeathMenu_C_SetActivityOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DeathMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.Tick");

	UUI_DeathMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DeathMenu.UI_DeathMenu_C.ExecuteUbergraph_UI_DeathMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DeathMenu_C::ExecuteUbergraph_UI_DeathMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathMenu.UI_DeathMenu_C.ExecuteUbergraph_UI_DeathMenu");

	UUI_DeathMenu_C_ExecuteUbergraph_UI_DeathMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
