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

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnOwnershipSwap
struct ABP_FurnitureContainer_Chest_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.GetInventoryComponent
struct ABP_FurnitureContainer_Chest_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.CheckObstruction
struct ABP_FurnitureContainer_Chest_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.EnableGhost
struct ABP_FurnitureContainer_Chest_C_EnableGhost_Params
{
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.DisableGhost
struct ABP_FurnitureContainer_Chest_C_DisableGhost_Params
{
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.UserConstructionScript
struct ABP_FurnitureContainer_Chest_C_UserConstructionScript_Params
{
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F
struct ABP_FurnitureContainer_Chest_C_OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F
struct ABP_FurnitureContainer_Chest_C_OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F
struct ABP_FurnitureContainer_Chest_C_OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F
struct ABP_FurnitureContainer_Chest_C_OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_876C1DCF45B4A4910CC227B6B520C84F
struct ABP_FurnitureContainer_Chest_C_OnCompleted_876C1DCF45B4A4910CC227B6B520C84F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_9B9214DD42E006008441C9B673B90767
struct ABP_FurnitureContainer_Chest_C_OnNotifyEnd_9B9214DD42E006008441C9B673B90767_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_9B9214DD42E006008441C9B673B90767
struct ABP_FurnitureContainer_Chest_C_OnNotifyBegin_9B9214DD42E006008441C9B673B90767_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_9B9214DD42E006008441C9B673B90767
struct ABP_FurnitureContainer_Chest_C_OnInterrupted_9B9214DD42E006008441C9B673B90767_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_9B9214DD42E006008441C9B673B90767
struct ABP_FurnitureContainer_Chest_C_OnBlendOut_9B9214DD42E006008441C9B673B90767_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_9B9214DD42E006008441C9B673B90767
struct ABP_FurnitureContainer_Chest_C_OnCompleted_9B9214DD42E006008441C9B673B90767_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ReceiveBeginPlay
struct ABP_FurnitureContainer_Chest_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.InteractCancel
struct ABP_FurnitureContainer_Chest_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.Interact
struct ABP_FurnitureContainer_Chest_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ExecuteUbergraph_BP_FurnitureContainer_Chest
struct ABP_FurnitureContainer_Chest_C_ExecuteUbergraph_BP_FurnitureContainer_Chest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
