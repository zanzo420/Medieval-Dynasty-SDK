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

// Function DE_FindGiftVendor.DE_FindGiftVendor_C.Functionality
struct UDE_FindGiftVendor_C_Functionality_Params
{
	class APC_Player_C*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function DE_FindGiftVendor.DE_FindGiftVendor_C.RecieveEventTriggered
struct UDE_FindGiftVendor_C_RecieveEventTriggered_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NPCActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DE_FindGiftVendor.DE_FindGiftVendor_C.ExecuteUbergraph_DE_FindGiftVendor
struct UDE_FindGiftVendor_C_ExecuteUbergraph_DE_FindGiftVendor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
