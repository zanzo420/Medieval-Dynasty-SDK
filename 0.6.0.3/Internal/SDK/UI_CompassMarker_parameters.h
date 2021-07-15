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

// Function UI_CompassMarker.UI_CompassMarker_C.Construct
struct UUI_CompassMarker_C_Construct_Params
{
};

// Function UI_CompassMarker.UI_CompassMarker_C.CalculateDistance
struct UUI_CompassMarker_C_CalculateDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CompassMarker.UI_CompassMarker_C.UpdateIcon
struct UUI_CompassMarker_C_UpdateIcon_Params
{
	bool                                               isQuestMarker;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsWife;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CompassMarker.UI_CompassMarker_C.ExecuteUbergraph_UI_CompassMarker
struct UUI_CompassMarker_C_ExecuteUbergraph_UI_CompassMarker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
