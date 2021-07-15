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

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.GetNPCInteractTime
struct ABP_FurnitureWorkbench_WineBarrel_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.DisableGhost
struct ABP_FurnitureWorkbench_WineBarrel_C_DisableGhost_Params
{
};

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.GetNPCInteractAnimation
struct ABP_FurnitureWorkbench_WineBarrel_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.SetVisibilityBasedAnimTickOption
struct ABP_FurnitureWorkbench_WineBarrel_C_SetVisibilityBasedAnimTickOption_Params
{
	Engine_EVisibilityBasedAnimTickOption              AnimTickOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_WineBarrel_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_WineBarrel.BP_FurnitureWorkbench_WineBarrel_C.ExecuteUbergraph_BP_FurnitureWorkbench_WineBarrel
struct ABP_FurnitureWorkbench_WineBarrel_C_ExecuteUbergraph_BP_FurnitureWorkbench_WineBarrel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
