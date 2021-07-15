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

// Function BP_Building_Barn.BP_Building_Barn_C.HasResouces
struct ABP_Building_Barn_C_HasResouces_Params
{
	bool                                               Resources;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_Barn.BP_Building_Barn_C.HasTools
struct ABP_Building_Barn_C_HasTools_Params
{
	bool                                               Tools;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_Barn.BP_Building_Barn_C.CheckItemInChest
struct ABP_Building_Barn_C_CheckItemInChest_Params
{
	bool                                               RemoveItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_Barn.BP_Building_Barn_C.RemovePeople
struct ABP_Building_Barn_C_RemovePeople_Params
{
	class ABP_BaseCharacter_C*                         Person;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_Barn.BP_Building_Barn_C.GetFieldTask
struct ABP_Building_Barn_C_GetFieldTask_Params
{
	struct FST_FieldTasksLists                         Task;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedToolActivity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModuleDataFromSlot
struct ABP_Building_Barn_C_GetBuildingModuleDataFromSlot_Params
{
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingModuleSocket                    SocketData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Module                                  ModuleData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModulesDataFromSlot
struct ABP_Building_Barn_C_GetBuildingModulesDataFromSlot_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_Module>                          ModulesData;                                               // (Parm, OutParm)
};

// Function BP_Building_Barn.BP_Building_Barn_C.SetStairs
struct ABP_Building_Barn_C_SetStairs_Params
{
};

// Function BP_Building_Barn.BP_Building_Barn_C.CreateFurnitures
struct ABP_Building_Barn_C_CreateFurnitures_Params
{
};

// Function BP_Building_Barn.BP_Building_Barn_C.ExecuteUbergraph_BP_Building_Barn
struct ABP_Building_Barn_C_ExecuteUbergraph_BP_Building_Barn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
