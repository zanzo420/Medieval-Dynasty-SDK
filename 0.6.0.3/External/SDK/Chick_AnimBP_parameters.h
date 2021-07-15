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

// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalRowName BPI
struct UChick_AnimBP_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalHeight
struct UChick_AnimBP_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalWorldLocation
struct UChick_AnimBP_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimal
struct UChick_AnimBP_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetFear
struct UChick_AnimBP_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetFleeingTimer
struct UChick_AnimBP_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.CheckIsBuilding
struct UChick_AnimBP_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetSystemManager
struct UChick_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetInventoryComponent
struct UChick_AnimBP_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetForSale
struct UChick_AnimBP_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Buy
struct UChick_AnimBP_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Sell
struct UChick_AnimBP_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.AnimGraph
struct UChick_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Chick_AnimBP.Chick_AnimBP_C.GetVariablesFromPawn
struct UChick_AnimBP_C_GetVariablesFromPawn_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.UpdateIKState
struct UChick_AnimBP_C_UpdateIKState_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.SetEngageTargetBPI
struct UChick_AnimBP_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.SetFear
struct UChick_AnimBP_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.OnWakeUp
struct UChick_AnimBP_C_OnWakeUp_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.AddItemToHouse
struct UChick_AnimBP_C_AddItemToHouse_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.UnpauseBrain
struct UChick_AnimBP_C_UnpauseBrain_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.SetIsInWater
struct UChick_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.PauseBrain
struct UChick_AnimBP_C_PauseBrain_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.UpdateMountEquipment
struct UChick_AnimBP_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.CheckDistance
struct UChick_AnimBP_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.SetForSale
struct UChick_AnimBP_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Chick_AnimBP.Chick_AnimBP_C.Remove
struct UChick_AnimBP_C_Remove_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.CauseBleeding
struct UChick_AnimBP_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.OnSleep
struct UChick_AnimBP_C_OnSleep_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.Starving
struct UChick_AnimBP_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052
struct UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.SetAnimalMovementMode BPI
struct UChick_AnimBP_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.BlueprintUpdateAnimation
struct UChick_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chick_AnimBP.Chick_AnimBP_C.BlueprintBeginPlay
struct UChick_AnimBP_C_BlueprintBeginPlay_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.AnimNotify_Land
struct UChick_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Chick_AnimBP.Chick_AnimBP_C.ExecuteUbergraph_Chick_AnimBP
struct UChick_AnimBP_C_ExecuteUbergraph_Chick_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
