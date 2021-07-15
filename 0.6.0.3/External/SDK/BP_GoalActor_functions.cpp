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

// Function BP_GoalActor.BP_GoalActor_C.StopFollow
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GoalActor_C::StopFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoalActor.BP_GoalActor_C.StopFollow");

	ABP_GoalActor_C_StopFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoalActor.BP_GoalActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_GoalActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoalActor.BP_GoalActor_C.UserConstructionScript");

	ABP_GoalActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoalActor.BP_GoalActor_C.CheckForPlayer
// (BlueprintCallable, BlueprintEvent)
void ABP_GoalActor_C::CheckForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoalActor.BP_GoalActor_C.CheckForPlayer");

	ABP_GoalActor_C_CheckForPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoalActor.BP_GoalActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GoalActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoalActor.BP_GoalActor_C.ReceiveBeginPlay");

	ABP_GoalActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GoalActor.BP_GoalActor_C.ExecuteUbergraph_BP_GoalActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GoalActor_C::ExecuteUbergraph_BP_GoalActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GoalActor.BP_GoalActor_C.ExecuteUbergraph_BP_GoalActor");

	ABP_GoalActor_C_ExecuteUbergraph_BP_GoalActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_GoalActor_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Sphere, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(QuestManager, ABP_QuestManager_C);
	READ_PTR_FULL(PlayerReference, ABP_PlayerCharacter_C);
}

void ABP_GoalActor_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(QuestManager);
	DELE_PTR_FULL(PlayerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
