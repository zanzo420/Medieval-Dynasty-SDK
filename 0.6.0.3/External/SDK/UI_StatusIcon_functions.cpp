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

// Function UI_StatusIcon.UI_StatusIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_StatusIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatusIcon.UI_StatusIcon_C.Construct");

	UUI_StatusIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_StatusIcon.UI_StatusIcon_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_StatusIcon_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatusIcon.UI_StatusIcon_C.MakeActive");

	UUI_StatusIcon_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_StatusIcon.UI_StatusIcon_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_StatusIcon_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatusIcon.UI_StatusIcon_C.MakeUnactive");

	UUI_StatusIcon_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_StatusIcon.UI_StatusIcon_C.ExecuteUbergraph_UI_StatusIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_StatusIcon_C::ExecuteUbergraph_UI_StatusIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatusIcon.UI_StatusIcon_C.ExecuteUbergraph_UI_StatusIcon");

	UUI_StatusIcon_C_ExecuteUbergraph_UI_StatusIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_StatusIcon_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(StatusImage, UImage);
	READ_PTR_FULL(Image, UTexture2D);
}

void UUI_StatusIcon_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(StatusImage);
	DELE_PTR_FULL(Image);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
