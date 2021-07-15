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

// Function UI_BuildingPanel.UI_BuildingPanel_C.Update HUDBuilding
struct UUI_BuildingPanel_C_Update_HUDBuilding_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	UMG_ESlateVisibility                               Action1Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Action1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	UMG_ESlateVisibility                               Action2Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Action2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	UMG_ESlateVisibility                               Action3Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Action3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> WarningType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BuildingPanel.UI_BuildingPanel_C.ChangeSteeringType_Event_1
struct UUI_BuildingPanel_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BuildingPanel.UI_BuildingPanel_C.Construct
struct UUI_BuildingPanel_C_Construct_Params
{
};

// Function UI_BuildingPanel.UI_BuildingPanel_C.UpdateIcons
struct UUI_BuildingPanel_C_UpdateIcons_Params
{
};

// Function UI_BuildingPanel.UI_BuildingPanel_C.ExecuteUbergraph_UI_BuildingPanel
struct UUI_BuildingPanel_C_ExecuteUbergraph_UI_BuildingPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
