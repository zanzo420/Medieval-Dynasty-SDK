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

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.GetStatus
struct UUI_ManagementDetails_Animal_C_GetStatus_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                     // (Parm, OutParm)
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputConfirm
struct UUI_ManagementDetails_Animal_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDropPressed
struct UUI_ManagementDetails_Animal_C_InputDropPressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Construct
struct UUI_ManagementDetails_Animal_C_Construct_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputDecreaseIndex
struct UUI_ManagementDetails_Animal_C_InputDecreaseIndex_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputIncreaseIndex
struct UUI_ManagementDetails_Animal_C_InputIncreaseIndex_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.InputCancel
struct UUI_ManagementDetails_Animal_C_InputCancel_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Uncrop
struct UUI_ManagementDetails_Animal_C_Uncrop_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.Crop
struct UUI_ManagementDetails_Animal_C_Crop_Params
{
};

// Function UI_ManagementDetails_Animal.UI_ManagementDetails_Animal_C.ExecuteUbergraph_UI_ManagementDetails_Animal
struct UUI_ManagementDetails_Animal_C_ExecuteUbergraph_UI_ManagementDetails_Animal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
