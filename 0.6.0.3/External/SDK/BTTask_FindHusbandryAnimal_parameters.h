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

// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnFail_629F0A244365D0611B575788700ED6CE
struct UBTTask_FindHusbandryAnimal_C_OnFail_629F0A244365D0611B575788700ED6CE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnSuccess_629F0A244365D0611B575788700ED6CE
struct UBTTask_FindHusbandryAnimal_C_OnSuccess_629F0A244365D0611B575788700ED6CE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ReceiveExecuteAI
struct UBTTask_FindHusbandryAnimal_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ExecuteUbergraph_BTTask_FindHusbandryAnimal
struct UBTTask_FindHusbandryAnimal_C_ExecuteUbergraph_BTTask_FindHusbandryAnimal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
