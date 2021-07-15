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

// Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TutorialMessage_Taxes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.Construct");

	UUI_TutorialMessage_Taxes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TutorialMessage_Taxes_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.ChangeSteeringType_Event_1");

	UUI_TutorialMessage_Taxes_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_TutorialMessage_Taxes_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.Remove");

	UUI_TutorialMessage_Taxes_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.ExecuteUbergraph_UI_TutorialMessage_Taxes
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TutorialMessage_Taxes_C::ExecuteUbergraph_UI_TutorialMessage_Taxes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialMessage_Taxes.UI_TutorialMessage_Taxes_C.ExecuteUbergraph_UI_TutorialMessage_Taxes");

	UUI_TutorialMessage_Taxes_C_ExecuteUbergraph_UI_TutorialMessage_Taxes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_TutorialMessage_Taxes_C::AfterRead()
{
	UUI_MasterTutorialMessage_C::AfterRead();

	READ_PTR_FULL(CloseBox, UHorizontalBox);
	READ_PTR_FULL(Image_109, UImage);
	READ_PTR_FULL(Image_323, UImage);
	READ_PTR_FULL(InputDrop, UUI_Book_InputButton_C);
	READ_PTR_FULL(txt_Description, UTextBlock);
	READ_PTR_FULL(txt_Name, UTextBlock);
}

void UUI_TutorialMessage_Taxes_C::BeforeDelete()
{
	UUI_MasterTutorialMessage_C::BeforeDelete();

	DELE_PTR_FULL(CloseBox);
	DELE_PTR_FULL(Image_109);
	DELE_PTR_FULL(Image_323);
	DELE_PTR_FULL(InputDrop);
	DELE_PTR_FULL(txt_Description);
	DELE_PTR_FULL(txt_Name);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
