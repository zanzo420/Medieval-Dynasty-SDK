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

// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Orchard_Info_Slot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.OnMouseButtonUp");

	UUI_Orchard_Info_Slot_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Orchard_Info_Slot_C::BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_Orchard_Info_Slot_C_BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Orchard_Info_Slot_C::BndEvt__Button_72_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Orchard_Info_Slot_C_BndEvt__Button_72_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.SimulateClick
// (BlueprintCallable, BlueprintEvent)
void UUI_Orchard_Info_Slot_C::SimulateClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.SimulateClick");

	UUI_Orchard_Info_Slot_C_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Orchard_Info_Slot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.MakeUnactive");

	UUI_Orchard_Info_Slot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Orchard_Info_Slot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.MakeActive");

	UUI_Orchard_Info_Slot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Orchard_Info_Slot_C::BndEvt__Button_72_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_Orchard_Info_Slot_C_BndEvt__Button_72_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.ExecuteUbergraph_UI_Orchard_Info_Slot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Orchard_Info_Slot_C::ExecuteUbergraph_UI_Orchard_Info_Slot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Orchard_Info_Slot.UI_Orchard_Info_Slot_C.ExecuteUbergraph_UI_Orchard_Info_Slot");

	UUI_Orchard_Info_Slot_C_ExecuteUbergraph_UI_Orchard_Info_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Orchard_Info_Slot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Button_73, UButton);
	READ_PTR_FULL(Image_633, UImage);
	READ_PTR_FULL(Overlay_2, UOverlay);
	READ_PTR_FULL(ProgressBar_74, UProgressBar);
	READ_PTR_FULL(SelectionBorder, UBorder);
	READ_PTR_FULL(SizeBox_2, USizeBox);
	READ_PTR_FULL(ParentWidget, UUI_ManagementDetails_Field_C);
	READ_PTR_FULL(RememberedIcon, UTexture2D);
}

void UUI_Orchard_Info_Slot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Button_73);
	DELE_PTR_FULL(Image_633);
	DELE_PTR_FULL(Overlay_2);
	DELE_PTR_FULL(ProgressBar_74);
	DELE_PTR_FULL(SelectionBorder);
	DELE_PTR_FULL(SizeBox_2);
	DELE_PTR_FULL(ParentWidget);
	DELE_PTR_FULL(RememberedIcon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
