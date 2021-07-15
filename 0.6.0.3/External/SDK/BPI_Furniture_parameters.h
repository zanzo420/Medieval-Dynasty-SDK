#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPI_Furniture.BPI_Furniture_C.SynchronizeWorkbenchAnim
struct UBPI_Furniture_C_SynchronizeWorkbenchAnim_Params
{
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.IsLinkedFurnitureStarted
struct UBPI_Furniture_C_IsLinkedFurnitureStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.LinkFurniture
struct UBPI_Furniture_C_LinkFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetSlotWorldTransforms
struct UBPI_Furniture_C_GetSlotWorldTransforms_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  InteractTransform;                                         // (Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  FinalTransform;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.ChangeCurrentCapacity
struct UBPI_Furniture_C_ChangeCurrentCapacity_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.SetVisibilityBasedAnimTickOption
struct UBPI_Furniture_C_SetVisibilityBasedAnimTickOption_Params
{
	Engine_EVisibilityBasedAnimTickOption              AnimTickOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetSlotOccupied
struct UBPI_Furniture_C_GetSlotOccupied_Params
{
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOccupied;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsWantToOccupy;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.GetFinalLocation
struct UBPI_Furniture_C_GetFinalLocation_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  EndTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.GetSlotTransform
struct UBPI_Furniture_C_GetSlotTransform_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BPI_Furniture.BPI_Furniture_C.StopFurnitureAnim
struct UBPI_Furniture_C_StopFurnitureAnim_Params
{
	class ABP_BaseCharacter_C*                         Base_Character_Ref;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.FurnitureNotify
struct UBPI_Furniture_C_FurnitureNotify_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetSlotType
struct UBPI_Furniture_C_GetSlotType_Params
{
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> Slot_Position;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.SetWantToOccupy
struct UBPI_Furniture_C_SetWantToOccupy_Params
{
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetFurnitureType
struct UBPI_Furniture_C_GetFurnitureType_Params
{
	TEnumAsByte<E_FurnitureType_E_FurnitureType>       FurnitureType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetCapacity
struct UBPI_Furniture_C_GetCapacity_Params
{
	int                                                CurrentCapacity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCapacity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetInteractSlot
struct UBPI_Furniture_C_GetInteractSlot_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
	int                                                SlotID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Furniture.BPI_Furniture_C.GetInventoryComponent
struct UBPI_Furniture_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
