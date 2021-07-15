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

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.GetAdvancedStatVisibility
struct UUI_Inspector_NPC_C_GetAdvancedStatVisibility_Params
{
	bool                                               Visibility;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.UpdateData
struct UUI_Inspector_NPC_C_UpdateData_Params
{
};

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.Init
struct UUI_Inspector_NPC_C_Init_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacterReference;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.ExecuteUbergraph_UI_Inspector_NPC
struct UUI_Inspector_NPC_C_ExecuteUbergraph_UI_Inspector_NPC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
