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

// Function UI_FenceMenu.UI_FenceMenu_C.GetFenceResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RadialSegment_C*     Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_FenceMenu_C::GetFenceResources(class UUI_RadialSegment_C* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.GetFenceResources");

	UUI_FenceMenu_C_GetFenceResources_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.GetFurnitureResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RadialSegment_C*     Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_FenceMenu_C::GetFurnitureResources(class UUI_RadialSegment_C* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.GetFurnitureResources");

	UUI_FenceMenu_C_GetFurnitureResources_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.CollapseItemsArray
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::CollapseItemsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.CollapseItemsArray");

	UUI_FenceMenu_C_CollapseItemsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.GetBuildingResources
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Building            ST_Building                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_FenceMenu_C::GetBuildingResources(const struct FST_Building& ST_Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.GetBuildingResources");

	UUI_FenceMenu_C_GetBuildingResources_Params params;
	params.ST_Building = ST_Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.CheckBuildingsAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::CheckBuildingsAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.CheckBuildingsAvailability");

	UUI_FenceMenu_C_CheckBuildingsAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.CheckResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_FenceMenu_C::CheckResources(int Index, int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.CheckResources");

	UUI_FenceMenu_C_CheckResources_Params params;
	params.Index = Index;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeIcon_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UUI_FenceMenu_C::Get_BuildTypeIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeIcon_Brush_1");

	UUI_FenceMenu_C_Get_BuildTypeIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeDescription_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_FenceMenu_C::Get_BuildTypeDescription_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeDescription_Text_1");

	UUI_FenceMenu_C_Get_BuildTypeDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_FenceMenu_C::Get_BuildTypeName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.Get_BuildTypeName_Text_1");

	UUI_FenceMenu_C_Get_BuildTypeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_FenceMenu.UI_FenceMenu_C.GetMouseOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.GetMouseOver");

	UUI_FenceMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.OnSpawned");

	UUI_FenceMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.ChangeInformationAboutSegment");

	UUI_FenceMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_FenceMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.NextPage");

	UUI_FenceMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.PreviousPage");

	UUI_FenceMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_FenceMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.PreConstruct");

	UUI_FenceMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.UpdateResourcesCheck
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::UpdateResourcesCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.UpdateResourcesCheck");

	UUI_FenceMenu_C_UpdateResourcesCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.UpdateBuildingsTechnologyAvailability
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::UpdateBuildingsTechnologyAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.UpdateBuildingsTechnologyAvailability");

	UUI_FenceMenu_C_UpdateBuildingsTechnologyAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.RemoveMenu");

	UUI_FenceMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.TryToCraftMoreItems
// (BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::TryToCraftMoreItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.TryToCraftMoreItems");

	UUI_FenceMenu_C_TryToCraftMoreItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_FenceMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.ChangeSteeringType_Event_1");

	UUI_FenceMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.ExecuteUbergraph_UI_FenceMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_FenceMenu_C::ExecuteUbergraph_UI_FenceMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.ExecuteUbergraph_UI_FenceMenu");

	UUI_FenceMenu_C_ExecuteUbergraph_UI_FenceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_FenceMenu.UI_FenceMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_FenceMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FenceMenu.UI_FenceMenu_C.SegmentChanged__DelegateSignature");

	UUI_FenceMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_FenceMenu_C::AfterRead()
{
	UUI_MasterRadialMenu_C::AfterRead();

	READ_PTR_FULL(BuildTypeDescription, UTextBlock);
	READ_PTR_FULL(BuildTypeName, UTextBlock);
	READ_PTR_FULL(BuildTypeName_4, UTextBlock);
	READ_PTR_FULL(CenterImage_2, UImage);
	READ_PTR_FULL(CraftMoreItem, UBorder);
	READ_PTR_FULL(Fence, UCanvasPanel);
	READ_PTR_FULL(Fence_Fifth, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_First, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_Fourth, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_Second, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_Seventh, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_Sixth, UUI_RadialSegment_C);
	READ_PTR_FULL(Fence_Third, UUI_RadialSegment_C);
	READ_PTR_FULL(FirstItem, UBorder);
	READ_PTR_FULL(FourthItem, UBorder);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Img_Wheel_Gamepad_2, UImage);
	READ_PTR_FULL(Img_Wheel_Keyboard_2, UImage);
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
	READ_PTR_FULL(MainInformationBox, UVerticalBox);
	READ_PTR_FULL(MoreActionSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(NotEnoughItem, UBorder);
	READ_PTR_FULL(NotEnoughResourcesText, UTextBlock);
	READ_PTR_FULL(PageSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(ResourcesBox, UVerticalBox);
	READ_PTR_FULL(ResourcesTextBox, USizeBox);
	READ_PTR_FULL(SecondItem, UBorder);
	READ_PTR_FULL(ThirdItem, UBorder);
	READ_PTR_FULL(txt_BuyScheme, UTextBlock);
	READ_PTR_FULL(txt_BuyScheme_Cost, UTextBlock);
	READ_PTR_FULL(txt_BuyScheme_Inventory, UTextBlock);
	READ_PTR_FULL(txt_CraftMoreAction, UTextBlock);
	READ_PTR_FULL(txt_WheelLetter_2, UTextBlock);
	READ_PTR_FULL(WheelArrow, UImage);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
}

void UUI_FenceMenu_C::BeforeDelete()
{
	UUI_MasterRadialMenu_C::BeforeDelete();

	DELE_PTR_FULL(BuildTypeDescription);
	DELE_PTR_FULL(BuildTypeName);
	DELE_PTR_FULL(BuildTypeName_4);
	DELE_PTR_FULL(CenterImage_2);
	DELE_PTR_FULL(CraftMoreItem);
	DELE_PTR_FULL(Fence);
	DELE_PTR_FULL(Fence_Fifth);
	DELE_PTR_FULL(Fence_First);
	DELE_PTR_FULL(Fence_Fourth);
	DELE_PTR_FULL(Fence_Second);
	DELE_PTR_FULL(Fence_Seventh);
	DELE_PTR_FULL(Fence_Sixth);
	DELE_PTR_FULL(Fence_Third);
	DELE_PTR_FULL(FirstItem);
	DELE_PTR_FULL(FourthItem);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Img_Wheel_Gamepad_2);
	DELE_PTR_FULL(Img_Wheel_Keyboard_2);
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
	DELE_PTR_FULL(MainInformationBox);
	DELE_PTR_FULL(MoreActionSwitcher);
	DELE_PTR_FULL(NotEnoughItem);
	DELE_PTR_FULL(NotEnoughResourcesText);
	DELE_PTR_FULL(PageSwitcher);
	DELE_PTR_FULL(ResourcesBox);
	DELE_PTR_FULL(ResourcesTextBox);
	DELE_PTR_FULL(SecondItem);
	DELE_PTR_FULL(ThirdItem);
	DELE_PTR_FULL(txt_BuyScheme);
	DELE_PTR_FULL(txt_BuyScheme_Cost);
	DELE_PTR_FULL(txt_BuyScheme_Inventory);
	DELE_PTR_FULL(txt_CraftMoreAction);
	DELE_PTR_FULL(txt_WheelLetter_2);
	DELE_PTR_FULL(WheelArrow);
	DELE_PTR_FULL(WidgetSwitcher_2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
