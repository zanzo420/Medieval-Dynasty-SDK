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

// Function BP_MarkerManager.BP_MarkerManager_C.SaveDataFromSystemToFile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            Save_Reference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MarkerManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* Save_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerManager.BP_MarkerManager_C.SaveDataFromSystemToFile");

	ABP_MarkerManager_C_SaveDataFromSystemToFile_Params params;
	params.Save_Reference = Save_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerManager.BP_MarkerManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MarkerManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerManager.BP_MarkerManager_C.LoadSaveFileIntoSystem");

	ABP_MarkerManager_C_LoadSaveFileIntoSystem_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerManager.BP_MarkerManager_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MarkerManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerManager.BP_MarkerManager_C.Init");

	ABP_MarkerManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
