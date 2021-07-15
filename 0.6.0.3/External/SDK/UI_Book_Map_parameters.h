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

// Function UI_Book_Map.UI_Book_Map_C.CenterMapOnPlayer
struct UUI_Book_Map_C_CenterMapOnPlayer_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapDrop
struct UUI_Book_Map_C_MapDrop_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapAdditionalAction
struct UUI_Book_Map_C_MapAdditionalAction_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.CheckWaypointText
struct UUI_Book_Map_C_CheckWaypointText_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.TryToSetWaypoint
struct UUI_Book_Map_C_TryToSetWaypoint_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapConfirm
struct UUI_Book_Map_C_MapConfirm_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapDown
struct UUI_Book_Map_C_MapDown_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapUp
struct UUI_Book_Map_C_MapUp_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.SetMapPosition_Gamepad
struct UUI_Book_Map_C_SetMapPosition_Gamepad_Params
{
	bool                                               Zoom_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              X;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Map.UI_Book_Map_C.MapRight
struct UUI_Book_Map_C_MapRight_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.MapLeft
struct UUI_Book_Map_C_MapLeft_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.UpdateTimeParameters
struct UUI_Book_Map_C_UpdateTimeParameters_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.UpdateGlobalMapIcons
struct UUI_Book_Map_C_UpdateGlobalMapIcons_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.UpdateHoveredBuildingRange
struct UUI_Book_Map_C_UpdateHoveredBuildingRange_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.SetMapPosition
struct UUI_Book_Map_C_SetMapPosition_Params
{
	bool                                               Zoom_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Map.UI_Book_Map_C.ZoomMap
struct UUI_Book_Map_C_ZoomMap_Params
{
	float                                              Axis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WithMouse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Map.UI_Book_Map_C.Tick
struct UUI_Book_Map_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Map.UI_Book_Map_C.UpdateMap
struct UUI_Book_Map_C_UpdateMap_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.UpdateMapGlobal
struct UUI_Book_Map_C_UpdateMapGlobal_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.BindEventToOnFilterChange
struct UUI_Book_Map_C_BindEventToOnFilterChange_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Update_MapTabGlobalResources
struct UUI_Book_Map_C_Update_MapTabGlobalResources_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.InitMap
struct UUI_Book_Map_C_InitMap_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.ChangeSteeringType_Event_1
struct UUI_Book_Map_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_Confirm
struct UUI_Book_Map_C_Btn_Confirm_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_AdditionalInteraction
struct UUI_Book_Map_C_Btn_AdditionalInteraction_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_Right
struct UUI_Book_Map_C_Btn_Right_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_Previous
struct UUI_Book_Map_C_Btn_Previous_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_Next
struct UUI_Book_Map_C_Btn_Next_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.Btn_Left
struct UUI_Book_Map_C_Btn_Left_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.btn_Return
struct UUI_Book_Map_C_btn_Return_Params
{
};

// Function UI_Book_Map.UI_Book_Map_C.TryToSetLeftMouseButton
struct UUI_Book_Map_C_TryToSetLeftMouseButton_Params
{
	bool                                               Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function UI_Book_Map.UI_Book_Map_C.ExecuteUbergraph_UI_Book_Map
struct UUI_Book_Map_C_ExecuteUbergraph_UI_Book_Map_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
