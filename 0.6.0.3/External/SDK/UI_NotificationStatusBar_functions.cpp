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

// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdatePeopleNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoPeopleHome                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleFood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::UpdatePeopleNotification(int NoPeopleHome, int NoPeopleFood, int NoPeopleWood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdatePeopleNotification");

	UUI_NotificationStatusBar_C_UpdatePeopleNotification_Params params;
	params.NoPeopleHome = NoPeopleHome;
	params.NoPeopleFood = NoPeopleFood;
	params.NoPeopleWood = NoPeopleWood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdateAnimalsNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoAnimalsHome                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoAnimalsFood                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::UpdateAnimalsNotification(int NoAnimalsHome, int NoAnimalsFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdateAnimalsNotification");

	UUI_NotificationStatusBar_C_UpdateAnimalsNotification_Params params;
	params.NoAnimalsHome = NoAnimalsHome;
	params.NoAnimalsFood = NoAnimalsFood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.ExecuteUbergraph_UI_NotificationStatusBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::ExecuteUbergraph_UI_NotificationStatusBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.ExecuteUbergraph_UI_NotificationStatusBar");

	UUI_NotificationStatusBar_C_ExecuteUbergraph_UI_NotificationStatusBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_NotificationStatusBar_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(AnimalFood, UOverlay);
	READ_PTR_FULL(AnimalHouse, UOverlay);
	READ_PTR_FULL(Food, UOverlay);
	READ_PTR_FULL(House, UOverlay);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_47, UImage);
	READ_PTR_FULL(MainTargetPanel, UCanvasPanel);
	READ_PTR_FULL(NoAnimalFoodCount, UTextBlock);
	READ_PTR_FULL(NoAnimalHomeCount, UTextBlock);
	READ_PTR_FULL(NoFoodCount, UTextBlock);
	READ_PTR_FULL(NoHomeCount, UTextBlock);
	READ_PTR_FULL(NoWoodCount, UTextBlock);
	READ_PTR_FULL(wood, UOverlay);
	READ_PTR_FULL(HudReference, UUI_HUD_C);
}

void UUI_NotificationStatusBar_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(AnimalFood);
	DELE_PTR_FULL(AnimalHouse);
	DELE_PTR_FULL(Food);
	DELE_PTR_FULL(House);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_47);
	DELE_PTR_FULL(MainTargetPanel);
	DELE_PTR_FULL(NoAnimalFoodCount);
	DELE_PTR_FULL(NoAnimalHomeCount);
	DELE_PTR_FULL(NoFoodCount);
	DELE_PTR_FULL(NoHomeCount);
	DELE_PTR_FULL(NoWoodCount);
	DELE_PTR_FULL(wood);
	DELE_PTR_FULL(HudReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
