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

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UUI_ManagementDetails_Animal_C::GetStatus(struct FText* Text, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.GetStatus");

	UUI_ManagementDetails_Animal_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_Animal_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputConfirm");

	UUI_ManagementDetails_Animal_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDropPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_Animal_C::InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDropPressed");

	UUI_ManagementDetails_Animal_C_InputDropPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Construct");

	UUI_ManagementDetails_Animal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDecreaseIndex");

	UUI_ManagementDetails_Animal_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputIncreaseIndex");

	UUI_ManagementDetails_Animal_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputCancel");

	UUI_ManagementDetails_Animal_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Uncrop");

	UUI_ManagementDetails_Animal_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Animal_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Crop");

	UUI_ManagementDetails_Animal_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.ExecuteUbergraph_UI_ManagementDetails_Animal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Animal_C::ExecuteUbergraph_UI_ManagementDetails_Animal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.ExecuteUbergraph_UI_ManagementDetails_Animal");

	UUI_ManagementDetails_Animal_C_ExecuteUbergraph_UI_ManagementDetails_Animal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_ManagementDetails_Animal_C::AfterRead()
{
	UUI_MasterManagementDetails_C::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_10, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(txt_Age, UTextBlock);
	READ_PTR_FULL(txt_DeadAge, UTextBlock);
	READ_PTR_FULL(txt_Gender, UTextBlock);
	READ_PTR_FULL(txt_Name_2, UTextBlock);
	READ_PTR_FULL(txt_Readiness, UTextBlock);
	READ_PTR_FULL(txt_Status, UTextBlock);
	READ_PTR_FULL(UI_BuildingDetails_BuildingLabels, UUI_BuildingDetails_BuildingLabels_C);
	READ_PTR_FULL(WorkplaceSlot, UBorder);
	READ_PTR_FULL(AnimalReference, ABP_HusbandryAI_C);
	READ_PTR_FULL(ManagementBuildingIcon, UUI_ManagementMapIcon_C);
	READ_PTR_FULL(UI_Workplace, UUI_WorkplaceSlot_NPCDetails_C);
}

void UUI_ManagementDetails_Animal_C::BeforeDelete()
{
	UUI_MasterManagementDetails_C::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_10);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(txt_Age);
	DELE_PTR_FULL(txt_DeadAge);
	DELE_PTR_FULL(txt_Gender);
	DELE_PTR_FULL(txt_Name_2);
	DELE_PTR_FULL(txt_Readiness);
	DELE_PTR_FULL(txt_Status);
	DELE_PTR_FULL(UI_BuildingDetails_BuildingLabels);
	DELE_PTR_FULL(WorkplaceSlot);
	DELE_PTR_FULL(AnimalReference);
	DELE_PTR_FULL(ManagementBuildingIcon);
	DELE_PTR_FULL(UI_Workplace);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
