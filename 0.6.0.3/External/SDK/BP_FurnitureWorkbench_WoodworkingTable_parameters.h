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

// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractTime
struct ABP_FurnitureWorkbench_WoodworkingTable_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractAnimation
struct ABP_FurnitureWorkbench_WoodworkingTable_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.FinishFurniture
struct ABP_FurnitureWorkbench_WoodworkingTable_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable
struct ABP_FurnitureWorkbench_WoodworkingTable_C_ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
