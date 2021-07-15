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

// Function UI_Book.UI_Book_C.UI_Confirm_Held
struct UUI_Book_C_UI_Confirm_Held_Params
{
};

// Function UI_Book.UI_Book_C.UI_Confirm_Released
struct UUI_Book_C_UI_Confirm_Released_Params
{
};

// Function UI_Book.UI_Book_C.UI_Confirm_Pressed
struct UUI_Book_C_UI_Confirm_Pressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book.UI_Book_C.UI_Drop_Held
struct UUI_Book_C_UI_Drop_Held_Params
{
};

// Function UI_Book.UI_Book_C.UI_Drop_Released
struct UUI_Book_C_UI_Drop_Released_Params
{
};

// Function UI_Book.UI_Book_C.UI_Drop_Pressed
struct UUI_Book_C_UI_Drop_Pressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book.UI_Book_C.CreateUITutorialIfNeeded
struct UUI_Book_C_CreateUITutorialIfNeeded_Params
{
};

// Function UI_Book.UI_Book_C.SetTabNotification
struct UUI_Book_C_SetTabNotification_Params
{
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> Tab;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book.UI_Book_C.CheckSkillsAvailability
struct UUI_Book_C_CheckSkillsAvailability_Params
{
};

// Function UI_Book.UI_Book_C.DestroyTabs
struct UUI_Book_C_DestroyTabs_Params
{
};

// Function UI_Book.UI_Book_C.StartPledgeTaskFromDialogue
struct UUI_Book_C_StartPledgeTaskFromDialogue_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.SortArrayInt
struct UUI_Book_C_SortArrayInt_Params
{
	TArray<int>                                        InputArray1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Descending_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        Output_Array;                                              // (Parm, OutParm)
};

// Function UI_Book.UI_Book_C.SetMainTab
struct UUI_Book_C_SetMainTab_Params
{
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.IncreaseMainTabID
struct UUI_Book_C_IncreaseMainTabID_Params
{
};

// Function UI_Book.UI_Book_C.DecreaseMainTabID
struct UUI_Book_C_DecreaseMainTabID_Params
{
};

// Function UI_Book.UI_Book_C.MakeMainTabsUnactive
struct UUI_Book_C_MakeMainTabsUnactive_Params
{
};

// Function UI_Book.UI_Book_C.MakeMainTabActive
struct UUI_Book_C_MakeMainTabActive_Params
{
	int                                                SelectedMainTabID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.CheckIsPopUpDisabled
struct UUI_Book_C_CheckIsPopUpDisabled_Params
{
	bool                                               NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book.UI_Book_C.ChangeVisibilityOnSectionChange
struct UUI_Book_C_ChangeVisibilityOnSectionChange_Params
{
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.Construct
struct UUI_Book_C_Construct_Params
{
};

// Function UI_Book.UI_Book_C.UI_Up
struct UUI_Book_C_UI_Up_Params
{
};

// Function UI_Book.UI_Book_C.UI_Down
struct UUI_Book_C_UI_Down_Params
{
};

// Function UI_Book.UI_Book_C.UI_NextLabel
struct UUI_Book_C_UI_NextLabel_Params
{
};

// Function UI_Book.UI_Book_C.UI_PreviousLabel
struct UUI_Book_C_UI_PreviousLabel_Params
{
};

// Function UI_Book.UI_Book_C.UI_NextSection
struct UUI_Book_C_UI_NextSection_Params
{
};

// Function UI_Book.UI_Book_C.UI_PreviousSection
struct UUI_Book_C_UI_PreviousSection_Params
{
};

// Function UI_Book.UI_Book_C.UI_AdditionalInteraction
struct UUI_Book_C_UI_AdditionalInteraction_Params
{
};

// Function UI_Book.UI_Book_C.UI_Exit
struct UUI_Book_C_UI_Exit_Params
{
};

// Function UI_Book.UI_Book_C.InitInventory
struct UUI_Book_C_InitInventory_Params
{
};

// Function UI_Book.UI_Book_C.OpenHusbandryAnimalAssignment
struct UUI_Book_C_OpenHusbandryAnimalAssignment_Params
{
	class ABP_HusbandryAI_C*                           AnimalReference;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.UI_SpecialAction
struct UUI_Book_C_UI_SpecialAction_Params
{
};

// Function UI_Book.UI_Book_C.ExecuteUbergraph_UI_Book
struct UUI_Book_C_ExecuteUbergraph_UI_Book_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.OnSelectedQuestChange__DelegateSignature
struct UUI_Book_C_OnSelectedQuestChange__DelegateSignature_Params
{
	class UUI_Slot_Quest_C*                            QuestReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book.UI_Book_C.OnSelectedItemChange__DelegateSignature
struct UUI_Book_C_OnSelectedItemChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
