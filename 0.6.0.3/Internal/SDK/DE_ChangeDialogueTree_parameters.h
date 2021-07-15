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

// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.EndDialogue
struct UDE_ChangeDialogueTree_C_EndDialogue_Params
{
	class ABP_BaseCharacter_C*                         NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APC_Player_C*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ReturningDialogue
struct UDE_ChangeDialogueTree_C_ReturningDialogue_Params
{
	class UDialogue*                                   Dialogue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.RecieveEventTriggered
struct UDE_ChangeDialogueTree_C_RecieveEventTriggered_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NPCActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ExecuteUbergraph_DE_ChangeDialogueTree
struct UDE_ChangeDialogueTree_C_ExecuteUbergraph_DE_ChangeDialogueTree_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
