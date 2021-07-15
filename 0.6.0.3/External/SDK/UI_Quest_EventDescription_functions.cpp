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

// Function UI_Quest_EventDescription.UI_Quest_EventDescription_C.UpdateEventDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventHistory_Main   Event                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_Quest_EventDescription_C::UpdateEventDescription(const struct FST_EventHistory_Main& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Quest_EventDescription.UI_Quest_EventDescription_C.UpdateEventDescription");

	UUI_Quest_EventDescription_C_UpdateEventDescription_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Quest_EventDescription.UI_Quest_EventDescription_C.ExecuteUbergraph_UI_Quest_EventDescription
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Quest_EventDescription_C::ExecuteUbergraph_UI_Quest_EventDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Quest_EventDescription.UI_Quest_EventDescription_C.ExecuteUbergraph_UI_Quest_EventDescription");

	UUI_Quest_EventDescription_C_ExecuteUbergraph_UI_Quest_EventDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Quest_EventDescription_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ConsequencesVerticalBox, UVerticalBox);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_230, UImage);
	READ_PTR_FULL(Image_366, UImage);
	READ_PTR_FULL(Image_405, UImage);
	READ_PTR_FULL(Img_EventIcon, UImage);
	READ_PTR_FULL(ItemList, UUniformGridPanel);
	READ_PTR_FULL(txt_EventName, UTextBlock);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_Quest_EventDescription_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ConsequencesVerticalBox);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_230);
	DELE_PTR_FULL(Image_366);
	DELE_PTR_FULL(Image_405);
	DELE_PTR_FULL(Img_EventIcon);
	DELE_PTR_FULL(ItemList);
	DELE_PTR_FULL(txt_EventName);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
