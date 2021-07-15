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

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.Boiling TL__FinishedFunc
struct ABP_FurnitureWorkbench_Cauldron_C_Boiling_TL__FinishedFunc_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.Boiling TL__UpdateFunc
struct ABP_FurnitureWorkbench_Cauldron_C_Boiling_TL__UpdateFunc_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.FinishFurniture
struct ABP_FurnitureWorkbench_Cauldron_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.StartBoiling
struct ABP_FurnitureWorkbench_Cauldron_C_StartBoiling_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.ReverseBoiling
struct ABP_FurnitureWorkbench_Cauldron_C_ReverseBoiling_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_Cauldron_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.CraftingStarted
struct ABP_FurnitureWorkbench_Cauldron_C_CraftingStarted_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.CraftingEnded
struct ABP_FurnitureWorkbench_Cauldron_C_CraftingEnded_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.CraftingStopping
struct ABP_FurnitureWorkbench_Cauldron_C_CraftingStopping_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.LinkFurniture
struct ABP_FurnitureWorkbench_Cauldron_C_LinkFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.Interact
struct ABP_FurnitureWorkbench_Cauldron_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.CraftingStarted_NPC
struct ABP_FurnitureWorkbench_Cauldron_C_CraftingStarted_NPC_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.CraftingEnded_NPC
struct ABP_FurnitureWorkbench_Cauldron_C_CraftingEnded_NPC_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.ResetBoiling
struct ABP_FurnitureWorkbench_Cauldron_C_ResetBoiling_Params
{
};

// Function BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C.ExecuteUbergraph_BP_FurnitureWorkbench_Cauldron
struct ABP_FurnitureWorkbench_Cauldron_C_ExecuteUbergraph_BP_FurnitureWorkbench_Cauldron_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
