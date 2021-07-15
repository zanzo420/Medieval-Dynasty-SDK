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

// Function UI_Book_Management.UI_Book_Management_C.InputSpecialActionPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputSpecialActionPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputSpecialActionPressed");

	UUI_Book_Management_C_InputSpecialActionPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Hold
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputDrop_Hold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputDrop_Hold");

	UUI_Book_Management_C_InputDrop_Hold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Released
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputDrop_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputDrop_Released");

	UUI_Book_Management_C_InputDrop_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.AnimalAssignmentNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAssigning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AnimalName                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Book_Management_C::AnimalAssignmentNotification(bool IsAssigning, const struct FText& AnimalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.AnimalAssignmentNotification");

	UUI_Book_Management_C_AnimalAssignmentNotification_Params params;
	params.IsAssigning = IsAssigning;
	params.AnimalName = AnimalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.NPCAssignmentNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAssigning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsWorkplace                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   NPCName                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Book_Management_C::NPCAssignmentNotification(bool IsAssigning, bool IsWorkplace, const struct FText& NPCName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.NPCAssignmentNotification");

	UUI_Book_Management_C_NPCAssignmentNotification_Params params;
	params.IsAssigning = IsAssigning;
	params.IsWorkplace = IsWorkplace;
	params.NPCName = NPCName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideActive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::MakeLeftSideActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideActive");

	UUI_Book_Management_C_MakeLeftSideActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::MakeLeftSideUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeLeftSideUnactive");

	UUI_Book_Management_C_MakeLeftSideUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedAnimal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedAnimalIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ChangeSelectedAnimal(int SelectedAnimalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedAnimal");

	UUI_Book_Management_C_ChangeSelectedAnimal_Params params;
	params.SelectedAnimalIndex = SelectedAnimalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.DecreaseAnimalIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::DecreaseAnimalIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.DecreaseAnimalIndex");

	UUI_Book_Management_C_DecreaseAnimalIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.IncreaseAnimalIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::IncreaseAnimalIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.IncreaseAnimalIndex");

	UUI_Book_Management_C_IncreaseAnimalIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InputAdditionalInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputAdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputAdditionalInteraction");

	UUI_Book_Management_C_InputAdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InputCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Management_C::InputCancel(bool* InputHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputCancel");

	UUI_Book_Management_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;

}


// Function UI_Book_Management.UI_Book_Management_C.InputDrop_Pressed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanHoldForCount                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Management_C::InputDrop_Pressed(bool* CanHoldForCount, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputDrop_Pressed");

	UUI_Book_Management_C_InputDrop_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHoldForCount != nullptr)
		*CanHoldForCount = params.CanHoldForCount;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_Book_Management.UI_Book_Management_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Management_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputConfirm");

	UUI_Book_Management_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_Book_Management.UI_Book_Management_C.InputDecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputDecreaseIndex");

	UUI_Book_Management_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InputIncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InputIncreaseIndex");

	UUI_Book_Management_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.SelectAnimal
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::SelectAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.SelectAnimal");

	UUI_Book_Management_C_SelectAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherAnimals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 AnimalWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::RemoveOtherAnimals(class UWidget* AnimalWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.RemoveOtherAnimals");

	UUI_Book_Management_C_RemoveOtherAnimals_Params params;
	params.AnimalWidget = AnimalWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BuildingWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::RemoveOtherBuildings(class UWidget* BuildingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.RemoveOtherBuildings");

	UUI_Book_Management_C_RemoveOtherBuildings_Params params;
	params.BuildingWidget = BuildingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.RemoveOtherNPCs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 NPCWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::RemoveOtherNPCs(class UWidget* NPCWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.RemoveOtherNPCs");

	UUI_Book_Management_C_RemoveOtherNPCs_Params params;
	params.NPCWidget = NPCWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ClearAssignmentWindows
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::ClearAssignmentWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ClearAssignmentWindows");

	UUI_Book_Management_C_ClearAssignmentWindows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.AddAssignmentWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MasterAssignment_C*  UI_AssignmentWindowReference   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::AddAssignmentWindow(class UUI_MasterAssignment_C* UI_AssignmentWindowReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.AddAssignmentWindow");

	UUI_Book_Management_C_AddAssignmentWindow_Params params;
	params.UI_AssignmentWindowReference = UI_AssignmentWindowReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.UpdateSelectedBuilding
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::UpdateSelectedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.UpdateSelectedBuilding");

	UUI_Book_Management_C_UpdateSelectedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.SelectBuilding
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::SelectBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.SelectBuilding");

	UUI_Book_Management_C_SelectBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedBuildingParentIndex    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ChangeSelectedBuilding(int SelectedBuildingParentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedBuilding");

	UUI_Book_Management_C_ChangeSelectedBuilding_Params params;
	params.SelectedBuildingParentIndex = SelectedBuildingParentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.DecreaseBuildingIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::DecreaseBuildingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.DecreaseBuildingIndex");

	UUI_Book_Management_C_DecreaseBuildingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.IncreaseBuildingIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::IncreaseBuildingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.IncreaseBuildingIndex");

	UUI_Book_Management_C_IncreaseBuildingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ChangeSelectedField(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedField");

	UUI_Book_Management_C_ChangeSelectedField_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::MakeFieldSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotsUnactive");

	UUI_Book_Management_C_MakeFieldSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::MakeFieldSlotActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeFieldSlotActive");

	UUI_Book_Management_C_MakeFieldSlotActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeManagementLabelsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::MakeManagementLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeManagementLabelsUnactive");

	UUI_Book_Management_C_MakeManagementLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeManagementLablActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::MakeManagementLablActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeManagementLablActive");

	UUI_Book_Management_C_MakeManagementLablActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeMainSwitcherIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ChangeMainSwitcherIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeMainSwitcherIndex");

	UUI_Book_Management_C_ChangeMainSwitcherIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.UpdateInputButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::UpdateInputButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.UpdateInputButtons");

	UUI_Book_Management_C_UpdateInputButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.SelectNPC
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::SelectNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.SelectNPC");

	UUI_Book_Management_C_SelectNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedNPCManagementIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ChangeSelectedNPCManagementIndex(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeSelectedNPCManagementIndex");

	UUI_Book_Management_C_ChangeSelectedNPCManagementIndex_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::MakeMapNPCManagementSlotActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotActive");

	UUI_Book_Management_C_MakeMapNPCManagementSlotActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::MakeMapNPCManagementSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.MakeMapNPCManagementSlotsUnactive");

	UUI_Book_Management_C_MakeMapNPCManagementSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.DecreaseMapNPCManagementIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::DecreaseMapNPCManagementIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.DecreaseMapNPCManagementIndex");

	UUI_Book_Management_C_DecreaseMapNPCManagementIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.IncreaseMapNPCManagementIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::IncreaseMapNPCManagementIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.IncreaseMapNPCManagementIndex");

	UUI_Book_Management_C_IncreaseMapNPCManagementIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.UpdateMap
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::UpdateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.UpdateMap");

	UUI_Book_Management_C_UpdateMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_Management_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Construct");

	UUI_Book_Management_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Update_MapTabGlobalResources
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Update_MapTabGlobalResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Update_MapTabGlobalResources");

	UUI_Book_Management_C_Update_MapTabGlobalResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.InitManagement
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::InitManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.InitManagement");

	UUI_Book_Management_C_InitManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.SelectField
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::SelectField(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.SelectField");

	UUI_Book_Management_C_SelectField_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeFieldInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::ChangeFieldInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeFieldInfo");

	UUI_Book_Management_C_ChangeFieldInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.IncreaseFieldIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::IncreaseFieldIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.IncreaseFieldIndex");

	UUI_Book_Management_C_IncreaseFieldIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.DecreaseFieldIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::DecreaseFieldIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.DecreaseFieldIndex");

	UUI_Book_Management_C_DecreaseFieldIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.IncreaseManagementLabelsIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::IncreaseManagementLabelsIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.IncreaseManagementLabelsIndex");

	UUI_Book_Management_C_IncreaseManagementLabelsIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.DecreaseManagementLabelsIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::DecreaseManagementLabelsIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.DecreaseManagementLabelsIndex");

	UUI_Book_Management_C_DecreaseManagementLabelsIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.AddIconToMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ManagementMapIcon_C* IconReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::AddIconToMap(class UUI_ManagementMapIcon_C* IconReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.AddIconToMap");

	UUI_Book_Management_C_AddIconToMap_Params params;
	params.IconReference = IconReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Management_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.PreConstruct");

	UUI_Book_Management_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Management_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ChangeSteeringType_Event_1");

	UUI_Book_Management_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.UnbindGlobalParametersUpdate
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::UnbindGlobalParametersUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.UnbindGlobalParametersUpdate");

	UUI_Book_Management_C_UnbindGlobalParametersUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Tick");

	UUI_Book_Management_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Confirm");

	UUI_Book_Management_C_Btn_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Drop
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Drop");

	UUI_Book_Management_C_Btn_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Drop_Hold
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Drop_Hold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Drop_Hold");

	UUI_Book_Management_C_Btn_Drop_Hold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_AdditionalInteraction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_AdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_AdditionalInteraction");

	UUI_Book_Management_C_Btn_AdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Up");

	UUI_Book_Management_C_Btn_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Down");

	UUI_Book_Management_C_Btn_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Left");

	UUI_Book_Management_C_Btn_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Right");

	UUI_Book_Management_C_Btn_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Previous
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Previous");

	UUI_Book_Management_C_Btn_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_Next
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_Next");

	UUI_Book_Management_C_Btn_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.btn_Return
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::btn_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.btn_Return");

	UUI_Book_Management_C_btn_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.Btn_SpecialAction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Management_C::Btn_SpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.Btn_SpecialAction");

	UUI_Book_Management_C_Btn_SpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Management.UI_Book_Management_C.ExecuteUbergraph_UI_Book_Management
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Management_C::ExecuteUbergraph_UI_Book_Management(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Management.UI_Book_Management_C.ExecuteUbergraph_UI_Book_Management");

	UUI_Book_Management_C_ExecuteUbergraph_UI_Book_Management_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_Management_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(PlayerArrowAnimation, UWidgetAnimation);
	READ_PTR_FULL(ActionDescriptionButtonsRight_2, UHorizontalBox);
	READ_PTR_FULL(AnimalsBox, UScrollBox);
	READ_PTR_FULL(AnimalsType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(AnimalsVerticalBox, UVerticalBox);
	READ_PTR_FULL(AssignmentBorder, UBorder);
	READ_PTR_FULL(BuildingsBox, UScrollBox);
	READ_PTR_FULL(ChickensBox, UVerticalBox);
	READ_PTR_FULL(CowsBox, UVerticalBox);
	READ_PTR_FULL(CraftingType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(CraftingVerticalBox, UVerticalBox);
	READ_PTR_FULL(CropsType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(CropsVerticalBox, UVerticalBox);
	READ_PTR_FULL(DetailsBorder, UBorder);
	READ_PTR_FULL(DetailsBorder_2, UBorder);
	READ_PTR_FULL(DonkeysBox, UVerticalBox);
	READ_PTR_FULL(ExtractionType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(ExtractionVerticalBox, UVerticalBox);
	READ_PTR_FULL(FieldsBox, UScrollBox);
	READ_PTR_FULL(FieldsVerticalBox, UVerticalBox);
	READ_PTR_FULL(GoatsBox, UVerticalBox);
	READ_PTR_FULL(GoosesBox, UVerticalBox);
	READ_PTR_FULL(HorsesBox, UVerticalBox);
	READ_PTR_FULL(HousesType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(HousesVerticalBox, UVerticalBox);
	READ_PTR_FULL(HuntingType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(HuntingVerticalBox, UVerticalBox);
	READ_PTR_FULL(Icn_ItemBackground, UImage);
	READ_PTR_FULL(Icn_ItemBackground_2, UImage);
	READ_PTR_FULL(Icn_ItemBackground_3, UImage);
	READ_PTR_FULL(Icn_ItemBackground_4, UImage);
	READ_PTR_FULL(Icn_ItemBackground_5, UImage);
	READ_PTR_FULL(Icn_ItemBackground_6, UImage);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_10, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_15, UImage);
	READ_PTR_FULL(Image_16, UImage);
	READ_PTR_FULL(Image_17, UImage);
	READ_PTR_FULL(Image_18, UImage);
	READ_PTR_FULL(Image_19, UImage);
	READ_PTR_FULL(Image_20, UImage);
	READ_PTR_FULL(Image_175, UImage);
	READ_PTR_FULL(Image_183, UImage);
	READ_PTR_FULL(img_Background, UImage);
	READ_PTR_FULL(InputButtonAdditionalInteraction, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputButtonConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputButtonDrop, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputButtonDrop_Hold, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeCategory, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeSelection, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeTab, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputSpecialAction, UUI_Book_InputButton_C);
	READ_PTR_FULL(MainBorder, UBorder);
	READ_PTR_FULL(MainManagementSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(ManagementCategorySwitcher, UWidgetSwitcher);
	READ_PTR_FULL(ManagementIconsOverlay, UOverlay);
	READ_PTR_FULL(ManagementMapImage, UImage);
	READ_PTR_FULL(ManagementMapOverlay, UOverlay);
	READ_PTR_FULL(ManagementPlayerIcon, UImage);
	READ_PTR_FULL(Map_Management, UCanvasPanel);
	READ_PTR_FULL(MapTab, UCanvasPanel);
	READ_PTR_FULL(NPCManagementBox, UScrollBox);
	READ_PTR_FULL(NPCVerticalBox, UVerticalBox);
	READ_PTR_FULL(PigsBox, UVerticalBox);
	READ_PTR_FULL(SheepsBox, UVerticalBox);
	READ_PTR_FULL(StoragesType, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(StoragesVerticalBox, UVerticalBox);
	READ_PTR_FULL(txt_Buildings, UTextBlock);
	READ_PTR_FULL(txt_DevelopmentValue, UTextBlock);
	READ_PTR_FULL(txt_DynastyReputationValue, UTextBlock);
	READ_PTR_FULL(txt_Food, UTextBlock);
	READ_PTR_FULL(txt_FoodDemand, UTextBlock);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_Population, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(txt_TabName_2, UTextBlock);
	READ_PTR_FULL(txt_TabName_3, UTextBlock);
	READ_PTR_FULL(txt_TabName_4, UTextBlock);
	READ_PTR_FULL(txt_TaxAmount, UTextBlock);
	READ_PTR_FULL(txt_Title, UTextBlock);
	READ_PTR_FULL(txt_Wood, UTextBlock);
	READ_PTR_FULL(txt_WoodDemand, UTextBlock);
	READ_PTR_FULL(UI_AnimalType_Chicken, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Cow, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Donkey, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Goat, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Goose, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Horse, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Pig, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_AnimalType_Sheep, UUI_ManagementTypeOrganiser_C);
	READ_PTR_FULL(UI_Book_management_Labels, UUI_Book_management_Labels_C);
	READ_PTR_FULL(UI_Management_AnimalLabels, UUI_Management_AnimalLabels_C);
	READ_PTR_FULL(UI_Management_BuildingLabels, UUI_Management_BuildingLabels_C);
	READ_PTR_FULL(UI_Management_FieldLabels, UUI_Management_FieldLabels_C);
	READ_PTR_FULL(UI_Management_NPCLabels, UUI_Management_NPCLabels_C);
	READ_PTR_FULL(VillageBox, UVerticalBox);
	READ_PTR_FULL(BookReference, UUI_Book_C);
	READ_PTR_FULL(ManagementDetails, UUI_MasterManagementDetails_C);
	READ_PTR_FULL(ManagementMapIconReference, UUI_ManagementMapIcon_C);
	READ_PTR_FULL(UI_RemoveAcceptation, UUI_NPCRemoveAcceptation_C);
	READ_PTR_FULL(UI_HouseChangeAcceptation, UUI_NPCChangeHomeAcceptation_C);
	READ_PTR_FULL(UI_SetCustomName, UUI_Management_SetCustomName_C);
}

void UUI_Book_Management_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(PlayerArrowAnimation);
	DELE_PTR_FULL(ActionDescriptionButtonsRight_2);
	DELE_PTR_FULL(AnimalsBox);
	DELE_PTR_FULL(AnimalsType);
	DELE_PTR_FULL(AnimalsVerticalBox);
	DELE_PTR_FULL(AssignmentBorder);
	DELE_PTR_FULL(BuildingsBox);
	DELE_PTR_FULL(ChickensBox);
	DELE_PTR_FULL(CowsBox);
	DELE_PTR_FULL(CraftingType);
	DELE_PTR_FULL(CraftingVerticalBox);
	DELE_PTR_FULL(CropsType);
	DELE_PTR_FULL(CropsVerticalBox);
	DELE_PTR_FULL(DetailsBorder);
	DELE_PTR_FULL(DetailsBorder_2);
	DELE_PTR_FULL(DonkeysBox);
	DELE_PTR_FULL(ExtractionType);
	DELE_PTR_FULL(ExtractionVerticalBox);
	DELE_PTR_FULL(FieldsBox);
	DELE_PTR_FULL(FieldsVerticalBox);
	DELE_PTR_FULL(GoatsBox);
	DELE_PTR_FULL(GoosesBox);
	DELE_PTR_FULL(HorsesBox);
	DELE_PTR_FULL(HousesType);
	DELE_PTR_FULL(HousesVerticalBox);
	DELE_PTR_FULL(HuntingType);
	DELE_PTR_FULL(HuntingVerticalBox);
	DELE_PTR_FULL(Icn_ItemBackground);
	DELE_PTR_FULL(Icn_ItemBackground_2);
	DELE_PTR_FULL(Icn_ItemBackground_3);
	DELE_PTR_FULL(Icn_ItemBackground_4);
	DELE_PTR_FULL(Icn_ItemBackground_5);
	DELE_PTR_FULL(Icn_ItemBackground_6);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_10);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_15);
	DELE_PTR_FULL(Image_16);
	DELE_PTR_FULL(Image_17);
	DELE_PTR_FULL(Image_18);
	DELE_PTR_FULL(Image_19);
	DELE_PTR_FULL(Image_20);
	DELE_PTR_FULL(Image_175);
	DELE_PTR_FULL(Image_183);
	DELE_PTR_FULL(img_Background);
	DELE_PTR_FULL(InputButtonAdditionalInteraction);
	DELE_PTR_FULL(InputButtonConfirm);
	DELE_PTR_FULL(InputButtonDrop);
	DELE_PTR_FULL(InputButtonDrop_Hold);
	DELE_PTR_FULL(InputChangeCategory);
	DELE_PTR_FULL(InputChangeSelection);
	DELE_PTR_FULL(InputChangeTab);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(InputSpecialAction);
	DELE_PTR_FULL(MainBorder);
	DELE_PTR_FULL(MainManagementSwitcher);
	DELE_PTR_FULL(ManagementCategorySwitcher);
	DELE_PTR_FULL(ManagementIconsOverlay);
	DELE_PTR_FULL(ManagementMapImage);
	DELE_PTR_FULL(ManagementMapOverlay);
	DELE_PTR_FULL(ManagementPlayerIcon);
	DELE_PTR_FULL(Map_Management);
	DELE_PTR_FULL(MapTab);
	DELE_PTR_FULL(NPCManagementBox);
	DELE_PTR_FULL(NPCVerticalBox);
	DELE_PTR_FULL(PigsBox);
	DELE_PTR_FULL(SheepsBox);
	DELE_PTR_FULL(StoragesType);
	DELE_PTR_FULL(StoragesVerticalBox);
	DELE_PTR_FULL(txt_Buildings);
	DELE_PTR_FULL(txt_DevelopmentValue);
	DELE_PTR_FULL(txt_DynastyReputationValue);
	DELE_PTR_FULL(txt_Food);
	DELE_PTR_FULL(txt_FoodDemand);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_Population);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(txt_TabName_2);
	DELE_PTR_FULL(txt_TabName_3);
	DELE_PTR_FULL(txt_TabName_4);
	DELE_PTR_FULL(txt_TaxAmount);
	DELE_PTR_FULL(txt_Title);
	DELE_PTR_FULL(txt_Wood);
	DELE_PTR_FULL(txt_WoodDemand);
	DELE_PTR_FULL(UI_AnimalType_Chicken);
	DELE_PTR_FULL(UI_AnimalType_Cow);
	DELE_PTR_FULL(UI_AnimalType_Donkey);
	DELE_PTR_FULL(UI_AnimalType_Goat);
	DELE_PTR_FULL(UI_AnimalType_Goose);
	DELE_PTR_FULL(UI_AnimalType_Horse);
	DELE_PTR_FULL(UI_AnimalType_Pig);
	DELE_PTR_FULL(UI_AnimalType_Sheep);
	DELE_PTR_FULL(UI_Book_management_Labels);
	DELE_PTR_FULL(UI_Management_AnimalLabels);
	DELE_PTR_FULL(UI_Management_BuildingLabels);
	DELE_PTR_FULL(UI_Management_FieldLabels);
	DELE_PTR_FULL(UI_Management_NPCLabels);
	DELE_PTR_FULL(VillageBox);
	DELE_PTR_FULL(BookReference);
	DELE_PTR_FULL(ManagementDetails);
	DELE_PTR_FULL(ManagementMapIconReference);
	DELE_PTR_FULL(UI_RemoveAcceptation);
	DELE_PTR_FULL(UI_HouseChangeAcceptation);
	DELE_PTR_FULL(UI_SetCustomName);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
