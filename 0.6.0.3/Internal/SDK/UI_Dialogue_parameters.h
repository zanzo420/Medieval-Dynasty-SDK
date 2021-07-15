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

// Function UI_Dialogue.UI_Dialogue_C.IsAnythingHovered
struct UUI_Dialogue_C_IsAnythingHovered_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_King_Age
struct UUI_Dialogue_C_Get_King_Age_Params
{
	struct FString                                     KingAge;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_Approval_Required
struct UUI_Dialogue_C_Get_Approval_Required_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_King_Name
struct UUI_Dialogue_C_Get_King_Name_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_FEMALE
struct UUI_Dialogue_C_Get_GENDER_FEMALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_MALE
struct UUI_Dialogue_C_Get_GENDER_MALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_FEMALE
struct UUI_Dialogue_C_Get_FEMALE_TO_FEMALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_MALE
struct UUI_Dialogue_C_Get_FEMALE_TO_MALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_FEMALE
struct UUI_Dialogue_C_Get_MALE_TO_FEMALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_MALE
struct UUI_Dialogue_C_Get_MALE_TO_MALE_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_debtAmount
struct UUI_Dialogue_C_Get_debtAmount_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_Reputation_To_Join
struct UUI_Dialogue_C_Get_Reputation_To_Join_Params
{
	struct FString                                     Reputation_To_Join;                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_Proposal_Chance
struct UUI_Dialogue_C_Get_Proposal_Chance_Params
{
	struct FString                                     Proposal_Chance;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.OnKeyUp
struct UUI_Dialogue_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_CHARACTER_NAME
struct UUI_Dialogue_C_Get_CHARACTER_NAME_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.Get_taxAmount
struct UUI_Dialogue_C_Get_taxAmount_Params
{
	struct FString                                     taxAmount;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.ReplaceVarStrings
struct UUI_Dialogue_C_ReplaceVarStrings_Params
{
	struct FText                                       InText;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Dialogue.UI_Dialogue_C.OnKeyDown
struct UUI_Dialogue_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Dialogue.UI_Dialogue_C.ToNpcReply
struct UUI_Dialogue_C_ToNpcReply_Params
{
	struct FDialogueNode                               PlayerReply;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                               FireEvents;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Dialogue.UI_Dialogue_C.DoEvents
struct UUI_Dialogue_C_DoEvents_Params
{
	struct FDialogueNode                               Node;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function UI_Dialogue.UI_Dialogue_C.CheckConditions
struct UUI_Dialogue_C_CheckConditions_Params
{
	struct FDialogueNode                               Node;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Dialogue.UI_Dialogue_C.GetContinueColorAndOpacity
struct UUI_Dialogue_C_GetContinueColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_Dialogue.UI_Dialogue_C.Construct
struct UUI_Dialogue_C_Construct_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.DisplayNpcNode
struct UUI_Dialogue_C_DisplayNpcNode_Params
{
	struct FDialogueNode                               NpcNode;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function UI_Dialogue.UI_Dialogue_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
struct UUI_Dialogue_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.DisplayReplies
struct UUI_Dialogue_C_DisplayReplies_Params
{
	TArray<struct FDialogueNode>                       Replies;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function UI_Dialogue.UI_Dialogue_C.GamepadReply
struct UUI_Dialogue_C_GamepadReply_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Click;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Dialogue.UI_Dialogue_C.SimulateNextClicked
struct UUI_Dialogue_C_SimulateNextClicked_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.SimulateNextHovered
struct UUI_Dialogue_C_SimulateNextHovered_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.Destruct
struct UUI_Dialogue_C_Destruct_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.PlayPlayerReply
struct UUI_Dialogue_C_PlayPlayerReply_Params
{
	struct FDialogueNode                               PlayerNode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function UI_Dialogue.UI_Dialogue_C.GoToNpcReplyTimer
struct UUI_Dialogue_C_GoToNpcReplyTimer_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.HighlightSelectedReply
struct UUI_Dialogue_C_HighlightSelectedReply_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.MouseSelectReply
struct UUI_Dialogue_C_MouseSelectReply_Params
{
	class UUI_Reply_C*                                 WidgetThatWantsSelection;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.PlayDialogueSound
struct UUI_Dialogue_C_PlayDialogueSound_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.StopDialogueSound
struct UUI_Dialogue_C_StopDialogueSound_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.UpdateNPCParameters
struct UUI_Dialogue_C_UpdateNPCParameters_Params
{
};

// Function UI_Dialogue.UI_Dialogue_C.Reconstruct
struct UUI_Dialogue_C_Reconstruct_Params
{
	class UDialogue*                                   InDialogue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Dialogue.UI_Dialogue_C.ExecuteUbergraph_UI_Dialogue
struct UUI_Dialogue_C_ExecuteUbergraph_UI_Dialogue_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
