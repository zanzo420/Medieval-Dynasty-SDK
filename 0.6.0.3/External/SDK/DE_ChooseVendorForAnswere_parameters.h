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

// Function DE_ChooseVendorForAnswere.DE_ChooseVendorForAnswere_C.Change Response
struct UDE_ChooseVendorForAnswere_C_Change_Response_Params
{
	class UUI_Dialogue_C*                              UIDialogueReference;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChooseVendorForAnswere.DE_ChooseVendorForAnswere_C.RecieveEventTriggered
struct UDE_ChooseVendorForAnswere_C_RecieveEventTriggered_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NPCActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_ChooseVendorForAnswere.DE_ChooseVendorForAnswere_C.ExecuteUbergraph_DE_ChooseVendorForAnswere
struct UDE_ChooseVendorForAnswere_C_ExecuteUbergraph_DE_ChooseVendorForAnswere_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
