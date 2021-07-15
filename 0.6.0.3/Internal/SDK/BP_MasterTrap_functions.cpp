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

// Function BP_MasterTrap.BP_MasterTrap_C.LoadTrapData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Traps          FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MasterTrap_C::LoadTrapData(const struct FST_SAVE_Traps& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.LoadTrapData");

	ABP_MasterTrap_C_LoadTrapData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterTrap_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.GetInteractCondition");

	ABP_MasterTrap_C_GetInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Condition != nullptr)
		*Condition = params.Condition;
	if (CustomText != nullptr)
		*CustomText = params.CustomText;
	if (Text != nullptr)
		*Text = params.Text;
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_MasterTrap.BP_MasterTrap_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.IsInteractCondition");

	ABP_MasterTrap_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_MasterTrap.BP_MasterTrap_C.GetTrapDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Traps          FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterTrap_C::GetTrapDataToSave(struct FST_SAVE_Traps* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.GetTrapDataToSave");

	ABP_MasterTrap_C_GetTrapDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterTrap.BP_MasterTrap_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_MasterTrap_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.GetInteractAction");

	ABP_MasterTrap_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_MasterTrap.BP_MasterTrap_C.IsInteractable
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
void ABP_MasterTrap_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.IsInteractable");

	ABP_MasterTrap_C_IsInteractable_Params params;
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


// Function BP_MasterTrap.BP_MasterTrap_C.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_C::ActivateTrap(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.ActivateTrap");

	ABP_MasterTrap_C_ActivateTrap_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.Catch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_C::Catch(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.Catch");

	ABP_MasterTrap_C_Catch_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.Interact");

	ABP_MasterTrap_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.DeactivateTrap
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterTrap_C::DeactivateTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.DeactivateTrap");

	ABP_MasterTrap_C_DeactivateTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.PickUpAnimal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterTrap_C::PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.PickUpAnimal");

	ABP_MasterTrap_C_PickUpAnimal_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.Update
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterTrap_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.Update");

	ABP_MasterTrap_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.FinishFurniture");

	ABP_MasterTrap_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap.BP_MasterTrap_C.ExecuteUbergraph_BP_MasterTrap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterTrap_C::ExecuteUbergraph_BP_MasterTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap.BP_MasterTrap_C.ExecuteUbergraph_BP_MasterTrap");

	ABP_MasterTrap_C_ExecuteUbergraph_BP_MasterTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
