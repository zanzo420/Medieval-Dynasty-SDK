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

// Function BP_AnimalsManager.BP_AnimalsManager_C.SeasonalUpdateSpawners
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::SeasonalUpdateSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SeasonalUpdateSpawners");

	ABP_AnimalsManager_C_SeasonalUpdateSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAvailability
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::CheckAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAvailability");

	ABP_AnimalsManager_C_CheckAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::UpdateSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners");

	ABP_AnimalsManager_C_UpdateSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckSpawnersID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::CheckSpawnersID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckSpawnersID");

	ABP_AnimalsManager_C_CheckSpawnersID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateListOfSpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::UpdateListOfSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateListOfSpawners");

	ABP_AnimalsManager_C_UpdateListOfSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawnerFromSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpawnPointWildAnimal_C* Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnGroundAnimalsInSpawnerFromSave(class ABP_SpawnPointWildAnimal_C* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawnerFromSave");

	ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawnerFromSave_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.GetAnimalDataByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AnimalName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Animal              AnimalData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_AnimalsManager_C::GetAnimalDataByName(const struct FName& AnimalName, bool* Success, struct FST_Animal* AnimalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.GetAnimalDataByName");

	ABP_AnimalsManager_C_GetAnimalDataByName_Params params;
	params.AnimalName = AnimalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AnimalData != nullptr)
		*AnimalData = params.AnimalData;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveNeighborhoodRedundantAnimals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::RemoveNeighborhoodRedundantAnimals(class ABP_MasterBuilding_C* Building, const struct FName& Name, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveNeighborhoodRedundantAnimals");

	ABP_AnimalsManager_C_RemoveNeighborhoodRedundantAnimals_Params params;
	params.Building = Building;
	params.Name = Name;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuildings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::SpawnAnimalsToNeighborhoodBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuildings");

	ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_Animals_E_Animals> Species                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   YoungFemale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            YoungFemaleCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   YoungMale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            YoungMaleCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Female                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FemaleCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaleCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnAnimalsToNeighborhoodBuilding(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, TEnumAsByte<E_Animals_E_Animals> Species, const struct FName& YoungFemale, int YoungFemaleCount, const struct FName& YoungMale, int YoungMaleCount, const struct FName& Female, int FemaleCount, const struct FName& Male, int MaleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuilding");

	ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuilding_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.Species = Species;
	params.YoungFemale = YoungFemale;
	params.YoungFemaleCount = YoungFemaleCount;
	params.YoungMale = YoungMale;
	params.YoungMaleCount = YoungMaleCount;
	params.Female = Female;
	params.FemaleCount = FemaleCount;
	params.Male = Male;
	params.MaleCount = MaleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestFishesPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Flock_Fish_C*> FishesPoints                   (Parm, OutParm)
void ABP_AnimalsManager_C::FindClosestFishesPoints(const struct FVector& Location, float Radius, TArray<class ABP_Flock_Fish_C*>* FishesPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestFishesPoints");

	ABP_AnimalsManager_C_FindClosestFishesPoints_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FishesPoints != nullptr)
		*FishesPoints = params.FishesPoints;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestWildAnimalsPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SpawnPointWildAnimal_C*> WildAnimalsPoints              (Parm, OutParm)
void ABP_AnimalsManager_C::FindClosestWildAnimalsPoints(const struct FVector& Location, float Radius, TArray<class ABP_SpawnPointWildAnimal_C*>* WildAnimalsPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestWildAnimalsPoints");

	ABP_AnimalsManager_C_FindClosestWildAnimalsPoints_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WildAnimalsPoints != nullptr)
		*WildAnimalsPoints = params.WildAnimalsPoints;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnFishInSpawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Flock_Fish_C*        Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnFishInSpawner(class ABP_Flock_Fish_C* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnFishInSpawner");

	ABP_AnimalsManager_C_SpawnFishInSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawners
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::SetNumberOfFishesInSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawners");

	ABP_AnimalsManager_C_SetNumberOfFishesInSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Flock_Fish_C*        SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SetNumberOfFishesInSpawner(class ABP_Flock_Fish_C* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawner");

	ABP_AnimalsManager_C_SetNumberOfFishesInSpawner_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SaveDataFromSystemToFile");

	ABP_AnimalsManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.LoadSaveFileIntoSystem");

	ABP_AnimalsManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::TeleportToLocation(class ABP_AnimalBase_C* Animal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToLocation");

	ABP_AnimalsManager_C_TeleportToLocation_Params params;
	params.Animal = Animal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHomeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::TeleportToHomeLocation(class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHomeLocation");

	ABP_AnimalsManager_C_TeleportToHomeLocation_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::TeleportToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHome");

	ABP_AnimalsManager_C_TeleportToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpawnPointWildAnimal_C* Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnGroundAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawner");

	ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveRandomCountOfHusbandryAnimalsOnEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MinNumberOfAnimals             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxNumberOfAnimals             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::RemoveRandomCountOfHusbandryAnimalsOnEvent(int MinNumberOfAnimals, int MaxNumberOfAnimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveRandomCountOfHusbandryAnimalsOnEvent");

	ABP_AnimalsManager_C_RemoveRandomCountOfHusbandryAnimalsOnEvent_Params params;
	params.MinNumberOfAnimals = MinNumberOfAnimals;
	params.MaxNumberOfAnimals = MaxNumberOfAnimals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.RefreshWildAnimalsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::RefreshWildAnimalsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RefreshWildAnimalsArray");

	ABP_AnimalsManager_C_RefreshWildAnimalsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ABP_MasterBuilding_C*    Home2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomAge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RandomVariation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Variation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AnimalBase_C*        Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnHusbandryAnimal(const struct FName& Name, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool Home, const struct FTransform& SpawnTransform, class ABP_MasterBuilding_C* Home2, bool RandomAge, bool RandomVariation, int Variation, bool* Success, class ABP_AnimalBase_C** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimal");

	ABP_AnimalsManager_C_SpawnHusbandryAnimal_Params params;
	params.Name = Name;
	params.Ownership = Ownership;
	params.Home = Home;
	params.SpawnTransform = SpawnTransform;
	params.Home2 = Home2;
	params.RandomAge = RandomAge;
	params.RandomVariation = RandomVariation;
	params.Variation = Variation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ABP_MasterBuilding_C*    Home2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomAge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RandomVariation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Variation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SpawnHusbandryAnimals(const struct FName& Name, int Count, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool Home, const struct FTransform& SpawnTransform, class ABP_MasterBuilding_C* Home2, bool RandomAge, bool RandomVariation, int Variation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimals");

	ABP_AnimalsManager_C_SpawnHusbandryAnimals_Params params;
	params.Name = Name;
	params.Count = Count;
	params.Ownership = Ownership;
	params.Home = Home;
	params.SpawnTransform = SpawnTransform;
	params.Home2 = Home2;
	params.RandomAge = RandomAge;
	params.RandomVariation = RandomVariation;
	params.Variation = Variation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SetPlayerPawnReference
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::SetPlayerPawnReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetPlayerPawnReference");

	ABP_AnimalsManager_C_SetPlayerPawnReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawners
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::SetNumberOfAnimalsInSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawners");

	ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpawnPointWildAnimal_C* SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::SetNumberOfAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawner");

	ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawner_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalsManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.Init");

	ABP_AnimalsManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.StartAnimalsManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalsManager_C::StartAnimalsManager(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.StartAnimalsManager");

	ABP_AnimalsManager_C_StartAnimalsManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.StopCheckAnimals
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::StopCheckAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.StopCheckAnimals");

	ABP_AnimalsManager_C_StopCheckAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimals
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::CheckAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimals");

	ABP_AnimalsManager_C_CheckAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimalsManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveBeginPlay");

	ABP_AnimalsManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateOnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalsManager_C::UpdateOnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateOnSeasonChanged");

	ABP_AnimalsManager_C_UpdateOnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalsManager.BP_AnimalsManager_C.ExecuteUbergraph_BP_AnimalsManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalsManager_C::ExecuteUbergraph_BP_AnimalsManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ExecuteUbergraph_BP_AnimalsManager");

	ABP_AnimalsManager_C_ExecuteUbergraph_BP_AnimalsManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AnimalsManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(PlayerPawnReference, APawn);
}

void ABP_AnimalsManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(PlayerPawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
