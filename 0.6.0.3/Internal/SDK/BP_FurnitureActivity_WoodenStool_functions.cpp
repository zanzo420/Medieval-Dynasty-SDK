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

// Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureActivity_WoodenStool_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.DisableGhost");

	ABP_FurnitureActivity_WoodenStool_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureActivity_WoodenStool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.UserConstructionScript");

	ABP_FurnitureActivity_WoodenStool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.SetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureActivity_WoodenStool_C::SetHidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.SetHidden");

	ABP_FurnitureActivity_WoodenStool_C_SetHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.UpdatePlaceable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Placeable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureActivity_WoodenStool_C::UpdatePlaceable(bool Placeable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.UpdatePlaceable");

	ABP_FurnitureActivity_WoodenStool_C_UpdatePlaceable_Params params;
	params.Placeable = Placeable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.ExecuteUbergraph_BP_FurnitureActivity_WoodenStool
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureActivity_WoodenStool_C::ExecuteUbergraph_BP_FurnitureActivity_WoodenStool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenStool.BP_FurnitureActivity_WoodenStool_C.ExecuteUbergraph_BP_FurnitureActivity_WoodenStool");

	ABP_FurnitureActivity_WoodenStool_C_ExecuteUbergraph_BP_FurnitureActivity_WoodenStool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
