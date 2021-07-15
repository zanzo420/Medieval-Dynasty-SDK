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

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.GetDistanceAndDirection
struct UBP_BTT_HusbandryGoToRestPoint_C_GetDistanceAndDirection_Params
{
	struct FVector                                     Targ;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Cur;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.GetTargetLocation
struct UBP_BTT_HusbandryGoToRestPoint_C_GetTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.OnFail_86AAE00B4E55E723A8DED38FF33A6CAE
struct UBP_BTT_HusbandryGoToRestPoint_C_OnFail_86AAE00B4E55E723A8DED38FF33A6CAE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.OnSuccess_86AAE00B4E55E723A8DED38FF33A6CAE
struct UBP_BTT_HusbandryGoToRestPoint_C_OnSuccess_86AAE00B4E55E723A8DED38FF33A6CAE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.ReceiveExecuteAI
struct UBP_BTT_HusbandryGoToRestPoint_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HusbandryGoToRestPoint.BP_BTT_HusbandryGoToRestPoint_C.ExecuteUbergraph_BP_BTT_HusbandryGoToRestPoint
struct UBP_BTT_HusbandryGoToRestPoint_C_ExecuteUbergraph_BP_BTT_HusbandryGoToRestPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
