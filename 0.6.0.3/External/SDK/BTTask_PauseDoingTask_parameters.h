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

// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ReceiveExecuteAI
struct UBTTask_PauseDoingTask_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnWorkComplete
struct UBTTask_PauseDoingTask_C_OnWorkComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.OnSleepFinished
struct UBTTask_PauseDoingTask_C_OnSleepFinished_Params
{
};

// Function BTTask_PauseDoingTask.BTTask_PauseDoingTask_C.ExecuteUbergraph_BTTask_PauseDoingTask
struct UBTTask_PauseDoingTask_C_ExecuteUbergraph_BTTask_PauseDoingTask_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
