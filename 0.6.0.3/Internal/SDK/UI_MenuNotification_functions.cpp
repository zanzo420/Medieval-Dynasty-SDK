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

// Function UI_MenuNotification.UI_MenuNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MenuNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuNotification.UI_MenuNotification_C.Construct");

	UUI_MenuNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuNotification.UI_MenuNotification_C.AnimateNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartAtTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumLoopsToPlay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuNotification_C::AnimateNotification(class UWidgetAnimation* Animation, float StartAtTime, int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuNotification.UI_MenuNotification_C.AnimateNotification");

	UUI_MenuNotification_C_AnimateNotification_Params params;
	params.Animation = Animation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuNotification.UI_MenuNotification_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MenuNotification_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuNotification.UI_MenuNotification_C.OnInitialized");

	UUI_MenuNotification_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuNotification.UI_MenuNotification_C.ExecuteUbergraph_UI_MenuNotification
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuNotification_C::ExecuteUbergraph_UI_MenuNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuNotification.UI_MenuNotification_C.ExecuteUbergraph_UI_MenuNotification");

	UUI_MenuNotification_C_ExecuteUbergraph_UI_MenuNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
