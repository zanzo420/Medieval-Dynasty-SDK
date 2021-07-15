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

// Function BP_SystemsManager.BP_SystemsManager_C.StopSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SystemsManager_C::StopSystems(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.StopSystems");

	ABP_SystemsManager_C_StopSystems_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SystemsManager.BP_SystemsManager_C.SaveSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SystemsManager_C::SaveSystems(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.SaveSystems");

	ABP_SystemsManager_C_SaveSystems_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SystemsManager.BP_SystemsManager_C.StartSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SystemsManager_C::StartSystems(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.StartSystems");

	ABP_SystemsManager_C_StartSystems_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SystemsManager.BP_SystemsManager_C.InitSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SystemsManager_C::InitSystems(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.InitSystems");

	ABP_SystemsManager_C_InitSystems_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SystemsManager.BP_SystemsManager_C.PreInitSystems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SystemsManager_C::PreInitSystems(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.PreInitSystems");

	ABP_SystemsManager_C_PreInitSystems_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SystemsManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(DayNightSystemReference, ABP_DayNightSystem_C);
	READ_PTR_FULL(DataManagerReference, ABP_DataManager_C);
	READ_PTR_FULL(AnimalsManagerReference, ABP_AnimalsManager_C);
	READ_PTR_FULL(LandscapeResourcesManagerReference, ABP_LandscapeResourcesManager_C);
	READ_PTR_FULL(PlayerManagerReference, ABP_PlayerManager_C);
	READ_PTR_FULL(QuestManagerReference, ABP_QuestManager_C);
	READ_PTR_FULL(PostProcessManagerReference, ABP_Chameleon_C);
	READ_PTR_FULL(MarkerManagerReference, ABP_MarkerManager_C);
	READ_PTR_FULL(TimeManagerReference, ABP_TimeManager_C);
	READ_PTR_FULL(KingdomManagerReference, ABP_KingdomManager_C);
	READ_PTR_FULL(VillageManagerReference, ABP_VillageManager_C);
	READ_PTR_FULL(NPCManagerReference, ABP_NPCManager_C);
	READ_PTR_FULL(AudioManagerReference, ABP_Audio_Manager_C);
	READ_PTR_FULL(EventManagerReference, ABP_EventManager_C);
	READ_PTR_FULL(GameModeReference, AGM_MedievalDynasty_C);
	READ_PTR_FULL(POI_ManagerReference, ABP_POI_Manager_C);
}

void ABP_SystemsManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(DayNightSystemReference);
	DELE_PTR_FULL(DataManagerReference);
	DELE_PTR_FULL(AnimalsManagerReference);
	DELE_PTR_FULL(LandscapeResourcesManagerReference);
	DELE_PTR_FULL(PlayerManagerReference);
	DELE_PTR_FULL(QuestManagerReference);
	DELE_PTR_FULL(PostProcessManagerReference);
	DELE_PTR_FULL(MarkerManagerReference);
	DELE_PTR_FULL(TimeManagerReference);
	DELE_PTR_FULL(KingdomManagerReference);
	DELE_PTR_FULL(VillageManagerReference);
	DELE_PTR_FULL(NPCManagerReference);
	DELE_PTR_FULL(AudioManagerReference);
	DELE_PTR_FULL(EventManagerReference);
	DELE_PTR_FULL(GameModeReference);
	DELE_PTR_FULL(POI_ManagerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
