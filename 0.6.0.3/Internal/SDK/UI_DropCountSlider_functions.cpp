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

// Function UI_DropCountSlider.UI_DropCountSlider_C.SliderAccept
// (BlueprintCallable, BlueprintEvent)
void UUI_DropCountSlider_C::SliderAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropCountSlider.UI_DropCountSlider_C.SliderAccept");

	UUI_DropCountSlider_C_SliderAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DropCountSlider.UI_DropCountSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DropCountSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropCountSlider.UI_DropCountSlider_C.Tick");

	UUI_DropCountSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DropCountSlider.UI_DropCountSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_DropCountSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropCountSlider.UI_DropCountSlider_C.Construct");

	UUI_DropCountSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DropCountSlider.UI_DropCountSlider_C.SliderCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_DropCountSlider_C::SliderCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropCountSlider.UI_DropCountSlider_C.SliderCancel");

	UUI_DropCountSlider_C_SliderCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_DropCountSlider.UI_DropCountSlider_C.ExecuteUbergraph_UI_DropCountSlider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_DropCountSlider_C::ExecuteUbergraph_UI_DropCountSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropCountSlider.UI_DropCountSlider_C.ExecuteUbergraph_UI_DropCountSlider");

	UUI_DropCountSlider_C_ExecuteUbergraph_UI_DropCountSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
