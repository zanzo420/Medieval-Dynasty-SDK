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

// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Status                         (Parm, OutParm)
// struct FSlateColor             SlateColor                     (Parm, OutParm, UObjectWrapper)
// bool                           OnlyStatusColor                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_CraftingSlot_C::GetStatus(bool Hover, struct FText* Status, struct FSlateColor* SlateColor, bool* OnlyStatusColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.GetStatus");

	UUI_BuildingDetails_CraftingSlot_C_GetStatus_Params params;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
	if (OnlyStatusColor != nullptr)
		*OnlyStatusColor = params.OnlyStatusColor;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_CraftingSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.PreConstruct");

	UUI_BuildingDetails_CraftingSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.MakeUnactive");

	UUI_BuildingDetails_CraftingSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.MakeActive");

	UUI_BuildingDetails_CraftingSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.IncreasePower
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::IncreasePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.IncreasePower");

	UUI_BuildingDetails_CraftingSlot_C_IncreasePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.DecreasePower
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::DecreasePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.DecreasePower");

	UUI_BuildingDetails_CraftingSlot_C_DecreasePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.UpdatePower
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::UpdatePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.UpdatePower");

	UUI_BuildingDetails_CraftingSlot_C_UpdatePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.Construct");

	UUI_BuildingDetails_CraftingSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_CraftingSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.Tick");

	UUI_BuildingDetails_CraftingSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.UpdateInitPower
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::UpdateInitPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.UpdateInitPower");

	UUI_BuildingDetails_CraftingSlot_C_UpdateInitPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.ExecuteUbergraph_UI_BuildingDetails_CraftingSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_CraftingSlot_C::ExecuteUbergraph_UI_BuildingDetails_CraftingSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.ExecuteUbergraph_UI_BuildingDetails_CraftingSlot");

	UUI_BuildingDetails_CraftingSlot_C_ExecuteUbergraph_UI_BuildingDetails_CraftingSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_CraftingSlot_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_CraftingSlot.UI_BuildingDetails_CraftingSlot_C.OnHoveredDispatcher__DelegateSignature");

	UUI_BuildingDetails_CraftingSlot_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
