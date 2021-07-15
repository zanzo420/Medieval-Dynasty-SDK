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

// Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementMapIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.PreConstruct");

	UUI_ManagementMapIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementMapIcon_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.MakeActive");

	UUI_ManagementMapIcon_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementMapIcon_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.MakeUnactive");

	UUI_ManagementMapIcon_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.ExecuteUbergraph_UI_ManagementMapIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementMapIcon_C::ExecuteUbergraph_UI_ManagementMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementMapIcon.UI_ManagementMapIcon_C.ExecuteUbergraph_UI_ManagementMapIcon");

	UUI_ManagementMapIcon_C_ExecuteUbergraph_UI_ManagementMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_ManagementMapIcon_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(IconImage, UObject);
}

void UUI_ManagementMapIcon_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(IconImage);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
