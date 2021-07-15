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

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.SetMainCanvasParameters
struct UUI_SleepMasterRadialMenu_C_SetMainCanvasParameters_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.SetSegmentsRotation
struct UUI_SleepMasterRadialMenu_C_SetSegmentsRotation_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.GetMouseOver
struct UUI_SleepMasterRadialMenu_C_GetMouseOver_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.SetSegmentOver
struct UUI_SleepMasterRadialMenu_C_SetSegmentOver_Params
{
	class UUI_SleepSegment_C*                          Segment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rotation__;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rotation__=;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ExtraCheck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Extra__;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extra__=;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.GetMouseRotation
struct UUI_SleepMasterRadialMenu_C_GetMouseRotation_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.Construct
struct UUI_SleepMasterRadialMenu_C_Construct_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.RemoveMenu
struct UUI_SleepMasterRadialMenu_C_RemoveMenu_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.SelectMenuSegment
struct UUI_SleepMasterRadialMenu_C_SelectMenuSegment_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.ChangeInformationAboutSegment
struct UUI_SleepMasterRadialMenu_C_ChangeInformationAboutSegment_Params
{
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.PreConstruct
struct UUI_SleepMasterRadialMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.Tick
struct UUI_SleepMasterRadialMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.ExecuteUbergraph_UI_SleepMasterRadialMenu
struct UUI_SleepMasterRadialMenu_C_ExecuteUbergraph_UI_SleepMasterRadialMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SleepMasterRadialMenu.UI_SleepMasterRadialMenu_C.SegmentChanged__DelegateSignature
struct UUI_SleepMasterRadialMenu_C_SegmentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
