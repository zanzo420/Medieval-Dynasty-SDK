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

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.GetFenceResources
struct UUI_Furniture_DecorationMenu_C_GetFenceResources_Params
{
	class UUI_RadialSegment_C*                         Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.GetFurnitureResources
struct UUI_Furniture_DecorationMenu_C_GetFurnitureResources_Params
{
	class UUI_RadialSegment_C*                         Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.CollapseItemsArray
struct UUI_Furniture_DecorationMenu_C_CollapseItemsArray_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.GetBuildingResources
struct UUI_Furniture_DecorationMenu_C_GetBuildingResources_Params
{
	struct FST_Building                                ST_Building;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.CheckBuildingsAvailability
struct UUI_Furniture_DecorationMenu_C_CheckBuildingsAvailability_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.CheckResources
struct UUI_Furniture_DecorationMenu_C_CheckResources_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.Get_BuildTypeIcon_Brush_1
struct UUI_Furniture_DecorationMenu_C_Get_BuildTypeIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.Get_BuildTypeDescription_Text_1
struct UUI_Furniture_DecorationMenu_C_Get_BuildTypeDescription_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.Get_BuildTypeName_Text_1
struct UUI_Furniture_DecorationMenu_C_Get_BuildTypeName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.GetMouseOver
struct UUI_Furniture_DecorationMenu_C_GetMouseOver_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.OnSpawned
struct UUI_Furniture_DecorationMenu_C_OnSpawned_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.ChangeInformationAboutSegment
struct UUI_Furniture_DecorationMenu_C_ChangeInformationAboutSegment_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.NextPage
struct UUI_Furniture_DecorationMenu_C_NextPage_Params
{
	int                                                SwitcherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.PreviousPage
struct UUI_Furniture_DecorationMenu_C_PreviousPage_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.PreConstruct
struct UUI_Furniture_DecorationMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.UpdateResourcesCheck
struct UUI_Furniture_DecorationMenu_C_UpdateResourcesCheck_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.UpdateBuildingsTechnologyAvailability
struct UUI_Furniture_DecorationMenu_C_UpdateBuildingsTechnologyAvailability_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.RemoveMenu
struct UUI_Furniture_DecorationMenu_C_RemoveMenu_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.TryToCraftMoreItems
struct UUI_Furniture_DecorationMenu_C_TryToCraftMoreItems_Params
{
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.ChangeSteeringType_Event_1
struct UUI_Furniture_DecorationMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.ExecuteUbergraph_UI_Furniture_DecorationMenu
struct UUI_Furniture_DecorationMenu_C_ExecuteUbergraph_UI_Furniture_DecorationMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Furniture_DecorationMenu.UI_Furniture_DecorationMenu_C.SegmentChanged__DelegateSignature
struct UUI_Furniture_DecorationMenu_C_SegmentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
