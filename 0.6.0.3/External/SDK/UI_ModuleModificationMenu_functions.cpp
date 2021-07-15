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

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::GetResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetResources");

	UUI_ModuleModificationMenu_C_GetResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveAllMaterialSegments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::RemoveAllMaterialSegments()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveAllMaterialSegments");

	UUI_ModuleModificationMenu_C_RemoveAllMaterialSegments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CollapseItemsArray
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::CollapseItemsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CollapseItemsArray");

	UUI_ModuleModificationMenu_C_CollapseItemsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateMaterialTypes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ModuleType_E_ModuleType> ModuleType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ModuleModificationMenu_C::CreateMaterialTypes(TEnumAsByte<E_ModuleType_E_ModuleType> ModuleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateMaterialTypes");

	UUI_ModuleModificationMenu_C_CreateMaterialTypes_Params params;
	params.ModuleType = ModuleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateModulesCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::CreateModulesCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateModulesCategories");

	UUI_ModuleModificationMenu_C_CreateModulesCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_ModuleModificationMenu_C::Get_BuildTypeDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeDescription");

	UUI_ModuleModificationMenu_C_Get_BuildTypeDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_ModuleModificationMenu_C::Get_BuildTypeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeName");

	UUI_ModuleModificationMenu_C_Get_BuildTypeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetMouseOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetMouseOver");

	UUI_ModuleModificationMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.OnSpawned");

	UUI_ModuleModificationMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ChangeInformationAboutSegment");

	UUI_ModuleModificationMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ModuleModificationMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.NextPage");

	UUI_ModuleModificationMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.PreviousPage");

	UUI_ModuleModificationMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveMenu");

	UUI_ModuleModificationMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ExecuteUbergraph_UI_ModuleModificationMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ModuleModificationMenu_C::ExecuteUbergraph_UI_ModuleModificationMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ExecuteUbergraph_UI_ModuleModificationMenu");

	UUI_ModuleModificationMenu_C_ExecuteUbergraph_UI_ModuleModificationMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_ModuleModificationMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.SegmentChanged__DelegateSignature");

	UUI_ModuleModificationMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_ModuleModificationMenu_C::AfterRead()
{
	UUI_MasterRadialMenu_C::AfterRead();

	READ_PTR_FULL(BuildTypeDescription, UTextBlock);
	READ_PTR_FULL(BuildTypeName, UTextBlock);
	READ_PTR_FULL(BuildTypeName_4, UTextBlock);
	READ_PTR_FULL(CanvasSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(CenterImage_2, UImage);
	READ_PTR_FULL(FirstItem, UBorder);
	READ_PTR_FULL(FourthItem, UBorder);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Item1Cost, UTextBlock);
	READ_PTR_FULL(Item1Name, UTextBlock);
	READ_PTR_FULL(Item2Cost, UTextBlock);
	READ_PTR_FULL(Item2Name, UTextBlock);
	READ_PTR_FULL(Item3Cost, UTextBlock);
	READ_PTR_FULL(Item3Name, UTextBlock);
	READ_PTR_FULL(Item4Cost, UTextBlock);
	READ_PTR_FULL(Item4Name, UTextBlock);
	READ_PTR_FULL(MainCanvas, UCanvasPanel);
	READ_PTR_FULL(MainInformationBox, UVerticalBox);
	READ_PTR_FULL(MaterialTypeCanvas, UCanvasPanel);
	READ_PTR_FULL(ResourcesBox, UVerticalBox);
	READ_PTR_FULL(ResourcesTextBox, USizeBox);
	READ_PTR_FULL(SecondItem, UBorder);
	READ_PTR_FULL(ThirdItem, UBorder);
	READ_PTR_FULL(WheelArrow, UImage);
}

void UUI_ModuleModificationMenu_C::BeforeDelete()
{
	UUI_MasterRadialMenu_C::BeforeDelete();

	DELE_PTR_FULL(BuildTypeDescription);
	DELE_PTR_FULL(BuildTypeName);
	DELE_PTR_FULL(BuildTypeName_4);
	DELE_PTR_FULL(CanvasSwitcher);
	DELE_PTR_FULL(CenterImage_2);
	DELE_PTR_FULL(FirstItem);
	DELE_PTR_FULL(FourthItem);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Item1Cost);
	DELE_PTR_FULL(Item1Name);
	DELE_PTR_FULL(Item2Cost);
	DELE_PTR_FULL(Item2Name);
	DELE_PTR_FULL(Item3Cost);
	DELE_PTR_FULL(Item3Name);
	DELE_PTR_FULL(Item4Cost);
	DELE_PTR_FULL(Item4Name);
	DELE_PTR_FULL(MainCanvas);
	DELE_PTR_FULL(MainInformationBox);
	DELE_PTR_FULL(MaterialTypeCanvas);
	DELE_PTR_FULL(ResourcesBox);
	DELE_PTR_FULL(ResourcesTextBox);
	DELE_PTR_FULL(SecondItem);
	DELE_PTR_FULL(ThirdItem);
	DELE_PTR_FULL(WheelArrow);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
