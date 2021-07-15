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

// Function UI_TalentTree.UI_TalentTree_C.MakeTalentActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TalentTree_C::MakeTalentActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.MakeTalentActive");

	UUI_TalentTree_C_MakeTalentActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.MakeTalentsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::MakeTalentsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.MakeTalentsUnactive");

	UUI_TalentTree_C_MakeTalentsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.UpdateTalentTree
// (BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::UpdateTalentTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.UpdateTalentTree");

	UUI_TalentTree_C_UpdateTalentTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TalentTree_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.Construct");

	UUI_TalentTree_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.UpdateSelectedSkill
// (BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::UpdateSelectedSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.UpdateSelectedSkill");

	UUI_TalentTree_C_UpdateSelectedSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.ExecuteUbergraph_UI_TalentTree
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TalentTree_C::ExecuteUbergraph_UI_TalentTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.ExecuteUbergraph_UI_TalentTree");

	UUI_TalentTree_C_ExecuteUbergraph_UI_TalentTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_TalentTree_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_104, UImage);
	READ_PTR_FULL(Image_163, UImage);
	READ_PTR_FULL(Image_263, UImage);
	READ_PTR_FULL(Image_284, UImage);
	READ_PTR_FULL(Image_395, UImage);
	READ_PTR_FULL(Img_SkillProgress, UImage);
	READ_PTR_FULL(SelectedSkillIcon, UImage);
	READ_PTR_FULL(Talent_2, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_3, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_4, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_5, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_6, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_7, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_8, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_9, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_10, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talent_11, UUI_Talent_TreeButton_C);
	READ_PTR_FULL(Talents, UCanvasPanel);
	READ_PTR_FULL(txt_SkillDescription, UTextBlock);
	READ_PTR_FULL(txt_SkillLevel, UTextBlock);
	READ_PTR_FULL(txt_SkillName, UTextBlock);
	READ_PTR_FULL(txt_SkillPoints, UTextBlock);
	READ_PTR_FULL(txt_SkillProgress, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(UI_InventoryReference, UUI_Book_C);
	READ_PTR_FULL(SelectedTalent, UUI_Talent_TreeButton_C);
}

void UUI_TalentTree_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_104);
	DELE_PTR_FULL(Image_163);
	DELE_PTR_FULL(Image_263);
	DELE_PTR_FULL(Image_284);
	DELE_PTR_FULL(Image_395);
	DELE_PTR_FULL(Img_SkillProgress);
	DELE_PTR_FULL(SelectedSkillIcon);
	DELE_PTR_FULL(Talent_2);
	DELE_PTR_FULL(Talent_3);
	DELE_PTR_FULL(Talent_4);
	DELE_PTR_FULL(Talent_5);
	DELE_PTR_FULL(Talent_6);
	DELE_PTR_FULL(Talent_7);
	DELE_PTR_FULL(Talent_8);
	DELE_PTR_FULL(Talent_9);
	DELE_PTR_FULL(Talent_10);
	DELE_PTR_FULL(Talent_11);
	DELE_PTR_FULL(Talents);
	DELE_PTR_FULL(txt_SkillDescription);
	DELE_PTR_FULL(txt_SkillLevel);
	DELE_PTR_FULL(txt_SkillName);
	DELE_PTR_FULL(txt_SkillPoints);
	DELE_PTR_FULL(txt_SkillProgress);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(UI_InventoryReference);
	DELE_PTR_FULL(SelectedTalent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
