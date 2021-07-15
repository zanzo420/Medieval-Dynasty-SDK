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

// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.EndDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APC_Player_C*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeDialogueTree_C::EndDialogue(class ABP_BaseCharacter_C* NPC, class APC_Player_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.EndDialogue");

	UDE_ChangeDialogueTree_C_EndDialogue_Params params;
	params.NPC = NPC;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ReturningDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*               Dialogue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeDialogueTree_C::ReturningDialogue(class UDialogue* Dialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ReturningDialogue");

	UDE_ChangeDialogueTree_C_ReturningDialogue_Params params;
	params.Dialogue = Dialogue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeDialogueTree_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.RecieveEventTriggered");

	UDE_ChangeDialogueTree_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ExecuteUbergraph_DE_ChangeDialogueTree
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeDialogueTree_C::ExecuteUbergraph_DE_ChangeDialogueTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeDialogueTree.DE_ChangeDialogueTree_C.ExecuteUbergraph_DE_ChangeDialogueTree");

	UDE_ChangeDialogueTree_C_ExecuteUbergraph_DE_ChangeDialogueTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
