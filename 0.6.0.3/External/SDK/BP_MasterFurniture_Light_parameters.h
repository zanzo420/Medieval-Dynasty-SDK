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

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.OnOwnershipSwap
struct ABP_MasterFurniture_Light_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.DisableGhost
struct ABP_MasterFurniture_Light_C_DisableGhost_Params
{
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.EnableGhost
struct ABP_MasterFurniture_Light_C_EnableGhost_Params
{
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.GetActivityFurnitureDataToSave
struct ABP_MasterFurniture_Light_C_GetActivityFurnitureDataToSave_Params
{
	struct FST_SAVE_ActivityFurnitures                 FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.IsInteractable
struct ABP_MasterFurniture_Light_C_IsInteractable_Params
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

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.CheckObstruction
struct ABP_MasterFurniture_Light_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ShowInspectorUI
struct ABP_MasterFurniture_Light_C_ShowInspectorUI_Params
{
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.UpdateOnTimeOfDayChanged
struct ABP_MasterFurniture_Light_C_UpdateOnTimeOfDayChanged_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.StartFire
struct ABP_MasterFurniture_Light_C_StartFire_Params
{
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.PutOutFire
struct ABP_MasterFurniture_Light_C_PutOutFire_Params
{
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.FinishFurniture
struct ABP_MasterFurniture_Light_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.SetMeshMobility
struct ABP_MasterFurniture_Light_C_SetMeshMobility_Params
{
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Light.BP_MasterFurniture_Light_C.ExecuteUbergraph_BP_MasterFurniture_Light
struct ABP_MasterFurniture_Light_C_ExecuteUbergraph_BP_MasterFurniture_Light_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
