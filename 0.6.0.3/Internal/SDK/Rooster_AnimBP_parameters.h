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

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalRowName BPI
struct URooster_AnimBP_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalHeight
struct URooster_AnimBP_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalWorldLocation
struct URooster_AnimBP_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimal
struct URooster_AnimBP_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetFear
struct URooster_AnimBP_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetFleeingTimer
struct URooster_AnimBP_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.CheckIsBuilding
struct URooster_AnimBP_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetSystemManager
struct URooster_AnimBP_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetInventoryComponent
struct URooster_AnimBP_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetForSale
struct URooster_AnimBP_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Buy
struct URooster_AnimBP_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Sell
struct URooster_AnimBP_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.AnimGraph
struct URooster_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetVariablesFromPawn
struct URooster_AnimBP_C_GetVariablesFromPawn_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateIKState
struct URooster_AnimBP_C_UpdateIKState_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.SetEngageTargetBPI
struct URooster_AnimBP_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.SetFear
struct URooster_AnimBP_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.OnWakeUp
struct URooster_AnimBP_C_OnWakeUp_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.AddItemToHouse
struct URooster_AnimBP_C_AddItemToHouse_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.UnpauseBrain
struct URooster_AnimBP_C_UnpauseBrain_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.SetIsInWater
struct URooster_AnimBP_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.PauseBrain
struct URooster_AnimBP_C_PauseBrain_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateMountEquipment
struct URooster_AnimBP_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.CheckDistance
struct URooster_AnimBP_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.SetForSale
struct URooster_AnimBP_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.Remove
struct URooster_AnimBP_C_Remove_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.CauseBleeding
struct URooster_AnimBP_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.OnSleep
struct URooster_AnimBP_C_OnSleep_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.Starving
struct URooster_AnimBP_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75
struct URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.SetAnimalMovementMode BPI
struct URooster_AnimBP_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintUpdateAnimation
struct URooster_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintBeginPlay
struct URooster_AnimBP_C_BlueprintBeginPlay_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.AnimNotify_Land
struct URooster_AnimBP_C_AnimNotify_Land_Params
{
};

// Function Rooster_AnimBP.Rooster_AnimBP_C.ExecuteUbergraph_Rooster_AnimBP
struct URooster_AnimBP_C_ExecuteUbergraph_Rooster_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
