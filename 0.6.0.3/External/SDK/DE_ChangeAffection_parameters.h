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

// Function DE_ChangeAffection.DE_ChangeAffection_C.Functionality
struct UDE_ChangeAffection_C_Functionality_Params
{
};

// Function DE_ChangeAffection.DE_ChangeAffection_C.RecieveEventTriggered
struct UDE_ChangeAffection_C_RecieveEventTriggered_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NPCActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChangeAffection.DE_ChangeAffection_C.ExecuteUbergraph_DE_ChangeAffection
struct UDE_ChangeAffection_C_ExecuteUbergraph_DE_ChangeAffection_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
