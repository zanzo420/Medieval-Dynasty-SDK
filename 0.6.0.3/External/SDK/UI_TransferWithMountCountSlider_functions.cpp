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

// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.SliderAccept
// (BlueprintCallable, BlueprintEvent)
void UUI_TransferWithMountCountSlider_C::SliderAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.SliderAccept");

	UUI_TransferWithMountCountSlider_C_SliderAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TransferWithMountCountSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Tick");

	UUI_TransferWithMountCountSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TransferWithMountCountSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Construct");

	UUI_TransferWithMountCountSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TransferWithMountCountSlider_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.PreConstruct");

	UUI_TransferWithMountCountSlider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Cost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TransferWithMountCountSlider_C::Cost(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.Cost");

	UUI_TransferWithMountCountSlider_C_Cost_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.SliderCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_TransferWithMountCountSlider_C::SliderCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.SliderCancel");

	UUI_TransferWithMountCountSlider_C_SliderCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.ExecuteUbergraph_UI_TransferWithMountCountSlider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TransferWithMountCountSlider_C::ExecuteUbergraph_UI_TransferWithMountCountSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C.ExecuteUbergraph_UI_TransferWithMountCountSlider");

	UUI_TransferWithMountCountSlider_C_ExecuteUbergraph_UI_TransferWithMountCountSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_TransferWithMountCountSlider_C::AfterRead()
{
	UUI_MasterCountSlider_C::AfterRead();

}

void UUI_TransferWithMountCountSlider_C::BeforeDelete()
{
	UUI_MasterCountSlider_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
