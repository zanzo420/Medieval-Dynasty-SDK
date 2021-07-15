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

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.HasResouces
struct ABP_Building_MarketStall_C_HasResouces_Params
{
	bool                                               Resources;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetShopType
struct ABP_Building_MarketStall_C_SetShopType_Params
{
	TEnumAsByte<E_ShopType_E_ShopType>                 Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InitTradingData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModulesDataFromSlot
struct ABP_Building_MarketStall_C_GetBuildingModulesDataFromSlot_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_Module>                          ModulesData;                                               // (Parm, OutParm)
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModuleDataFromSlot
struct ABP_Building_MarketStall_C_GetBuildingModuleDataFromSlot_Params
{
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingModuleSocket                    SocketData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Module                                  ModuleData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetStairs
struct ABP_Building_MarketStall_C_SetStairs_Params
{
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.OnLoaded_F5F1394A4A8EDADA74AE009B2066C208
struct ABP_Building_MarketStall_C_OnLoaded_F5F1394A4A8EDADA74AE009B2066C208_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.CreateFurnitures
struct ABP_Building_MarketStall_C_CreateFurnitures_Params
{
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetInteriorMesh
struct ABP_Building_MarketStall_C_SetInteriorMesh_Params
{
};

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.ExecuteUbergraph_BP_Building_MarketStall
struct ABP_Building_MarketStall_C_ExecuteUbergraph_BP_Building_MarketStall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
