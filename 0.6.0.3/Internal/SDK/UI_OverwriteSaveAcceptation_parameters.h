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

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextIsInvalidName
struct UUI_OverwriteSaveAcceptation_C_CheckIfTextIsInvalidName_Params
{
	struct FText                                       TextToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsInvalid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextContainsInvalidLetter
struct UUI_OverwriteSaveAcceptation_C_CheckIfTextContainsInvalidLetter_Params
{
	struct FText                                       TextToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Contains;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Accept
struct UUI_OverwriteSaveAcceptation_C_Accept_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Cancel
struct UUI_OverwriteSaveAcceptation_C_Cancel_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeActive
struct UUI_OverwriteSaveAcceptation_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeUnactive
struct UUI_OverwriteSaveAcceptation_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Construct
struct UUI_OverwriteSaveAcceptation_C_Construct_Params
{
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ChangeSteeringType_Event_1
struct UUI_OverwriteSaveAcceptation_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_OverwriteSaveAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ExecuteUbergraph_UI_OverwriteSaveAcceptation
struct UUI_OverwriteSaveAcceptation_C_ExecuteUbergraph_UI_OverwriteSaveAcceptation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
