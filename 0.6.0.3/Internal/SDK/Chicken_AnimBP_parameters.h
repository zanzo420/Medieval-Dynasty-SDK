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

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalRowName BPI
struct UChicken_AnimBP_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalHeight
struct UChicken_AnimBP_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalWorldLocation
struct UChicken_AnimBP_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimal
struct UChicken_AnimBP_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetFear
struct UChicken_AnimBP_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetFleeingTimer
struct UChicken_AnimBP_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.CheckIsBuilding
struct UChicken_AnimBP_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetSystemManager
struct UChicken_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetInventoryComponent
struct UChicken_AnimBP_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetForSale
struct UChicken_AnimBP_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Buy
struct UChicken_AnimBP_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Sell
struct UChicken_AnimBP_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.AnimGraph
struct UChicken_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetVariablesFromPawn
struct UChicken_AnimBP_C_GetVariablesFromPawn_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateIKState
struct UChicken_AnimBP_C_UpdateIKState_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.SetEngageTargetBPI
struct UChicken_AnimBP_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.SetFear
struct UChicken_AnimBP_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.OnWakeUp
struct UChicken_AnimBP_C_OnWakeUp_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.AddItemToHouse
struct UChicken_AnimBP_C_AddItemToHouse_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.UnpauseBrain
struct UChicken_AnimBP_C_UnpauseBrain_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.SetIsInWater
struct UChicken_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.PauseBrain
struct UChicken_AnimBP_C_PauseBrain_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateMountEquipment
struct UChicken_AnimBP_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.CheckDistance
struct UChicken_AnimBP_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.SetForSale
struct UChicken_AnimBP_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.Remove
struct UChicken_AnimBP_C_Remove_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.CauseBleeding
struct UChicken_AnimBP_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.OnSleep
struct UChicken_AnimBP_C_OnSleep_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.Starving
struct UChicken_AnimBP_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9
struct UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.SetAnimalMovementMode BPI
struct UChicken_AnimBP_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintUpdateAnimation
struct UChicken_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintBeginPlay
struct UChicken_AnimBP_C_BlueprintBeginPlay_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.AnimNotify_Land
struct UChicken_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Chicken_AnimBP.Chicken_AnimBP_C.ExecuteUbergraph_Chicken_AnimBP
struct UChicken_AnimBP_C_ExecuteUbergraph_Chicken_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
