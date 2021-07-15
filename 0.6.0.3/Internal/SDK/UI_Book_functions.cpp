// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_Book.UI_Book_C.UI_Confirm_Held
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Confirm_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Confirm_Held");

	UUI_Book_C_UI_Confirm_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Confirm_Released
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Confirm_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Confirm_Released");

	UUI_Book_C_UI_Confirm_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Confirm_Pressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_C::UI_Confirm_Pressed(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Confirm_Pressed");

	UUI_Book_C_UI_Confirm_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_Book.UI_Book_C.UI_Drop_Held
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Drop_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Drop_Held");

	UUI_Book_C_UI_Drop_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Drop_Released
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Drop_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Drop_Released");

	UUI_Book_C_UI_Drop_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Drop_Pressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_C::UI_Drop_Pressed(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Drop_Pressed");

	UUI_Book_C_UI_Drop_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_Book.UI_Book_C.CreateUITutorialIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::CreateUITutorialIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.CreateUITutorialIfNeeded");

	UUI_Book_C_CreateUITutorialIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.SetTabNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_C::SetTabNotification(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> Tab, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.SetTabNotification");

	UUI_Book_C_SetTabNotification_Params params;
	params.Tab = Tab;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.CheckSkillsAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::CheckSkillsAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.CheckSkillsAvailability");

	UUI_Book_C_CheckSkillsAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.DestroyTabs
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::DestroyTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.DestroyTabs");

	UUI_Book_C_DestroyTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.StartPledgeTaskFromDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::StartPledgeTaskFromDialogue(class ABP_NPC_C* NPCReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.StartPledgeTaskFromDialogue");

	UUI_Book_C_StartPledgeTaskFromDialogue_Params params;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.SortArrayInt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InputArray1                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Descending_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int>                    Output_Array                   (Parm, OutParm)
void UUI_Book_C::SortArrayInt(TArray<int>* InputArray1, bool Descending_, TArray<int>* Output_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.SortArrayInt");

	UUI_Book_C_SortArrayInt_Params params;
	params.Descending_ = Descending_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputArray1 != nullptr)
		*InputArray1 = params.InputArray1;
	if (Output_Array != nullptr)
		*Output_Array = params.Output_Array;

}


// Function UI_Book.UI_Book_C.SetMainTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::SetMainTab(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.SetMainTab");

	UUI_Book_C_SetMainTab_Params params;
	params.MainTab = MainTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.IncreaseMainTabID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::IncreaseMainTabID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.IncreaseMainTabID");

	UUI_Book_C_IncreaseMainTabID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.DecreaseMainTabID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::DecreaseMainTabID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.DecreaseMainTabID");

	UUI_Book_C_DecreaseMainTabID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.MakeMainTabsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::MakeMainTabsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.MakeMainTabsUnactive");

	UUI_Book_C_MakeMainTabsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.MakeMainTabActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedMainTabID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::MakeMainTabActive(int SelectedMainTabID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.MakeMainTabActive");

	UUI_Book_C_MakeMainTabActive_Params params;
	params.SelectedMainTabID = SelectedMainTabID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.CheckIsPopUpDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_C::CheckIsPopUpDisabled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.CheckIsPopUpDisabled");

	UUI_Book_C_CheckIsPopUpDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function UI_Book.UI_Book_C.ChangeVisibilityOnSectionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::ChangeVisibilityOnSectionChange(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.ChangeVisibilityOnSectionChange");

	UUI_Book_C_ChangeVisibilityOnSectionChange_Params params;
	params.MainTab = MainTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.Construct");

	UUI_Book_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Up");

	UUI_Book_C_UI_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Down");

	UUI_Book_C_UI_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_NextLabel
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_NextLabel");

	UUI_Book_C_UI_NextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_PreviousLabel
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_PreviousLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_PreviousLabel");

	UUI_Book_C_UI_PreviousLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_NextSection
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_NextSection");

	UUI_Book_C_UI_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_PreviousSection
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_PreviousSection");

	UUI_Book_C_UI_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_AdditionalInteraction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_AdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_AdditionalInteraction");

	UUI_Book_C_UI_AdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_Exit
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_Exit");

	UUI_Book_C_UI_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.InitInventory
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::InitInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.InitInventory");

	UUI_Book_C_InitInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.OpenHusbandryAnimalAssignment
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HusbandryAI_C*       AnimalReference                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::OpenHusbandryAnimalAssignment(class ABP_HusbandryAI_C* AnimalReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.OpenHusbandryAnimalAssignment");

	UUI_Book_C_OpenHusbandryAnimalAssignment_Params params;
	params.AnimalReference = AnimalReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.UI_SpecialAction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_C::UI_SpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.UI_SpecialAction");

	UUI_Book_C_UI_SpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.ExecuteUbergraph_UI_Book
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::ExecuteUbergraph_UI_Book(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.ExecuteUbergraph_UI_Book");

	UUI_Book_C_ExecuteUbergraph_UI_Book_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.OnSelectedQuestChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Slot_Quest_C*        QuestReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_C::OnSelectedQuestChange__DelegateSignature(class UUI_Slot_Quest_C* QuestReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.OnSelectedQuestChange__DelegateSignature");

	UUI_Book_C_OnSelectedQuestChange__DelegateSignature_Params params;
	params.QuestReference = QuestReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book.UI_Book_C.OnSelectedItemChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_Book_C::OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book.UI_Book_C.OnSelectedItemChange__DelegateSignature");

	UUI_Book_C_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
