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

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveExecuteAI
struct UBTTask_WaitForTask_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ReceiveAbortAI
struct UBTTask_WaitForTask_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.CheckWork
struct UBTTask_WaitForTask_C_CheckWork_Params
{
};

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ChangeActivity
struct UBTTask_WaitForTask_C_ChangeActivity_Params
{
};

// Function BTTask_WaitForTask.BTTask_WaitForTask_C.ExecuteUbergraph_BTTask_WaitForTask
struct UBTTask_WaitForTask_C_ExecuteUbergraph_BTTask_WaitForTask_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
