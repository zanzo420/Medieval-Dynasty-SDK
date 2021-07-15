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

// Function BP_NPCManager.BP_NPCManager_C.SetNeighoursRelations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::SetNeighoursRelations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetNeighoursRelations");

	ABP_NPCManager_C_SetNeighoursRelations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.NPCsDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::NPCsDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.NPCsDeath");

	ABP_NPCManager_C_NPCsDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.UpdateNPCsOnSeasonChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::UpdateNPCsOnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.UpdateNPCsOnSeasonChanged");

	ABP_NPCManager_C_UpdateNPCsOnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.NeighboursDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::NeighboursDeath(class ABP_NPC_C* NPC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.NeighboursDeath");

	ABP_NPCManager_C_NeighboursDeath_Params params;
	params.NPC_Reference = NPC_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnGiftVendor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle     VendorCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SpawnGiftVendor(const struct FTransform& TransformLocation, const struct FDataTableRowHandle& VendorCategory, class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnGiftVendor");

	ABP_NPCManager_C_SpawnGiftVendor_Params params;
	params.TransformLocation = TransformLocation;
	params.VendorCategory = VendorCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnNPC_FromSpawner
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleNPC           NPC_Parameters                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SpawnNPC_FromSpawner(const struct FST_SimpleNPC& NPC_Parameters, class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnNPC_FromSpawner");

	ABP_NPCManager_C_SpawnNPC_FromSpawner_Params params;
	params.NPC_Parameters = NPC_Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function BP_NPCManager.BP_NPCManager_C.VerifyNPCHeadAndHair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.VerifyNPCHeadAndHair");

	ABP_NPCManager_C_VerifyNPCHeadAndHair_Params params;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.UpdateVendors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::UpdateVendors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.UpdateVendors");

	ABP_NPCManager_C_UpdateVendors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SortByWealth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_NPCsPresets> ArrayToSort                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_Wealth_E_Wealth> Wealth                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsPresets> SortedArray                    (Parm, OutParm)
void ABP_NPCManager_C::SortByWealth(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Wealth_E_Wealth> Wealth, TArray<struct FST_NPCsPresets>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SortByWealth");

	ABP_NPCManager_C_SortByWealth_Params params;
	params.Wealth = Wealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionSeasonAndWealth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Wealth_E_Wealth> Wealth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> ProfessionOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> SeasonOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Wealth_E_Wealth> WealthOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PresetID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::GetPresetByProfessionSeasonAndWealth(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TEnumAsByte<E_Wealth_E_Wealth> Wealth, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons_E_Seasons>* SeasonOut, TEnumAsByte<E_Wealth_E_Wealth>* WealthOut, struct FName* PresetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionSeasonAndWealth");

	ABP_NPCManager_C_GetPresetByProfessionSeasonAndWealth_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;
	params.Wealth = Wealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (SeasonOut != nullptr)
		*SeasonOut = params.SeasonOut;
	if (WealthOut != nullptr)
		*WealthOut = params.WealthOut;
	if (PresetID != nullptr)
		*PresetID = params.PresetID;

}


// Function BP_NPCManager.BP_NPCManager_C.DestroyHerald
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NPC_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPCManager_C::DestroyHerald(const struct FString& NPC_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.DestroyHerald");

	ABP_NPCManager_C_DestroyHerald_Params params;
	params.NPC_ID = NPC_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnHerald
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SpawnHerald(class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnHerald");

	ABP_NPCManager_C_SpawnHerald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function BP_NPCManager.BP_NPCManager_C.SetNPC_NightPatrol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::SetNPC_NightPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetNPC_NightPatrol");

	ABP_NPCManager_C_SetNPC_NightPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.CheckIsNeighbours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::CheckIsNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.CheckIsNeighbours");

	ABP_NPCManager_C_CheckIsNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.VerifyAvailablePresets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsPresets> ArrayToVerify                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_NPCManager_C::VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.VerifyAvailablePresets");

	ABP_NPCManager_C_VerifyAvailablePresets_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToVerify != nullptr)
		*ArrayToVerify = params.ArrayToVerify;

}


// Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionAndSeason
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> ProfessionOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> SeasonOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PresetID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::GetPresetByProfessionAndSeason(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons_E_Seasons>* SeasonOut, struct FName* PresetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionAndSeason");

	ABP_NPCManager_C_GetPresetByProfessionAndSeason_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (SeasonOut != nullptr)
		*SeasonOut = params.SeasonOut;
	if (PresetID != nullptr)
		*PresetID = params.PresetID;

}


// Function BP_NPCManager.BP_NPCManager_C.VerifyNPCPresets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.VerifyNPCPresets");

	ABP_NPCManager_C_VerifyNPCPresets_Params params;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPCManager.BP_NPCManager_C.SelectHeadAndHair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SelectHeadAndHair(class ABP_NPC_C* NPCReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SelectHeadAndHair");

	ABP_NPCManager_C_SelectHeadAndHair_Params params;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.GetPresetDataTableForNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_BaseCharacter_C*     NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDataTable* ABP_NPCManager_C::GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetPresetDataTableForNPC");

	ABP_NPCManager_C_GetPresetDataTableForNPC_Params params;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_NPCManager.BP_NPCManager_C.SortBySeason
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_NPCsPresets> ArrayToSort                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_Seasons_E_Seasons> Season                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsPresets> SortedArray                    (Parm, OutParm)
void ABP_NPCManager_C::SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Seasons_E_Seasons> Season, TArray<struct FST_NPCsPresets>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SortBySeason");

	ABP_NPCManager_C_SortBySeason_Params params;
	params.Season = Season;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function BP_NPCManager.BP_NPCManager_C.SortByProfession
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_NPCsPresets> ArrayToSort                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsPresets> SortedArray                    (Parm, OutParm)
void ABP_NPCManager_C::SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Profession_E_Profession> Profession, TArray<struct FST_NPCsPresets>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SortByProfession");

	ABP_NPCManager_C_SortByProfession_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function BP_NPCManager.BP_NPCManager_C.GetNPCPresets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsPresets> Presets                        (Parm, OutParm)
void ABP_NPCManager_C::GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetNPCPresets");

	ABP_NPCManager_C_GetNPCPresets_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Presets != nullptr)
		*Presets = params.Presets;

}


// Function BP_NPCManager.BP_NPCManager_C.GetPresetsForProfession
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> ProfessionOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCSeasonClothing   PresetsForProfession           (Parm, OutParm, HasGetValueTypeHash)
void ABP_NPCManager_C::GetPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, struct FST_NPCSeasonClothing* PresetsForProfession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetPresetsForProfession");

	ABP_NPCManager_C_GetPresetsForProfession_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (PresetsForProfession != nullptr)
		*PresetsForProfession = params.PresetsForProfession;

}


// Function BP_NPCManager.BP_NPCManager_C.LoadPresetTables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_NPCsPresets> AvailableMalePresets           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_NPCsPresets> AvailableFemalePresets         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_NPCsPresets> AvailableBoyPresets            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_NPCsPresets> AvailableGirlPresets           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_NPCsPresets> AvailableToddlerPresets        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_NPCManager_C::LoadPresetTables(TArray<struct FST_NPCsPresets>* AvailableMalePresets, TArray<struct FST_NPCsPresets>* AvailableFemalePresets, TArray<struct FST_NPCsPresets>* AvailableBoyPresets, TArray<struct FST_NPCsPresets>* AvailableGirlPresets, TArray<struct FST_NPCsPresets>* AvailableToddlerPresets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.LoadPresetTables");

	ABP_NPCManager_C_LoadPresetTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvailableMalePresets != nullptr)
		*AvailableMalePresets = params.AvailableMalePresets;
	if (AvailableFemalePresets != nullptr)
		*AvailableFemalePresets = params.AvailableFemalePresets;
	if (AvailableBoyPresets != nullptr)
		*AvailableBoyPresets = params.AvailableBoyPresets;
	if (AvailableGirlPresets != nullptr)
		*AvailableGirlPresets = params.AvailableGirlPresets;
	if (AvailableToddlerPresets != nullptr)
		*AvailableToddlerPresets = params.AvailableToddlerPresets;

}


// Function BP_NPCManager.BP_NPCManager_C.SelectPresetsForNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SelectPresetsForNPC");

	ABP_NPCManager_C_SelectPresetsForNPC_Params params;
	params.NPC_Reference = NPC_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPCManager.BP_NPCManager_C.InitializePresetTables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::InitializePresetTables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.InitializePresetTables");

	ABP_NPCManager_C_InitializePresetTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.NakedNPCPrevention
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NPCMeshesGen        NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyParts                      (Parm, OutParm)
void ABP_NPCManager_C::NakedNPCPrevention(const struct FST_NPCMeshesGen& NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.NakedNPCPrevention");

	ABP_NPCManager_C_NakedNPCPrevention_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyParts != nullptr)
		*BodyParts = params.BodyParts;

}


// Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshesGen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NPCMeshesGen        NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes               (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes                (Parm, OutParm)
void ABP_NPCManager_C::GetMeshesByIndexesFromNPCMeshesGen(const struct FST_NPCMeshesGen& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshesGen");

	ABP_NPCManager_C_GetMeshesByIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.BodyPartsIndexes = BodyPartsIndexes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;

}


// Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshesGen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NPCMeshesGen        NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FST_ArrayOfArraysInt> SortedIndexes                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes               (Parm, OutParm)
void ABP_NPCManager_C::GetRandomIndexesFromNPCMeshesGen(const struct FST_NPCMeshesGen& NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyPartsIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshesGen");

	ABP_NPCManager_C_GetRandomIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
	if (BodyPartsIndexes != nullptr)
		*BodyPartsIndexes = params.BodyPartsIndexes;

}


// Function BP_NPCManager.BP_NPCManager_C.MeshGenSorter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_NPCsGenMeshSettings> ArrayToSort                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> Season                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_NPCsGenMeshSettings> SortedArray                    (Parm, OutParm)
// TArray<int>                    SortedIndexes                  (Parm, OutParm)
void ABP_NPCManager_C::MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int>* SortedIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.MeshGenSorter");

	ABP_NPCManager_C_MeshGenSorter_Params params;
	params.Profession = Profession;
	params.Season = Season;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;

}


// Function BP_NPCManager.BP_NPCManager_C.SortMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_NPCMeshesGen        NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCMeshesGen        SortedNPCMeshes                (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FST_ArrayOfArraysInt> SortedIndexes                  (Parm, OutParm)
void ABP_NPCManager_C::SortMeshes(const struct FST_NPCMeshesGen& NPCMeshes, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SortMeshes");

	ABP_NPCManager_C_SortMeshes_Params params;
	params.NPCMeshes = NPCMeshes;
	params.Profession = Profession;
	params.Season = Season;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortedNPCMeshes != nullptr)
		*SortedNPCMeshes = params.SortedNPCMeshes;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;

}


// Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPCGen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_NPCMeshesGen        NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           KeepHead                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes                (Parm, OutParm)
void ABP_NPCManager_C::SelectMeshesForNPCGen(const struct FST_NPCMeshesGen& NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPCGen");

	ABP_NPCManager_C_SelectMeshesForNPCGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;

}


// Function BP_NPCManager.BP_NPCManager_C.Spawn Child
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              TransformLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FString                 MotherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           MustBeMale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Birth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::Spawn_Child(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FTransform& TransformLocation, const struct FString& MotherID, bool MustBeMale, bool Birth, bool* Succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.Spawn Child");

	ABP_NPCManager_C_Spawn_Child_Params params;
	params.Ownership = Ownership;
	params.TransformLocation = TransformLocation;
	params.MotherID = MotherID;
	params.MustBeMale = MustBeMale;
	params.Birth = Birth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;

}


// Function BP_NPCManager.BP_NPCManager_C.LoadCharacterMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::LoadCharacterMeshes(TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, class ABP_NPC_C* NPCReference, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.LoadCharacterMeshes");

	ABP_NPCManager_C_LoadCharacterMeshes_Params params;
	params.BodyPartsIndexes = BodyPartsIndexes;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_NPCMeshes           NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes                (Parm, OutParm)
void ABP_NPCManager_C::SelectMeshesForNPC(const struct FST_NPCMeshes& NPCMeshes, class ABP_NPC_C* NPC_Reference, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPC");

	ABP_NPCManager_C_SelectMeshesForNPC_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPC_Reference = NPC_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;

}


// Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_NPCMeshes           NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes               (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes                (Parm, OutParm)
void ABP_NPCManager_C::GetMeshesByIndexesFromNPCMeshes(const struct FST_NPCMeshes& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshes");

	ABP_NPCManager_C_GetMeshesByIndexesFromNPCMeshes_Params params;
	params.NPCMeshes = NPCMeshes;
	params.BodyPartsIndexes = BodyPartsIndexes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;

}


// Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_NPCMeshes           NPCMeshes                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes               (Parm, OutParm)
void ABP_NPCManager_C::GetRandomIndexesFromNPCMeshes(const struct FST_NPCMeshes& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyPartsIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshes");

	ABP_NPCManager_C_GetRandomIndexesFromNPCMeshes_Params params;
	params.NPCMeshes = NPCMeshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyPartsIndexes != nullptr)
		*BodyPartsIndexes = params.BodyPartsIndexes;

}


// Function BP_NPCManager.BP_NPCManager_C.SetCustomCharacterMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AnimClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SetCustomCharacterMeshes(class UClass* AnimClass, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetCustomCharacterMeshes");

	ABP_NPCManager_C_SetCustomCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.RandomizeCharacterMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AnimClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           KeepHead                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::RandomizeCharacterMeshes(class UClass* AnimClass, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool KeepHead, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.RandomizeCharacterMeshes");

	ABP_NPCManager_C_RandomizeCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPCManager.BP_NPCManager_C.SaveDataFromSystemToFile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SaveDataFromSystemToFile");

	ABP_NPCManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.LoadSaveFileIntoSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.LoadSaveFileIntoSystem");

	ABP_NPCManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.ResetItemsInNeighborhoodBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::ResetItemsInNeighborhoodBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ResetItemsInNeighborhoodBuildings");

	ABP_NPCManager_C_ResetItemsInNeighborhoodBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.AddItemsToNeighborhoodBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::AddItemsToNeighborhoodBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.AddItemsToNeighborhoodBuildings");

	ABP_NPCManager_C_AddItemsToNeighborhoodBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.StartNPCManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::StartNPCManager(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.StartNPCManager");

	ABP_NPCManager_C_StartNPCManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnRandomNPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::SpawnRandomNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnRandomNPC");

	ABP_NPCManager_C_SpawnRandomNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnNewNeighbours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::SpawnNewNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnNewNeighbours");

	ABP_NPCManager_C_SpawnNewNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnNeighbours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::SpawnNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnNeighbours");

	ABP_NPCManager_C_SpawnNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.ResetIllness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::ResetIllness(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ResetIllness");

	ABP_NPCManager_C_ResetIllness_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.Init");

	ABP_NPCManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.TeleportToHouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerIncluded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::TeleportToHouse(bool PlayerIncluded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.TeleportToHouse");

	ABP_NPCManager_C_TeleportToHouse_Params params;
	params.PlayerIncluded = PlayerIncluded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.SetNPCRelations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CustomNPC           NPC_Structure                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 NPC_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SetNPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, const struct FString& NPC_ID, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetNPCRelations");

	ABP_NPCManager_C_SetNPCRelations_Params params;
	params.NPC_Structure = NPC_Structure;
	params.NPCReference = NPCReference;
	params.NPC_ID = NPC_ID;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.CheckNPC_ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NPC_ID                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// struct FString                 New_NPC_ID                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPCManager_C::CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.CheckNPC_ID");

	ABP_NPCManager_C_CheckNPC_ID_Params params;
	params.NPC_ID = NPC_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (New_NPC_ID != nullptr)
		*New_NPC_ID = params.New_NPC_ID;

}


// Function BP_NPCManager.BP_NPCManager_C.Remove NPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPCManager_C::Remove_NPC(class ABP_BaseCharacter_C* NPC, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.Remove NPC");

	ABP_NPCManager_C_Remove_NPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPCManager.BP_NPCManager_C.SpawnNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FST_CustomNPC           NPC_Structure                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsCustomNPC                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsNewNeighbour                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Birth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::SpawnNPC(const struct FString& ID, const struct FST_CustomNPC& NPC_Structure, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SpawnNPC");

	ABP_NPCManager_C_SpawnNPC_Params params;
	params.ID = ID;
	params.NPC_Structure = NPC_Structure;
	params.IsCustomNPC = IsCustomNPC;
	params.IsNewNeighbour = IsNewNeighbour;
	params.LoadGame = LoadGame;
	params.Birth = Birth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function BP_NPCManager.BP_NPCManager_C.AddNameToAvailableNamesArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NPC_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::AddNameToAvailableNamesArray(const struct FString& NPC_ID, TEnumAsByte<E_Sex_E_Sex> Sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.AddNameToAvailableNamesArray");

	ABP_NPCManager_C_AddNameToAvailableNamesArray_Params params;
	params.NPC_ID = NPC_ID;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.InitAvailableNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::InitAvailableNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.InitAvailableNames");

	ABP_NPCManager_C_InitAvailableNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.RandomSex
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::RandomSex(TEnumAsByte<E_Sex_E_Sex>* Sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.RandomSex");

	ABP_NPCManager_C_RandomSex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sex != nullptr)
		*Sex = params.Sex;

}


// Function BP_NPCManager.BP_NPCManager_C.RandomName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     NameHandle                     (Parm, OutParm, NoDestructor)
void ABP_NPCManager_C::RandomName(TEnumAsByte<E_Sex_E_Sex> Sex, struct FDataTableRowHandle* NameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.RandomName");

	ABP_NPCManager_C_RandomName_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NameHandle != nullptr)
		*NameHandle = params.NameHandle;

}


// Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_NPCManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay");

	ABP_NPCManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.OnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::OnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.OnSeasonChanged");

	ABP_NPCManager_C_OnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.OnDaySkip
// (BlueprintCallable, BlueprintEvent)
void ABP_NPCManager_C::OnDaySkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.OnDaySkip");

	ABP_NPCManager_C_OnDaySkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.OnTimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.OnTimeOfDayChanged");

	ABP_NPCManager_C_OnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPCManager_C::ExecuteUbergraph_BP_NPCManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager");

	ABP_NPCManager_C_ExecuteUbergraph_BP_NPCManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
