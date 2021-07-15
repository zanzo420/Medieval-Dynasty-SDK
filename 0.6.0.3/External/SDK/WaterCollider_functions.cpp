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

// Function WaterCollider.WaterCollider_C.TeleportNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterCollider_C::TeleportNPC(class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.TeleportNPC");

	AWaterCollider_C_TeleportNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.CalculateTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerCharacter_C*   PlayerCharacterReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LookAtPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterCollider_C::CalculateTargetLocation(class ABP_PlayerCharacter_C* PlayerCharacterReference, float Distance, struct FVector* TargetPosition, struct FVector* LookAtPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.CalculateTargetLocation");

	AWaterCollider_C_CalculateTargetLocation_Params params;
	params.PlayerCharacterReference = PlayerCharacterReference;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetPosition != nullptr)
		*TargetPosition = params.TargetPosition;
	if (LookAtPosition != nullptr)
		*LookAtPosition = params.LookAtPosition;

}


// Function WaterCollider.WaterCollider_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AWaterCollider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.UserConstructionScript");

	AWaterCollider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterCollider_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.ReceiveActorBeginOverlap");

	AWaterCollider_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
void AWaterCollider_C::TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.TeleportPlayer");

	AWaterCollider_C_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.SelectBehaviour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   PlayerReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  MountReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterCollider_C::SelectBehaviour(class ABP_PlayerCharacter_C* PlayerReference, class AActor* MountReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.SelectBehaviour");

	AWaterCollider_C_SelectBehaviour_Params params;
	params.PlayerReference = PlayerReference;
	params.MountReference = MountReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.MovePlayer
// (BlueprintCallable, BlueprintEvent)
void AWaterCollider_C::MovePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.MovePlayer");

	AWaterCollider_C_MovePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterCollider.WaterCollider_C.ExecuteUbergraph_WaterCollider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterCollider_C::ExecuteUbergraph_WaterCollider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterCollider.WaterCollider_C.ExecuteUbergraph_WaterCollider");

	AWaterCollider_C_ExecuteUbergraph_WaterCollider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWaterCollider_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Spline, USplineComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(PlayerReference, ABP_PlayerCharacter_C);
	READ_PTR_FULL(MountReference, AActor);
}

void AWaterCollider_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Spline);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(PlayerReference);
	DELE_PTR_FULL(MountReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
