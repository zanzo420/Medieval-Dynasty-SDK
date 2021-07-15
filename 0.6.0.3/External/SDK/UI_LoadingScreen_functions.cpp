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

// Function UI_LoadingScreen.UI_LoadingScreen_C.SetLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadingScreen_C::SetLoadingScreen(float ProgressValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.SetLoadingScreen");

	UUI_LoadingScreen_C_SetLoadingScreen_Params params;
	params.ProgressValue = ProgressValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadingScreen.UI_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_LoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.Construct");

	UUI_LoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadingScreen.UI_LoadingScreen_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoadingScreen_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.FadeAnimation");

	UUI_LoadingScreen_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadingScreen_C::ExecuteUbergraph_UI_LoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen");

	UUI_LoadingScreen_C_ExecuteUbergraph_UI_LoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_LoadingScreen_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(fade, UWidgetAnimation);
	READ_PTR_FULL(LoadingProgress, UImage);
	READ_PTR_FULL(LoadingScreeenImage, UImage);
}

void UUI_LoadingScreen_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(fade);
	DELE_PTR_FULL(LoadingProgress);
	DELE_PTR_FULL(LoadingScreeenImage);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
