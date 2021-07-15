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

// Function UI_Interaction.UI_Interaction_C.ChangeCrosshairStateInteraction
struct UUI_Interaction_C_ChangeCrosshairStateInteraction_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Interaction.UI_Interaction_C.UpdateHUDInteraction
struct UUI_Interaction_C_UpdateHUDInteraction_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Interaction.UI_Interaction_C.Construct
struct UUI_Interaction_C_Construct_Params
{
};

// Function UI_Interaction.UI_Interaction_C.Start Interact UI Timer
struct UUI_Interaction_C_Start_Interact_UI_Timer_Params
{
	float                                              Interact_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Interaction.UI_Interaction_C.End Interact UI Timer
struct UUI_Interaction_C_End_Interact_UI_Timer_Params
{
};

// Function UI_Interaction.UI_Interaction_C.UpdateInteractionFill
struct UUI_Interaction_C_UpdateInteractionFill_Params
{
};

// Function UI_Interaction.UI_Interaction_C.ChangeSteeringType_Event_1
struct UUI_Interaction_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Interaction.UI_Interaction_C.OpenGate
struct UUI_Interaction_C_OpenGate_Params
{
};

// Function UI_Interaction.UI_Interaction_C.CustomEvent_1
struct UUI_Interaction_C_CustomEvent_1_Params
{
};

// Function UI_Interaction.UI_Interaction_C.ExecuteUbergraph_UI_Interaction
struct UUI_Interaction_C_ExecuteUbergraph_UI_Interaction_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
