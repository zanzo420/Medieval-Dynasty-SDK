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

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.IsLinkedFurnitureStarted
struct ABP_FurnitureWorkbench_WoodenGrate_C_IsLinkedFurnitureStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.GetNPCInteractAnimation
struct ABP_FurnitureWorkbench_WoodenGrate_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FadeTimeline__FinishedFunc
struct ABP_FurnitureWorkbench_WoodenGrate_C_FadeTimeline__FinishedFunc_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FadeTimeline__UpdateFunc
struct ABP_FurnitureWorkbench_WoodenGrate_C_FadeTimeline__UpdateFunc_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FireBoxFire TL__FinishedFunc
struct ABP_FurnitureWorkbench_WoodenGrate_C_FireBoxFire_TL__FinishedFunc_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FireBoxFire TL__UpdateFunc
struct ABP_FurnitureWorkbench_WoodenGrate_C_FireBoxFire_TL__UpdateFunc_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FurnitureNotify
struct ABP_FurnitureWorkbench_WoodenGrate_C_FurnitureNotify_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FryFood
struct ABP_FurnitureWorkbench_WoodenGrate_C_FryFood_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.CraftingStarted
struct ABP_FurnitureWorkbench_WoodenGrate_C_CraftingStarted_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.WaitCrafting
struct ABP_FurnitureWorkbench_WoodenGrate_C_WaitCrafting_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_WoodenGrate_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.StartFire
struct ABP_FurnitureWorkbench_WoodenGrate_C_StartFire_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.ReverseFire
struct ABP_FurnitureWorkbench_WoodenGrate_C_ReverseFire_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.CraftingEnded
struct ABP_FurnitureWorkbench_WoodenGrate_C_CraftingEnded_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.InteractCancel
struct ABP_FurnitureWorkbench_WoodenGrate_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.CraftingStopping
struct ABP_FurnitureWorkbench_WoodenGrate_C_CraftingStopping_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.Interact
struct ABP_FurnitureWorkbench_WoodenGrate_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.PerformActorInteraction
struct ABP_FurnitureWorkbench_WoodenGrate_C_PerformActorInteraction_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.FinishFurniture
struct ABP_FurnitureWorkbench_WoodenGrate_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.StopFire
struct ABP_FurnitureWorkbench_WoodenGrate_C_StopFire_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.StartWorkbench
struct ABP_FurnitureWorkbench_WoodenGrate_C_StartWorkbench_Params
{
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.LinkFurniture
struct ABP_FurnitureWorkbench_WoodenGrate_C_LinkFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C.ExecuteUbergraph_BP_FurnitureWorkbench_WoodenGrate
struct ABP_FurnitureWorkbench_WoodenGrate_C_ExecuteUbergraph_BP_FurnitureWorkbench_WoodenGrate_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
