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

// Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_Furniture_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.UpdateData");

	UUI_Inspector_Furniture_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   FurnitureReference             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Furniture_C::Init(class ABP_MasterFurniture_C* FurnitureReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.Init");

	UUI_Inspector_Furniture_C_Init_Params params;
	params.FurnitureReference = FurnitureReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.ExecuteUbergraph_UI_Inspector_Furniture
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Furniture_C::ExecuteUbergraph_UI_Inspector_Furniture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Furniture.UI_Inspector_Furniture_C.ExecuteUbergraph_UI_Inspector_Furniture");

	UUI_Inspector_Furniture_C_ExecuteUbergraph_UI_Inspector_Furniture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
