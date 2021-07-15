// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForToolFuel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    BuildingReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolToFind                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToolCost                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResourcesFound                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_TradingTooltip_C::CheckForToolFuel(class ABP_MasterBuilding_C* BuildingReference, TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolToFind, float ToolCost, bool* ResourcesFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForToolFuel");

	UUI_BuildingDetails_TradingTooltip_C_CheckForToolFuel_Params params;
	params.BuildingReference = BuildingReference;
	params.ToolToFind = ToolToFind;
	params.ToolCost = ToolCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourcesFound != nullptr)
		*ResourcesFound = params.ResourcesFound;

}


// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForResources
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    BuildingReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ItemToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResourcesFound                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_TradingTooltip_C::CheckForResources(class ABP_MasterBuilding_C* BuildingReference, const struct FName& ItemToCheck, int Count, bool* ResourcesFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.CheckForResources");

	UUI_BuildingDetails_TradingTooltip_C_CheckForResources_Params params;
	params.BuildingReference = BuildingReference;
	params.ItemToCheck = ItemToCheck;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourcesFound != nullptr)
		*ResourcesFound = params.ResourcesFound;

}


// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.InitTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    BuildingReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Trading_Progress    TradeProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_BuildingDetails_TradingTooltip_C::InitTooltip(class ABP_MasterBuilding_C* BuildingReference, class APC_Player_C* PlayerControllerReference, const struct FST_Trading_Progress& TradeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.InitTooltip");

	UUI_BuildingDetails_TradingTooltip_C_InitTooltip_Params params;
	params.BuildingReference = BuildingReference;
	params.PlayerControllerReference = PlayerControllerReference;
	params.TradeProgress = TradeProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.ExecuteUbergraph_UI_BuildingDetails_TradingTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_TradingTooltip_C::ExecuteUbergraph_UI_BuildingDetails_TradingTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C.ExecuteUbergraph_UI_BuildingDetails_TradingTooltip");

	UUI_BuildingDetails_TradingTooltip_C_ExecuteUbergraph_UI_BuildingDetails_TradingTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
