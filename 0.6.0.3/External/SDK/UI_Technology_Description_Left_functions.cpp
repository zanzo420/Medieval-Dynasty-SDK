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

// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildingReference              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UUI_Technology_Description_Left_C::UpdateDescription(const struct FDataTableRowHandle& BuildingReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescription");

	UUI_Technology_Description_Left_C_UpdateDescription_Params params;
	params.BuildingReference = BuildingReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescriptionCustomSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              SlotIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SlotDescription                (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> SlotTechType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SlotTechNeeded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Left_C::UpdateDescriptionCustomSlot(class UTexture2D* SlotIcon, const struct FText& SlotName, const struct FText& SlotDescription, TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> SlotTechType, int SlotTechNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescriptionCustomSlot");

	UUI_Technology_Description_Left_C_UpdateDescriptionCustomSlot_Params params;
	params.SlotIcon = SlotIcon;
	params.SlotName = SlotName;
	params.SlotDescription = SlotDescription;
	params.SlotTechType = SlotTechType;
	params.SlotTechNeeded = SlotTechNeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.ExecuteUbergraph_UI_Technology_Description_Left
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Left_C::ExecuteUbergraph_UI_Technology_Description_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.ExecuteUbergraph_UI_Technology_Description_Left");

	UUI_Technology_Description_Left_C_ExecuteUbergraph_UI_Technology_Description_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Technology_Description_Left_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_175, UImage);
	READ_PTR_FULL(Image_224, UImage);
	READ_PTR_FULL(Image_441, UImage);
	READ_PTR_FULL(Image_628, UImage);
	READ_PTR_FULL(Img_BuildingIcon, UImage);
	READ_PTR_FULL(txt_BuildingName, UTextBlock);
	READ_PTR_FULL(txt_Description, UTextBlock);
	READ_PTR_FULL(txt_TechnologyLevel, UTextBlock);
	READ_PTR_FULL(ParentWidget, UUI_Book_Technology_C);
}

void UUI_Technology_Description_Left_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_175);
	DELE_PTR_FULL(Image_224);
	DELE_PTR_FULL(Image_441);
	DELE_PTR_FULL(Image_628);
	DELE_PTR_FULL(Img_BuildingIcon);
	DELE_PTR_FULL(txt_BuildingName);
	DELE_PTR_FULL(txt_Description);
	DELE_PTR_FULL(txt_TechnologyLevel);
	DELE_PTR_FULL(ParentWidget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
