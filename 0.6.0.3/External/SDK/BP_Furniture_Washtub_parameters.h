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

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.RemoveItems
struct ABP_Furniture_Washtub_C_RemoveItems_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.IsInteractable
struct ABP_Furniture_Washtub_C_IsInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPressUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowTimerUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOnlyName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.GetInteractAction
struct ABP_Furniture_Washtub_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.OnOwnershipSwap
struct ABP_Furniture_Washtub_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.CheckObstruction
struct ABP_Furniture_Washtub_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.GetFluidType
struct ABP_Furniture_Washtub_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.UpdateCapacityAnimation
struct ABP_Furniture_Washtub_C_UpdateCapacityAnimation_Params
{
	float                                              CapacityRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.DisableGhost
struct ABP_Furniture_Washtub_C_DisableGhost_Params
{
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.EnableGhost
struct ABP_Furniture_Washtub_C_EnableGhost_Params
{
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.UserConstructionScript
struct ABP_Furniture_Washtub_C_UserConstructionScript_Params
{
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.ReceiveBeginPlay
struct ABP_Furniture_Washtub_C_ReceiveBeginPlay_Params
{
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.InteractStart
struct ABP_Furniture_Washtub_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.Interact
struct ABP_Furniture_Washtub_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_Washtub.BP_Furniture_Washtub_C.ExecuteUbergraph_BP_Furniture_Washtub
struct ABP_Furniture_Washtub_C_ExecuteUbergraph_BP_Furniture_Washtub_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
