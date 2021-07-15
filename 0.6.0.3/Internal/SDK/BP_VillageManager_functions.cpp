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

// Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem_OnFinish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::LoadSaveFileIntoSystem_OnFinish(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem_OnFinish");

	ABP_VillageManager_C_LoadSaveFileIntoSystem_OnFinish_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateSeasonalBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalBuildings");

	ABP_VillageManager_C_UpdateSeasonalBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalAnimals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateSeasonalAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalAnimals");

	ABP_VillageManager_C_UpdateSeasonalAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalNPCs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateSeasonalNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalNPCs");

	ABP_VillageManager_C_UpdateSeasonalNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateEconomy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::UpdateEconomy(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateEconomy");

	ABP_VillageManager_C_UpdateEconomy_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalFeeding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_MasterBuilding_C*> Buildings                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ForceUpdateForUI               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyOneProductionSlot          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            StotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::UpdateAnimalFeeding(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneProductionSlot, int StotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalFeeding");

	ABP_VillageManager_C_UpdateAnimalFeeding_Params params;
	params.ForceUpdateForUI = ForceUpdateForUI;
	params.OnlyOneProductionSlot = OnlyOneProductionSlot;
	params.StotID = StotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buildings != nullptr)
		*Buildings = params.Buildings;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsTrading
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_MasterBuilding_C*> Buildings                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ForceUpdateForUI               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyOneTradingSlot             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::UpdateBuildingsTrading(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneTradingSlot, int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsTrading");

	ABP_VillageManager_C_UpdateBuildingsTrading_Params params;
	params.ForceUpdateForUI = ForceUpdateForUI;
	params.OnlyOneTradingSlot = OnlyOneTradingSlot;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buildings != nullptr)
		*Buildings = params.Buildings;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsProduction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_MasterBuilding_C*> Buildings                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ForceUpdateForUI               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyOneProductionSlot          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            StotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::UpdateBuildingsProduction(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneProductionSlot, int StotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsProduction");

	ABP_VillageManager_C_UpdateBuildingsProduction_Params params;
	params.ForceUpdateForUI = ForceUpdateForUI;
	params.OnlyOneProductionSlot = OnlyOneProductionSlot;
	params.StotID = StotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buildings != nullptr)
		*Buildings = params.Buildings;

}


// Function BP_VillageManager.BP_VillageManager_C.SetWorkingTime
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::SetWorkingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.SetWorkingTime");

	ABP_VillageManager_C_SetWorkingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateStorage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateStorage");

	ABP_VillageManager_C_UpdateStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalsNeeds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateAnimalsNeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalsNeeds");

	ABP_VillageManager_C_UpdateAnimalsNeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdatePeoplesNeeds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdatePeoplesNeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdatePeoplesNeeds");

	ABP_VillageManager_C_UpdatePeoplesNeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalFurnitures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateSeasonalFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalFurnitures");

	ABP_VillageManager_C_UpdateSeasonalFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CheckBuildingLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LimitExceeded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Limit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::CheckBuildingLimit(TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType, bool* LimitExceeded, int* Current, int* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CheckBuildingLimit");

	ABP_VillageManager_C_CheckBuildingLimit_Params params;
	params.TrapType = TrapType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimitExceeded != nullptr)
		*LimitExceeded = params.LimitExceeded;
	if (Current != nullptr)
		*Current = params.Current;
	if (Limit != nullptr)
		*Limit = params.Limit;

}


// Function BP_VillageManager.BP_VillageManager_C.CheckTrapLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LimitExceeded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Limit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::CheckTrapLimit(TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType, bool* LimitExceeded, int* Current, int* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CheckTrapLimit");

	ABP_VillageManager_C_CheckTrapLimit_Params params;
	params.TrapType = TrapType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimitExceeded != nullptr)
		*LimitExceeded = params.LimitExceeded;
	if (Current != nullptr)
		*Current = params.Current;
	if (Limit != nullptr)
		*Limit = params.Limit;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfTraps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateNumberOfTraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfTraps");

	ABP_VillageManager_C_UpdateNumberOfTraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.IncreaseTax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::IncreaseTax(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.IncreaseTax");

	ABP_VillageManager_C_IncreaseTax_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CheckTaxesOnSeasonChange
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::CheckTaxesOnSeasonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CheckTaxesOnSeasonChange");

	ABP_VillageManager_C_CheckTaxesOnSeasonChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdatePopulation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdatePopulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdatePopulation");

	ABP_VillageManager_C_UpdatePopulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateNumberOfBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfBuildings");

	ABP_VillageManager_C_UpdateNumberOfBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateCurrentDevelopmentStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateCurrentDevelopmentStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateCurrentDevelopmentStage");

	ABP_VillageManager_C_UpdateCurrentDevelopmentStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.SetUnlockedDevelopmentStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> NewDevelopmentStage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::SetUnlockedDevelopmentStage(TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> NewDevelopmentStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.SetUnlockedDevelopmentStage");

	ABP_VillageManager_C_SetUnlockedDevelopmentStage_Params params;
	params.NewDevelopmentStage = NewDevelopmentStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.GetTechnologies
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TechnologyLevel_Building       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TechnologyLevel_Survival       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TechnologyLevel_Farming        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TechnologyLevel_Crafting       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::GetTechnologies(float* TechnologyLevel_Building, float* TechnologyLevel_Survival, float* TechnologyLevel_Farming, float* TechnologyLevel_Crafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.GetTechnologies");

	ABP_VillageManager_C_GetTechnologies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TechnologyLevel_Building != nullptr)
		*TechnologyLevel_Building = params.TechnologyLevel_Building;
	if (TechnologyLevel_Survival != nullptr)
		*TechnologyLevel_Survival = params.TechnologyLevel_Survival;
	if (TechnologyLevel_Farming != nullptr)
		*TechnologyLevel_Farming = params.TechnologyLevel_Farming;
	if (TechnologyLevel_Crafting != nullptr)
		*TechnologyLevel_Crafting = params.TechnologyLevel_Crafting;

}


// Function BP_VillageManager.BP_VillageManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.SaveDataFromSystemToFile");

	ABP_VillageManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem");

	ABP_VillageManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.GetTechnology
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TechnologyPoints               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::GetTechnology(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, float* TechnologyPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.GetTechnology");

	ABP_VillageManager_C_GetTechnology_Params params;
	params.TechnologyType = TechnologyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TechnologyPoints != nullptr)
		*TechnologyPoints = params.TechnologyPoints;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateFoodInventoryLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateFoodInventoryLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateFoodInventoryLimit");

	ABP_VillageManager_C_UpdateFoodInventoryLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateResourceInventoryLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateResourceInventoryLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateResourceInventoryLimit");

	ABP_VillageManager_C_UpdateResourceInventoryLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CreateFencesTechnologyLockedArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::CreateFencesTechnologyLockedArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CreateFencesTechnologyLockedArray");

	ABP_VillageManager_C_CreateFencesTechnologyLockedArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CreateCraftingRecipesTechnologyLockedArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::CreateCraftingRecipesTechnologyLockedArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CreateCraftingRecipesTechnologyLockedArray");

	ABP_VillageManager_C_CreateCraftingRecipesTechnologyLockedArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CreateFurnituresTechnologyLockedArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::CreateFurnituresTechnologyLockedArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CreateFurnituresTechnologyLockedArray");

	ABP_VillageManager_C_CreateFurnituresTechnologyLockedArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CreateBuildingsTechnologyArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::CreateBuildingsTechnologyArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CreateBuildingsTechnologyArray");

	ABP_VillageManager_C_CreateBuildingsTechnologyArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.Reset Life Stats Multipliers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::Reset_Life_Stats_Multipliers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.Reset Life Stats Multipliers");

	ABP_VillageManager_C_Reset_Life_Stats_Multipliers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.CheckIfTechnologyLevelIsSufficient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ValueToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSufficient_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VillageManager_C::CheckIfTechnologyLevelIsSufficient(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, int ValueToCheck, bool* IsSufficient_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.CheckIfTechnologyLevelIsSufficient");

	ABP_VillageManager_C_CheckIfTechnologyLevelIsSufficient_Params params;
	params.TechnologyType = TechnologyType;
	params.ValueToCheck = ValueToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSufficient_ != nullptr)
		*IsSufficient_ = params.IsSufficient_;

}


// Function BP_VillageManager.BP_VillageManager_C.IncreaseTechnology
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::IncreaseTechnology(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.IncreaseTechnology");

	ABP_VillageManager_C_IncreaseTechnology_Params params;
	params.TechnologyType = TechnologyType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.DecreaseDynastyReputation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::DecreaseDynastyReputation(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.DecreaseDynastyReputation");

	ABP_VillageManager_C_DecreaseDynastyReputation_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.IncreaseDynastyReputation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::IncreaseDynastyReputation(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.IncreaseDynastyReputation");

	ABP_VillageManager_C_IncreaseDynastyReputation_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VillageManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.ReceiveBeginPlay");

	ABP_VillageManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VillageManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.Init");

	ABP_VillageManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateVillageOnSeasonChange
// (BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateVillageOnSeasonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateVillageOnSeasonChange");

	ABP_VillageManager_C_UpdateVillageOnSeasonChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.StartVillageManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VillageManager_C::StartVillageManager(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.StartVillageManager");

	ABP_VillageManager_C_StartVillageManager_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateOnPopulationChange
// (BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateOnPopulationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateOnPopulationChange");

	ABP_VillageManager_C_UpdateOnPopulationChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateOnBuildingsChange
// (BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::UpdateOnBuildingsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateOnBuildingsChange");

	ABP_VillageManager_C_UpdateOnBuildingsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.UpdateOnTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IteratorNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::UpdateOnTime(int IteratorNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.UpdateOnTime");

	ABP_VillageManager_C_UpdateOnTime_Params params;
	params.IteratorNumber = IteratorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.ExecuteUbergraph_BP_VillageManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VillageManager_C::ExecuteUbergraph_BP_VillageManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.ExecuteUbergraph_BP_VillageManager");

	ABP_VillageManager_C_ExecuteUbergraph_BP_VillageManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.OnTechnologyChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::OnTechnologyChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.OnTechnologyChange__DelegateSignature");

	ABP_VillageManager_C_OnTechnologyChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VillageManager.BP_VillageManager_C.OnGlobalParametersChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_VillageManager_C::OnGlobalParametersChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VillageManager.BP_VillageManager_C.OnGlobalParametersChange__DelegateSignature");

	ABP_VillageManager_C_OnGlobalParametersChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
