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

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.GetStatus
struct UUI_ManagementDetails_NPC_C_GetStatus_Params
{
	struct FText                                       Status;                                                    // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                     // (Parm, OutParm)
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputConfirm
struct UUI_ManagementDetails_NPC_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDropPressed
struct UUI_ManagementDetails_NPC_C_InputDropPressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.FillFamilySlots
struct UUI_ManagementDetails_NPC_C_FillFamilySlots_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ChangeSelectedSlot
struct UUI_ManagementDetails_NPC_C_ChangeSelectedSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Construct
struct UUI_ManagementDetails_NPC_C_Construct_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDecreaseIndex
struct UUI_ManagementDetails_NPC_C_InputDecreaseIndex_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputIncreaseIndex
struct UUI_ManagementDetails_NPC_C_InputIncreaseIndex_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputCancel
struct UUI_ManagementDetails_NPC_C_InputCancel_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Uncrop
struct UUI_ManagementDetails_NPC_C_Uncrop_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Update
struct UUI_ManagementDetails_NPC_C_Update_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Crop
struct UUI_ManagementDetails_NPC_C_Crop_Params
{
};

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ExecuteUbergraph_UI_ManagementDetails_NPC
struct UUI_ManagementDetails_NPC_C_ExecuteUbergraph_UI_ManagementDetails_NPC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
