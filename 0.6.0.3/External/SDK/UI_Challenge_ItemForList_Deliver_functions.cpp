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

// Function UI_Challenge_ItemForList_Deliver.UI_Challenge_ItemForList_Deliver_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Challenge_ItemForList_Deliver_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_ItemForList_Deliver.UI_Challenge_ItemForList_Deliver_C.Construct");

	UUI_Challenge_ItemForList_Deliver_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Challenge_ItemForList_Deliver.UI_Challenge_ItemForList_Deliver_C.ExecuteUbergraph_UI_Challenge_ItemForList_Deliver
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Challenge_ItemForList_Deliver_C::ExecuteUbergraph_UI_Challenge_ItemForList_Deliver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_ItemForList_Deliver.UI_Challenge_ItemForList_Deliver_C.ExecuteUbergraph_UI_Challenge_ItemForList_Deliver");

	UUI_Challenge_ItemForList_Deliver_C_ExecuteUbergraph_UI_Challenge_ItemForList_Deliver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Challenge_ItemForList_Deliver_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(img_Icon, UImage);
	READ_PTR_FULL(txt_ItemName, UTextBlock);
	READ_PTR_FULL(txt_Quantity, UTextBlock);
	READ_PTR_FULL(Icon, UTexture2D);
}

void UUI_Challenge_ItemForList_Deliver_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(img_Icon);
	DELE_PTR_FULL(txt_ItemName);
	DELE_PTR_FULL(txt_Quantity);
	DELE_PTR_FULL(Icon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
