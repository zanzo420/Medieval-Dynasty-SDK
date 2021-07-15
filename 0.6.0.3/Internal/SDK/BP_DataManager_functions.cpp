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

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_StaticMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_StaticMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_StaticMesh");

	ABP_DataManager_C_FindDuplicates_StaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Item");

	ABP_DataManager_C_FindDuplicates_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Furniture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_Furniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Furniture");

	ABP_DataManager_C_FindDuplicates_Furniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Field
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_Field()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Field");

	ABP_DataManager_C_FindDuplicates_Field_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Building
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_Building()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Building");

	ABP_DataManager_C_FindDuplicates_Building_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindDuplicates_SplineStructure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FindDuplicates_SplineStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_SplineStructure");

	ABP_DataManager_C_FindDuplicates_SplineStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.GetRandomOwnerlessNPCsCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_Ownership_E_Ownership>, int> OwnershipCount                 (Parm, OutParm)
void ABP_DataManager_C::GetRandomOwnerlessNPCsCount(TMap<TEnumAsByte<E_Ownership_E_Ownership>, int>* OwnershipCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetRandomOwnerlessNPCsCount");

	ABP_DataManager_C_GetRandomOwnerlessNPCsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnershipCount != nullptr)
		*OwnershipCount = params.OwnershipCount;

}


// Function BP_DataManager.BP_DataManager_C.UpdateRestrictionAreas
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::UpdateRestrictionAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateRestrictionAreas");

	ABP_DataManager_C_UpdateRestrictionAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.CheckItemsID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::CheckItemsID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckItemsID");

	ABP_DataManager_C_CheckItemsID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.VendorCategorySettings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FName                   VendorCategoryName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsVendor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes> OutsideNPCType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     NPC_RowName                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle     NPC_DT_Handler                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           CorrectVendor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle     VendorCategory                 (Parm, OutParm, NoDestructor)
// bool                           ResetEQ                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> CorrectProfession              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::VendorCategorySettings(const struct FString& ID, const struct FName& VendorCategoryName, bool IsVendor, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes> OutsideNPCType, const struct FDataTableRowHandle& NPC_RowName, const struct FDataTableRowHandle& NPC_DT_Handler, bool* CorrectVendor, struct FDataTableRowHandle* VendorCategory, bool* ResetEQ, TEnumAsByte<E_Profession_E_Profession>* CorrectProfession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.VendorCategorySettings");

	ABP_DataManager_C_VendorCategorySettings_Params params;
	params.ID = ID;
	params.VendorCategoryName = VendorCategoryName;
	params.IsVendor = IsVendor;
	params.Profession = Profession;
	params.Ownership = Ownership;
	params.OutsideNPCType = OutsideNPCType;
	params.NPC_RowName = NPC_RowName;
	params.NPC_DT_Handler = NPC_DT_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CorrectVendor != nullptr)
		*CorrectVendor = params.CorrectVendor;
	if (VendorCategory != nullptr)
		*VendorCategory = params.VendorCategory;
	if (ResetEQ != nullptr)
		*ResetEQ = params.ResetEQ;
	if (CorrectProfession != nullptr)
		*CorrectProfession = params.CorrectProfession;

}


// Function BP_DataManager.BP_DataManager_C.RefreshRoads
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CheckDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreLocationType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DataManager_C::RefreshRoads(const struct FVector& Location, float CheckDistance, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreLocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RefreshRoads");

	ABP_DataManager_C_RefreshRoads_Params params;
	params.Location = Location;
	params.CheckDistance = CheckDistance;
	params.Ownership = Ownership;
	params.IgnoreLocationType = IgnoreLocationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveRoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterRoadSpline_C*  Road                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveRoad(class ABP_MasterRoadSpline_C* Road)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveRoad");

	ABP_DataManager_C_RemoveRoad_Params params;
	params.Road = Road;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddRoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterRoadSpline_C*  Road                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddRoad(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterRoadSpline_C* Road)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddRoad");

	ABP_DataManager_C_AddRoad_Params params;
	params.Ownership = Ownership;
	params.Road = Road;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SaveDataFromSystemToFile");

	ABP_DataManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Others
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Others(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Others");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Others_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Animals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Animals(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Animals");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Animals_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_NPC(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPC");

	ABP_DataManager_C_LoadSaveFileIntoSystem_NPC_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Furniture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Furniture(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Furniture");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Furniture_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Roads
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Roads(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Roads");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Roads_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_SplineStructure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_SplineStructure(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_SplineStructure");

	ABP_DataManager_C_LoadSaveFileIntoSystem_SplineStructure_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Fields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Fields(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Fields");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Fields_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPCBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_NPCBuildings(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPCBuildings");

	ABP_DataManager_C_LoadSaveFileIntoSystem_NPCBuildings_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.CheckHeirsAreMale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::CheckHeirsAreMale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckHeirsAreMale");

	ABP_DataManager_C_CheckHeirsAreMale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FixPlayerFamily
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::FixPlayerFamily()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FixPlayerFamily");

	ABP_DataManager_C_FixPlayerFamily_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.CheckPlayerFamiliesHouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::CheckPlayerFamiliesHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckPlayerFamiliesHouse");

	ABP_DataManager_C_CheckPlayerFamiliesHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.ChangeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::ChangeItem(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ChangeItem");

	ABP_DataManager_C_ChangeItem_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.GetRandomFurniture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CheckOccupy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterFurniture_C*   FurnitureToIgnore              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterFurniture_C*   Furniture                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::GetRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool CheckOccupy, const struct FVector& StartLocation, float Range, class ABP_MasterFurniture_C* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetRandomFurniture");

	ABP_DataManager_C_GetRandomFurniture_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;
	params.CheckOccupy = CheckOccupy;
	params.StartLocation = StartLocation;
	params.Range = Range;
	params.FurnitureToIgnore = FurnitureToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;

}


// Function BP_DataManager.BP_DataManager_C.GetFurnitureByDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyNonPlayerVillages          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckOccupy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterFurniture_C*   FurnitureToIgnore              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterFurniture_C*   Furniture                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::GetFurnitureByDistance(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool OnlyNonPlayerVillages, const struct FVector& StartLocation, bool CheckOccupy, class ABP_MasterFurniture_C* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFurnitureByDistance");

	ABP_DataManager_C_GetFurnitureByDistance_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;
	params.OnlyNonPlayerVillages = OnlyNonPlayerVillages;
	params.StartLocation = StartLocation;
	params.CheckOccupy = CheckOccupy;
	params.FurnitureToIgnore = FurnitureToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;

}


// Function BP_DataManager.BP_DataManager_C.FindBuildingWithAvailableSpace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FullyEmpty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NoFamilyInside                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterBuilding_C*    Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::FindBuildingWithAvailableSpace(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus, bool FullyEmpty, bool NoFamilyInside, TEnumAsByte<E_Sex_E_Sex> Sex, bool* IsAvailable, class ABP_MasterBuilding_C** Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindBuildingWithAvailableSpace");

	ABP_DataManager_C_FindBuildingWithAvailableSpace_Params params;
	params.Ownership = Ownership;
	params.BuildingCategory = BuildingCategory;
	params.BuildingStatus = BuildingStatus;
	params.FullyEmpty = FullyEmpty;
	params.NoFamilyInside = NoFamilyInside;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (Building != nullptr)
		*Building = params.Building;

}


// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Buildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::LoadSaveFileIntoSystem_Buildings(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Buildings");

	ABP_DataManager_C_LoadSaveFileIntoSystem_Buildings_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.UpdateSeasonalItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::UpdateSeasonalItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateSeasonalItems");

	ABP_DataManager_C_UpdateSeasonalItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.CheckForAnimal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DataManager_C::CheckForAnimal(class ABP_AnimalBase_C* Animal, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckForAnimal");

	ABP_DataManager_C_CheckForAnimal_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_DataManager.BP_DataManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DataManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.Init");

	ABP_DataManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.GetSplineStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_MasterSplineStructure_C*> SplineStructures               (Parm, OutParm)
void ABP_DataManager_C::GetSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterSplineStructure_C*>* SplineStructures)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetSplineStructure");

	ABP_DataManager_C_GetSplineStructure_Params params;
	params.Ownership = Ownership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SplineStructures != nullptr)
		*SplineStructures = params.SplineStructures;

}


// Function BP_DataManager.BP_DataManager_C.SwapSplineStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterSplineStructure_C* SplineStructure                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterSplineStructure_C* SplineStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapSplineStructure");

	ABP_DataManager_C_SwapSplineStructure_Params params;
	params.to = to;
	params.SplineStructure = SplineStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveSplineStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterSplineStructure_C* SplineStructure                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveSplineStructure(class ABP_MasterSplineStructure_C* SplineStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveSplineStructure");

	ABP_DataManager_C_RemoveSplineStructure_Params params;
	params.SplineStructure = SplineStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddSplineStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterSplineStructure_C* SplineStructure                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterSplineStructure_C* SplineStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddSplineStructure");

	ABP_DataManager_C_AddSplineStructure_Params params;
	params.Ownership = Ownership;
	params.SplineStructure = SplineStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.GetAnimals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Animals_E_Animals> AnimalCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_AnimalBase_C*> Animals                        (Parm, OutParm)
void ABP_DataManager_C::GetAnimals(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreCategory, TEnumAsByte<E_Animals_E_Animals> AnimalCategory, bool* Success, TArray<class ABP_AnimalBase_C*>* Animals)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetAnimals");

	ABP_DataManager_C_GetAnimals_Params params;
	params.Ownership = Ownership;
	params.IgnoreCategory = IgnoreCategory;
	params.AnimalCategory = AnimalCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Animals != nullptr)
		*Animals = params.Animals;

}


// Function BP_DataManager.BP_DataManager_C.SwapAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapAnimal(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapAnimal");

	ABP_DataManager_C_SwapAnimal_Params params;
	params.to = to;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveAnimal(class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveAnimal");

	ABP_DataManager_C_RemoveAnimal_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddAnimal(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddAnimal");

	ABP_DataManager_C_AddAnimal_Params params;
	params.Ownership = Ownership;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.GetNPCByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_NPC_C*               NPCs                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::GetNPCByID(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, bool IgnoreOwnership, bool* Success, class ABP_NPC_C** NPCs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCByID");

	ABP_DataManager_C_GetNPCByID_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.IgnoreOwnership = IgnoreOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (NPCs != nullptr)
		*NPCs = params.NPCs;

}


// Function BP_DataManager.BP_DataManager_C.GetBuildingByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterBuilding_C*    Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::GetBuildingByID(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, bool IgnoreOwnership, bool* Success, class ABP_MasterBuilding_C** Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetBuildingByID");

	ABP_DataManager_C_GetBuildingByID_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.IgnoreOwnership = IgnoreOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Building != nullptr)
		*Building = params.Building;

}


// Function BP_DataManager.BP_DataManager_C.GetNPCs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_NPC_C*>       NPCs                           (Parm, OutParm)
void ABP_DataManager_C::GetNPCs(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool* Success, TArray<class ABP_NPC_C*>* NPCs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCs");

	ABP_DataManager_C_GetNPCs_Params params;
	params.Ownership = Ownership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (NPCs != nullptr)
		*NPCs = params.NPCs;

}


// Function BP_DataManager.BP_DataManager_C.SwapNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_C*               NPC                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapNPC(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapNPC");

	ABP_DataManager_C_SwapNPC_Params params;
	params.to = to;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveNPC(class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveNPC");

	ABP_DataManager_C_RemoveNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddNPC(class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddNPC");

	ABP_DataManager_C_AddNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.FindField
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnlyCheck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CheckDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreLocationType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterField_C*       Field                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Chunks              Chunk                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_DataManager_C::FindField(const struct FVector& Location, bool OnlyCheck, float CheckDistance, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreLocationType, bool* Success, class ABP_MasterField_C** Field, struct FST_Chunks* Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindField");

	ABP_DataManager_C_FindField_Params params;
	params.Location = Location;
	params.OnlyCheck = OnlyCheck;
	params.CheckDistance = CheckDistance;
	params.Ownership = Ownership;
	params.IgnoreLocationType = IgnoreLocationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Field != nullptr)
		*Field = params.Field;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;

}


// Function BP_DataManager.BP_DataManager_C.GetFields
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_MasterField_C*> Fields                         (Parm, OutParm)
void ABP_DataManager_C::GetFields(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldCategory, bool* Success, TArray<class ABP_MasterField_C*>* Fields)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFields");

	ABP_DataManager_C_GetFields_Params params;
	params.Ownership = Ownership;
	params.FieldCategory = FieldCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Fields != nullptr)
		*Fields = params.Fields;

}


// Function BP_DataManager.BP_DataManager_C.GetFurniture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_MasterFurniture_C*> Furniture                      (Parm, OutParm)
void ABP_DataManager_C::GetFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFurniture");

	ABP_DataManager_C_GetFurniture_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;

}


// Function BP_DataManager.BP_DataManager_C.GetBuildings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_MasterBuilding_C*> ListOfBuildings                (Parm, OutParm)
void ABP_DataManager_C::GetBuildings(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetBuildings");

	ABP_DataManager_C_GetBuildings_Params params;
	params.Ownership = Ownership;
	params.BuildingCategory = BuildingCategory;
	params.BuildingStatus = BuildingStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ListOfBuildings != nullptr)
		*ListOfBuildings = params.ListOfBuildings;

}


// Function BP_DataManager.BP_DataManager_C.SwapFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterFurniture_C*   Furniture                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapFurniture(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapFurniture");

	ABP_DataManager_C_SwapFurniture_Params params;
	params.to = to;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveFurniture");

	ABP_DataManager_C_RemoveFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterFurniture_C*   Furniture                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddFurniture");

	ABP_DataManager_C_AddFurniture_Params params;
	params.Ownership = Ownership;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.SortDependentFields
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                  Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_DataManager_C::SortDependentFields(class ABP_MasterBuilding_C* Building, TArray<float>* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SortDependentFields");

	ABP_DataManager_C_SortDependentFields_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_DataManager.BP_DataManager_C.UpdateBuildingsRelations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::UpdateBuildingsRelations(TEnumAsByte<E_Ownership_E_Ownership> Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateBuildingsRelations");

	ABP_DataManager_C_UpdateBuildingsRelations_Params params;
	params.Ownership = Ownership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.DamageFields
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfFieldsToDamage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterField_C*> DamagedFields                  (Parm, OutParm)
void ABP_DataManager_C::DamageFields(TEnumAsByte<E_Ownership_E_Ownership> Ownership, int NumberOfFieldsToDamage, float Intensity, TArray<class ABP_MasterField_C*>* DamagedFields)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.DamageFields");

	ABP_DataManager_C_DamageFields_Params params;
	params.Ownership = Ownership;
	params.NumberOfFieldsToDamage = NumberOfFieldsToDamage;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamagedFields != nullptr)
		*DamagedFields = params.DamagedFields;

}


// Function BP_DataManager.BP_DataManager_C.SeasonalUpdateFields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::SeasonalUpdateFields()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SeasonalUpdateFields");

	ABP_DataManager_C_SeasonalUpdateFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.SwapField
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterField_C*       NPC                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapField(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterField_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapField");

	ABP_DataManager_C_SwapField_Params params;
	params.to = to;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveField
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterField_C*       Field                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveField(class ABP_MasterField_C* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveField");

	ABP_DataManager_C_RemoveField_Params params;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddField
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterField_C*       Field                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddField(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterField_C* Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddField");

	ABP_DataManager_C_AddField_Params params;
	params.Ownership = Ownership;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.DamageBuildings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfBuildings              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DestructionIntensity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterBuilding_C*> Buildings                      (Parm, OutParm)
void ABP_DataManager_C::DamageBuildings(TEnumAsByte<E_Ownership_E_Ownership> Ownership, int NumberOfBuildings, float DestructionIntensity, TArray<class ABP_MasterBuilding_C*>* Buildings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.DamageBuildings");

	ABP_DataManager_C_DamageBuildings_Params params;
	params.Ownership = Ownership;
	params.NumberOfBuildings = NumberOfBuildings;
	params.DestructionIntensity = DestructionIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buildings != nullptr)
		*Buildings = params.Buildings;

}


// Function BP_DataManager.BP_DataManager_C.SwapBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuilding_C*    Building                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::SwapBuilding(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterBuilding_C* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapBuilding");

	ABP_DataManager_C_SwapBuilding_Params params;
	params.to = to;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.RemoveBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    Building                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::RemoveBuilding(class ABP_MasterBuilding_C* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveBuilding");

	ABP_DataManager_C_RemoveBuilding_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.AddBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuilding_C*    Building                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::AddBuilding(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterBuilding_C* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddBuilding");

	ABP_DataManager_C_AddBuilding_Params params;
	params.Ownership = Ownership;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.ClearHomeOccupied
// (BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::ClearHomeOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ClearHomeOccupied");

	ABP_DataManager_C_ClearHomeOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DataManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ReceiveBeginPlay");

	ABP_DataManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.ExecuteUbergraph_BP_DataManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DataManager_C::ExecuteUbergraph_BP_DataManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ExecuteUbergraph_BP_DataManager");

	ABP_DataManager_C_ExecuteUbergraph_BP_DataManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.OnPlayerAnimalsChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::OnPlayerAnimalsChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerAnimalsChange__DelegateSignature");

	ABP_DataManager_C_OnPlayerAnimalsChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.OnPlayerBuildingsChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::OnPlayerBuildingsChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerBuildingsChange__DelegateSignature");

	ABP_DataManager_C_OnPlayerBuildingsChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DataManager.BP_DataManager_C.OnPlayerPopulationChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_DataManager_C::OnPlayerPopulationChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerPopulationChange__DelegateSignature");

	ABP_DataManager_C_OnPlayerPopulationChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
