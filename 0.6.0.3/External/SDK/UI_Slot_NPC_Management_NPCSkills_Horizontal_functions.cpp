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

// Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.Construct");

	UUI_Slot_NPC_Management_NPCSkills_Horizontal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.MakeActive");

	UUI_Slot_NPC_Management_NPCSkills_Horizontal_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.MakeUnactive");

	UUI_Slot_NPC_Management_NPCSkills_Horizontal_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.ExecuteUbergraph_UI_Slot_NPC_Management_NPCSkills_Horizontal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::ExecuteUbergraph_UI_Slot_NPC_Management_NPCSkills_Horizontal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_NPC_Management_NPCSkills_Horizontal.UI_Slot_NPC_Management_NPCSkills_Horizontal_C.ExecuteUbergraph_UI_Slot_NPC_Management_NPCSkills_Horizontal");

	UUI_Slot_NPC_Management_NPCSkills_Horizontal_C_ExecuteUbergraph_UI_Slot_NPC_Management_NPCSkills_Horizontal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_41, UImage);
	READ_PTR_FULL(TextBlock_74, UTextBlock);
}

void UUI_Slot_NPC_Management_NPCSkills_Horizontal_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_41);
	DELE_PTR_FULL(TextBlock_74);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
