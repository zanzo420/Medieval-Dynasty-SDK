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

// Function DC_Flirt.DC_Flirt_C.Change NPCReply
struct UDC_Flirt_C_Change_NPCReply_Params
{
	struct FST_AffectionDialogue                       Dialogue;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<class UDialogueConditions*>                 Conditions;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UDialogueEvents*>                     Events;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_NPC_C*                                   NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DC_Flirt.DC_Flirt_C.ChangePlayerDialogue
struct UDC_Flirt_C_ChangePlayerDialogue_Params
{
	TArray<class UDialogueConditions*>                 Conditions;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_AffectionDialogue                       Diaogue;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function DC_Flirt.DC_Flirt_C.RareDialogues
struct UDC_Flirt_C_RareDialogues_Params
{
	TArray<struct FName>                               Dialogues;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DC_Flirt.DC_Flirt_C.Remove Unavilable Dialogues
struct UDC_Flirt_C_Remove_Unavilable_Dialogues_Params
{
	TArray<struct FName>                               DialogueHandlers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_NPC_C*                                   NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DC_Flirt.DC_Flirt_C.DrawPlayerDialogue
struct UDC_Flirt_C_DrawPlayerDialogue_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_AffectionDialogue                       D1;                                                        // (Parm, OutParm, HasGetValueTypeHash)
	struct FST_AffectionDialogue                       D2;                                                        // (Parm, OutParm, HasGetValueTypeHash)
	struct FST_AffectionDialogue                       D3;                                                        // (Parm, OutParm, HasGetValueTypeHash)
};

// Function DC_Flirt.DC_Flirt_C.IsConditionMet
struct UDC_Flirt_C_IsConditionMet_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NPCActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
