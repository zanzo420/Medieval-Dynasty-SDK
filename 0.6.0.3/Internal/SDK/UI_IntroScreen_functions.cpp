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

// Function UI_IntroScreen.UI_IntroScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_IntroScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IntroScreen.UI_IntroScreen_C.OnKeyDown");

	UUI_IntroScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_IntroScreen.UI_IntroScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_IntroScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IntroScreen.UI_IntroScreen_C.Construct");

	UUI_IntroScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_IntroScreen.UI_IntroScreen_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_IntroScreen_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IntroScreen.UI_IntroScreen_C.FadeAnimation");

	UUI_IntroScreen_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_IntroScreen.UI_IntroScreen_C.PlayTextAnimation
// (BlueprintCallable, BlueprintEvent)
void UUI_IntroScreen_C::PlayTextAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IntroScreen.UI_IntroScreen_C.PlayTextAnimation");

	UUI_IntroScreen_C_PlayTextAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_IntroScreen.UI_IntroScreen_C.ExecuteUbergraph_UI_IntroScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_IntroScreen_C::ExecuteUbergraph_UI_IntroScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IntroScreen.UI_IntroScreen_C.ExecuteUbergraph_UI_IntroScreen");

	UUI_IntroScreen_C_ExecuteUbergraph_UI_IntroScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
