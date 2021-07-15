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

// Function UI_Slot_Description.UI_Slot_Description_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Slot_Description_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Description.UI_Slot_Description_C.Construct");

	UUI_Slot_Description_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Description.UI_Slot_Description_C.ExecuteUbergraph_UI_Slot_Description
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Description_C::ExecuteUbergraph_UI_Slot_Description(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Description.UI_Slot_Description_C.ExecuteUbergraph_UI_Slot_Description");

	UUI_Slot_Description_C_ExecuteUbergraph_UI_Slot_Description_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Slot_Description_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Stats, UTextBlock);
	READ_PTR_FULL(Text, UTextBlock);
	READ_PTR_FULL(txt_ComparedValue, UTextBlock);
}

void UUI_Slot_Description_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Stats);
	DELE_PTR_FULL(Text);
	DELE_PTR_FULL(txt_ComparedValue);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
