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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
