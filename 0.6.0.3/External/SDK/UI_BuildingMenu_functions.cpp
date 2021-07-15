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

// Function UI_BuildingMenu.UI_BuildingMenu_C.CollapseItemsArray
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::CollapseItemsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.CollapseItemsArray");

	UUI_BuildingMenu_C_CollapseItemsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.GetFurnitureResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RadialSegment_C*     Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingMenu_C::GetFurnitureResources(class UUI_RadialSegment_C* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.GetFurnitureResources");

	UUI_BuildingMenu_C_GetFurnitureResources_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.GetFenceResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RadialSegment_C*     Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingMenu_C::GetFenceResources(class UUI_RadialSegment_C* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.GetFenceResources");

	UUI_BuildingMenu_C_GetFenceResources_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.GetBuildingResources
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Building            ST_Building                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_BuildingMenu_C::GetBuildingResources(const struct FST_Building& ST_Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.GetBuildingResources");

	UUI_BuildingMenu_C_GetBuildingResources_Params params;
	params.ST_Building = ST_Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.CheckBuildingsAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::CheckBuildingsAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.CheckBuildingsAvailability");

	UUI_BuildingMenu_C_CheckBuildingsAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.CheckResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingMenu_C::CheckResources(int Index, int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.CheckResources");

	UUI_BuildingMenu_C_CheckResources_Params params;
	params.Index = Index;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeIcon_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UUI_BuildingMenu_C::Get_BuildTypeIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeIcon_Brush_1");

	UUI_BuildingMenu_C_Get_BuildTypeIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeDescription_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_BuildingMenu_C::Get_BuildTypeDescription_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeDescription_Text_1");

	UUI_BuildingMenu_C_Get_BuildTypeDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_BuildingMenu_C::Get_BuildTypeName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeName_Text_1");

	UUI_BuildingMenu_C_Get_BuildTypeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_BuildingMenu.UI_BuildingMenu_C.GetMouseOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.GetMouseOver");

	UUI_BuildingMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.OnSpawned");

	UUI_BuildingMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.ChangeInformationAboutSegment");

	UUI_BuildingMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.NextPage");

	UUI_BuildingMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.PreviousPage");

	UUI_BuildingMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.PreConstruct");

	UUI_BuildingMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateResourcesCheck
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::UpdateResourcesCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateResourcesCheck");

	UUI_BuildingMenu_C_UpdateResourcesCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateBuildingsTechnologyAvailability
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::UpdateBuildingsTechnologyAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateBuildingsTechnologyAvailability");

	UUI_BuildingMenu_C_UpdateBuildingsTechnologyAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.RemoveMenu");

	UUI_BuildingMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.ExecuteUbergraph_UI_BuildingMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingMenu_C::ExecuteUbergraph_UI_BuildingMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.ExecuteUbergraph_UI_BuildingMenu");

	UUI_BuildingMenu_C_ExecuteUbergraph_UI_BuildingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingMenu.UI_BuildingMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_BuildingMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingMenu.UI_BuildingMenu_C.SegmentChanged__DelegateSignature");

	UUI_BuildingMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingMenu_C::AfterRead()
{
	UUI_MasterRadialMenu_C::AfterRead();

	READ_PTR_FULL(AnimalBox, UHorizontalBox);
	READ_PTR_FULL(Animals, UCanvasPanel);
	READ_PTR_FULL(Animals_Eighth, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Seventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Animals_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(Building_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Building_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Building_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Building_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Building_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(BuildTypeDescription, UTextBlock);
	READ_PTR_FULL(BuildTypeName, UTextBlock);
	READ_PTR_FULL(BuildTypeName_4, UTextBlock);
	READ_PTR_FULL(CenterImage_2, UImage);
	READ_PTR_FULL(Crafting, UCanvasPanel);
	READ_PTR_FULL(Crafting_Eighth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Eleventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Nineth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Seventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Tenth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Thirteenth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crafting_Twelfth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops, UCanvasPanel);
	READ_PTR_FULL(Crops_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Crops_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(Extraction, UCanvasPanel);
	READ_PTR_FULL(FirstItem, UBorder);
	READ_PTR_FULL(FourthItem, UBorder);
	READ_PTR_FULL(Houses, UCanvasPanel);
	READ_PTR_FULL(Houses_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Houses_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Houses_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Houses_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(Hunting, UCanvasPanel);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Image_149, UImage);
	READ_PTR_FULL(Item1Cost, UTextBlock);
	READ_PTR_FULL(Item1Img, UImage);
	READ_PTR_FULL(Item1Inventory, UTextBlock);
	READ_PTR_FULL(Item1Name, UTextBlock);
	READ_PTR_FULL(Item2Cost, UTextBlock);
	READ_PTR_FULL(Item2Img, UImage);
	READ_PTR_FULL(Item2Inventory, UTextBlock);
	READ_PTR_FULL(Item2Name, UTextBlock);
	READ_PTR_FULL(Item3Cost, UTextBlock);
	READ_PTR_FULL(Item3Img, UImage);
	READ_PTR_FULL(Item3Inventory, UTextBlock);
	READ_PTR_FULL(Item3Name, UTextBlock);
	READ_PTR_FULL(Item4Cost, UTextBlock);
	READ_PTR_FULL(Item4Img, UImage);
	READ_PTR_FULL(Item4Inventory, UTextBlock);
	READ_PTR_FULL(Item4Name, UTextBlock);
	READ_PTR_FULL(LimitsBox, UHorizontalBox);
	READ_PTR_FULL(Main_Eighth, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Seventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Main_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(MainCanvas, UCanvasPanel);
	READ_PTR_FULL(MainInformationBox, UVerticalBox);
	READ_PTR_FULL(NotEnoughItem, UBorder);
	READ_PTR_FULL(NotEnoughResourcesText, UTextBlock);
	READ_PTR_FULL(PageSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(ResourcesBox, UVerticalBox);
	READ_PTR_FULL(ResourcesTextBox, USizeBox);
	READ_PTR_FULL(SecondItem, UBorder);
	READ_PTR_FULL(Storages, UCanvasPanel);
	READ_PTR_FULL(Storages_Eighth, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Seventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Storages_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(Survival_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Survival_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Survival_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Survival_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Survival_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(ThirdItem, UBorder);
	READ_PTR_FULL(txt_AnimalLimit, UTextBlock);
	READ_PTR_FULL(txt_WorkerLimit, UTextBlock);
	READ_PTR_FULL(WheelArrow, UImage);
	READ_PTR_FULL(WorkerBox, UHorizontalBox);
}

void UUI_BuildingMenu_C::BeforeDelete()
{
	UUI_MasterRadialMenu_C::BeforeDelete();

	DELE_PTR_FULL(AnimalBox);
	DELE_PTR_FULL(Animals);
	DELE_PTR_FULL(Animals_Eighth);
	DELE_PTR_FULL(Animals_Fifth);
	DELE_PTR_FULL(Animals_First);
	DELE_PTR_FULL(Animals_Fourth);
	DELE_PTR_FULL(Animals_Second);
	DELE_PTR_FULL(Animals_Seventh);
	DELE_PTR_FULL(Animals_Sixth);
	DELE_PTR_FULL(Animals_Third);
	DELE_PTR_FULL(Building_Fifth);
	DELE_PTR_FULL(Building_First);
	DELE_PTR_FULL(Building_Fourth);
	DELE_PTR_FULL(Building_Second);
	DELE_PTR_FULL(Building_Third);
	DELE_PTR_FULL(BuildTypeDescription);
	DELE_PTR_FULL(BuildTypeName);
	DELE_PTR_FULL(BuildTypeName_4);
	DELE_PTR_FULL(CenterImage_2);
	DELE_PTR_FULL(Crafting);
	DELE_PTR_FULL(Crafting_Eighth);
	DELE_PTR_FULL(Crafting_Eleventh);
	DELE_PTR_FULL(Crafting_Fifth);
	DELE_PTR_FULL(Crafting_First);
	DELE_PTR_FULL(Crafting_Fourth);
	DELE_PTR_FULL(Crafting_Nineth);
	DELE_PTR_FULL(Crafting_Second);
	DELE_PTR_FULL(Crafting_Seventh);
	DELE_PTR_FULL(Crafting_Sixth);
	DELE_PTR_FULL(Crafting_Tenth);
	DELE_PTR_FULL(Crafting_Third);
	DELE_PTR_FULL(Crafting_Thirteenth);
	DELE_PTR_FULL(Crafting_Twelfth);
	DELE_PTR_FULL(Crops);
	DELE_PTR_FULL(Crops_Fifth);
	DELE_PTR_FULL(Crops_First);
	DELE_PTR_FULL(Crops_Fourth);
	DELE_PTR_FULL(Crops_Second);
	DELE_PTR_FULL(Crops_Sixth);
	DELE_PTR_FULL(Crops_Third);
	DELE_PTR_FULL(Extraction);
	DELE_PTR_FULL(FirstItem);
	DELE_PTR_FULL(FourthItem);
	DELE_PTR_FULL(Houses);
	DELE_PTR_FULL(Houses_First);
	DELE_PTR_FULL(Houses_Fourth);
	DELE_PTR_FULL(Houses_Second);
	DELE_PTR_FULL(Houses_Third);
	DELE_PTR_FULL(Hunting);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Image_149);
	DELE_PTR_FULL(Item1Cost);
	DELE_PTR_FULL(Item1Img);
	DELE_PTR_FULL(Item1Inventory);
	DELE_PTR_FULL(Item1Name);
	DELE_PTR_FULL(Item2Cost);
	DELE_PTR_FULL(Item2Img);
	DELE_PTR_FULL(Item2Inventory);
	DELE_PTR_FULL(Item2Name);
	DELE_PTR_FULL(Item3Cost);
	DELE_PTR_FULL(Item3Img);
	DELE_PTR_FULL(Item3Inventory);
	DELE_PTR_FULL(Item3Name);
	DELE_PTR_FULL(Item4Cost);
	DELE_PTR_FULL(Item4Img);
	DELE_PTR_FULL(Item4Inventory);
	DELE_PTR_FULL(Item4Name);
	DELE_PTR_FULL(LimitsBox);
	DELE_PTR_FULL(Main_Eighth);
	DELE_PTR_FULL(Main_Fifth);
	DELE_PTR_FULL(Main_First);
	DELE_PTR_FULL(Main_Fourth);
	DELE_PTR_FULL(Main_Second);
	DELE_PTR_FULL(Main_Seventh);
	DELE_PTR_FULL(Main_Sixth);
	DELE_PTR_FULL(Main_Third);
	DELE_PTR_FULL(MainCanvas);
	DELE_PTR_FULL(MainInformationBox);
	DELE_PTR_FULL(NotEnoughItem);
	DELE_PTR_FULL(NotEnoughResourcesText);
	DELE_PTR_FULL(PageSwitcher);
	DELE_PTR_FULL(ResourcesBox);
	DELE_PTR_FULL(ResourcesTextBox);
	DELE_PTR_FULL(SecondItem);
	DELE_PTR_FULL(Storages);
	DELE_PTR_FULL(Storages_Eighth);
	DELE_PTR_FULL(Storages_Fifth);
	DELE_PTR_FULL(Storages_First);
	DELE_PTR_FULL(Storages_Fourth);
	DELE_PTR_FULL(Storages_Second);
	DELE_PTR_FULL(Storages_Seventh);
	DELE_PTR_FULL(Storages_Sixth);
	DELE_PTR_FULL(Storages_Third);
	DELE_PTR_FULL(Survival_Fifth);
	DELE_PTR_FULL(Survival_First);
	DELE_PTR_FULL(Survival_Fourth);
	DELE_PTR_FULL(Survival_Second);
	DELE_PTR_FULL(Survival_Third);
	DELE_PTR_FULL(ThirdItem);
	DELE_PTR_FULL(txt_AnimalLimit);
	DELE_PTR_FULL(txt_WorkerLimit);
	DELE_PTR_FULL(WheelArrow);
	DELE_PTR_FULL(WorkerBox);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
