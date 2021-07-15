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

// Function BP_Building_House_3.BP_Building_House_2_C.FoodDemand
struct ABP_Building_House_2_C_FoodDemand_Params
{
	float                                              Demand;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_House_3.BP_Building_House_2_C.TeleportPeople
struct ABP_Building_House_2_C_TeleportPeople_Params
{
	bool                                               PlayerIncluded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_House_3.BP_Building_House_2_C.RemovePeople
struct ABP_Building_House_2_C_RemovePeople_Params
{
	class ABP_BaseCharacter_C*                         Person;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_House_3.BP_Building_House_2_C.AddPeople
struct ABP_Building_House_2_C_AddPeople_Params
{
	class ABP_BaseCharacter_C*                         Person;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_House_3.BP_Building_House_2_C.AutoAssigningPeople
struct ABP_Building_House_2_C_AutoAssigningPeople_Params
{
};

// Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModulesDataFromSlot
struct ABP_Building_House_2_C_GetBuildingModulesDataFromSlot_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_Module>                          ModulesData;                                               // (Parm, OutParm)
};

// Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModuleDataFromSlot
struct ABP_Building_House_2_C_GetBuildingModuleDataFromSlot_Params
{
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingModuleSocket                    SocketData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Module                                  ModuleData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Building_House_3.BP_Building_House_2_C.CreateFurnitures
struct ABP_Building_House_2_C_CreateFurnitures_Params
{
};

// Function BP_Building_House_3.BP_Building_House_2_C.ExecuteUbergraph_BP_Building_House_3
struct ABP_Building_House_2_C_ExecuteUbergraph_BP_Building_House_3_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
