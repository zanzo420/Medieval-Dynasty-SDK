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

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetDistanceAndDirection
struct UBP_BTT_LookForFood_C_GetDistanceAndDirection_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Current;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceFood;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DirectionFood;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.GetTargetLocation
struct UBP_BTT_LookForFood_C_GetTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_9EE022AA43A22A1841354FBA7BDD2DB1
struct UBP_BTT_LookForFood_C_OnFail_9EE022AA43A22A1841354FBA7BDD2DB1_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1
struct UBP_BTT_LookForFood_C_OnSuccess_9EE022AA43A22A1841354FBA7BDD2DB1_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2
struct UBP_BTT_LookForFood_C_OnFail_ADE091FD4FEFF4FE72D1A69F23E300D2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2
struct UBP_BTT_LookForFood_C_OnSuccess_ADE091FD4FEFF4FE72D1A69F23E300D2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.EventPlayEatAnimation
struct UBP_BTT_LookForFood_C_EventPlayEatAnimation_Params
{
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ReceiveExecuteAI
struct UBP_BTT_LookForFood_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_LookForFood.BP_BTT_LookForFood_C.ExecuteUbergraph_BP_BTT_LookForFood
struct UBP_BTT_LookForFood_C_ExecuteUbergraph_BP_BTT_LookForFood_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
