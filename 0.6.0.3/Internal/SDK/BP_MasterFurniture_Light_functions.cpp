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

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.OnOwnershipSwap");

	ABP_MasterFurniture_Light_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Light_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.DisableGhost");

	ABP_MasterFurniture_Light_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Light_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.EnableGhost");

	ABP_MasterFurniture_Light_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.GetActivityFurnitureDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_ActivityFurnitures FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::GetActivityFurnitureDataToSave(struct FST_SAVE_ActivityFurnitures* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.GetActivityFurnitureDataToSave");

	ABP_MasterFurniture_Light_C_GetActivityFurnitureDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.IsInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.IsInteractable");

	ABP_MasterFurniture_Light_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Light_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.CheckObstruction");

	ABP_MasterFurniture_Light_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Light_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ShowInspectorUI");

	ABP_MasterFurniture_Light_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.UpdateOnTimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::UpdateOnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.UpdateOnTimeOfDayChanged");

	ABP_MasterFurniture_Light_C_UpdateOnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Light_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.StartFire");

	ABP_MasterFurniture_Light_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.PutOutFire
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Light_C::PutOutFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.PutOutFire");

	ABP_MasterFurniture_Light_C_PutOutFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Light_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.FinishFurniture");

	ABP_MasterFurniture_Light_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EComponentMobility> Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.SetMeshMobility");

	ABP_MasterFurniture_Light_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ExecuteUbergraph_BP_MasterFurniture_Light
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Light_C::ExecuteUbergraph_BP_MasterFurniture_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ExecuteUbergraph_BP_MasterFurniture_Light");

	ABP_MasterFurniture_Light_C_ExecuteUbergraph_BP_MasterFurniture_Light_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
