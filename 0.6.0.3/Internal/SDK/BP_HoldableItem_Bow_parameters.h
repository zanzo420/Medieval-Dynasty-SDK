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

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.GetAnimInstance
struct ABP_HoldableItem_Bow_C_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Set Bow Stretch
struct ABP_HoldableItem_Bow_C_Set_Bow_Stretch_Params
{
	float                                              Stretch;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shooting
struct ABP_HoldableItem_Bow_C_Shooting_Params
{
	struct FVector                                     Start;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.InteractionRange
struct ABP_HoldableItem_Bow_C_InteractionRange_Params
{
	float                                              Range;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Start;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__FinishedFunc
struct ABP_HoldableItem_Bow_C_BowStretch__FinishedFunc_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__UpdateFunc
struct ABP_HoldableItem_Bow_C_BowStretch__UpdateFunc_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.RightMouseInput
struct ABP_HoldableItem_Bow_C_RightMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftMouseInput
struct ABP_HoldableItem_Bow_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Reload
struct ABP_HoldableItem_Bow_C_Reload_Params
{
	bool                                               PlayAnimation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartAiming
struct ABP_HoldableItem_Bow_C_StartAiming_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StopAiming
struct ABP_HoldableItem_Bow_C_StopAiming_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Stamina Update
struct ABP_HoldableItem_Bow_C_Stamina_Update_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shoot
struct ABP_HoldableItem_Bow_C_Shoot_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.UpdateStance
struct ABP_HoldableItem_Bow_C_UpdateStance_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageComplete
struct ABP_HoldableItem_Bow_C_HitMontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.OnLoopFinish
struct ABP_HoldableItem_Bow_C_OnLoopFinish_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartBowStretch
struct ABP_HoldableItem_Bow_C_StartBowStretch_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReverseBowStretch
struct ABP_HoldableItem_Bow_C_ReverseBowStretch_Params
{
	float                                              NewRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageBlendOut
struct ABP_HoldableItem_Bow_C_MontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageBlendOut
struct ABP_HoldableItem_Bow_C_HitMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageInterrupted
struct ABP_HoldableItem_Bow_C_MontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageInterrupted
struct ABP_HoldableItem_Bow_C_HitMontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveBeginPlay
struct ABP_HoldableItem_Bow_C_ReceiveBeginPlay_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveDestroyed
struct ABP_HoldableItem_Bow_C_ReceiveDestroyed_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftInputAction
struct ABP_HoldableItem_Bow_C_LeftInputAction_Params
{
};

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ExecuteUbergraph_BP_HoldableItem_Bow
struct ABP_HoldableItem_Bow_C_ExecuteUbergraph_BP_HoldableItem_Bow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
