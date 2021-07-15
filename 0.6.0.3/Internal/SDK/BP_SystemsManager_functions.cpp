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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
