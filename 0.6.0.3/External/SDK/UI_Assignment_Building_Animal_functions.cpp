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

// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.MakeUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.MakeUnactive");

	UUI_Assignment_Building_Animal_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.MakeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_Animal_C::MakeActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.MakeActive");

	UUI_Assignment_Building_Animal_C_MakeActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_Animal_C::ChangeSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.ChangeSelection");

	UUI_Assignment_Building_Animal_C_ChangeSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.Construct");

	UUI_Assignment_Building_Animal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputIncreaseIndex");

	UUI_Assignment_Building_Animal_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputDecreaseIndex");

	UUI_Assignment_Building_Animal_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputConfirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::InputConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputConfirm");

	UUI_Assignment_Building_Animal_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_Building_Animal_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.InputCancel");

	UUI_Assignment_Building_Animal_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.ExecuteUbergraph_UI_Assignment_Building_Animal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_Building_Animal_C::ExecuteUbergraph_UI_Assignment_Building_Animal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_Building_Animal.UI_Assignment_Building_Animal_C.ExecuteUbergraph_UI_Assignment_Building_Animal");

	UUI_Assignment_Building_Animal_C_ExecuteUbergraph_UI_Assignment_Building_Animal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Assignment_Building_Animal_C::AfterRead()
{
	UUI_MasterAssignment_C::AfterRead();

	READ_PTR_FULL(AnimalsBox, UVerticalBox);
	READ_PTR_FULL(AnimalsScrollBox, UScrollBox);
	READ_PTR_FULL(AnimalsVerticalBox, UVerticalBox);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_SelectAnimal, UTextBlock);
	READ_PTR_FULL(UI_Management_AnimalLabels, UUI_Management_AnimalLabels_C);
	READ_PTR_FULL(UI_ManagementReference, UUI_Book_Management_C);
	READ_PTR_FULL(ManagementAnimalIcon, UUI_ManagementMapIcon_C);
}

void UUI_Assignment_Building_Animal_C::BeforeDelete()
{
	UUI_MasterAssignment_C::BeforeDelete();

	DELE_PTR_FULL(AnimalsBox);
	DELE_PTR_FULL(AnimalsScrollBox);
	DELE_PTR_FULL(AnimalsVerticalBox);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_SelectAnimal);
	DELE_PTR_FULL(UI_Management_AnimalLabels);
	DELE_PTR_FULL(UI_ManagementReference);
	DELE_PTR_FULL(ManagementAnimalIcon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
