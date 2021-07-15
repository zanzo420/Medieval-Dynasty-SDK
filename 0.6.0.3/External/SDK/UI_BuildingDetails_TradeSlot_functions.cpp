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

// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Status                         (Parm, OutParm)
// struct FSlateColor             SlateColor                     (Parm, OutParm, UObjectWrapper)
void UUI_BuildingDetails_TradeSlot_C::GetStatus(bool Hover, struct FText* Status, struct FSlateColor* SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.GetStatus");

	UUI_BuildingDetails_TradeSlot_C_GetStatus_Params params;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.MakeUnactive");

	UUI_BuildingDetails_TradeSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.MakeActive");

	UUI_BuildingDetails_TradeSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.IncreaseLimit
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::IncreaseLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.IncreaseLimit");

	UUI_BuildingDetails_TradeSlot_C_IncreaseLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.DecreaseLimit
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::DecreaseLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.DecreaseLimit");

	UUI_BuildingDetails_TradeSlot_C_DecreaseLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.Construct");

	UUI_BuildingDetails_TradeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_TradeSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.Tick");

	UUI_BuildingDetails_TradeSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.UpdateTradeLimit
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::UpdateTradeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.UpdateTradeLimit");

	UUI_BuildingDetails_TradeSlot_C_UpdateTradeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.UpdateInitTradeLimit
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::UpdateInitTradeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.UpdateInitTradeLimit");

	UUI_BuildingDetails_TradeSlot_C_UpdateInitTradeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.ExecuteUbergraph_UI_BuildingDetails_TradeSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_TradeSlot_C::ExecuteUbergraph_UI_BuildingDetails_TradeSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.ExecuteUbergraph_UI_BuildingDetails_TradeSlot");

	UUI_BuildingDetails_TradeSlot_C_ExecuteUbergraph_UI_BuildingDetails_TradeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_TradeSlot_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C.OnHoveredDispatcher__DelegateSignature");

	UUI_BuildingDetails_TradeSlot_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingDetails_TradeSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ItemSelection, UBorder);
	READ_PTR_FULL(Btn_DecreasePower, UButton);
	READ_PTR_FULL(Btn_IncreasePower, UButton);
	READ_PTR_FULL(Button, UButton);
	READ_PTR_FULL(Icn_ItemBackground, UImage);
	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(Image_120, UImage);
	READ_PTR_FULL(Image_276, UImage);
	READ_PTR_FULL(Name, UTextBlock);
	READ_PTR_FULL(ProgressBar_103, UProgressBar);
	READ_PTR_FULL(txt_Power, UTextBlock);
	READ_PTR_FULL(txt_Price, UTextBlock);
	READ_PTR_FULL(txt_Status, UTextBlock);
	READ_PTR_FULL(txt_Storage, UTextBlock);
	READ_PTR_FULL(txt_TotalCoins, UTextBlock);
	READ_PTR_FULL(txt_TotalProduction, UTextBlock);
	READ_PTR_FULL(UI_BuildingDetails, UUI_ManagementDetails_Building_C);
}

void UUI_BuildingDetails_TradeSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ItemSelection);
	DELE_PTR_FULL(Btn_DecreasePower);
	DELE_PTR_FULL(Btn_IncreasePower);
	DELE_PTR_FULL(Button);
	DELE_PTR_FULL(Icn_ItemBackground);
	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(Image_120);
	DELE_PTR_FULL(Image_276);
	DELE_PTR_FULL(Name);
	DELE_PTR_FULL(ProgressBar_103);
	DELE_PTR_FULL(txt_Power);
	DELE_PTR_FULL(txt_Price);
	DELE_PTR_FULL(txt_Status);
	DELE_PTR_FULL(txt_Storage);
	DELE_PTR_FULL(txt_TotalCoins);
	DELE_PTR_FULL(txt_TotalProduction);
	DELE_PTR_FULL(UI_BuildingDetails);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
