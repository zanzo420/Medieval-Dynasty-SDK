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

// Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.Execute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalkToPeople_C::Execute(class UObject* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.Execute");

	UDE_GoalTalkToPeople_C_Execute_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalkToPeople_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.RecieveEventTriggered");

	UDE_GoalTalkToPeople_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.ExecuteUbergraph_DE_GoalTalkToPeople
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalkToPeople_C::ExecuteUbergraph_DE_GoalTalkToPeople(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalkToPeople.DE_GoalTalkToPeople_C.ExecuteUbergraph_DE_GoalTalkToPeople");

	UDE_GoalTalkToPeople_C_ExecuteUbergraph_DE_GoalTalkToPeople_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDE_GoalTalkToPeople_C::AfterRead()
{
	UDialogueEvents::AfterRead();

}

void UDE_GoalTalkToPeople_C::BeforeDelete()
{
	UDialogueEvents::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
