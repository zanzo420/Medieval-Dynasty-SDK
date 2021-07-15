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

// Function GS_GameState.GS_GameState_C.RemoveFoliageInstance
struct AGS_GameState_C_RemoveFoliageInstance_Params
{
	class UInstancedStaticMeshComponent*               Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  InputPin1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance
struct AGS_GameState_C_Replicate_RemoveInstance_Params
{
	class UInstancedStaticMeshComponent*               Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  InputPin1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState
struct AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
