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

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.GetItemStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemRowName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::GetItemStats(const struct FName& ItemRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.GetItemStats");

	UUI_Technology_Description_Right_C_GetItemStats_Params params;
	params.ItemRowName = ItemRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateSlotDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RecipeType                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle     FurnitureType                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle     FenceType                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FST_OtherTechnologySchemes OtherSchemeType                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::UpdateSlotDescription(const struct FDataTableRowHandle& RecipeType, const struct FDataTableRowHandle& FurnitureType, const struct FDataTableRowHandle& FenceType, const struct FST_OtherTechnologySchemes& OtherSchemeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateSlotDescription");

	UUI_Technology_Description_Right_C_UpdateSlotDescription_Params params;
	params.RecipeType = RecipeType;
	params.FurnitureType = FurnitureType;
	params.FenceType = FenceType;
	params.OtherSchemeType = OtherSchemeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateTechnologyDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TechnologyIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::UpdateTechnologyDescription(int TechnologyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateTechnologyDescription");

	UUI_Technology_Description_Right_C_UpdateTechnologyDescription_Params params;
	params.TechnologyIndex = TechnologyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::Init(class APC_Player_C* PlayerControllerReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Init");

	UUI_Technology_Description_Right_C_Init_Params params;
	params.PlayerControllerReference = PlayerControllerReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Technology_Description_Right_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Construct");

	UUI_Technology_Description_Right_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.ExecuteUbergraph_UI_Technology_Description_Right
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::ExecuteUbergraph_UI_Technology_Description_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.ExecuteUbergraph_UI_Technology_Description_Right");

	UUI_Technology_Description_Right_C_ExecuteUbergraph_UI_Technology_Description_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Technology_Description_Right_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ColdBox, UHorizontalBox);
	READ_PTR_FULL(ColdStats, UTextBlock);
	READ_PTR_FULL(HealthBox, UHorizontalBox);
	READ_PTR_FULL(HealthStats, UTextBlock);
	READ_PTR_FULL(HeatBox, UHorizontalBox);
	READ_PTR_FULL(HeatStats, UTextBlock);
	READ_PTR_FULL(HungerBox, UHorizontalBox);
	READ_PTR_FULL(HungerStats, UTextBlock);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_395, UImage);
	READ_PTR_FULL(Image_862, UImage);
	READ_PTR_FULL(Img_Resource1, UImage);
	READ_PTR_FULL(Img_Resource2, UImage);
	READ_PTR_FULL(Img_Resource3, UImage);
	READ_PTR_FULL(Img_Resource4, UImage);
	READ_PTR_FULL(Img_Resource5, UImage);
	READ_PTR_FULL(Img_Resource6, UImage);
	READ_PTR_FULL(Img_SlotIcon, UImage);
	READ_PTR_FULL(ItemInfoBox, UVerticalBox);
	READ_PTR_FULL(PoisonBox, UHorizontalBox);
	READ_PTR_FULL(PoisonStats, UTextBlock);
	READ_PTR_FULL(PriceBox, UHorizontalBox);
	READ_PTR_FULL(ResourcesBox, UVerticalBox);
	READ_PTR_FULL(SchemeInfoBox, UVerticalBox);
	READ_PTR_FULL(StaminaBox, UHorizontalBox);
	READ_PTR_FULL(StaminaStats, UTextBlock);
	READ_PTR_FULL(ThirstBox, UHorizontalBox);
	READ_PTR_FULL(ThirstStats, UTextBlock);
	READ_PTR_FULL(txt_Cost, UTextBlock);
	READ_PTR_FULL(txt_Price, UTextBlock);
	READ_PTR_FULL(txt_RequiredTechnology, UTextBlock);
	READ_PTR_FULL(txt_Resource1, UTextBlock);
	READ_PTR_FULL(txt_Resource2, UTextBlock);
	READ_PTR_FULL(txt_Resource3, UTextBlock);
	READ_PTR_FULL(txt_Resource4, UTextBlock);
	READ_PTR_FULL(txt_Resource5, UTextBlock);
	READ_PTR_FULL(txt_Resource6, UTextBlock);
	READ_PTR_FULL(txt_SlotDescription, UTextBlock);
	READ_PTR_FULL(txt_SlotName, UTextBlock);
	READ_PTR_FULL(txt_Weight, UTextBlock);
	READ_PTR_FULL(WeightBox, UHorizontalBox);
	READ_PTR_FULL(WeightLimitBox, UHorizontalBox);
	READ_PTR_FULL(WeightLimitStats, UTextBlock);
	READ_PTR_FULL(WoodBox, UHorizontalBox);
	READ_PTR_FULL(WoodStats, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_Technology_Description_Right_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ColdBox);
	DELE_PTR_FULL(ColdStats);
	DELE_PTR_FULL(HealthBox);
	DELE_PTR_FULL(HealthStats);
	DELE_PTR_FULL(HeatBox);
	DELE_PTR_FULL(HeatStats);
	DELE_PTR_FULL(HungerBox);
	DELE_PTR_FULL(HungerStats);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_395);
	DELE_PTR_FULL(Image_862);
	DELE_PTR_FULL(Img_Resource1);
	DELE_PTR_FULL(Img_Resource2);
	DELE_PTR_FULL(Img_Resource3);
	DELE_PTR_FULL(Img_Resource4);
	DELE_PTR_FULL(Img_Resource5);
	DELE_PTR_FULL(Img_Resource6);
	DELE_PTR_FULL(Img_SlotIcon);
	DELE_PTR_FULL(ItemInfoBox);
	DELE_PTR_FULL(PoisonBox);
	DELE_PTR_FULL(PoisonStats);
	DELE_PTR_FULL(PriceBox);
	DELE_PTR_FULL(ResourcesBox);
	DELE_PTR_FULL(SchemeInfoBox);
	DELE_PTR_FULL(StaminaBox);
	DELE_PTR_FULL(StaminaStats);
	DELE_PTR_FULL(ThirstBox);
	DELE_PTR_FULL(ThirstStats);
	DELE_PTR_FULL(txt_Cost);
	DELE_PTR_FULL(txt_Price);
	DELE_PTR_FULL(txt_RequiredTechnology);
	DELE_PTR_FULL(txt_Resource1);
	DELE_PTR_FULL(txt_Resource2);
	DELE_PTR_FULL(txt_Resource3);
	DELE_PTR_FULL(txt_Resource4);
	DELE_PTR_FULL(txt_Resource5);
	DELE_PTR_FULL(txt_Resource6);
	DELE_PTR_FULL(txt_SlotDescription);
	DELE_PTR_FULL(txt_SlotName);
	DELE_PTR_FULL(txt_Weight);
	DELE_PTR_FULL(WeightBox);
	DELE_PTR_FULL(WeightLimitBox);
	DELE_PTR_FULL(WeightLimitStats);
	DELE_PTR_FULL(WoodBox);
	DELE_PTR_FULL(WoodStats);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
