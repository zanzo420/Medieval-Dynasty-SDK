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

// Function UI_Challenge_ItemForList_Food.UI_Challenge_ItemForList_Food_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Challenge_ItemForList_Food_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_ItemForList_Food.UI_Challenge_ItemForList_Food_C.Construct");

	UUI_Challenge_ItemForList_Food_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Challenge_ItemForList_Food.UI_Challenge_ItemForList_Food_C.ExecuteUbergraph_UI_Challenge_ItemForList_Food
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Challenge_ItemForList_Food_C::ExecuteUbergraph_UI_Challenge_ItemForList_Food(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_ItemForList_Food.UI_Challenge_ItemForList_Food_C.ExecuteUbergraph_UI_Challenge_ItemForList_Food");

	UUI_Challenge_ItemForList_Food_C_ExecuteUbergraph_UI_Challenge_ItemForList_Food_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Challenge_ItemForList_Food_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_AmountOfFood, UTextBlock);
}

void UUI_Challenge_ItemForList_Food_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_AmountOfFood);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
