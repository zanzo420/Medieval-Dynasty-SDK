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

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractTime
struct ABP_FurnitureWorkbench_Forge_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractAnimation
struct ABP_FurnitureWorkbench_Forge_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetInteractTool
struct ABP_FurnitureWorkbench_Forge_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__FinishedFunc
struct ABP_FurnitureWorkbench_Forge_C_ForgeFire_TL__FinishedFunc_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__UpdateFunc
struct ABP_FurnitureWorkbench_Forge_C_ForgeFire_TL__UpdateFunc_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_Forge_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.SetVisibilityBasedAnimTickOption
struct ABP_FurnitureWorkbench_Forge_C_SetVisibilityBasedAnimTickOption_Params
{
	Engine_EVisibilityBasedAnimTickOption              AnimTickOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopWorkbenchAnim
struct ABP_FurnitureWorkbench_Forge_C_StopWorkbenchAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Base_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PlayWorkbenchAnim
struct ABP_FurnitureWorkbench_Forge_C_PlayWorkbenchAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Base_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartFire
struct ABP_FurnitureWorkbench_Forge_C_StartFire_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FurnitureNotify
struct ABP_FurnitureWorkbench_Forge_C_FurnitureNotify_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReverseFire
struct ABP_FurnitureWorkbench_Forge_C_ReverseFire_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.WaitWorkbenchAnim
struct ABP_FurnitureWorkbench_Forge_C_WaitWorkbenchAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Base_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.BlendOutCrafting
struct ABP_FurnitureWorkbench_Forge_C_BlendOutCrafting_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.Interact
struct ABP_FurnitureWorkbench_Forge_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PerformActorInteraction
struct ABP_FurnitureWorkbench_Forge_C_PerformActorInteraction_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FinishFurniture
struct ABP_FurnitureWorkbench_Forge_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopFire
struct ABP_FurnitureWorkbench_Forge_C_StopFire_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartWorkbench
struct ABP_FurnitureWorkbench_Forge_C_StartWorkbench_Params
{
};

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ExecuteUbergraph_BP_FurnitureWorkbench_Forge
struct ABP_FurnitureWorkbench_Forge_C_ExecuteUbergraph_BP_FurnitureWorkbench_Forge_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
