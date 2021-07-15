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

// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.SetInitialValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ItemCategories_E_ItemCategories> ItemCategory                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AssignedToQuickSlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCapacity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCoin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Inventory_Item_Button_C::SetInitialValues(class UObject* Icon, const struct FText& Name, int Count, float Food, float water, float Condition, float Weight, float Price, TEnumAsByte<E_ItemCategories_E_ItemCategories> ItemCategory, bool AssignedToQuickSlot, int Capacity, int MaxCapacity, float CurrentHP, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IsCoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.SetInitialValues");

	UUI_Inventory_Item_Button_C_SetInitialValues_Params params;
	params.Icon = Icon;
	params.Name = Name;
	params.Count = Count;
	params.Food = Food;
	params.water = water;
	params.Condition = Condition;
	params.Weight = Weight;
	params.Price = Price;
	params.ItemCategory = ItemCategory;
	params.AssignedToQuickSlot = AssignedToQuickSlot;
	params.Capacity = Capacity;
	params.MaxCapacity = MaxCapacity;
	params.CurrentHP = CurrentHP;
	params.Ownership = Ownership;
	params.IsCoin = IsCoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Inventory_Item_Button_C::BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Inventory_Item_Button_C_BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Inventory_Item_Button_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.MakeActive");

	UUI_Inventory_Item_Button_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Inventory_Item_Button_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.MakeUnactive");

	UUI_Inventory_Item_Button_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Inventory_Item_Button_C::BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Inventory_Item_Button_C_BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Inventory_Item_Button_C::BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Inventory_Item_Button_C_BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.ExecuteUbergraph_UI_Inventory_Item_Button
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inventory_Item_Button_C::ExecuteUbergraph_UI_Inventory_Item_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Item_Button.UI_Inventory_Item_Button_C.ExecuteUbergraph_UI_Inventory_Item_Button");

	UUI_Inventory_Item_Button_C_ExecuteUbergraph_UI_Inventory_Item_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inventory_Item_Button_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(AssignedIcon, UImage);
	READ_PTR_FULL(Border_ItemSelection, UBorder);
	READ_PTR_FULL(btn_ItemSlot, UButton);
	READ_PTR_FULL(Condition, UTextBlock);
	READ_PTR_FULL(Count, UTextBlock);
	READ_PTR_FULL(Icn_ItemBackground, UImage);
	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(Name, UTextBlock);
	READ_PTR_FULL(Price, UTextBlock);
	READ_PTR_FULL(Weight, UTextBlock);
	READ_PTR_FULL(UI_HUD_Reference, UUI_HUD_C);
}

void UUI_Inventory_Item_Button_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(AssignedIcon);
	DELE_PTR_FULL(Border_ItemSelection);
	DELE_PTR_FULL(btn_ItemSlot);
	DELE_PTR_FULL(Condition);
	DELE_PTR_FULL(Count);
	DELE_PTR_FULL(Icn_ItemBackground);
	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(Name);
	DELE_PTR_FULL(Price);
	DELE_PTR_FULL(Weight);
	DELE_PTR_FULL(UI_HUD_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
