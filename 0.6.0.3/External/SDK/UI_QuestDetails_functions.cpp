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

// Function UI_QuestDetails.UI_QuestDetails_C.InitQuestDetails
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestDetails_C::InitQuestDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.InitQuestDetails");

	UUI_QuestDetails_C_InitQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestDetails.UI_QuestDetails_C.UpdateQuestInformation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Slot_Quest_C*        QuestReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestDetails_C::UpdateQuestInformation(class UUI_Slot_Quest_C* QuestReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.UpdateQuestInformation");

	UUI_QuestDetails_C_UpdateQuestInformation_Params params;
	params.QuestReference = QuestReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestDetails.UI_QuestDetails_C.ExecuteUbergraph_UI_QuestDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestDetails_C::ExecuteUbergraph_UI_QuestDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.ExecuteUbergraph_UI_QuestDetails");

	UUI_QuestDetails_C_ExecuteUbergraph_UI_QuestDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestDetails_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ChallangeDuration, UTextBlock);
	READ_PTR_FULL(ChallangeDurationBox, UHorizontalBox);
	READ_PTR_FULL(icn_QuestIcon, UImage);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_82, UImage);
	READ_PTR_FULL(Image_405, UImage);
	READ_PTR_FULL(ObjectivesBox, UVerticalBox);
	READ_PTR_FULL(ObjectivesList, UVerticalBox);
	READ_PTR_FULL(QuestDescription, UTextBlock);
	READ_PTR_FULL(QuestGiver, UTextBlock);
	READ_PTR_FULL(QuestGiverBox, UHorizontalBox);
	READ_PTR_FULL(QuestName, UTextBlock);
	READ_PTR_FULL(RewardsBox, UVerticalBox);
	READ_PTR_FULL(RewardsList, UVerticalBox);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_QuestDetails_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ChallangeDuration);
	DELE_PTR_FULL(ChallangeDurationBox);
	DELE_PTR_FULL(icn_QuestIcon);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_82);
	DELE_PTR_FULL(Image_405);
	DELE_PTR_FULL(ObjectivesBox);
	DELE_PTR_FULL(ObjectivesList);
	DELE_PTR_FULL(QuestDescription);
	DELE_PTR_FULL(QuestGiver);
	DELE_PTR_FULL(QuestGiverBox);
	DELE_PTR_FULL(QuestName);
	DELE_PTR_FULL(RewardsBox);
	DELE_PTR_FULL(RewardsList);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
