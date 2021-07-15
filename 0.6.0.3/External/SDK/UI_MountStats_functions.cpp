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

// Function UI_MountStats.UI_MountStats_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_MountStats_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountStats.UI_MountStats_C.Update");

	UUI_MountStats_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountStats.UI_MountStats_C.BindUpdate
// (BlueprintCallable, BlueprintEvent)
void UUI_MountStats_C::BindUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountStats.UI_MountStats_C.BindUpdate");

	UUI_MountStats_C_BindUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountStats.UI_MountStats_C.ExecuteUbergraph_UI_MountStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MountStats_C::ExecuteUbergraph_UI_MountStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountStats.UI_MountStats_C.ExecuteUbergraph_UI_MountStats");

	UUI_MountStats_C_ExecuteUbergraph_UI_MountStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MountStats_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Food_txt, UTextBlock);
	READ_PTR_FULL(FoodBar, UImage);
	READ_PTR_FULL(HealthBar, UImage);
	READ_PTR_FULL(HP_txt, UTextBlock);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_351, UImage);
	READ_PTR_FULL(MountReference, ABP_AnimalBase_C);
}

void UUI_MountStats_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Food_txt);
	DELE_PTR_FULL(FoodBar);
	DELE_PTR_FULL(HealthBar);
	DELE_PTR_FULL(HP_txt);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_351);
	DELE_PTR_FULL(MountReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
