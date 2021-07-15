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

// Function DialoguePlugin.DialogueEvents.RecieveEventTriggered
struct UDialogueEvents_RecieveEventTriggered_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NPCActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueConditions.IsConditionMet_Internal
struct UDialogueConditions_IsConditionMet_Internal_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NPCActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueConditions.IsConditionMet
struct UDialogueConditions_IsConditionMet_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NPCActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.Dialogue.GetNextNodes
struct UDialogue_GetNextNodes_Params
{
	struct FDialogueNode                               Node;                                                      // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FDialogueNode>                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.Dialogue.GetFirstNode
struct UDialogue_GetFirstNode_Params
{
	struct FDialogueNode                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.Dialogue.CleanOuter
struct UDialogue_CleanOuter_Params
{
};

// Function DialoguePlugin.Dialogue.CallFunctionByName
struct UDialogue_CallFunctionByName_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.Dialogue.AssignPersistentOuter
struct UDialogue_AssignPersistentOuter_Params
{
	class UGameInstance*                               inGameInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueUserWidget.RunStringReplacer
struct UDialogueUserWidget_RunStringReplacer_Params
{
	struct FString                                     originalString;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     resultString;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueUserWidget.RunEventsForNode
struct UDialogueUserWidget_RunEventsForNode_Params
{
	struct FDialogueNode                               Node;                                                      // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueUserWidget.ReplaceVarStrings
struct UDialogueUserWidget_ReplaceVarStrings_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueUserWidget.IsConditionsMetForNode
struct UDialogueUserWidget_IsConditionsMetForNode_Params
{
	struct FDialogueNode                               Node;                                                      // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DialoguePlugin.DialogueUserWidget.FindVarStrings
struct UDialogueUserWidget_FindVarStrings_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
