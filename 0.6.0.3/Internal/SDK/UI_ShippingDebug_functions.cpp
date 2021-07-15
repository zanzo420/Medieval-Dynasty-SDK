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

// Function UI_ShippingDebug.UI_ShippingDebug_C.UpdateDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_ShippingDebug_C::UpdateDebugText(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShippingDebug.UI_ShippingDebug_C.UpdateDebugText");

	UUI_ShippingDebug_C_UpdateDebugText_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShippingDebug.UI_ShippingDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ShippingDebug_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShippingDebug.UI_ShippingDebug_C.Construct");

	UUI_ShippingDebug_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShippingDebug.UI_ShippingDebug_C.RemoveDebugText
// (BlueprintCallable, BlueprintEvent)
void UUI_ShippingDebug_C::RemoveDebugText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShippingDebug.UI_ShippingDebug_C.RemoveDebugText");

	UUI_ShippingDebug_C_RemoveDebugText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ShippingDebug.UI_ShippingDebug_C.ExecuteUbergraph_UI_ShippingDebug
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ShippingDebug_C::ExecuteUbergraph_UI_ShippingDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShippingDebug.UI_ShippingDebug_C.ExecuteUbergraph_UI_ShippingDebug");

	UUI_ShippingDebug_C_ExecuteUbergraph_UI_ShippingDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
