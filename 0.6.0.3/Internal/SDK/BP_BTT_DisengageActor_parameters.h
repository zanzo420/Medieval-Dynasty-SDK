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

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.FilterWaypoints
struct UBP_BTT_DisengageActor_C_FilterWaypoints_Params
{
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_06B6FFD54D40C65B40BD11A257E332B5
struct UBP_BTT_DisengageActor_C_OnFail_06B6FFD54D40C65B40BD11A257E332B5_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_06B6FFD54D40C65B40BD11A257E332B5
struct UBP_BTT_DisengageActor_C_OnSuccess_06B6FFD54D40C65B40BD11A257E332B5_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB
struct UBP_BTT_DisengageActor_C_OnFail_7719AAC24A3B930E5E3442B5B3CE7BDB_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB
struct UBP_BTT_DisengageActor_C_OnSuccess_7719AAC24A3B930E5E3442B5B3CE7BDB_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.OnTakeAnyDamage_Event
struct UBP_BTT_DisengageActor_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveAbortAI
struct UBP_BTT_DisengageActor_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.DisengageStart
struct UBP_BTT_DisengageActor_C_DisengageStart_Params
{
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveTickAI
struct UBP_BTT_DisengageActor_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ReceiveExecuteAI
struct UBP_BTT_DisengageActor_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.MoveToFleeLocation
struct UBP_BTT_DisengageActor_C_MoveToFleeLocation_Params
{
};

// Function BP_BTT_DisengageActor.BP_BTT_DisengageActor_C.ExecuteUbergraph_BP_BTT_DisengageActor
struct UBP_BTT_DisengageActor_C_ExecuteUbergraph_BP_BTT_DisengageActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
