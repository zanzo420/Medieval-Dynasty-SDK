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

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.GetAdvancedStatVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Inspector_NPC_C::GetAdvancedStatVisibility(bool* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.GetAdvancedStatVisibility");

	UUI_Inspector_NPC_C_GetAdvancedStatVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_NPC_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.UpdateData");

	UUI_Inspector_NPC_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacterReference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_NPC_C::Init(class ABP_BaseCharacter_C* BaseCharacterReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.Init");

	UUI_Inspector_NPC_C_Init_Params params;
	params.BaseCharacterReference = BaseCharacterReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.ExecuteUbergraph_UI_Inspector_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_NPC_C::ExecuteUbergraph_UI_Inspector_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.ExecuteUbergraph_UI_Inspector_NPC");

	UUI_Inspector_NPC_C_ExecuteUbergraph_UI_Inspector_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inspector_NPC_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Advanced, UVerticalBox);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_1338, UImage);
	READ_PTR_FULL(Quest, UImage);
	READ_PTR_FULL(txt_AnimalHusbandryValue, UTextBlock);
	READ_PTR_FULL(txt_CraftingValue, UTextBlock);
	READ_PTR_FULL(txt_DiplomacyValue, UTextBlock);
	READ_PTR_FULL(txt_ExtractionValue, UTextBlock);
	READ_PTR_FULL(txt_HuntingValue, UTextBlock);
	READ_PTR_FULL(txt_Name, UTextBlock);
	READ_PTR_FULL(txt_SurvivalValue, UTextBlock);
	READ_PTR_FULL(Vendor, UImage);
	READ_PTR_FULL(Worker, UImage);
	READ_PTR_FULL(NPC_Reference, ABP_NPC_C);
	READ_PTR_FULL(PlayerManagerReference, ABP_PlayerManager_C);
}

void UUI_Inspector_NPC_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Advanced);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_1338);
	DELE_PTR_FULL(Quest);
	DELE_PTR_FULL(txt_AnimalHusbandryValue);
	DELE_PTR_FULL(txt_CraftingValue);
	DELE_PTR_FULL(txt_DiplomacyValue);
	DELE_PTR_FULL(txt_ExtractionValue);
	DELE_PTR_FULL(txt_HuntingValue);
	DELE_PTR_FULL(txt_Name);
	DELE_PTR_FULL(txt_SurvivalValue);
	DELE_PTR_FULL(Vendor);
	DELE_PTR_FULL(Worker);
	DELE_PTR_FULL(NPC_Reference);
	DELE_PTR_FULL(PlayerManagerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
