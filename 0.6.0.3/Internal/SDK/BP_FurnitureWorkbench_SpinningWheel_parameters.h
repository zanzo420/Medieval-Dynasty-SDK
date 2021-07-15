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

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractTime
struct ABP_FurnitureWorkbench_SpinningWheel_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractAnimation
struct ABP_FurnitureWorkbench_SpinningWheel_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.DisableGhost
struct ABP_FurnitureWorkbench_SpinningWheel_C_DisableGhost_Params
{
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_SpinningWheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.PlayWorkbenchAnim
struct ABP_FurnitureWorkbench_SpinningWheel_C_PlayWorkbenchAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Base_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.StopWorkbenchAnim
struct ABP_FurnitureWorkbench_SpinningWheel_C_StopWorkbenchAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Base_Character;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.InteractCancel
struct ABP_FurnitureWorkbench_SpinningWheel_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.FinishFurniture
struct ABP_FurnitureWorkbench_SpinningWheel_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.SetVisibilityBasedAnimTickOption
struct ABP_FurnitureWorkbench_SpinningWheel_C_SetVisibilityBasedAnimTickOption_Params
{
	Engine_EVisibilityBasedAnimTickOption              AnimTickOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel
struct ABP_FurnitureWorkbench_SpinningWheel_C_ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
