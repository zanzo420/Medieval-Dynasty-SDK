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

// Function UI_SaveGameSlot.UI_SaveGameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_SaveGameSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.Construct");

	UUI_SaveGameSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveGameSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.MakeActive");

	UUI_SaveGameSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveGameSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.MakeUnactive");

	UUI_SaveGameSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SaveGameSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.PreConstruct");

	UUI_SaveGameSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveGameSlot_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveGameSlot_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.UpdateGameTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                GameTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime               ComputerTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UUI_SaveGameSlot_C::UpdateGameTime(const struct FST_Time& GameTime, const struct FDateTime& ComputerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.UpdateGameTime");

	UUI_SaveGameSlot_C_UpdateGameTime_Params params;
	params.GameTime = GameTime;
	params.ComputerTime = ComputerTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot.UI_SaveGameSlot_C.ExecuteUbergraph_UI_SaveGameSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveGameSlot_C::ExecuteUbergraph_UI_SaveGameSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot.UI_SaveGameSlot_C.ExecuteUbergraph_UI_SaveGameSlot");

	UUI_SaveGameSlot_C_ExecuteUbergraph_UI_SaveGameSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_SaveGameSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_1, UBorder);
	READ_PTR_FULL(Button_66, UButton);
	READ_PTR_FULL(txt_ComputerSaveTime, UTextBlock);
	READ_PTR_FULL(txt_GameVersion, UTextBlock);
	READ_PTR_FULL(txt_SaveName, UTextBlock);
	READ_PTR_FULL(txt_SaveSeason, UTextBlock);
	READ_PTR_FULL(txt_SaveYear, UTextBlock);
	READ_PTR_FULL(SaveMenuReference, UUI_SaveMenu_C);
	READ_PTR_FULL(LoadMenuReference, UUI_LoadMenu_C);
}

void UUI_SaveGameSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_1);
	DELE_PTR_FULL(Button_66);
	DELE_PTR_FULL(txt_ComputerSaveTime);
	DELE_PTR_FULL(txt_GameVersion);
	DELE_PTR_FULL(txt_SaveName);
	DELE_PTR_FULL(txt_SaveSeason);
	DELE_PTR_FULL(txt_SaveYear);
	DELE_PTR_FULL(SaveMenuReference);
	DELE_PTR_FULL(LoadMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
