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

// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ReturnToNPCSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::ReturnToNPCSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ReturnToNPCSelection");

	UUI_Assignment_Building_NPC_C_ReturnToNPCSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.SetSelectionTextActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_NPC_C::SetSelectionTextActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.SetSelectionTextActive");

	UUI_Assignment_Building_NPC_C_SetSelectionTextActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.RemoveOtherNPCs
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::RemoveOtherNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.RemoveOtherNPCs");

	UUI_Assignment_Building_NPC_C_RemoveOtherNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.MakeUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.MakeUnactive");

	UUI_Assignment_Building_NPC_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.MakeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_NPC_C::MakeActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.MakeActive");

	UUI_Assignment_Building_NPC_C_MakeActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_NPC_C::ChangeSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ChangeSelection");

	UUI_Assignment_Building_NPC_C_ChangeSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.Construct");

	UUI_Assignment_Building_NPC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputIncreaseIndex");

	UUI_Assignment_Building_NPC_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputDecreaseIndex");

	UUI_Assignment_Building_NPC_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputConfirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::InputConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputConfirm");

	UUI_Assignment_Building_NPC_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_NPC_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.InputCancel");

	UUI_Assignment_Building_NPC_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ExecuteUbergraph_UI_Assignment_Building_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_NPC_C::ExecuteUbergraph_UI_Assignment_Building_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_NPC.UI_Assignment_Building_NPC_C.ExecuteUbergraph_UI_Assignment_Building_NPC");

	UUI_Assignment_Building_NPC_C_ExecuteUbergraph_UI_Assignment_Building_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Assignment_Building_NPC_C::AfterRead()
{
	UUI_MasterAssignment_C::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(ProfessionBox, UVerticalBox);
	READ_PTR_FULL(ProfessionOverlay, UOverlay);
	READ_PTR_FULL(ProfessionScrollBox, UScrollBox);
	READ_PTR_FULL(ProfessionVerticalBox, UVerticalBox);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_SelectProfession, UTextBlock);
	READ_PTR_FULL(txt_SelectVillager, UTextBlock);
	READ_PTR_FULL(UI_Management_NPCLabels, UUI_Management_NPCLabels_C);
	READ_PTR_FULL(UI_Management_ProfessionLabel, UUI_Management_ProfessionLabel_C);
	READ_PTR_FULL(VillagersBox, UVerticalBox);
	READ_PTR_FULL(VillagersScrollBox, UScrollBox);
	READ_PTR_FULL(VillagersVerticalBox, UVerticalBox);
	READ_PTR_FULL(UI_ManagementReference, UUI_Book_Management_C);
	READ_PTR_FULL(SelectedNPCSlot, UUI_Slot_Management_NPC_C);
	READ_PTR_FULL(ManagementNPCIcon, UUI_ManagementMapIcon_C);
}

void UUI_Assignment_Building_NPC_C::BeforeDelete()
{
	UUI_MasterAssignment_C::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(ProfessionBox);
	DELE_PTR_FULL(ProfessionOverlay);
	DELE_PTR_FULL(ProfessionScrollBox);
	DELE_PTR_FULL(ProfessionVerticalBox);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_SelectProfession);
	DELE_PTR_FULL(txt_SelectVillager);
	DELE_PTR_FULL(UI_Management_NPCLabels);
	DELE_PTR_FULL(UI_Management_ProfessionLabel);
	DELE_PTR_FULL(VillagersBox);
	DELE_PTR_FULL(VillagersScrollBox);
	DELE_PTR_FULL(VillagersVerticalBox);
	DELE_PTR_FULL(UI_ManagementReference);
	DELE_PTR_FULL(SelectedNPCSlot);
	DELE_PTR_FULL(ManagementNPCIcon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
