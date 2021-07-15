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

// Function BTTask_Shoot.BTTask_Shoot_C.CalculateLookingRotation
struct UBTTask_Shoot_C_CalculateLookingRotation_Params
{
	struct FRotator                                    LookingRotator;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_Shoot.BTTask_Shoot_C.DestroyHeldItem
struct UBTTask_Shoot_C_DestroyHeldItem_Params
{
};

// Function BTTask_Shoot.BTTask_Shoot_C.ReceiveExecuteAI
struct UBTTask_Shoot_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_Shoot.BTTask_Shoot_C.ExecuteUbergraph_BTTask_Shoot
struct UBTTask_Shoot_C_ExecuteUbergraph_BTTask_Shoot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
