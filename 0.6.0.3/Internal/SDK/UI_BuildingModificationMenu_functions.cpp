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

// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.SetSegmentsRotationAndLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_BuildingModificationMenu_C::SetSegmentsRotationAndLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.SetSegmentsRotationAndLines");

	UUI_BuildingModificationMenu_C_SetSegmentsRotationAndLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.PrepareMainSegments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_BuildingModificationMenu_C::PrepareMainSegments()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.PrepareMainSegments");

	UUI_BuildingModificationMenu_C_PrepareMainSegments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Get_BuildTypeDescription_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_BuildingModificationMenu_C::Get_BuildTypeDescription_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Get_BuildTypeDescription_Text_1");

	UUI_BuildingModificationMenu_C_Get_BuildTypeDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Get_BuildTypeName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_BuildingModificationMenu_C::Get_BuildTypeName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Get_BuildTypeName_Text_1");

	UUI_BuildingModificationMenu_C_Get_BuildTypeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.GetMouseOver
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_BuildingModificationMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.GetMouseOver");

	UUI_BuildingModificationMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingModificationMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.OnSpawned");

	UUI_BuildingModificationMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingModificationMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.Construct");

	UUI_BuildingModificationMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.ExecuteUbergraph_UI_BuildingModificationMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingModificationMenu_C::ExecuteUbergraph_UI_BuildingModificationMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingModificationMenu.UI_BuildingModificationMenu_C.ExecuteUbergraph_UI_BuildingModificationMenu");

	UUI_BuildingModificationMenu_C_ExecuteUbergraph_UI_BuildingModificationMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
