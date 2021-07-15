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

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.OnFail_3469260E4E6FBBA9482D5F91FC23ACEB
struct UBTTask_BanditsGoToCampfire_C_OnFail_3469260E4E6FBBA9482D5F91FC23ACEB_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.OnSuccess_3469260E4E6FBBA9482D5F91FC23ACEB
struct UBTTask_BanditsGoToCampfire_C_OnSuccess_3469260E4E6FBBA9482D5F91FC23ACEB_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.ReceiveExecuteAI
struct UBTTask_BanditsGoToCampfire_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.Finish
struct UBTTask_BanditsGoToCampfire_C_Finish_Params
{
};

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.ReceiveAbortAI
struct UBTTask_BanditsGoToCampfire_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsGoToCampfire.BTTask_BanditsGoToCampfire_C.ExecuteUbergraph_BTTask_BanditsGoToCampfire
struct UBTTask_BanditsGoToCampfire_C_ExecuteUbergraph_BTTask_BanditsGoToCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
