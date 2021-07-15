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

// Function UI_Trading.UI_Trading_C.GiveGift
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::GiveGift()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.GiveGift");

	UUI_Trading_C_GiveGift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UIConfirmHeld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UIConfirmHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UIConfirmHeld");

	UUI_Trading_C_UIConfirmHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UIConfirmReleased
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UIConfirmReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UIConfirmReleased");

	UUI_Trading_C_UIConfirmReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UIConfirmPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::UIConfirmPressed(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UIConfirmPressed");

	UUI_Trading_C_UIConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_Trading.UI_Trading_C.ChangeSelectedSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerSetValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::ChangeSelectedSide(bool IsPlayerSetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.ChangeSelectedSide");

	UUI_Trading_C_ChangeSelectedSide_Params params;
	params.IsPlayerSetValue = IsPlayerSetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.IsTransfering?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::IsTransfering_(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.IsTransfering?");

	UUI_Trading_C_IsTransfering__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function UI_Trading.UI_Trading_C.UI_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_Up");

	UUI_Trading_C_UI_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_NextCategory
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_NextCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_NextCategory");

	UUI_Trading_C_UI_NextCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_Down");

	UUI_Trading_C_UI_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_NextSection
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_NextSection");

	UUI_Trading_C_UI_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_PreviousSection
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_PreviousSection");

	UUI_Trading_C_UI_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_Exit
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_Exit");

	UUI_Trading_C_UI_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_PreviousCategory
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_PreviousCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_PreviousCategory");

	UUI_Trading_C_UI_PreviousCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_TradeItem
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::UI_TradeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_TradeItem");

	UUI_Trading_C_UI_TradeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.FinalizeTrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_C::FinalizeTrade(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.FinalizeTrade");

	UUI_Trading_C_FinalizeTrade_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Trading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Construct");

	UUI_Trading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.UI_TransferItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldCheckContainerRestrictions (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::UI_TransferItem(bool ShouldCheckContainerRestrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.UI_TransferItem");

	UUI_Trading_C_UI_TransferItem_Params params;
	params.ShouldCheckContainerRestrictions = ShouldCheckContainerRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.FinalizeTransfer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_C::FinalizeTransfer(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.FinalizeTransfer");

	UUI_Trading_C_FinalizeTransfer_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.OnYouClicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::OnYouClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.OnYouClicked");

	UUI_Trading_C_OnYouClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.OnTraderClicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::OnTraderClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.OnTraderClicked");

	UUI_Trading_C_OnTraderClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.OnStorageClicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::OnStorageClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.OnStorageClicked");

	UUI_Trading_C_OnStorageClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.ChangeSteeringType_Event_1");

	UUI_Trading_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Trading_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.PreConstruct");

	UUI_Trading_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Tick");

	UUI_Trading_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Confirm");

	UUI_Trading_C_Btn_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Up");

	UUI_Trading_C_Btn_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Down");

	UUI_Trading_C_Btn_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Left");

	UUI_Trading_C_Btn_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Right");

	UUI_Trading_C_Btn_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Previous
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Previous");

	UUI_Trading_C_Btn_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_Next
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_Next");

	UUI_Trading_C_Btn_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.btn_Return
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::btn_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.btn_Return");

	UUI_Trading_C_btn_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.Btn_ConfirmHold
// (BlueprintCallable, BlueprintEvent)
void UUI_Trading_C::Btn_ConfirmHold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.Btn_ConfirmHold");

	UUI_Trading_C_Btn_ConfirmHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Trading.UI_Trading_C.ExecuteUbergraph_UI_Trading
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Trading_C::ExecuteUbergraph_UI_Trading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Trading.UI_Trading_C.ExecuteUbergraph_UI_Trading");

	UUI_Trading_C_ExecuteUbergraph_UI_Trading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Trading_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ActionDescriptionButtonsRight, UHorizontalBox);
	READ_PTR_FULL(btn_Storage, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_Trader, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_You, UUI_Book_Tab_C);
	READ_PTR_FULL(Image_83, UImage);
	READ_PTR_FULL(InputChangeCategory, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeSelection, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeTab, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputConfirmHold, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(TransferSliderBorder, UBorder);
	READ_PTR_FULL(UI_Trading_Player, UUI_Trading_Player_C);
	READ_PTR_FULL(UI_Trading_Storage, UUI_Trading_Storage_C);
	READ_PTR_FULL(UI_Trading_Trader, UUI_Trading_Trader_C);
	READ_PTR_FULL(UI_HUD_Reference, UUI_HUD_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(OtherInventoryComponentReference, UInventoryComponent_C);
}

void UUI_Trading_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ActionDescriptionButtonsRight);
	DELE_PTR_FULL(btn_Storage);
	DELE_PTR_FULL(btn_Trader);
	DELE_PTR_FULL(btn_You);
	DELE_PTR_FULL(Image_83);
	DELE_PTR_FULL(InputChangeCategory);
	DELE_PTR_FULL(InputChangeSelection);
	DELE_PTR_FULL(InputChangeTab);
	DELE_PTR_FULL(InputConfirm);
	DELE_PTR_FULL(InputConfirmHold);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(TransferSliderBorder);
	DELE_PTR_FULL(UI_Trading_Player);
	DELE_PTR_FULL(UI_Trading_Storage);
	DELE_PTR_FULL(UI_Trading_Trader);
	DELE_PTR_FULL(UI_HUD_Reference);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(OtherInventoryComponentReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
