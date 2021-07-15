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

// Function UI_Book_Skills.UI_Book_Skills_C.SkillsCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Skills_C::SkillsCancel(bool* InputHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsCancel");

	UUI_Book_Skills_C_SkillsCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;

}


// Function UI_Book_Skills.UI_Book_Skills_C.SkillsRight
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::SkillsRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsRight");

	UUI_Book_Skills_C_SkillsRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.SkillsLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::SkillsLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsLeft");

	UUI_Book_Skills_C_SkillsLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.SkillsDown
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::SkillsDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsDown");

	UUI_Book_Skills_C_SkillsDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.SkillsUp
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::SkillsUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsUp");

	UUI_Book_Skills_C_SkillsUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.SkillsConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::SkillsConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.SkillsConfirm");

	UUI_Book_Skills_C_SkillsConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.UpdateTalentsOnIncrease
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::UpdateTalentsOnIncrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.UpdateTalentsOnIncrease");

	UUI_Book_Skills_C_UpdateTalentsOnIncrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.IncreaseTalentLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::IncreaseTalentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.IncreaseTalentLevel");

	UUI_Book_Skills_C_IncreaseTalentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.UpdateTalentsAvailability
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::UpdateTalentsAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.UpdateTalentsAvailability");

	UUI_Book_Skills_C_UpdateTalentsAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.MakeSkillLabelActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Skills_C::MakeSkillLabelActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.MakeSkillLabelActive");

	UUI_Book_Skills_C_MakeSkillLabelActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.MakeSkillLabelsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::MakeSkillLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.MakeSkillLabelsUnactive");

	UUI_Book_Skills_C_MakeSkillLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.DecreaseSkillIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::DecreaseSkillIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.DecreaseSkillIndex");

	UUI_Book_Skills_C_DecreaseSkillIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.IncreaseSkillIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::IncreaseSkillIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.IncreaseSkillIndex");

	UUI_Book_Skills_C_IncreaseSkillIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.ChangeSelectedSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::ChangeSelectedSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.ChangeSelectedSkill");

	UUI_Book_Skills_C_ChangeSelectedSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.MakeTalentSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Skills_C::MakeTalentSlotActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.MakeTalentSlotActive");

	UUI_Book_Skills_C_MakeTalentSlotActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.MakeTalentSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::MakeTalentSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.MakeTalentSlotsUnactive");

	UUI_Book_Skills_C_MakeTalentSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.ChangeSelectedTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedTalent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Skills_C::ChangeSelectedTalent(int SelectedTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.ChangeSelectedTalent");

	UUI_Book_Skills_C_ChangeSelectedTalent_Params params;
	params.SelectedTalent = SelectedTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.DecreaseTalentIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::DecreaseTalentIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.DecreaseTalentIndex");

	UUI_Book_Skills_C_DecreaseTalentIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.IncreaseTalentIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::IncreaseTalentIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.IncreaseTalentIndex");

	UUI_Book_Skills_C_IncreaseTalentIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.InitSkills
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::InitSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.InitSkills");

	UUI_Book_Skills_C_InitSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Skills_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.ChangeSteeringType_Event_1");

	UUI_Book_Skills_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_Skills_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Construct");

	UUI_Book_Skills_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Confirm");

	UUI_Book_Skills_C_Btn_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Up");

	UUI_Book_Skills_C_Btn_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Down");

	UUI_Book_Skills_C_Btn_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Left");

	UUI_Book_Skills_C_Btn_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Right");

	UUI_Book_Skills_C_Btn_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Previous
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Previous");

	UUI_Book_Skills_C_Btn_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.Btn_Next
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::Btn_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.Btn_Next");

	UUI_Book_Skills_C_Btn_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.btn_Return
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Skills_C::btn_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.btn_Return");

	UUI_Book_Skills_C_btn_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Skills.UI_Book_Skills_C.ExecuteUbergraph_UI_Book_Skills
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Skills_C::ExecuteUbergraph_UI_Book_Skills(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Skills.UI_Book_Skills_C.ExecuteUbergraph_UI_Book_Skills");

	UUI_Book_Skills_C_ExecuteUbergraph_UI_Book_Skills_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_Skills_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ActionDescriptionButtonsRight_2, UHorizontalBox);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Image_217, UImage);
	READ_PTR_FULL(InputChangeCategory, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeSelection, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeTab, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(SkillsTab, UCanvasPanel);
	READ_PTR_FULL(TalentsScrollList, UScrollBox);
	READ_PTR_FULL(TalentsVerticalBox, UVerticalBox);
	READ_PTR_FULL(txt_SkillPointsCount, UTextBlock);
	READ_PTR_FULL(txt_SkillPointsText, UTextBlock);
	READ_PTR_FULL(UI_Skills_TalentDescription, UUI_Skills_TalentDescription_C);
	READ_PTR_FULL(UI_SkillsLabels, UUI_SkillsLabels_C);
	READ_PTR_FULL(UI_TalentsLabels, UUI_TalentsLabels_C);
	READ_PTR_FULL(UI_TalentTree, UUI_TalentTree_C);
	READ_PTR_FULL(BookReference, UUI_Book_C);
	READ_PTR_FULL(SkillSpendAcceptation, UUI_SkillSpendAcceptation_C);
}

void UUI_Book_Skills_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ActionDescriptionButtonsRight_2);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Image_217);
	DELE_PTR_FULL(InputChangeCategory);
	DELE_PTR_FULL(InputChangeSelection);
	DELE_PTR_FULL(InputChangeTab);
	DELE_PTR_FULL(InputConfirm);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(SkillsTab);
	DELE_PTR_FULL(TalentsScrollList);
	DELE_PTR_FULL(TalentsVerticalBox);
	DELE_PTR_FULL(txt_SkillPointsCount);
	DELE_PTR_FULL(txt_SkillPointsText);
	DELE_PTR_FULL(UI_Skills_TalentDescription);
	DELE_PTR_FULL(UI_SkillsLabels);
	DELE_PTR_FULL(UI_TalentsLabels);
	DELE_PTR_FULL(UI_TalentTree);
	DELE_PTR_FULL(BookReference);
	DELE_PTR_FULL(SkillSpendAcceptation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
