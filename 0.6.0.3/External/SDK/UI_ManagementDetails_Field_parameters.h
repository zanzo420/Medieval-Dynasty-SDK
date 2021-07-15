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

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.GetStatus
struct UUI_ManagementDetails_Field_C_GetStatus_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                     // (Parm, OutParm)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.OnMouseButtonUp
struct UUI_ManagementDetails_Field_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction_WithExactFieldSlot
struct UUI_ManagementDetails_Field_C_InputSpecialAction_WithExactFieldSlot_Params
{
	int                                                SelectedFieldSlotX;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedFieldSlotY;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedLabel
struct UUI_ManagementDetails_Field_C_ChangeSelectedLabel_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputSpecialAction
struct UUI_ManagementDetails_Field_C_InputSpecialAction_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SetSizeOfCanvasAndGrid
struct UUI_ManagementDetails_Field_C_SetSizeOfCanvasAndGrid_Params
{
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   FieldType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputConfirm
struct UUI_ManagementDetails_Field_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotActive
struct UUI_ManagementDetails_Field_C_MakeFieldSlotActive_Params
{
	int                                                InedexX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.MakeFieldSlotsUnactive
struct UUI_ManagementDetails_Field_C_MakeFieldSlotsUnactive_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ChangeSelectedFieldSlot
struct UUI_ManagementDetails_Field_C_ChangeSelectedFieldSlot_Params
{
	int                                                SelectedFieldSlotX;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedFieldSlotY;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Tick
struct UUI_ManagementDetails_Field_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.UpdateSlotsColors
struct UUI_ManagementDetails_Field_C_UpdateSlotsColors_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.SaveSlotsState
struct UUI_ManagementDetails_Field_C_SaveSlotsState_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Construct
struct UUI_ManagementDetails_Field_C_Construct_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputCancel
struct UUI_ManagementDetails_Field_C_InputCancel_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputLeft
struct UUI_ManagementDetails_Field_C_InputLeft_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputRight
struct UUI_ManagementDetails_Field_C_InputRight_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputIncreaseIndex
struct UUI_ManagementDetails_Field_C_InputIncreaseIndex_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.InputDecreaseIndex
struct UUI_ManagementDetails_Field_C_InputDecreaseIndex_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Uncrop
struct UUI_ManagementDetails_Field_C_Uncrop_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.Crop
struct UUI_ManagementDetails_Field_C_Crop_Params
{
};

// Function UI_ManagementDetails_Field.UI_ManagementDetails_Field_C.ExecuteUbergraph_UI_ManagementDetails_Field
struct UUI_ManagementDetails_Field_C_ExecuteUbergraph_UI_ManagementDetails_Field_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
