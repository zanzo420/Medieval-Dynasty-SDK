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

// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SetParentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetParentWidget");

	UUI_QChoiceMasterRadialMenu_C_SetParentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseOver
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseOver");

	UUI_QChoiceMasterRadialMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetSegmentOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_QChoiceSegment_C*    Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__=                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ExtraCheck                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Extra__                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extra__=                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceMasterRadialMenu_C::SetSegmentOver(class UUI_QChoiceSegment_C* Segment, float Rotation__, float Rotation__=, bool ExtraCheck, float Extra__, float Extra__=)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetSegmentOver");

	UUI_QChoiceMasterRadialMenu_C_SetSegmentOver_Params params;
	params.Segment = Segment;
	params.Rotation__ = Rotation__;
	params.Rotation__= = Rotation__=;
	params.ExtraCheck = ExtraCheck;
	params.Extra__ = Extra__;
	params.Extra__= = Extra__=;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseRotation
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::GetMouseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseRotation");

	UUI_QChoiceMasterRadialMenu_C_GetMouseRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.Construct");

	UUI_QChoiceMasterRadialMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.RemoveMenu");

	UUI_QChoiceMasterRadialMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SelectMenuSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SelectMenuSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SelectMenuSegment");

	UUI_QChoiceMasterRadialMenu_C_SelectMenuSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ChangeInformationAboutSegment");

	UUI_QChoiceMasterRadialMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QChoiceMasterRadialMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.PreConstruct");

	UUI_QChoiceMasterRadialMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ExecuteUbergraph_UI_QChoiceMasterRadialMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceMasterRadialMenu_C::ExecuteUbergraph_UI_QChoiceMasterRadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ExecuteUbergraph_UI_QChoiceMasterRadialMenu");

	UUI_QChoiceMasterRadialMenu_C_ExecuteUbergraph_UI_QChoiceMasterRadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SegmentChanged__DelegateSignature");

	UUI_QChoiceMasterRadialMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QChoiceMasterRadialMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(CenterImage_2, UImage);
	READ_PTR_FULL(ItemDescription, UTextBlock);
	READ_PTR_FULL(ItemName, UTextBlock);
	READ_PTR_FULL(Main_Fifth, UUI_QChoiceSegment_C);
	READ_PTR_FULL(Main_First, UUI_QChoiceSegment_C);
	READ_PTR_FULL(Main_Fourth, UUI_QChoiceSegment_C);
	READ_PTR_FULL(Main_Second, UUI_QChoiceSegment_C);
	READ_PTR_FULL(Main_Sixth, UUI_QChoiceSegment_C);
	READ_PTR_FULL(Main_Third, UUI_QChoiceSegment_C);
	READ_PTR_FULL(MainCanvas, UCanvasPanel);
	READ_PTR_FULL(MiddleText, UVerticalBox);
	READ_PTR_FULL(NoPermissionText, UTextBlock);
	READ_PTR_FULL(NotEnoughItem, UBorder);
	READ_PTR_FULL(WheelArrow, UImage);
	READ_PTR_FULL(Mouse_Over_Segment, UUI_QChoiceSegment_C);
	READ_PTR_FULL(PlayerCharacterReference, ABP_PlayerCharacter_C);
}

void UUI_QChoiceMasterRadialMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(CenterImage_2);
	DELE_PTR_FULL(ItemDescription);
	DELE_PTR_FULL(ItemName);
	DELE_PTR_FULL(Main_Fifth);
	DELE_PTR_FULL(Main_First);
	DELE_PTR_FULL(Main_Fourth);
	DELE_PTR_FULL(Main_Second);
	DELE_PTR_FULL(Main_Sixth);
	DELE_PTR_FULL(Main_Third);
	DELE_PTR_FULL(MainCanvas);
	DELE_PTR_FULL(MiddleText);
	DELE_PTR_FULL(NoPermissionText);
	DELE_PTR_FULL(NotEnoughItem);
	DELE_PTR_FULL(WheelArrow);
	DELE_PTR_FULL(Mouse_Over_Segment);
	DELE_PTR_FULL(PlayerCharacterReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
