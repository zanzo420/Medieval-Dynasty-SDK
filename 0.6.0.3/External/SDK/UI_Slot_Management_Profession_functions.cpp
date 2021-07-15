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

// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Profession_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.MakeActive");

	UUI_Slot_Management_Profession_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Profession_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.MakeUnactive");

	UUI_Slot_Management_Profession_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Profession_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_Slot_Management_Profession_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Slot_Management_Profession_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.Construct");

	UUI_Slot_Management_Profession_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Profession_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Management_Profession_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Profession_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Management_Profession_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.ExecuteUbergraph_UI_Slot_Management_Profession
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Management_Profession_C::ExecuteUbergraph_UI_Slot_Management_Profession(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.ExecuteUbergraph_UI_Slot_Management_Profession");

	UUI_Slot_Management_Profession_C_ExecuteUbergraph_UI_Slot_Management_Profession_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Profession_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Profession.UI_Slot_Management_Profession_C.OnHoveredDispatcher__DelegateSignature");

	UUI_Slot_Management_Profession_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Slot_Management_Profession_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ItemSelection, UBorder);
	READ_PTR_FULL(Button, UButton);
	READ_PTR_FULL(ImageSkill, UImage);
	READ_PTR_FULL(img_Icon, UImage);
	READ_PTR_FULL(Name, UTextBlock);
	READ_PTR_FULL(txt_Skills, UTextBlock);
	READ_PTR_FULL(UI_Assignment, UUI_MasterAssignment_C);
}

void UUI_Slot_Management_Profession_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ItemSelection);
	DELE_PTR_FULL(Button);
	DELE_PTR_FULL(ImageSkill);
	DELE_PTR_FULL(img_Icon);
	DELE_PTR_FULL(Name);
	DELE_PTR_FULL(txt_Skills);
	DELE_PTR_FULL(UI_Assignment);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
