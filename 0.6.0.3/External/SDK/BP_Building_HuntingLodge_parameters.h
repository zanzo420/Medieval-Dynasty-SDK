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

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.GetBuildingModulesDataFromSlot
struct ABP_Building_HuntingLodge_C_GetBuildingModulesDataFromSlot_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_Module>                          ModulesData;                                               // (Parm, OutParm)
};

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.GetBuildingModuleDataFromSlot
struct ABP_Building_HuntingLodge_C_GetBuildingModuleDataFromSlot_Params
{
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingModuleSocket                    SocketData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Module                                  ModuleData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.SetStairs
struct ABP_Building_HuntingLodge_C_SetStairs_Params
{
};

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.CreateFurnitures
struct ABP_Building_HuntingLodge_C_CreateFurnitures_Params
{
};

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.ExecuteFinishLogic
struct ABP_Building_HuntingLodge_C_ExecuteFinishLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_HuntingLodge.BP_Building_HuntingLodge_C.ExecuteUbergraph_BP_Building_HuntingLodge
struct ABP_Building_HuntingLodge_C_ExecuteUbergraph_BP_Building_HuntingLodge_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
