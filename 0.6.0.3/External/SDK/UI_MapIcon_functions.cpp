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

// Function UI_MapIcon.UI_MapIcon_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_MapIcon_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.MakeUnactive");

	UUI_MapIcon_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapIcon.UI_MapIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MapIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_MapIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapIcon.UI_MapIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MapIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_MapIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapIcon.UI_MapIcon_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_MapIcon_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.MakeActive");

	UUI_MapIcon_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapIcon.UI_MapIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MapIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.PreConstruct");

	UUI_MapIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapIcon.UI_MapIcon_C.ExecuteUbergraph_UI_MapIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MapIcon_C::ExecuteUbergraph_UI_MapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapIcon.UI_MapIcon_C.ExecuteUbergraph_UI_MapIcon");

	UUI_MapIcon_C_ExecuteUbergraph_UI_MapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MapIcon_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Button_1, UButton);
	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(IconImage, UObject);
	READ_PTR_FULL(ObservedCharacter, ABP_BaseCharacter_C);
	READ_PTR_FULL(MapReference, UUI_Book_Map_C);
	READ_PTR_FULL(ObservedBuilding, ABP_MasterBuilding_C);
	READ_PTR_FULL(ObservedField, ABP_MasterField_C);
}

void UUI_MapIcon_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Button_1);
	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(IconImage);
	DELE_PTR_FULL(ObservedCharacter);
	DELE_PTR_FULL(MapReference);
	DELE_PTR_FULL(ObservedBuilding);
	DELE_PTR_FULL(ObservedField);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
