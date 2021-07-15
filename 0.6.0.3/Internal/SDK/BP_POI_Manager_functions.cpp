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

// Function BP_POI_Manager.BP_POI_Manager_C.CheckPOI_ID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::CheckPOI_ID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.CheckPOI_ID");

	ABP_POI_Manager_C_CheckPOI_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.POI_CheckAvailability
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::POI_CheckAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_CheckAvailability");

	ABP_POI_Manager_C_POI_CheckAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.POI_DisablePreviewAll
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::POI_DisablePreviewAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_DisablePreviewAll");

	ABP_POI_Manager_C_POI_DisablePreviewAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.POI_EnablePreviewAll
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::POI_EnablePreviewAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_EnablePreviewAll");

	ABP_POI_Manager_C_POI_EnablePreviewAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.UpdatePOI_Array
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::UpdatePOI_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.UpdatePOI_Array");

	ABP_POI_Manager_C_UpdatePOI_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.DespawnAll
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::DespawnAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.DespawnAll");

	ABP_POI_Manager_C_DespawnAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.Despawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_POI_Spawner_C*       Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Despawned                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_POI_Manager_C::Despawn(class ABP_POI_Spawner_C* Spawner, bool* Despawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.Despawn");

	ABP_POI_Manager_C_Despawn_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Despawned != nullptr)
		*Despawned = params.Despawned;

}


// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategory
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<E_POI_Type_E_POI_Type>> SpawnerCategory                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABP_POI_Spawner_C*> L_Spawners                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, int> DrawMap                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            RestrictionNumber              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::SpawnCategory(TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>* SpawnerCategory, TArray<class ABP_POI_Spawner_C*>* L_Spawners, TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, int> DrawMap, int RestrictionNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategory");

	ABP_POI_Manager_C_SpawnCategory_Params params;
	params.DrawMap = DrawMap;
	params.RestrictionNumber = RestrictionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnerCategory != nullptr)
		*SpawnerCategory = params.SpawnerCategory;
	if (L_Spawners != nullptr)
		*L_Spawners = params.L_Spawners;

}


// Function BP_POI_Manager.BP_POI_Manager_C.InitCategory
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_POI_Spawner_C*> Spawners                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<TEnumAsByte<E_POI_Type_E_POI_Type>> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            TypeIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::InitCategory(TArray<class ABP_POI_Spawner_C*>* Spawners, TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>* Type, int TypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.InitCategory");

	ABP_POI_Manager_C_InitCategory_Params params;
	params.TypeIndex = TypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function BP_POI_Manager.BP_POI_Manager_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_POI_Manager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.Init");

	ABP_POI_Manager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.CheckRestrictions
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_DrawingSpawners> Restrictions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_POI_Type_E_POI_Type> SpawnerType                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_POI_Type_E_POI_Type> Type                           (ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfSpawners               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::CheckRestrictions(TArray<struct FST_DrawingSpawners>* Restrictions, TEnumAsByte<E_POI_Type_E_POI_Type> SpawnerType, TEnumAsByte<E_POI_Type_E_POI_Type> Type, int* NumberOfSpawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.CheckRestrictions");

	ABP_POI_Manager_C_CheckRestrictions_Params params;
	params.SpawnerType = SpawnerType;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Restrictions != nullptr)
		*Restrictions = params.Restrictions;
	if (NumberOfSpawners != nullptr)
		*NumberOfSpawners = params.NumberOfSpawners;

}


// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategoryRestricted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::SpawnCategoryRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategoryRestricted");

	ABP_POI_Manager_C_SpawnCategoryRestricted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.SpawnRandom
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::SpawnRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnRandom");

	ABP_POI_Manager_C_SpawnRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::LoadSpawners(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawners");

	ABP_POI_Manager_C_LoadSpawners_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.SaveSpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::SaveSpawners(class USAVE_Game_C* SaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SaveSpawners");

	ABP_POI_Manager_C_SaveSpawners_Params params;
	params.SaveGame = SaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.SpawnAllActiveSpawners
// (BlueprintCallable, BlueprintEvent)
void ABP_POI_Manager_C::SpawnAllActiveSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnAllActiveSpawners");

	ABP_POI_Manager_C_SpawnAllActiveSpawners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.StartPOISystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_POI_Manager_C::StartPOISystem(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.StartPOISystem");

	ABP_POI_Manager_C_StartPOISystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Manager.BP_POI_Manager_C.ExecuteUbergraph_BP_POI_Manager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Manager_C::ExecuteUbergraph_BP_POI_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.ExecuteUbergraph_BP_POI_Manager");

	ABP_POI_Manager_C_ExecuteUbergraph_BP_POI_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
