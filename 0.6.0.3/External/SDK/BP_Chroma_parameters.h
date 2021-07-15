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

// Function BP_Chroma.BP_Chroma_C.PrepareHealthFrames
struct ABP_Chroma_C_PrepareHealthFrames_Params
{
};

// Function BP_Chroma.BP_Chroma_C.PrepareFoodFrames
struct ABP_Chroma_C_PrepareFoodFrames_Params
{
};

// Function BP_Chroma.BP_Chroma_C.PrepareWaterFrames
struct ABP_Chroma_C_PrepareWaterFrames_Params
{
};

// Function BP_Chroma.BP_Chroma_C.UpdateQuickslots
struct ABP_Chroma_C_UpdateQuickslots_Params
{
};

// Function BP_Chroma.BP_Chroma_C.CheckIfWaterUpdateNeeded
struct ABP_Chroma_C_CheckIfWaterUpdateNeeded_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.CheckIfFoodUpdateNeeded
struct ABP_Chroma_C_CheckIfFoodUpdateNeeded_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.CheckIfHealthUpdateNeeded
struct ABP_Chroma_C_CheckIfHealthUpdateNeeded_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.HandleInactiveKeys
struct ABP_Chroma_C_HandleInactiveKeys_Params
{
	int                                                Animation_ID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Threshold;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimationEffect
struct ABP_Chroma_C_UpdateChromaAnimationEffect_Params
{
};

// Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimation
struct ABP_Chroma_C_UpdateChromaAnimation_Params
{
};

// Function BP_Chroma.BP_Chroma_C.InitChromaHealthBar
struct ABP_Chroma_C_InitChromaHealthBar_Params
{
	float                                              Health_Percentage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.InitChromaFoodBar
struct ABP_Chroma_C_InitChromaFoodBar_Params
{
	float                                              Food_Percentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.InitChromaWaterBar
struct ABP_Chroma_C_InitChromaWaterBar_Params
{
	float                                              Water_Percentage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.ReceiveBeginPlay
struct ABP_Chroma_C_ReceiveBeginPlay_Params
{
};

// Function BP_Chroma.BP_Chroma_C.UpdateChromaWaterBar
struct ABP_Chroma_C_UpdateChromaWaterBar_Params
{
	float                                              Water_Percentage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.UpdateQuickslotBar
struct ABP_Chroma_C_UpdateQuickslotBar_Params
{
};

// Function BP_Chroma.BP_Chroma_C.BindChromaQuickslotEvent
struct ABP_Chroma_C_BindChromaQuickslotEvent_Params
{
	class APC_Player_C*                                PCPlayerReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.UpdateChromaFoodBar
struct ABP_Chroma_C_UpdateChromaFoodBar_Params
{
	float                                              Food_Percentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.ChromaHitEffect
struct ABP_Chroma_C_ChromaHitEffect_Params
{
	TEnumAsByte<E_DamageType_E_DamageType>             Damage_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.ReceiveTick
struct ABP_Chroma_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.UpdateChromaHealthBar
struct ABP_Chroma_C_UpdateChromaHealthBar_Params
{
	float                                              Health_Percentage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Chroma.BP_Chroma_C.InitChromaBars
struct ABP_Chroma_C_InitChromaBars_Params
{
};

// Function BP_Chroma.BP_Chroma_C.ExecuteUbergraph_BP_Chroma
struct ABP_Chroma_C_ExecuteUbergraph_BP_Chroma_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
