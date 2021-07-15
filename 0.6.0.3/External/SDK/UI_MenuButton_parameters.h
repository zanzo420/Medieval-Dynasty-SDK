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

// Function UI_MenuButton.UI_MenuButton_C.PreConstruct
struct UUI_MenuButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MenuButton.UI_MenuButton_C.MakeActive
struct UUI_MenuButton_C_MakeActive_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.MakeUnactive
struct UUI_MenuButton_C_MakeUnactive_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter
struct UUI_MenuButton_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MenuButton.UI_MenuButton_C.SetSelected
struct UUI_MenuButton_C_SetSelected_Params
{
	bool                                               IsSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton
struct UUI_MenuButton_C_ExecuteUbergraph_UI_MenuButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuButton.UI_MenuButton_C.OnHoveredDispatcher__DelegateSignature
struct UUI_MenuButton_C_OnHoveredDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
