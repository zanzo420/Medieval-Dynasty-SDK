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

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DropAction");

	UUI_NewGameConfigurationMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AdditionalAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::AdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AdditionalAction");

	UUI_NewGameConfigurationMenu_C_AdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.OptionsCancel
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::OptionsCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.OptionsCancel");

	UUI_NewGameConfigurationMenu_C_OptionsCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ConfirmMainSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::ConfirmMainSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ConfirmMainSelection");

	UUI_NewGameConfigurationMenu_C_ConfirmMainSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseIndex");

	UUI_NewGameConfigurationMenu_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseIndex");

	UUI_NewGameConfigurationMenu_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::MakeMainButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonsUnactive");

	UUI_NewGameConfigurationMenu_C_MakeMainButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::MakeMainButtonActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonActive");

	UUI_NewGameConfigurationMenu_C_MakeMainButtonActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetCurrentTabButtonID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::SetCurrentTabButtonID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetCurrentTabButtonID");

	UUI_NewGameConfigurationMenu_C_SetCurrentTabButtonID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseHorizontalID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::IncreaseHorizontalID(int* Target, int Max, int Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseHorizontalID");

	UUI_NewGameConfigurationMenu_C_IncreaseHorizontalID_Params params;
	params.Max = Max;
	params.Min = Min;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseHorizontalID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::DecreaseHorizontalID(int* Target, int Max, int Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseHorizontalID");

	UUI_NewGameConfigurationMenu_C_DecreaseHorizontalID_Params params;
	params.Max = Max;
	params.Min = Min;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Construct");

	UUI_NewGameConfigurationMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsLeftArrow
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::SettingsLeftArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsLeftArrow");

	UUI_NewGameConfigurationMenu_C_SettingsLeftArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsRightArrow
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::SettingsRightArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsRightArrow");

	UUI_NewGameConfigurationMenu_C_SettingsRightArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Back
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Back");

	UUI_NewGameConfigurationMenu_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeActive");

	UUI_NewGameConfigurationMenu_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeUnactive");

	UUI_NewGameConfigurationMenu_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::SetActivityOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered");

	UUI_NewGameConfigurationMenu_C_SetActivityOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Tick");

	UUI_NewGameConfigurationMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AcceptSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::AcceptSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AcceptSettings");

	UUI_NewGameConfigurationMenu_C_AcceptSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.RejectSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::RejectSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.RejectSettings");

	UUI_NewGameConfigurationMenu_C_RejectSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.CancelSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::CancelSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.CancelSettings");

	UUI_NewGameConfigurationMenu_C_CancelSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.GameSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::GameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.GameSettings");

	UUI_NewGameConfigurationMenu_C_GameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered_Game
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::SetActivityOnHovered_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered_Game");

	UUI_NewGameConfigurationMenu_C_SetActivityOnHovered_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_NewGameConfigurationMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ChangeSteeringType_Event_1");

	UUI_NewGameConfigurationMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void UUI_NewGameConfigurationMenu_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.StartGame");

	UUI_NewGameConfigurationMenu_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ExecuteUbergraph_UI_NewGameConfigurationMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NewGameConfigurationMenu_C::ExecuteUbergraph_UI_NewGameConfigurationMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ExecuteUbergraph_UI_NewGameConfigurationMenu");

	UUI_NewGameConfigurationMenu_C_ExecuteUbergraph_UI_NewGameConfigurationMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
