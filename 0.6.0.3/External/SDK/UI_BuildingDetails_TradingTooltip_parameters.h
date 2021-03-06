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

// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForToolFuel
struct UUI_BuildingDetails_TradingTooltip_C_CheckForToolFuel_Params
{
	class ABP_MasterBuilding_C*                        BuildingReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolToFind;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToolCost;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResourcesFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForResources
struct UUI_BuildingDetails_TradingTooltip_C_CheckForResources_Params
{
	class ABP_MasterBuilding_C*                        BuildingReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ItemToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResourcesFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.InitTooltip
struct UUI_BuildingDetails_TradingTooltip_C_InitTooltip_Params
{
	class ABP_MasterBuilding_C*                        BuildingReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Trading_Progress                        TradeProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.ExecuteUbergraph_UI_BuildingDetails_TradingTooltip
struct UUI_BuildingDetails_TradingTooltip_C_ExecuteUbergraph_UI_BuildingDetails_TradingTooltip_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
