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

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UUI_ManagementDetails_Field_C::GetStatus(struct FText* Text, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.GetStatus");

	UUI_ManagementDetails_Field_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_ManagementDetails_Field_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.OnMouseButtonUp");

	UUI_ManagementDetails_Field_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction_WithExactFieldSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedFieldSlotX             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SelectedFieldSlotY             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::InputSpecialAction_WithExactFieldSlot(int SelectedFieldSlotX, int SelectedFieldSlotY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction_WithExactFieldSlot");

	UUI_ManagementDetails_Field_C_InputSpecialAction_WithExactFieldSlot_Params params;
	params.SelectedFieldSlotX = SelectedFieldSlotX;
	params.SelectedFieldSlotY = SelectedFieldSlotY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::ChangeSelectedLabel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedLabel");

	UUI_ManagementDetails_Field_C_ChangeSelectedLabel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputSpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction");

	UUI_ManagementDetails_Field_C_InputSpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SetSizeOfCanvasAndGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::SetSizeOfCanvasAndGrid(TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SetSizeOfCanvasAndGrid");

	UUI_ManagementDetails_Field_C_SetSizeOfCanvasAndGrid_Params params;
	params.FieldType = FieldType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_Field_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputConfirm");

	UUI_ManagementDetails_Field_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InedexX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            IndexY                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::MakeFieldSlotActive(int InedexX, int IndexY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotActive");

	UUI_ManagementDetails_Field_C_MakeFieldSlotActive_Params params;
	params.InedexX = InedexX;
	params.IndexY = IndexY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::MakeFieldSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotsUnactive");

	UUI_ManagementDetails_Field_C_MakeFieldSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedFieldSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedFieldSlotX             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SelectedFieldSlotY             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::ChangeSelectedFieldSlot(int SelectedFieldSlotX, int SelectedFieldSlotY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedFieldSlot");

	UUI_ManagementDetails_Field_C_ChangeSelectedFieldSlot_Params params;
	params.SelectedFieldSlotX = SelectedFieldSlotX;
	params.SelectedFieldSlotY = SelectedFieldSlotY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Tick");

	UUI_ManagementDetails_Field_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.UpdateSlotsColors
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::UpdateSlotsColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.UpdateSlotsColors");

	UUI_ManagementDetails_Field_C_UpdateSlotsColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SaveSlotsState
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::SaveSlotsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SaveSlotsState");

	UUI_ManagementDetails_Field_C_SaveSlotsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ManagementDetails_Field_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Construct");

	UUI_ManagementDetails_Field_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputCancel");

	UUI_ManagementDetails_Field_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputLeft");

	UUI_ManagementDetails_Field_C_InputLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputRight
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputRight");

	UUI_ManagementDetails_Field_C_InputRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputIncreaseIndex");

	UUI_ManagementDetails_Field_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputDecreaseIndex");

	UUI_ManagementDetails_Field_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Uncrop");

	UUI_ManagementDetails_Field_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Field_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Crop");

	UUI_ManagementDetails_Field_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ExecuteUbergraph_UI_ManagementDetails_Field
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Field_C::ExecuteUbergraph_UI_ManagementDetails_Field(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ExecuteUbergraph_UI_ManagementDetails_Field");

	UUI_ManagementDetails_Field_C_ExecuteUbergraph_UI_ManagementDetails_Field_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
