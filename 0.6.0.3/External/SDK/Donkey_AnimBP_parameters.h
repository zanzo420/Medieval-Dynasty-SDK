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

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalRowName BPI
struct UDonkey_AnimBP_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalHeight
struct UDonkey_AnimBP_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalWorldLocation
struct UDonkey_AnimBP_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Sell
struct UDonkey_AnimBP_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Buy
struct UDonkey_AnimBP_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetForSale
struct UDonkey_AnimBP_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimal
struct UDonkey_AnimBP_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetFear
struct UDonkey_AnimBP_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetFleeingTimer
struct UDonkey_AnimBP_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.CheckIsBuilding
struct UDonkey_AnimBP_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetSystemManager
struct UDonkey_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetInventoryComponent
struct UDonkey_AnimBP_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetMountCameraRotation
struct UDonkey_AnimBP_C_GetMountCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetSprintKeyDown
struct UDonkey_AnimBP_C_GetSprintKeyDown_Params
{
	bool                                               IsSprintKeyDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetShouldSprint
struct UDonkey_AnimBP_C_GetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimGraph
struct UDonkey_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetVariablesFromPawn
struct UDonkey_AnimBP_C_GetVariablesFromPawn_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateIKState
struct UDonkey_AnimBP_C_UpdateIKState_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.DismountPressed
struct UDonkey_AnimBP_C_DismountPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.DismountReleased
struct UDonkey_AnimBP_C_DismountReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.WalkPressed
struct UDonkey_AnimBP_C_WalkPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.WalkReleased
struct UDonkey_AnimBP_C_WalkReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetShouldSprint
struct UDonkey_AnimBP_C_SetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.LookAtOnMount
struct UDonkey_AnimBP_C_LookAtOnMount_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Left_Axis
struct UDonkey_AnimBP_C_Left_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Backwards_Axis
struct UDonkey_AnimBP_C_Backwards_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Down_Axis
struct UDonkey_AnimBP_C_Down_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountCameraFoV
struct UDonkey_AnimBP_C_UpdateMountCameraFoV_Params
{
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Right_Axis
struct UDonkey_AnimBP_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetIsInWater
struct UDonkey_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SprintReleased
struct UDonkey_AnimBP_C_SprintReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountEquipment
struct UDonkey_AnimBP_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SprintPressed
struct UDonkey_AnimBP_C_SprintPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetForSale
struct UDonkey_AnimBP_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.CauseBleeding
struct UDonkey_AnimBP_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.OnSleep
struct UDonkey_AnimBP_C_OnSleep_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Starving
struct UDonkey_AnimBP_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.OnWakeUp
struct UDonkey_AnimBP_C_OnWakeUp_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetEngageTargetBPI
struct UDonkey_AnimBP_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetFear
struct UDonkey_AnimBP_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.AddItemToHouse
struct UDonkey_AnimBP_C_AddItemToHouse_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.UnpauseBrain
struct UDonkey_AnimBP_C_UnpauseBrain_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.PauseBrain
struct UDonkey_AnimBP_C_PauseBrain_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.CheckDistance
struct UDonkey_AnimBP_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5
struct UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Jump
struct UDonkey_AnimBP_C_AnimNotify_Jump_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Land
struct UDonkey_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.MountSpecial
struct UDonkey_AnimBP_C_MountSpecial_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_StopMountSpecial
struct UDonkey_AnimBP_C_AnimNotify_StopMountSpecial_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.SetAnimalMovementMode BPI
struct UDonkey_AnimBP_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.MountStop
struct UDonkey_AnimBP_C_MountStop_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintUpdateAnimation
struct UDonkey_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintBeginPlay
struct UDonkey_AnimBP_C_BlueprintBeginPlay_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.JumpReleased
struct UDonkey_AnimBP_C_JumpReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.JumpPressed
struct UDonkey_AnimBP_C_JumpPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.Remove
struct UDonkey_AnimBP_C_Remove_Params
{
};

// Function Donkey_AnimBP.Donkey_AnimBP_C.ExecuteUbergraph_Donkey_AnimBP
struct UDonkey_AnimBP_C_ExecuteUbergraph_Donkey_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
