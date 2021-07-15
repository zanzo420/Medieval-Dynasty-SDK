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

// Function UI_LogosScreen.UI_LogosScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_LogosScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogosScreen.UI_LogosScreen_C.Construct");

	UUI_LogosScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LogosScreen.UI_LogosScreen_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LogosScreen_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogosScreen.UI_LogosScreen_C.FadeAnimation");

	UUI_LogosScreen_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LogosScreen.UI_LogosScreen_C.ExecuteUbergraph_UI_LogosScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LogosScreen_C::ExecuteUbergraph_UI_LogosScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogosScreen.UI_LogosScreen_C.ExecuteUbergraph_UI_LogosScreen");

	UUI_LogosScreen_C_ExecuteUbergraph_UI_LogosScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
