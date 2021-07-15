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

// Function UI_Book_Management.UI_Book_Management_C.InputSpecialActionPressed
struct UUI_Book_Management_C_InputSpecialActionPressed_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Hold
struct UUI_Book_Management_C_InputDrop_Hold_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Released
struct UUI_Book_Management_C_InputDrop_Released_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.AnimalAssignmentNotification
struct UUI_Book_Management_C_AnimalAssignmentNotification_Params
{
	bool                                               IsAssigning;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AnimalName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Book_Management.UI_Book_Management_C.NPCAssignmentNotification
struct UUI_Book_Management_C_NPCAssignmentNotification_Params
{
	bool                                               IsAssigning;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsWorkplace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       NPCName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideActive
struct UUI_Book_Management_C_MakeLeftSideActive_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideUnactive
struct UUI_Book_Management_C_MakeLeftSideUnactive_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedAnimal
struct UUI_Book_Management_C_ChangeSelectedAnimal_Params
{
	int                                                SelectedAnimalIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.DecreaseAnimalIndex
struct UUI_Book_Management_C_DecreaseAnimalIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.IncreaseAnimalIndex
struct UUI_Book_Management_C_IncreaseAnimalIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InputAdditionalInteraction
struct UUI_Book_Management_C_InputAdditionalInteraction_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InputCancel
struct UUI_Book_Management_C_InputCancel_Params
{
	bool                                               InputHandled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Pressed
struct UUI_Book_Management_C_InputDrop_Pressed_Params
{
	bool                                               CanHoldForCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Management.UI_Book_Management_C.InputConfirm
struct UUI_Book_Management_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Management.UI_Book_Management_C.InputDecreaseIndex
struct UUI_Book_Management_C_InputDecreaseIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InputIncreaseIndex
struct UUI_Book_Management_C_InputIncreaseIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.SelectAnimal
struct UUI_Book_Management_C_SelectAnimal_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherAnimals
struct UUI_Book_Management_C_RemoveOtherAnimals_Params
{
	class UWidget*                                     AnimalWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherBuildings
struct UUI_Book_Management_C_RemoveOtherBuildings_Params
{
	class UWidget*                                     BuildingWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherNPCs
struct UUI_Book_Management_C_RemoveOtherNPCs_Params
{
	class UWidget*                                     NPCWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.ClearAssignmentWindows
struct UUI_Book_Management_C_ClearAssignmentWindows_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.AddAssignmentWindow
struct UUI_Book_Management_C_AddAssignmentWindow_Params
{
	class UUI_MasterAssignment_C*                      UI_AssignmentWindowReference;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.UpdateSelectedBuilding
struct UUI_Book_Management_C_UpdateSelectedBuilding_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.SelectBuilding
struct UUI_Book_Management_C_SelectBuilding_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedBuilding
struct UUI_Book_Management_C_ChangeSelectedBuilding_Params
{
	int                                                SelectedBuildingParentIndex;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.DecreaseBuildingIndex
struct UUI_Book_Management_C_DecreaseBuildingIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.IncreaseBuildingIndex
struct UUI_Book_Management_C_IncreaseBuildingIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedField
struct UUI_Book_Management_C_ChangeSelectedField_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotsUnactive
struct UUI_Book_Management_C_MakeFieldSlotsUnactive_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotActive
struct UUI_Book_Management_C_MakeFieldSlotActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.MakeManagementLabelsUnactive
struct UUI_Book_Management_C_MakeManagementLabelsUnactive_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.MakeManagementLablActive
struct UUI_Book_Management_C_MakeManagementLablActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeMainSwitcherIndex
struct UUI_Book_Management_C_ChangeMainSwitcherIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.UpdateInputButtons
struct UUI_Book_Management_C_UpdateInputButtons_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.SelectNPC
struct UUI_Book_Management_C_SelectNPC_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedNPCManagementIndex
struct UUI_Book_Management_C_ChangeSelectedNPCManagementIndex_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotActive
struct UUI_Book_Management_C_MakeMapNPCManagementSlotActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotsUnactive
struct UUI_Book_Management_C_MakeMapNPCManagementSlotsUnactive_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.DecreaseMapNPCManagementIndex
struct UUI_Book_Management_C_DecreaseMapNPCManagementIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.IncreaseMapNPCManagementIndex
struct UUI_Book_Management_C_IncreaseMapNPCManagementIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.UpdateMap
struct UUI_Book_Management_C_UpdateMap_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Construct
struct UUI_Book_Management_C_Construct_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Update_MapTabGlobalResources
struct UUI_Book_Management_C_Update_MapTabGlobalResources_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.InitManagement
struct UUI_Book_Management_C_InitManagement_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.SelectField
struct UUI_Book_Management_C_SelectField_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeFieldInfo
struct UUI_Book_Management_C_ChangeFieldInfo_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.IncreaseFieldIndex
struct UUI_Book_Management_C_IncreaseFieldIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.DecreaseFieldIndex
struct UUI_Book_Management_C_DecreaseFieldIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.IncreaseManagementLabelsIndex
struct UUI_Book_Management_C_IncreaseManagementLabelsIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.DecreaseManagementLabelsIndex
struct UUI_Book_Management_C_DecreaseManagementLabelsIndex_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.AddIconToMap
struct UUI_Book_Management_C_AddIconToMap_Params
{
	class UUI_ManagementMapIcon_C*                     IconReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.PreConstruct
struct UUI_Book_Management_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Management.UI_Book_Management_C.ChangeSteeringType_Event_1
struct UUI_Book_Management_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Management.UI_Book_Management_C.UnbindGlobalParametersUpdate
struct UUI_Book_Management_C_UnbindGlobalParametersUpdate_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Tick
struct UUI_Book_Management_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Confirm
struct UUI_Book_Management_C_Btn_Confirm_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Drop
struct UUI_Book_Management_C_Btn_Drop_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Drop_Hold
struct UUI_Book_Management_C_Btn_Drop_Hold_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_AdditionalInteraction
struct UUI_Book_Management_C_Btn_AdditionalInteraction_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Up
struct UUI_Book_Management_C_Btn_Up_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Down
struct UUI_Book_Management_C_Btn_Down_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Left
struct UUI_Book_Management_C_Btn_Left_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Right
struct UUI_Book_Management_C_Btn_Right_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Previous
struct UUI_Book_Management_C_Btn_Previous_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_Next
struct UUI_Book_Management_C_Btn_Next_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.btn_Return
struct UUI_Book_Management_C_btn_Return_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.Btn_SpecialAction
struct UUI_Book_Management_C_Btn_SpecialAction_Params
{
};

// Function UI_Book_Management.UI_Book_Management_C.ExecuteUbergraph_UI_Book_Management
struct UUI_Book_Management_C_ExecuteUbergraph_UI_Book_Management_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
