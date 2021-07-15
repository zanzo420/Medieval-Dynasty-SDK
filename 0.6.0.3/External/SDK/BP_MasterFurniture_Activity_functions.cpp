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

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.GetActivityFurnitureDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_ActivityFurnitures FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_Activity_C::GetActivityFurnitureDataToSave(struct FST_SAVE_ActivityFurnitures* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.GetActivityFurnitureDataToSave");

	ABP_MasterFurniture_Activity_C_GetActivityFurnitureDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.IsInteractable
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
void ABP_MasterFurniture_Activity_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.IsInteractable");

	ABP_MasterFurniture_Activity_C_IsInteractable_Params params;
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


// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Activity_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.CheckObstruction");

	ABP_MasterFurniture_Activity_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Activity_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ShowInspectorUI");

	ABP_MasterFurniture_Activity_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ExecuteUbergraph_BP_MasterFurniture_Activity
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Activity_C::ExecuteUbergraph_BP_MasterFurniture_Activity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ExecuteUbergraph_BP_MasterFurniture_Activity");

	ABP_MasterFurniture_Activity_C_ExecuteUbergraph_BP_MasterFurniture_Activity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterFurniture_Activity_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
}

void ABP_MasterFurniture_Activity_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(ObstructionMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
