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

// Function UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Event_ButtonRestriction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C.Construct");

	UUI_Event_ButtonRestriction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C.ExecuteUbergraph_UI_Event_ButtonRestriction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Event_ButtonRestriction_C::ExecuteUbergraph_UI_Event_ButtonRestriction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C.ExecuteUbergraph_UI_Event_ButtonRestriction");

	UUI_Event_ButtonRestriction_C_ExecuteUbergraph_UI_Event_ButtonRestriction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Event_ButtonRestriction_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_180, UImage);
	READ_PTR_FULL(txt_ItemName, UTextBlock);
	READ_PTR_FULL(Image, UObject);
}

void UUI_Event_ButtonRestriction_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_180);
	DELE_PTR_FULL(txt_ItemName);
	DELE_PTR_FULL(Image);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
