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

// Function BP_PlayerManager.BP_PlayerManager_C.IsMove
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::IsMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.IsMove");

	ABP_PlayerManager_C_IsMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateVillageIntensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::UpdateVillageIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateVillageIntensity");

	ABP_PlayerManager_C_UpdateVillageIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateForestIntensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::UpdateForestIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateForestIntensity");

	ABP_PlayerManager_C_UpdateForestIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.FindRandomPointForMount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::FindRandomPointForMount(struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.FindRandomPointForMount");

	ABP_PlayerManager_C_FindRandomPointForMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

}


// Function BP_PlayerManager.BP_PlayerManager_C.CanMoveMountToPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool ABP_PlayerManager_C::CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CanMoveMountToPlayer");

	ABP_PlayerManager_C_CanMoveMountToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;


	return params.ReturnValue;
}


// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BaseCharacter_C*     Heir                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::CheckIsHeir(bool* Success, class ABP_BaseCharacter_C** Heir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsHeir");

	ABP_PlayerManager_C_CheckIsHeir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Heir != nullptr)
		*Heir = params.Heir;

}


// Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tutorials_E_Tutorials> Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FullscreenMessage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerManager_C::TryToCreateHUDTutorial(TEnumAsByte<E_Tutorials_E_Tutorials> Tutorial, bool FullscreenMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TryToCreateHUDTutorial");

	ABP_PlayerManager_C_TryToCreateHUDTutorial_Params params;
	params.Tutorial = Tutorial;
	params.FullscreenMessage = FullscreenMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.TeleportPlayer");

	ABP_PlayerManager_C_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.InspectorDetection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::InspectorDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorDetection");

	ABP_PlayerManager_C_InspectorDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.Switch to Heir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Heir                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerManager_C::Switch_to_Heir(class ABP_BaseCharacter_C* Heir, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Switch to Heir");

	ABP_PlayerManager_C_Switch_to_Heir_Params params;
	params.Heir = Heir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystemFinishing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::LoadSaveFileIntoSystemFinishing(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystemFinishing");

	ABP_PlayerManager_C_LoadSaveFileIntoSystemFinishing_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.LoadSaveFileIntoSystem");

	ABP_PlayerManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SaveDataFromSystemToFile");

	ABP_PlayerManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.SwitchCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::SwitchCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SwitchCharacters");

	ABP_PlayerManager_C_SwitchCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::Spawn_Player(class AController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Spawn Player");

	ABP_PlayerManager_C_Spawn_Player_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::InitPlayerHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InitPlayerHUD");

	ABP_PlayerManager_C_InitPlayerHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::CreatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CreatePlayer");

	ABP_PlayerManager_C_CreatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.Init");

	ABP_PlayerManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerManager_C::InspectorIntensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__FinishedFunc");

	ABP_PlayerManager_C_InspectorIntensity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerManager_C::InspectorIntensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.InspectorIntensity__UpdateFunc");

	ABP_PlayerManager_C_InspectorIntensity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StartInspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorMode");

	ABP_PlayerManager_C_StartInspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StopInspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorMode");

	ABP_PlayerManager_C_StopInspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PlayerManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay");

	ABP_PlayerManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.SetBuildingMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::SetBuildingMode(TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SetBuildingMode");

	ABP_PlayerManager_C_SetBuildingMode_Params params;
	params.BuildingMode = BuildingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StartInspectorTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartInspectorTimer");

	ABP_PlayerManager_C_StartInspectorTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StopInspectorTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopInspectorTimer");

	ABP_PlayerManager_C_StopInspectorTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateInspector
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::UpdateInspector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateInspector");

	ABP_PlayerManager_C_UpdateInspector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.PlayAnimation_InspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::PlayAnimation_InspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.PlayAnimation_InspectorMode");

	ABP_PlayerManager_C_PlayAnimation_InspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StopAnimation_InspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StopAnimation_InspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopAnimation_InspectorMode");

	ABP_PlayerManager_C_StopAnimation_InspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerManager_C::StartPlayerManager(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartPlayerManager");

	ABP_PlayerManager_C_StartPlayerManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::UpdateOnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnSeasonChanged");

	ABP_PlayerManager_C_UpdateOnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.SummonMount
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::SummonMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.SummonMount");

	ABP_PlayerManager_C_SummonMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_PlayerMove
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StartTimer_PlayerMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_PlayerMove");

	ABP_PlayerManager_C_StartTimer_PlayerMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateAmbientParameters
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::UpdateAmbientParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateAmbientParameters");

	ABP_PlayerManager_C_UpdateAmbientParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_PlayerStay
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StopTimer_PlayerStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_PlayerStay");

	ABP_PlayerManager_C_StopTimer_PlayerStay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_CheckIsMove
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StartTimer_CheckIsMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StartTimer_CheckIsMove");

	ABP_PlayerManager_C_StartTimer_CheckIsMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.CheckIsMove
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::CheckIsMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.CheckIsMove");

	ABP_PlayerManager_C_CheckIsMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_CheckIsMove
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::StopTimer_CheckIsMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.StopTimer_CheckIsMove");

	ABP_PlayerManager_C_StopTimer_CheckIsMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnTimeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IteratorNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::UpdateOnTimeChanged(int IteratorNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.UpdateOnTimeChanged");

	ABP_PlayerManager_C_UpdateOnTimeChanged_Params params;
	params.IteratorNumber = IteratorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.ResetAmbientParameters
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerManager_C::ResetAmbientParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ResetAmbientParameters");

	ABP_PlayerManager_C_ResetAmbientParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerManager_C::ExecuteUbergraph_BP_PlayerManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager");

	ABP_PlayerManager_C_ExecuteUbergraph_BP_PlayerManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
