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

// Function BP_EventManager.BP_EventManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.LoadSaveFileIntoSystem");

	ABP_EventManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SaveDataFromSystemToFile");

	ABP_EventManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.CheckDifficulty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_EventDifficulty_E_EventDifficulty> Difficulty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::CheckDifficulty(TEnumAsByte<E_EventDifficulty_E_EventDifficulty>* Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckDifficulty");

	ABP_EventManager_C_CheckDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Difficulty != nullptr)
		*Difficulty = params.Difficulty;

}


// Function BP_EventManager.BP_EventManager_C.GetNumberOfBuildBuildings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumberOfBuildBuildings         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::GetNumberOfBuildBuildings(int* NumberOfBuildBuildings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetNumberOfBuildBuildings");

	ABP_EventManager_C_GetNumberOfBuildBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfBuildBuildings != nullptr)
		*NumberOfBuildBuildings = params.NumberOfBuildBuildings;

}


// Function BP_EventManager.BP_EventManager_C.FireEventCheat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::FireEventCheat(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.FireEventCheat");

	ABP_EventManager_C_FireEventCheat_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionTime(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionTime");

	ABP_EventManager_C_RestrictionTime_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_SeasonEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FText                   Description                    (Parm, OutParm)
void ABP_EventManager_C::ExecuteEventEffect(int ButtonIndex, const struct FST_SeasonEvent& Event, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect");

	ABP_EventManager_C_ExecuteEventEffect_Params params;
	params.ButtonIndex = ButtonIndex;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionPlayer(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionPlayer");

	ABP_EventManager_C_RestrictionPlayer_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionSeason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionSeason(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionSeason");

	ABP_EventManager_C_RestrictionSeason_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionFields
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionFields(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionFields");

	ABP_EventManager_C_RestrictionFields_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionBuildings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionBuildings(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionBuildings");

	ABP_EventManager_C_RestrictionBuildings_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionNPC(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionNPC");

	ABP_EventManager_C_RestrictionNPC_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.RestrictionAnimals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventRestrictions   Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::RestrictionAnimals(const struct FST_EventRestrictions& Restriction, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionAnimals");

	ABP_EventManager_C_RestrictionAnimals_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.CheckEventCanFire
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SeasonEvent         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           CanHappen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::CheckEventCanFire(const struct FST_SeasonEvent& Event, bool* CanHappen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckEventCanFire");

	ABP_EventManager_C_CheckEventCanFire_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;

}


// Function BP_EventManager.BP_EventManager_C.CheckEventsAvilable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::CheckEventsAvilable(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckEventsAvilable");

	ABP_EventManager_C_CheckEventsAvilable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BP_EventManager.BP_EventManager_C.AssignEventOnSeasonChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_EventManager_C::AssignEventOnSeasonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.AssignEventOnSeasonChange");

	ABP_EventManager_C_AssignEventOnSeasonChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.StartEventSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::StartEventSystem(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.StartEventSystem");

	ABP_EventManager_C_StartEventSystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.OnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void ABP_EventManager_C::OnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnSeasonChanged");

	ABP_EventManager_C_OnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_EventManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.Init");

	ABP_EventManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EventManager_C::ExecuteUbergraph_BP_EventManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager");

	ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
