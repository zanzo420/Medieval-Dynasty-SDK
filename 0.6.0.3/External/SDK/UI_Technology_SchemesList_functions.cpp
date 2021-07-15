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

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.FillSchemesList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> SchemesList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_Technology_SchemesList_C::FillSchemesList(TArray<struct FDataTableRowHandle>* SchemesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.FillSchemesList");

	UUI_Technology_SchemesList_C_FillSchemesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SchemesList != nullptr)
		*SchemesList = params.SchemesList;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ChangeSelectedScheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_SchemesList_C::ChangeSelectedScheme(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ChangeSelectedScheme");

	UUI_Technology_SchemesList_C_ChangeSelectedScheme_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemeActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_SchemesList_C::MakeSchemeActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemeActive");

	UUI_Technology_SchemesList_C_MakeSchemeActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemesUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Technology_SchemesList_C::MakeSchemesUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemesUnactive");

	UUI_Technology_SchemesList_C_MakeSchemesUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.AddChildToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     Scheme                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int                            TechnologyVillageManagerID     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_SchemesList_C::AddChildToGrid(int Index, const struct FDataTableRowHandle& Scheme, int TechnologyVillageManagerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.AddChildToGrid");

	UUI_Technology_SchemesList_C_AddChildToGrid_Params params;
	params.Index = Index;
	params.Scheme = Scheme;
	params.TechnologyVillageManagerID = TechnologyVillageManagerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateSchemesList
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_Technology_SchemesList_C::UpdateSchemesList(TArray<struct FDataTableRowHandle>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateSchemesList");

	UUI_Technology_SchemesList_C_UpdateSchemesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateCoins
// (BlueprintCallable, BlueprintEvent)
void UUI_Technology_SchemesList_C::UpdateCoins()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateCoins");

	UUI_Technology_SchemesList_C_UpdateCoins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Technology_SchemesList_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeActive");

	UUI_Technology_SchemesList_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Technology_SchemesList_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeUnactive");

	UUI_Technology_SchemesList_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.BindSchemesUpdateCoins
// (BlueprintCallable, BlueprintEvent)
void UUI_Technology_SchemesList_C::BindSchemesUpdateCoins()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.BindSchemesUpdateCoins");

	UUI_Technology_SchemesList_C_BindSchemesUpdateCoins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ExecuteUbergraph_UI_Technology_SchemesList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_SchemesList_C::ExecuteUbergraph_UI_Technology_SchemesList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ExecuteUbergraph_UI_Technology_SchemesList");

	UUI_Technology_SchemesList_C_ExecuteUbergraph_UI_Technology_SchemesList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Technology_SchemesList_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Grid_Schemes, UUniformGridPanel);
	READ_PTR_FULL(Image_72, UImage);
	READ_PTR_FULL(Image_248, UImage);
	READ_PTR_FULL(Image_451, UImage);
	READ_PTR_FULL(SchemesScroll, UScrollBox);
	READ_PTR_FULL(txt_Coins, UTextBlock);
	READ_PTR_FULL(ParentWidget, UUI_Book_Technology_C);
}

void UUI_Technology_SchemesList_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Grid_Schemes);
	DELE_PTR_FULL(Image_72);
	DELE_PTR_FULL(Image_248);
	DELE_PTR_FULL(Image_451);
	DELE_PTR_FULL(SchemesScroll);
	DELE_PTR_FULL(txt_Coins);
	DELE_PTR_FULL(ParentWidget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
