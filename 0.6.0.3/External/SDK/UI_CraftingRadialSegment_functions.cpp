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

// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingRadialSegment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.PreConstruct");

	UUI_CraftingRadialSegment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingRadialSegment_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetEnabled");

	UUI_CraftingRadialSegment_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.Segment Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingRadialSegment_C::Segment_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.Segment Selected");

	UUI_CraftingRadialSegment_C_Segment_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetNotEnoughResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingRadialSegment_C::SetNotEnoughResources(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetNotEnoughResources");

	UUI_CraftingRadialSegment_C_SetNotEnoughResources_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingRadialSegment_C::SetLocked(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetLocked");

	UUI_CraftingRadialSegment_C_SetLocked_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CraftingRadialSegment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.Construct");

	UUI_CraftingRadialSegment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetMaxNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxPossibleNumberToCraft       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingRadialSegment_C::SetMaxNumber(int MaxPossibleNumberToCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetMaxNumber");

	UUI_CraftingRadialSegment_C_SetMaxNumber_Params params;
	params.MaxPossibleNumberToCraft = MaxPossibleNumberToCraft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetLockedByTechnology
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingRadialSegment_C::SetLockedByTechnology()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.SetLockedByTechnology");

	UUI_CraftingRadialSegment_C_SetLockedByTechnology_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.ExecuteUbergraph_UI_CraftingRadialSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingRadialSegment_C::ExecuteUbergraph_UI_CraftingRadialSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRadialSegment.UI_CraftingRadialSegment_C.ExecuteUbergraph_UI_CraftingRadialSegment");

	UUI_CraftingRadialSegment_C_ExecuteUbergraph_UI_CraftingRadialSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CraftingRadialSegment_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(LockedIcon, UImage);
	READ_PTR_FULL(Overlay_1, UOverlay);
	READ_PTR_FULL(CustomIcon, UTexture2D);
	READ_PTR_FULL(HoverSound, USoundBase);
	READ_PTR_FULL(CraftingMenuReference, UUI_CraftingMenu_C);
}

void UUI_CraftingRadialSegment_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(LockedIcon);
	DELE_PTR_FULL(Overlay_1);
	DELE_PTR_FULL(CustomIcon);
	DELE_PTR_FULL(HoverSound);
	DELE_PTR_FULL(CraftingMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
