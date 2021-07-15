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

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextIsInvalidName
struct UUI_CreateNewSaveGameAcceptation_C_CheckIfTextIsInvalidName_Params
{
	struct FText                                       TextToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsInvalid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextContainsInvalidLetter
struct UUI_CreateNewSaveGameAcceptation_C_CheckIfTextContainsInvalidLetter_Params
{
	struct FText                                       TextToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Contains;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Accept
struct UUI_CreateNewSaveGameAcceptation_C_Accept_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Cancel
struct UUI_CreateNewSaveGameAcceptation_C_Cancel_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeActive
struct UUI_CreateNewSaveGameAcceptation_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeUnactive
struct UUI_CreateNewSaveGameAcceptation_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Construct
struct UUI_CreateNewSaveGameAcceptation_C_Construct_Params
{
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ChangeSteeringType_Event_1
struct UUI_CreateNewSaveGameAcceptation_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_CreateNewSaveGameAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ExecuteUbergraph_UI_CreateNewSaveGameAcceptation
struct UUI_CreateNewSaveGameAcceptation_C_ExecuteUbergraph_UI_CreateNewSaveGameAcceptation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
