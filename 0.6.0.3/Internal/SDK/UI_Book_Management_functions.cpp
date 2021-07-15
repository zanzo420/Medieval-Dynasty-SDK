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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
