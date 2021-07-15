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

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.FilterWaypoints
struct UBP_BTT_WarnSensedActor_C_FilterWaypoints_Params
{
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.ReceiveTickAI
struct UBP_BTT_WarnSensedActor_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.WarnAnim
struct UBP_BTT_WarnSensedActor_C_WarnAnim_Params
{
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.ReceiveAbortAI
struct UBP_BTT_WarnSensedActor_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.OnTakeAnyDamage_Event
struct UBP_BTT_WarnSensedActor_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.ReceiveExecuteAI
struct UBP_BTT_WarnSensedActor_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_WarnSensedActor.BP_BTT_WarnSensedActor_C.ExecuteUbergraph_BP_BTT_WarnSensedActor
struct UBP_BTT_WarnSensedActor_C_ExecuteUbergraph_BP_BTT_WarnSensedActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
