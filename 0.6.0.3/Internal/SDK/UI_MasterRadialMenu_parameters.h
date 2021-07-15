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

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SetSegmentOver
struct UUI_MasterRadialMenu_C_SetSegmentOver_Params
{
	class UUI_RadialSegment_C*                         Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rotation__;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rotation__=;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ExtraCheck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Extra__;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extra__=;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.GetMouseRotation
struct UUI_MasterRadialMenu_C_GetMouseRotation_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.Construct
struct UUI_MasterRadialMenu_C_Construct_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.OnSpawned
struct UUI_MasterRadialMenu_C_OnSpawned_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.RemoveMenu
struct UUI_MasterRadialMenu_C_RemoveMenu_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SelectMenuSegment
struct UUI_MasterRadialMenu_C_SelectMenuSegment_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.NextPage
struct UUI_MasterRadialMenu_C_NextPage_Params
{
	int                                                SwitcherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.PreviousPage
struct UUI_MasterRadialMenu_C_PreviousPage_Params
{
};

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.ExecuteUbergraph_UI_MasterRadialMenu
struct UUI_MasterRadialMenu_C_ExecuteUbergraph_UI_MasterRadialMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
