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

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.GetActivityFurnitureDataToSave
struct ABP_MasterFurniture_Activity_C_GetActivityFurnitureDataToSave_Params
{
	struct FST_SAVE_ActivityFurnitures                 FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.IsInteractable
struct ABP_MasterFurniture_Activity_C_IsInteractable_Params
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

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.CheckObstruction
struct ABP_MasterFurniture_Activity_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ShowInspectorUI
struct ABP_MasterFurniture_Activity_C_ShowInspectorUI_Params
{
};

// Function BP_MasterFurniture_Activity.BP_MasterFurniture_Activity_C.ExecuteUbergraph_BP_MasterFurniture_Activity
struct ABP_MasterFurniture_Activity_C_ExecuteUbergraph_BP_MasterFurniture_Activity_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
