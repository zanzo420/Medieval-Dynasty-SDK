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

// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalRowName BPI
struct UHorse_AnimBP_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalHeight
struct UHorse_AnimBP_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalWorldLocation
struct UHorse_AnimBP_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Sell
struct UHorse_AnimBP_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Buy
struct UHorse_AnimBP_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetForSale
struct UHorse_AnimBP_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimal
struct UHorse_AnimBP_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetFear
struct UHorse_AnimBP_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetFleeingTimer
struct UHorse_AnimBP_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.CheckIsBuilding
struct UHorse_AnimBP_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetSystemManager
struct UHorse_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetInventoryComponent
struct UHorse_AnimBP_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetMountCameraRotation
struct UHorse_AnimBP_C_GetMountCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetSprintKeyDown
struct UHorse_AnimBP_C_GetSprintKeyDown_Params
{
	bool                                               IsSprintKeyDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetShouldSprint
struct UHorse_AnimBP_C_GetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.AnimGraph
struct UHorse_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.GetVariablesFromPawn
struct UHorse_AnimBP_C_GetVariablesFromPawn_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.UpdateIKState
struct UHorse_AnimBP_C_UpdateIKState_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.WalkPressed
struct UHorse_AnimBP_C_WalkPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.WalkReleased
struct UHorse_AnimBP_C_WalkReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetShouldSprint
struct UHorse_AnimBP_C_SetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.LookAtOnMount
struct UHorse_AnimBP_C_LookAtOnMount_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.Left_Axis
struct UHorse_AnimBP_C_Left_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.Backwards_Axis
struct UHorse_AnimBP_C_Backwards_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.DismountReleased
struct UHorse_AnimBP_C_DismountReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountCameraFoV
struct UHorse_AnimBP_C_UpdateMountCameraFoV_Params
{
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.DismountPressed
struct UHorse_AnimBP_C_DismountPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetIsInWater
struct UHorse_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.Down_Axis
struct UHorse_AnimBP_C_Down_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountEquipment
struct UHorse_AnimBP_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.Right_Axis
struct UHorse_AnimBP_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetForSale
struct UHorse_AnimBP_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SprintReleased
struct UHorse_AnimBP_C_SprintReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.CauseBleeding
struct UHorse_AnimBP_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SprintPressed
struct UHorse_AnimBP_C_SprintPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.OnSleep
struct UHorse_AnimBP_C_OnSleep_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.Starving
struct UHorse_AnimBP_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.OnWakeUp
struct UHorse_AnimBP_C_OnWakeUp_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetEngageTargetBPI
struct UHorse_AnimBP_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetFear
struct UHorse_AnimBP_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.AddItemToHouse
struct UHorse_AnimBP_C_AddItemToHouse_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.UnpauseBrain
struct UHorse_AnimBP_C_UnpauseBrain_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.PauseBrain
struct UHorse_AnimBP_C_PauseBrain_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.CheckDistance
struct UHorse_AnimBP_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7
struct UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Jump
struct UHorse_AnimBP_C_AnimNotify_Jump_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Land
struct UHorse_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.MountSpecial
struct UHorse_AnimBP_C_MountSpecial_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_StopMountSpecial
struct UHorse_AnimBP_C_AnimNotify_StopMountSpecial_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.SetAnimalMovementMode BPI
struct UHorse_AnimBP_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.MountStop
struct UHorse_AnimBP_C_MountStop_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.BlueprintUpdateAnimation
struct UHorse_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.BlueprintBeginPlay
struct UHorse_AnimBP_C_BlueprintBeginPlay_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.JumpReleased
struct UHorse_AnimBP_C_JumpReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.JumpPressed
struct UHorse_AnimBP_C_JumpPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Horse_AnimBP.Horse_AnimBP_C.Remove
struct UHorse_AnimBP_C_Remove_Params
{
};

// Function Horse_AnimBP.Horse_AnimBP_C.ExecuteUbergraph_Horse_AnimBP
struct UHorse_AnimBP_C_ExecuteUbergraph_Horse_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
