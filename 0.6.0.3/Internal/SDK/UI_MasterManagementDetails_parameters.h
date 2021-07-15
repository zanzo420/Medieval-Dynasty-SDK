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

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputAdditionalAction
struct UUI_MasterManagementDetails_C_InputAdditionalAction_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputSpecialAction
struct UUI_MasterManagementDetails_C_InputSpecialAction_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputConfirm
struct UUI_MasterManagementDetails_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropHeld
struct UUI_MasterManagementDetails_C_InputDropHeld_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropReleased
struct UUI_MasterManagementDetails_C_InputDropReleased_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropPressed
struct UUI_MasterManagementDetails_C_InputDropPressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ChangeSelectedLabel
struct UUI_MasterManagementDetails_C_ChangeSelectedLabel_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Crop
struct UUI_MasterManagementDetails_C_Crop_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Uncrop
struct UUI_MasterManagementDetails_C_Uncrop_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputCancel
struct UUI_MasterManagementDetails_C_InputCancel_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputLeft
struct UUI_MasterManagementDetails_C_InputLeft_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputRight
struct UUI_MasterManagementDetails_C_InputRight_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Construct
struct UUI_MasterManagementDetails_C_Construct_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Regenerate
struct UUI_MasterManagementDetails_C_Regenerate_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDecreaseIndex
struct UUI_MasterManagementDetails_C_InputDecreaseIndex_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputIncreaseIndex
struct UUI_MasterManagementDetails_C_InputIncreaseIndex_Params
{
};

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ExecuteUbergraph_UI_MasterManagementDetails
struct UUI_MasterManagementDetails_C_ExecuteUbergraph_UI_MasterManagementDetails_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
