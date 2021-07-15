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

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.IsInteractable
struct ABP_MasterTrap_StaticMesh_Net_C_IsInteractable_Params
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

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.GetInteractAction
struct ABP_MasterTrap_StaticMesh_Net_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.GetWaterDirection
struct ABP_MasterTrap_StaticMesh_Net_C_GetWaterDirection_Params
{
	TEnumAsByte<E_WaterDirection_E_WaterDirection>     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.CheckObstruction
struct ABP_MasterTrap_StaticMesh_Net_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.DisableGhost
struct ABP_MasterTrap_StaticMesh_Net_C_DisableGhost_Params
{
};

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.Interact
struct ABP_MasterTrap_StaticMesh_Net_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterTrap_StaticMesh_Net.BP_MasterTrap_StaticMesh_Net_C.ExecuteUbergraph_BP_MasterTrap_StaticMesh_Net
struct ABP_MasterTrap_StaticMesh_Net_C_ExecuteUbergraph_BP_MasterTrap_StaticMesh_Net_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
