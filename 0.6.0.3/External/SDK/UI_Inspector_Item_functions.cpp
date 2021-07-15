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

// Function UI_Inspector_Item.UI_Inspector_Item_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_Item_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Item.UI_Inspector_Item_C.UpdateData");

	UUI_Inspector_Item_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Item.UI_Inspector_Item_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Item_C::Init(const struct FText& Name, TEnumAsByte<E_Ownership_E_Ownership> Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Item.UI_Inspector_Item_C.Init");

	UUI_Inspector_Item_C_Init_Params params;
	params.Name = Name;
	params.Ownership = Ownership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Item.UI_Inspector_Item_C.ExecuteUbergraph_UI_Inspector_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Item_C::ExecuteUbergraph_UI_Inspector_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Item.UI_Inspector_Item_C.ExecuteUbergraph_UI_Inspector_Item");

	UUI_Inspector_Item_C_ExecuteUbergraph_UI_Inspector_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inspector_Item_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_Name, UTextBlock);
}

void UUI_Inspector_Item_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_Name);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
