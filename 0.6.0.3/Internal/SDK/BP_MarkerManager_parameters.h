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

// Function BP_MarkerManager.BP_MarkerManager_C.SaveDataFromSystemToFile
struct ABP_MarkerManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                Save_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerManager.BP_MarkerManager_C.LoadSaveFileIntoSystem
struct ABP_MarkerManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                Save;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerManager.BP_MarkerManager_C.Init
struct ABP_MarkerManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
