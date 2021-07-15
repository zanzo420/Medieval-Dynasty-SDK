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

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.FilterWaypoints
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BTT_DisengageActor_C::FilterWaypoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.FilterWaypoints");

	UBP_BTT_DisengageActor_C_FilterWaypoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_06B6FFD54D40C65B40BD11A257E332B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::OnFail_06B6FFD54D40C65B40BD11A257E332B5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_06B6FFD54D40C65B40BD11A257E332B5");

	UBP_BTT_DisengageActor_C_OnFail_06B6FFD54D40C65B40BD11A257E332B5_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_06B6FFD54D40C65B40BD11A257E332B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::OnSuccess_06B6FFD54D40C65B40BD11A257E332B5(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_06B6FFD54D40C65B40BD11A257E332B5");

	UBP_BTT_DisengageActor_C_OnSuccess_06B6FFD54D40C65B40BD11A257E332B5_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB");

	UBP_BTT_DisengageActor_C_OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB");

	UBP_BTT_DisengageActor_C_OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnTakeAnyDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnTakeAnyDamage_Event");

	UBP_BTT_DisengageActor_C_OnTakeAnyDamage_Event_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveAbortAI");

	UBP_BTT_DisengageActor_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.DisengageStart
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_DisengageActor_C::DisengageStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.DisengageStart");

	UBP_BTT_DisengageActor_C_DisengageStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveTickAI");

	UBP_BTT_DisengageActor_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveExecuteAI");

	UBP_BTT_DisengageActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.MoveToFleeLocation
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_DisengageActor_C::MoveToFleeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.MoveToFleeLocation");

	UBP_BTT_DisengageActor_C_MoveToFleeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ExecuteUbergraph_BP_BTT_DisengageActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_DisengageActor_C::ExecuteUbergraph_BP_BTT_DisengageActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ExecuteUbergraph_BP_BTT_DisengageActor");

	UBP_BTT_DisengageActor_C_ExecuteUbergraph_BP_BTT_DisengageActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
