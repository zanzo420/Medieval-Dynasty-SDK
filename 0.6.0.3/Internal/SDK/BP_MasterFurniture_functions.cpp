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

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsLinkedFurnitureStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MasterFurniture_C::IsLinkedFurnitureStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsLinkedFurnitureStarted");

	ABP_MasterFurniture_C_IsLinkedFurnitureStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotWorldTransforms
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              InteractTransform              (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform              FinalTransform                 (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::GetSlotWorldTransforms(int SlotIndex, bool* IsValidSlot, struct FTransform* InteractTransform, struct FTransform* FinalTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotWorldTransforms");

	ABP_MasterFurniture_C_GetSlotWorldTransforms_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (InteractTransform != nullptr)
		*InteractTransform = params.InteractTransform;
	if (FinalTransform != nullptr)
		*FinalTransform = params.FinalTransform;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeCurrentCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::ChangeCurrentCapacity(int Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeCurrentCapacity");

	ABP_MasterFurniture_C_ChangeCurrentCapacity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::GetSlotTransform(int SlotIndex, bool* IsValidSlot, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotTransform");

	ABP_MasterFurniture_C_GetSlotTransform_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOccupied                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsWantToOccupy                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::GetSlotOccupied(int SlotID, bool* IsOccupied, bool* IsWantToOccupy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotOccupied");

	ABP_MasterFurniture_C_GetSlotOccupied_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOccupied != nullptr)
		*IsOccupied = params.IsOccupied;
	if (IsWantToOccupy != nullptr)
		*IsWantToOccupy = params.IsWantToOccupy;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFinalLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              EndTransform                   (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::GetFinalLocation(int SlotIndex, struct FTransform* EndTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetFinalLocation");

	ABP_MasterFurniture_C_GetFinalLocation_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndTransform != nullptr)
		*EndTransform = params.EndTransform;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> Slot_Position                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetSlotType(int SlotID, bool* IsValidSlot, TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType>* Slot_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotType");

	ABP_MasterFurniture_C_GetSlotType_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Slot_Position != nullptr)
		*Slot_Position = params.Slot_Position;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FurnitureType_E_FurnitureType> FurnitureType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetFurnitureType(TEnumAsByte<E_FurnitureType_E_FurnitureType>* FurnitureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureType");

	ABP_MasterFurniture_C_GetFurnitureType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureType != nullptr)
		*FurnitureType = params.FurnitureType;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCapacity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCapacity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetCapacity(int* CurrentCapacity, int* MaxCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetCapacity");

	ABP_MasterFurniture_C_GetCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCapacity != nullptr)
		*CurrentCapacity = params.CurrentCapacity;
	if (MaxCapacity != nullptr)
		*MaxCapacity = params.MaxCapacity;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
// int                            SlotID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractSlot(bool* Success, struct FTransform* Transform, int* SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractSlot");

	ABP_MasterFurniture_C_GetInteractSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (SlotID != nullptr)
		*SlotID = params.SlotID;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInventoryComponent(class UInventoryComponent_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInventoryComponent");

	ABP_MasterFurniture_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    MasterBuilding                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetBuildingReference(class ABP_MasterBuilding_C** MasterBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingReference");

	ABP_MasterFurniture_C_GetBuildingReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterBuilding != nullptr)
		*MasterBuilding = params.MasterBuilding;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetEntrances
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Entrances                      (Parm, OutParm)
void ABP_MasterFurniture_C::GetEntrances(TArray<struct FVector>* Entrances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetEntrances");

	ABP_MasterFurniture_C_GetEntrances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entrances != nullptr)
		*Entrances = params.Entrances;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> GetBuildingType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingType");

	ABP_MasterFurniture_C_GetBuildingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetBuildingType != nullptr)
		*GetBuildingType = params.GetBuildingType;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsGrabbable");

	ABP_MasterFurniture_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemNeeded");

	ABP_MasterFurniture_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_MasterFurniture_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractItem");

	ABP_MasterFurniture_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemInteractable");

	ABP_MasterFurniture_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_MasterFurniture_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAdditionalStatus");

	ABP_MasterFurniture_C_GetInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
	if (Status != nullptr)
		*Status = params.Status;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractAdditionalStatus");

	ABP_MasterFurniture_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetFishData");

	ABP_MasterFurniture_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetID");

	ABP_MasterFurniture_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractionDistance");

	ABP_MasterFurniture_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetOff-HandItem");

	ABP_MasterFurniture_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolNeeded");

	ABP_MasterFurniture_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCondition");

	ABP_MasterFurniture_C_GetInteractCondition_Params params;
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


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractCondition");

	ABP_MasterFurniture_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetOwnershipType");

	ABP_MasterFurniture_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_MasterFurniture_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTitle");

	ABP_MasterFurniture_C_GetInteractTitle_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Title != nullptr)
		*Title = params.Title;
	if (ShowAdditionalTitle1 != nullptr)
		*ShowAdditionalTitle1 = params.ShowAdditionalTitle1;
	if (AdditionalTitleText1 != nullptr)
		*AdditionalTitleText1 = params.AdditionalTitleText1;
	if (ShowAdditionalTitle2 != nullptr)
		*ShowAdditionalTitle2 = params.ShowAdditionalTitle2;
	if (AdditionalTitleText2 != nullptr)
		*AdditionalTitleText2 = params.AdditionalTitleText2;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_MasterFurniture_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractResources");

	ABP_MasterFurniture_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetFluidType");

	ABP_MasterFurniture_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractTime");

	ABP_MasterFurniture_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool_UI");

	ABP_MasterFurniture_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable_UI");

	ABP_MasterFurniture_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable");

	ABP_MasterFurniture_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetTaskFromActor");

	ABP_MasterFurniture_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_MasterFurniture_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractName");

	ABP_MasterFurniture_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_MasterFurniture_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAction");

	ABP_MasterFurniture_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractable
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
void ABP_MasterFurniture_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractable");

	ABP_MasterFurniture_C_IsInteractable_Params params;
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


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool");

	ABP_MasterFurniture_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCount");

	ABP_MasterFurniture_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetHeldItem");

	ABP_MasterFurniture_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetResourceType");

	ABP_MasterFurniture_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractAnimation");

	ABP_MasterFurniture_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckOccupied");

	ABP_MasterFurniture_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractIcon");

	ABP_MasterFurniture_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPointOnTheMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnMap                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::CheckPointOnTheMap(const struct FVector& Location, bool* OnMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPointOnTheMap");

	ABP_MasterFurniture_C_CheckPointOnTheMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnMap != nullptr)
		*OnMap = params.OnMap;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.RecoverResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::RecoverResources(class UInventoryComponent_C* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.RecoverResources");

	ABP_MasterFurniture_C_RecoverResources_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded_Impl
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::OnInteractionEnded_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded_Impl");

	ABP_MasterFurniture_C_OnInteractionEnded_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted_Impl
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::OnInteractionStarted_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted_Impl");

	ABP_MasterFurniture_C_OnInteractionStarted_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckMountedInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MasterFurniture_C::CheckMountedInteraction(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckMountedInteraction");

	ABP_MasterFurniture_C_CheckMountedInteraction_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateResourceStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::UpdateResourceStack(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateResourceStack");

	ABP_MasterFurniture_C_UpdateResourceStack_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadRefillableContainerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_RefillableContainers FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::LoadRefillableContainerData(const struct FST_SAVE_RefillableContainers& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.LoadRefillableContainerData");

	ABP_MasterFurniture_C_LoadRefillableContainerData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadContainerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Containers     FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::LoadContainerData(const struct FST_SAVE_Containers& FurnitureData, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.LoadContainerData");

	ABP_MasterFurniture_C_LoadContainerData_Params params;
	params.FurnitureData = FurnitureData;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadCampfireData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Campfires      FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::LoadCampfireData(const struct FST_SAVE_Campfires& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.LoadCampfireData");

	ABP_MasterFurniture_C_LoadCampfireData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadTrapData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Traps          FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::LoadTrapData(const struct FST_SAVE_Traps& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.LoadTrapData");

	ABP_MasterFurniture_C_LoadTrapData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetActivityFurnitureDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_ActivityFurnitures FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetActivityFurnitureDataToSave(struct FST_SAVE_ActivityFurnitures* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetActivityFurnitureDataToSave");

	ABP_MasterFurniture_C_GetActivityFurnitureDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Furnitures     FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetFurnitureDataToSave(struct FST_SAVE_Furnitures* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureDataToSave");

	ABP_MasterFurniture_C_GetFurnitureDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetRefillableContainerDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_RefillableContainers FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetRefillableContainerDataToSave(struct FST_SAVE_RefillableContainers* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetRefillableContainerDataToSave");

	ABP_MasterFurniture_C_GetRefillableContainerDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetContainerDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Containers     FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetContainerDataToSave(struct FST_SAVE_Containers* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetContainerDataToSave");

	ABP_MasterFurniture_C_GetContainerDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetTrapDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Traps          FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetTrapDataToSave(struct FST_SAVE_Traps* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetTrapDataToSave");

	ABP_MasterFurniture_C_GetTrapDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.GetCampfireDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Campfires      FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_C::GetCampfireDataToSave(struct FST_SAVE_Campfires* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.GetCampfireDataToSave");

	ABP_MasterFurniture_C_GetCampfireDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateBaseRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewBaseRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::UpdateBaseRotation(const struct FRotator& NewBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateBaseRotation");

	ABP_MasterFurniture_C_UpdateBaseRotation_Params params;
	params.NewBaseRotation = NewBaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnOwnershipSwap");

	ABP_MasterFurniture_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckEnoughResources
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::CheckEnoughResources(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckEnoughResources");

	ABP_MasterFurniture_C_CheckEnoughResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckObstruction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckObstruction");

	ABP_MasterFurniture_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.DisableGhost");

	ABP_MasterFurniture_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.EnableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.EnableGhost");

	ABP_MasterFurniture_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPlaceability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlacementPossible              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Hidden                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::CheckPlaceability(bool* PlacementPossible, bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPlaceability");

	ABP_MasterFurniture_C_CheckPlaceability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlacementPossible != nullptr)
		*PlacementPossible = params.PlacementPossible;
	if (Hidden != nullptr)
		*Hidden = params.Hidden;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.UserConstructionScript");

	ABP_MasterFurniture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.FurnitureNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::FurnitureNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.FurnitureNotify");

	ABP_MasterFurniture_C_FurnitureNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.StopFurnitureAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Base_Character_Ref             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.StopFurnitureAnim");

	ABP_MasterFurniture_C_StopFurnitureAnim_Params params;
	params.Base_Character_Ref = Base_Character_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetVisibilityBasedAnimTickOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Engine_EVisibilityBasedAnimTickOption AnimTickOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetVisibilityBasedAnimTickOption");

	ABP_MasterFurniture_C_SetVisibilityBasedAnimTickOption_Params params;
	params.AnimTickOption = AnimTickOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.LinkFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::LinkFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.LinkFurniture");

	ABP_MasterFurniture_C_LinkFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SynchronizeWorkbenchAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SynchronizeWorkbenchAnim(float StartingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SynchronizeWorkbenchAnim");

	ABP_MasterFurniture_C_SynchronizeWorkbenchAnim_Params params;
	params.StartingPosition = StartingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.InteractInput");

	ABP_MasterFurniture_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.InteractStart");

	ABP_MasterFurniture_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetOccupied");

	ABP_MasterFurniture_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetTaskInActor");

	ABP_MasterFurniture_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeTaskIsOccupied");

	ABP_MasterFurniture_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.PerformActorInteraction");

	ABP_MasterFurniture_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.IsLookedAt");

	ABP_MasterFurniture_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.InteractWithImpaledItem");

	ABP_MasterFurniture_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.AddImpaledItem");

	ABP_MasterFurniture_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.RemoveImpaledItem");

	ABP_MasterFurniture_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.StartAttackFunction");

	ABP_MasterFurniture_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.StopAttackFunction");

	ABP_MasterFurniture_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.DestroyFurniture
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::DestroyFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.DestroyFurniture");

	ABP_MasterFurniture_C_DestroyFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.FinishFurniture");

	ABP_MasterFurniture_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveTick");

	ABP_MasterFurniture_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.Interact");

	ABP_MasterFurniture_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterFurniture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveBeginPlay");

	ABP_MasterFurniture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ShowInspectorUI");

	ABP_MasterFurniture_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.InteractCancel");

	ABP_MasterFurniture_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetWantToOccupy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SetWantToOccupy(bool Occupy, int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetWantToOccupy");

	ABP_MasterFurniture_C_SetWantToOccupy_Params params;
	params.Occupy = Occupy;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::ExecuteFinishVisuals(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishVisuals");

	ABP_MasterFurniture_C_ExecuteFinishVisuals_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::ExecuteFinishLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishLogic");

	ABP_MasterFurniture_C_ExecuteFinishLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.InitByBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::InitByBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.InitByBuilding");

	ABP_MasterFurniture_C_InitByBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterFurniture_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ToolInteract");

	ABP_MasterFurniture_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::SetHidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetHidden");

	ABP_MasterFurniture_C_SetHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdatePlaceable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Placeable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_C::UpdatePlaceable(bool Placeable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.UpdatePlaceable");

	ABP_MasterFurniture_C_UpdatePlaceable_Params params;
	params.Placeable = Placeable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EComponentMobility> Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.SetMeshMobility");

	ABP_MasterFurniture_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteUbergraph_BP_MasterFurniture
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::ExecuteUbergraph_BP_MasterFurniture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteUbergraph_BP_MasterFurniture");

	ABP_MasterFurniture_C_ExecuteUbergraph_BP_MasterFurniture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::OnInteractionEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded__DelegateSignature");

	ABP_MasterFurniture_C_OnInteractionEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::OnInteractionStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted__DelegateSignature");

	ABP_MasterFurniture_C_OnInteractionStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnPlayerOccupy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_C::OnPlayerOccupy__DelegateSignature(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnPlayerOccupy__DelegateSignature");

	ABP_MasterFurniture_C_OnPlayerOccupy__DelegateSignature_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture.BP_MasterFurniture_C.OnDestroyFurniture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_C::OnDestroyFurniture__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture.BP_MasterFurniture_C.OnDestroyFurniture__DelegateSignature");

	ABP_MasterFurniture_C_OnDestroyFurniture__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
