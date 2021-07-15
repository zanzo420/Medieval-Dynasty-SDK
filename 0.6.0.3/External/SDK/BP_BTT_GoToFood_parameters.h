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

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetDistanceAndDirection
struct UBP_BTT_GoToFood_C_GetDistanceAndDirection_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Current;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceFood;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DirectionFood;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.GetTargetLocation
struct UBP_BTT_GoToFood_C_GetTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_482D2B094814E224F05E8A999DCCA269
struct UBP_BTT_GoToFood_C_OnFail_482D2B094814E224F05E8A999DCCA269_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_482D2B094814E224F05E8A999DCCA269
struct UBP_BTT_GoToFood_C_OnSuccess_482D2B094814E224F05E8A999DCCA269_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnFail_2EB0B4A542BB0DB9510D2B9F31954744
struct UBP_BTT_GoToFood_C_OnFail_2EB0B4A542BB0DB9510D2B9F31954744_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744
struct UBP_BTT_GoToFood_C_OnSuccess_2EB0B4A542BB0DB9510D2B9F31954744_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ReceiveExecuteAI
struct UBP_BTT_GoToFood_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToFood.BP_BTT_GoToFood_C.ExecuteUbergraph_BP_BTT_GoToFood
struct UBP_BTT_GoToFood_C_ExecuteUbergraph_BP_BTT_GoToFood_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
