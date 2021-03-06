#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_BuildingMenu.UI_BuildingMenu_C.CollapseItemsArray
struct UUI_BuildingMenu_C_CollapseItemsArray_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.GetFurnitureResources
struct UUI_BuildingMenu_C_GetFurnitureResources_Params
{
	class UUI_RadialSegment_C*                         Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.GetFenceResources
struct UUI_BuildingMenu_C_GetFenceResources_Params
{
	class UUI_RadialSegment_C*                         Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.GetBuildingResources
struct UUI_BuildingMenu_C_GetBuildingResources_Params
{
	struct FST_Building                                ST_Building;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.CheckBuildingsAvailability
struct UUI_BuildingMenu_C_CheckBuildingsAvailability_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.CheckResources
struct UUI_BuildingMenu_C_CheckResources_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeIcon_Brush_1
struct UUI_BuildingMenu_C_Get_BuildTypeIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeDescription_Text_1
struct UUI_BuildingMenu_C_Get_BuildTypeDescription_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.Get_BuildTypeName_Text_1
struct UUI_BuildingMenu_C_Get_BuildTypeName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.GetMouseOver
struct UUI_BuildingMenu_C_GetMouseOver_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.OnSpawned
struct UUI_BuildingMenu_C_OnSpawned_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.ChangeInformationAboutSegment
struct UUI_BuildingMenu_C_ChangeInformationAboutSegment_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.NextPage
struct UUI_BuildingMenu_C_NextPage_Params
{
	int                                                SwitcherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.PreviousPage
struct UUI_BuildingMenu_C_PreviousPage_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.PreConstruct
struct UUI_BuildingMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateResourcesCheck
struct UUI_BuildingMenu_C_UpdateResourcesCheck_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.UpdateBuildingsTechnologyAvailability
struct UUI_BuildingMenu_C_UpdateBuildingsTechnologyAvailability_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.RemoveMenu
struct UUI_BuildingMenu_C_RemoveMenu_Params
{
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.ExecuteUbergraph_UI_BuildingMenu
struct UUI_BuildingMenu_C_ExecuteUbergraph_UI_BuildingMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingMenu.UI_BuildingMenu_C.SegmentChanged__DelegateSignature
struct UUI_BuildingMenu_C_SegmentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
