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

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ChangeCurrentCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_RefillableContainer_C::ChangeCurrentCapacity(int Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ChangeCurrentCapacity");

	ABP_Furniture_RefillableContainer_C_ChangeCurrentCapacity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.RemoveItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::RemoveItems(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.RemoveItems");

	ABP_Furniture_RefillableContainer_C_RemoveItems_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_Furniture_RefillableContainer_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractAction");

	ABP_Furniture_RefillableContainer_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractable");

	ABP_Furniture_RefillableContainer_C_IsInteractable_Params params;
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


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_RefillableContainer_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemNeeded");

	ABP_Furniture_RefillableContainer_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_Furniture_RefillableContainer_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractItem");

	ABP_Furniture_RefillableContainer_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_RefillableContainer_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemInteractable");

	ABP_Furniture_RefillableContainer_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractCondition");

	ABP_Furniture_RefillableContainer_C_GetInteractCondition_Params params;
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


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_RefillableContainer_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractCondition");

	ABP_Furniture_RefillableContainer_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.LoadRefillableContainerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_RefillableContainers FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::LoadRefillableContainerData(const struct FST_SAVE_RefillableContainers& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.LoadRefillableContainerData");

	ABP_Furniture_RefillableContainer_C_LoadRefillableContainerData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetRefillableContainerDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_RefillableContainers FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::GetRefillableContainerDataToSave(struct FST_SAVE_RefillableContainers* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetRefillableContainerDataToSave");

	ABP_Furniture_RefillableContainer_C_GetRefillableContainerDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacityAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CapacityRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::UpdateCapacityAnimation(float CapacityRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacityAnimation");

	ABP_Furniture_RefillableContainer_C_UpdateCapacityAnimation_Params params;
	params.CapacityRatio = CapacityRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCapacity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCapacity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::GetCapacity(int* CurrentCapacity, int* MaxCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetCapacity");

	ABP_Furniture_RefillableContainer_C_GetCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCapacity != nullptr)
		*CurrentCapacity = params.CurrentCapacity;
	if (MaxCapacity != nullptr)
		*MaxCapacity = params.MaxCapacity;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::UpdateCapacity(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacity");

	ABP_Furniture_RefillableContainer_C_UpdateCapacity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Furniture_RefillableContainer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ReceiveBeginPlay");

	ABP_Furniture_RefillableContainer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_RefillableContainer_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.Interact");

	ABP_Furniture_RefillableContainer_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.InitByBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_Furniture_RefillableContainer_C::InitByBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.InitByBuilding");

	ABP_Furniture_RefillableContainer_C_InitByBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ExecuteUbergraph_BP_Furniture_RefillableContainer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_RefillableContainer_C::ExecuteUbergraph_BP_Furniture_RefillableContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ExecuteUbergraph_BP_Furniture_RefillableContainer");

	ABP_Furniture_RefillableContainer_C_ExecuteUbergraph_BP_Furniture_RefillableContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
