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

// Function BP_EventManager.BP_EventManager_C.LoadSaveFileIntoSystem
struct ABP_EventManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventManager.BP_EventManager_C.SaveDataFromSystemToFile
struct ABP_EventManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventManager.BP_EventManager_C.CheckDifficulty
struct ABP_EventManager_C_CheckDifficulty_Params
{
	TEnumAsByte<E_EventDifficulty_E_EventDifficulty>   Difficulty;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventManager.BP_EventManager_C.GetNumberOfBuildBuildings
struct ABP_EventManager_C_GetNumberOfBuildBuildings_Params
{
	int                                                NumberOfBuildBuildings;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventManager.BP_EventManager_C.FireEventCheat
struct ABP_EventManager_C_FireEventCheat_Params
{
	struct FName                                       EventName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionTime
struct ABP_EventManager_C_RestrictionTime_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect
struct ABP_EventManager_C_ExecuteEventEffect_Params
{
	int                                                ButtonIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_SeasonEvent                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FText                                       Description;                                               // (Parm, OutParm)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionPlayer
struct ABP_EventManager_C_RestrictionPlayer_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionSeason
struct ABP_EventManager_C_RestrictionSeason_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionFields
struct ABP_EventManager_C_RestrictionFields_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionBuildings
struct ABP_EventManager_C_RestrictionBuildings_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionNPC
struct ABP_EventManager_C_RestrictionNPC_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.RestrictionAnimals
struct ABP_EventManager_C_RestrictionAnimals_Params
{
	struct FST_EventRestrictions                       Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.CheckEventCanFire
struct ABP_EventManager_C_CheckEventCanFire_Params
{
	struct FST_SeasonEvent                             Event;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               CanHappen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.CheckEventsAvilable
struct ABP_EventManager_C_CheckEventsAvilable_Params
{
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.AssignEventOnSeasonChange
struct ABP_EventManager_C_AssignEventOnSeasonChange_Params
{
};

// Function BP_EventManager.BP_EventManager_C.StartEventSystem
struct ABP_EventManager_C_StartEventSystem_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.OnSeasonChanged
struct ABP_EventManager_C_OnSeasonChanged_Params
{
};

// Function BP_EventManager.BP_EventManager_C.Init
struct ABP_EventManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
struct ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
