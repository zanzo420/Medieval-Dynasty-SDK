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

// Function UI_Cutscene.UI_Cutscene_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Cutscene_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cutscene.UI_Cutscene_C.OnKeyDown");

	UUI_Cutscene_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Cutscene.UI_Cutscene_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Cutscene_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cutscene.UI_Cutscene_C.Construct");

	UUI_Cutscene_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Cutscene.UI_Cutscene_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Cutscene_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cutscene.UI_Cutscene_C.FadeAnimation");

	UUI_Cutscene_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Cutscene.UI_Cutscene_C.ExecuteUbergraph_UI_Cutscene
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Cutscene_C::ExecuteUbergraph_UI_Cutscene(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cutscene.UI_Cutscene_C.ExecuteUbergraph_UI_Cutscene");

	UUI_Cutscene_C_ExecuteUbergraph_UI_Cutscene_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Cutscene_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(fade, UWidgetAnimation);
	READ_PTR_FULL(Image_208, UImage);
}

void UUI_Cutscene_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(fade);
	DELE_PTR_FULL(Image_208);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
