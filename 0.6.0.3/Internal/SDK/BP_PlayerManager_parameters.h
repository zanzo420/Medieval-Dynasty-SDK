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

// Function BP_PlayerManager.BP_PlayerManager_C.IsMove
struct ABP_PlayerManager_C_IsMove_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateVillageIntensity
struct ABP_PlayerManager_C_UpdateVillageIntensity_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateForestIntensity
struct ABP_PlayerManager_C_UpdateForestIntensity_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.FindRandomPointForMount
struct ABP_PlayerManager_C_FindRandomPointForMount_Params
{
	struct FVector                                     RandomLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.CanMoveMountToPlayer
struct ABP_PlayerManager_C_CanMoveMountToPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir
struct ABP_PlayerManager_C_CheckIsHeir_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_BaseCharacter_C*                         Heir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial
struct ABP_PlayerManager_C_TryToCreateHUDTutorial_Params
{
	TEnumAsByte<E_Tutorials_E_Tutorials>               Tutorial;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullscreenMessage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayer
struct ABP_PlayerManager_C_TeleportPlayer_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.InspectorDetection
struct ABP_PlayerManager_C_InspectorDetection_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.Switch to Heir
struct ABP_PlayerManager_C_Switch_to_Heir_Params
{
	class ABP_BaseCharacter_C*                         Heir;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystemFinishing
struct ABP_PlayerManager_C_LoadSaveFileIntoSystemFinishing_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem
struct ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile
struct ABP_PlayerManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.SwitchCharacters
struct ABP_PlayerManager_C_SwitchCharacters_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player
struct ABP_PlayerManager_C_Spawn_Player_Params
{
	class AController*                                 PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD
struct ABP_PlayerManager_C_InitPlayerHUD_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer
struct ABP_PlayerManager_C_CreatePlayer_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.Init
struct ABP_PlayerManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__FinishedFunc
struct ABP_PlayerManager_C_InspectorIntensity__FinishedFunc_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__UpdateFunc
struct ABP_PlayerManager_C_InspectorIntensity__UpdateFunc_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorMode
struct ABP_PlayerManager_C_StartInspectorMode_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorMode
struct ABP_PlayerManager_C_StopInspectorMode_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay
struct ABP_PlayerManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.SetBuildingMode
struct ABP_PlayerManager_C_SetBuildingMode_Params
{
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorTimer
struct ABP_PlayerManager_C_StartInspectorTimer_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorTimer
struct ABP_PlayerManager_C_StopInspectorTimer_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateInspector
struct ABP_PlayerManager_C_UpdateInspector_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.PlayAnimation_InspectorMode
struct ABP_PlayerManager_C_PlayAnimation_InspectorMode_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StopAnimation_InspectorMode
struct ABP_PlayerManager_C_StopAnimation_InspectorMode_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager
struct ABP_PlayerManager_C_StartPlayerManager_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged
struct ABP_PlayerManager_C_UpdateOnSeasonChanged_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.SummonMount
struct ABP_PlayerManager_C_SummonMount_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_PlayerMove
struct ABP_PlayerManager_C_StartTimer_PlayerMove_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateAmbientParameters
struct ABP_PlayerManager_C_UpdateAmbientParameters_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_PlayerStay
struct ABP_PlayerManager_C_StopTimer_PlayerStay_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_CheckIsMove
struct ABP_PlayerManager_C_StartTimer_CheckIsMove_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsMove
struct ABP_PlayerManager_C_CheckIsMove_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_CheckIsMove
struct ABP_PlayerManager_C_StopTimer_CheckIsMove_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnTimeChanged
struct ABP_PlayerManager_C_UpdateOnTimeChanged_Params
{
	int                                                IteratorNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerManager.BP_PlayerManager_C.ResetAmbientParameters
struct ABP_PlayerManager_C_ResetAmbientParameters_Params
{
};

// Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager
struct ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
