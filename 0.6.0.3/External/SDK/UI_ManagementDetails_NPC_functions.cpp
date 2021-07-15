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

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Status                         (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UUI_ManagementDetails_NPC_C::GetStatus(struct FText* Status, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.GetStatus");

	UUI_ManagementDetails_NPC_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_NPC_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputConfirm");

	UUI_ManagementDetails_NPC_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDropPressed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_NPC_C::InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDropPressed");

	UUI_ManagementDetails_NPC_C_InputDropPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.FillFamilySlots
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::FillFamilySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.FillFamilySlots");

	UUI_ManagementDetails_NPC_C_FillFamilySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ChangeSelectedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_NPC_C::ChangeSelectedSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ChangeSelectedSlot");

	UUI_ManagementDetails_NPC_C_ChangeSelectedSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Construct");

	UUI_ManagementDetails_NPC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDecreaseIndex");

	UUI_ManagementDetails_NPC_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputIncreaseIndex");

	UUI_ManagementDetails_NPC_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputCancel");

	UUI_ManagementDetails_NPC_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Uncrop");

	UUI_ManagementDetails_NPC_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Update");

	UUI_ManagementDetails_NPC_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Crop");

	UUI_ManagementDetails_NPC_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ExecuteUbergraph_UI_ManagementDetails_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_NPC_C::ExecuteUbergraph_UI_ManagementDetails_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ExecuteUbergraph_UI_ManagementDetails_NPC");

	UUI_ManagementDetails_NPC_C_ExecuteUbergraph_UI_ManagementDetails_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_ManagementDetails_NPC_C::AfterRead()
{
	UUI_MasterManagementDetails_C::AfterRead();

	READ_PTR_FULL(FamilyBox, UVerticalBox);
	READ_PTR_FULL(FamilySlotsVerticalBox, UVerticalBox);
	READ_PTR_FULL(HouseSlot, UBorder);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_10, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_15, UImage);
	READ_PTR_FULL(Image_16, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Img_Mood, UImage);
	READ_PTR_FULL(Img_Speed, UImage);
	READ_PTR_FULL(pb_Diplomacy, UProgressBar);
	READ_PTR_FULL(pb_Extraction, UProgressBar);
	READ_PTR_FULL(PB_Farming, UProgressBar);
	READ_PTR_FULL(pb_Hunting, UProgressBar);
	READ_PTR_FULL(pb_Production, UProgressBar);
	READ_PTR_FULL(PB_Survival, UProgressBar);
	READ_PTR_FULL(txt_Age, UTextBlock);
	READ_PTR_FULL(txt_Gender, UTextBlock);
	READ_PTR_FULL(txt_Mood, UTextBlock);
	READ_PTR_FULL(txt_Name, UTextBlock);
	READ_PTR_FULL(txt_Name_2, UTextBlock);
	READ_PTR_FULL(txt_Name_3, UTextBlock);
	READ_PTR_FULL(txt_Name_4, UTextBlock);
	READ_PTR_FULL(txt_Name_5, UTextBlock);
	READ_PTR_FULL(txt_Profession, UTextBlock);
	READ_PTR_FULL(txt_SkillCrafting, UTextBlock);
	READ_PTR_FULL(txt_SkillDiplomacy, UTextBlock);
	READ_PTR_FULL(txt_SkillExtraction, UTextBlock);
	READ_PTR_FULL(txt_SkillFarming, UTextBlock);
	READ_PTR_FULL(txt_SkillHunting, UTextBlock);
	READ_PTR_FULL(txt_SkillSurvival, UTextBlock);
	READ_PTR_FULL(txt_Status, UTextBlock);
	READ_PTR_FULL(UI_BuildingDetails_BuildingLabels, UUI_BuildingDetails_BuildingLabels_C);
	READ_PTR_FULL(UI_BuildingDetails_BuildingLabels_125, UUI_BuildingDetails_BuildingLabels_C);
	READ_PTR_FULL(UI_BuildingDetails_PeopleLabels, UUI_BuildingDetails_PeopleLabels_C);
	READ_PTR_FULL(WorkplaceSlot, UBorder);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
	READ_PTR_FULL(ManagementBuildingIcon, UUI_ManagementMapIcon_C);
	READ_PTR_FULL(UIWorkplace, UUI_WorkplaceSlot_NPCDetails_C);
	READ_PTR_FULL(UIHouse, UUI_WorkplaceSlot_NPCDetails_C);
}

void UUI_ManagementDetails_NPC_C::BeforeDelete()
{
	UUI_MasterManagementDetails_C::BeforeDelete();

	DELE_PTR_FULL(FamilyBox);
	DELE_PTR_FULL(FamilySlotsVerticalBox);
	DELE_PTR_FULL(HouseSlot);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_10);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_15);
	DELE_PTR_FULL(Image_16);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Img_Mood);
	DELE_PTR_FULL(Img_Speed);
	DELE_PTR_FULL(pb_Diplomacy);
	DELE_PTR_FULL(pb_Extraction);
	DELE_PTR_FULL(PB_Farming);
	DELE_PTR_FULL(pb_Hunting);
	DELE_PTR_FULL(pb_Production);
	DELE_PTR_FULL(PB_Survival);
	DELE_PTR_FULL(txt_Age);
	DELE_PTR_FULL(txt_Gender);
	DELE_PTR_FULL(txt_Mood);
	DELE_PTR_FULL(txt_Name);
	DELE_PTR_FULL(txt_Name_2);
	DELE_PTR_FULL(txt_Name_3);
	DELE_PTR_FULL(txt_Name_4);
	DELE_PTR_FULL(txt_Name_5);
	DELE_PTR_FULL(txt_Profession);
	DELE_PTR_FULL(txt_SkillCrafting);
	DELE_PTR_FULL(txt_SkillDiplomacy);
	DELE_PTR_FULL(txt_SkillExtraction);
	DELE_PTR_FULL(txt_SkillFarming);
	DELE_PTR_FULL(txt_SkillHunting);
	DELE_PTR_FULL(txt_SkillSurvival);
	DELE_PTR_FULL(txt_Status);
	DELE_PTR_FULL(UI_BuildingDetails_BuildingLabels);
	DELE_PTR_FULL(UI_BuildingDetails_BuildingLabels_125);
	DELE_PTR_FULL(UI_BuildingDetails_PeopleLabels);
	DELE_PTR_FULL(WorkplaceSlot);
	DELE_PTR_FULL(NPCReference);
	DELE_PTR_FULL(ManagementBuildingIcon);
	DELE_PTR_FULL(UIWorkplace);
	DELE_PTR_FULL(UIHouse);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
