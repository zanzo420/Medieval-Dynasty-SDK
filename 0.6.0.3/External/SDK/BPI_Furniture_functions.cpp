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

// Function BPI_Furniture.BPI_Furniture_C.SynchronizeWorkbenchAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::SynchronizeWorkbenchAnim(float StartingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.SynchronizeWorkbenchAnim");

	UBPI_Furniture_C_SynchronizeWorkbenchAnim_Params params;
	params.StartingPosition = StartingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.IsLinkedFurnitureStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBPI_Furniture_C::IsLinkedFurnitureStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.IsLinkedFurnitureStarted");

	UBPI_Furniture_C_IsLinkedFurnitureStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BPI_Furniture.BPI_Furniture_C.LinkFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::LinkFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.LinkFurniture");

	UBPI_Furniture_C_LinkFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.GetSlotWorldTransforms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              InteractTransform              (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform              FinalTransform                 (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_Furniture_C::GetSlotWorldTransforms(int SlotIndex, bool* IsValidSlot, struct FTransform* InteractTransform, struct FTransform* FinalTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetSlotWorldTransforms");

	UBPI_Furniture_C_GetSlotWorldTransforms_Params params;
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


// Function BPI_Furniture.BPI_Furniture_C.ChangeCurrentCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Furniture_C::ChangeCurrentCapacity(int Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.ChangeCurrentCapacity");

	UBPI_Furniture_C_ChangeCurrentCapacity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_Furniture.BPI_Furniture_C.SetVisibilityBasedAnimTickOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Engine_EVisibilityBasedAnimTickOption AnimTickOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.SetVisibilityBasedAnimTickOption");

	UBPI_Furniture_C_SetVisibilityBasedAnimTickOption_Params params;
	params.AnimTickOption = AnimTickOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.GetSlotOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOccupied                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsWantToOccupy                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Furniture_C::GetSlotOccupied(int SlotID, bool* IsOccupied, bool* IsWantToOccupy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetSlotOccupied");

	UBPI_Furniture_C_GetSlotOccupied_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOccupied != nullptr)
		*IsOccupied = params.IsOccupied;
	if (IsWantToOccupy != nullptr)
		*IsWantToOccupy = params.IsWantToOccupy;

}


// Function BPI_Furniture.BPI_Furniture_C.GetFinalLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              EndTransform                   (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_Furniture_C::GetFinalLocation(int SlotIndex, struct FTransform* EndTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetFinalLocation");

	UBPI_Furniture_C_GetFinalLocation_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndTransform != nullptr)
		*EndTransform = params.EndTransform;

}


// Function BPI_Furniture.BPI_Furniture_C.GetSlotTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_Furniture_C::GetSlotTransform(int SlotIndex, bool* IsValidSlot, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetSlotTransform");

	UBPI_Furniture_C_GetSlotTransform_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BPI_Furniture.BPI_Furniture_C.StopFurnitureAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Base_Character_Ref             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.StopFurnitureAnim");

	UBPI_Furniture_C_StopFurnitureAnim_Params params;
	params.Base_Character_Ref = Base_Character_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.FurnitureNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::FurnitureNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.FurnitureNotify");

	UBPI_Furniture_C_FurnitureNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.GetSlotType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValidSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> Slot_Position                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::GetSlotType(int SlotID, bool* IsValidSlot, TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType>* Slot_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetSlotType");

	UBPI_Furniture_C_GetSlotType_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Slot_Position != nullptr)
		*Slot_Position = params.Slot_Position;

}


// Function BPI_Furniture.BPI_Furniture_C.SetWantToOccupy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::SetWantToOccupy(bool Occupy, int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.SetWantToOccupy");

	UBPI_Furniture_C_SetWantToOccupy_Params params;
	params.Occupy = Occupy;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Furniture.BPI_Furniture_C.GetFurnitureType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FurnitureType_E_FurnitureType> FurnitureType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::GetFurnitureType(TEnumAsByte<E_FurnitureType_E_FurnitureType>* FurnitureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetFurnitureType");

	UBPI_Furniture_C_GetFurnitureType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureType != nullptr)
		*FurnitureType = params.FurnitureType;

}


// Function BPI_Furniture.BPI_Furniture_C.GetCapacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCapacity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCapacity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::GetCapacity(int* CurrentCapacity, int* MaxCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetCapacity");

	UBPI_Furniture_C_GetCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCapacity != nullptr)
		*CurrentCapacity = params.CurrentCapacity;
	if (MaxCapacity != nullptr)
		*MaxCapacity = params.MaxCapacity;

}


// Function BPI_Furniture.BPI_Furniture_C.GetInteractSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
// int                            SlotID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::GetInteractSlot(bool* Success, struct FTransform* Transform, int* SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetInteractSlot");

	UBPI_Furniture_C_GetInteractSlot_Params params;

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


// Function BPI_Furniture.BPI_Furniture_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Furniture_C::GetInventoryComponent(class UInventoryComponent_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Furniture.BPI_Furniture_C.GetInventoryComponent");

	UBPI_Furniture_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


void UBPI_Furniture_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_Furniture_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
