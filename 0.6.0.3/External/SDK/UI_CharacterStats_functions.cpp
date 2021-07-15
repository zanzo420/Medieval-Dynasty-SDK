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

// Function UI_CharacterStats.UI_CharacterStats_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterStats_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.Update");

	UUI_CharacterStats_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterStats.UI_CharacterStats_C.BindUpdate
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterStats_C::BindUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.BindUpdate");

	UUI_CharacterStats_C_BindUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterStats.UI_CharacterStats_C.ExecuteUbergraph_UI_CharacterStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterStats_C::ExecuteUbergraph_UI_CharacterStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.ExecuteUbergraph_UI_CharacterStats");

	UUI_CharacterStats_C_ExecuteUbergraph_UI_CharacterStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CharacterStats_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(AlcoholBar, UImage);
	READ_PTR_FULL(ColdProtectionBar, UImage);
	READ_PTR_FULL(Dirtness_txt, UTextBlock);
	READ_PTR_FULL(DirtnessBar, UImage);
	READ_PTR_FULL(Food_txt, UTextBlock);
	READ_PTR_FULL(FoodBar, UImage);
	READ_PTR_FULL(HealthBar, UImage);
	READ_PTR_FULL(HeatProtectionBar, UImage);
	READ_PTR_FULL(HP_txt, UTextBlock);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_351, UImage);
	READ_PTR_FULL(Poison_txt, UTextBlock);
	READ_PTR_FULL(PoisonBar, UImage);
	READ_PTR_FULL(Temp_txt, UTextBlock);
	READ_PTR_FULL(TemperatureBar, UImage);
	READ_PTR_FULL(TemperatureSlider, USlider);
	READ_PTR_FULL(ThirstBar, UImage);
	READ_PTR_FULL(txt_Alcohol, UTextBlock);
	READ_PTR_FULL(txt_ColdProtection, UTextBlock);
	READ_PTR_FULL(txt_HeatProtection, UTextBlock);
	READ_PTR_FULL(Water_txt, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_CharacterStats_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(AlcoholBar);
	DELE_PTR_FULL(ColdProtectionBar);
	DELE_PTR_FULL(Dirtness_txt);
	DELE_PTR_FULL(DirtnessBar);
	DELE_PTR_FULL(Food_txt);
	DELE_PTR_FULL(FoodBar);
	DELE_PTR_FULL(HealthBar);
	DELE_PTR_FULL(HeatProtectionBar);
	DELE_PTR_FULL(HP_txt);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_351);
	DELE_PTR_FULL(Poison_txt);
	DELE_PTR_FULL(PoisonBar);
	DELE_PTR_FULL(Temp_txt);
	DELE_PTR_FULL(TemperatureBar);
	DELE_PTR_FULL(TemperatureSlider);
	DELE_PTR_FULL(ThirstBar);
	DELE_PTR_FULL(txt_Alcohol);
	DELE_PTR_FULL(txt_ColdProtection);
	DELE_PTR_FULL(txt_HeatProtection);
	DELE_PTR_FULL(Water_txt);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
