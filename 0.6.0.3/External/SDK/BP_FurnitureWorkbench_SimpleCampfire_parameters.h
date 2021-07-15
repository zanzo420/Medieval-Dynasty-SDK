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

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsLinkedFurnitureStarted
struct ABP_FurnitureWorkbench_SimpleCampfire_C_IsLinkedFurnitureStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolNeeded
struct ABP_FurnitureWorkbench_SimpleCampfire_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LoadCampfireData
struct ABP_FurnitureWorkbench_SimpleCampfire_C_LoadCampfireData_Params
{
	struct FST_SAVE_Campfires                          FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.OnOwnershipSwap
struct ABP_FurnitureWorkbench_SimpleCampfire_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetCampfireDataToSave
struct ABP_FurnitureWorkbench_SimpleCampfire_C_GetCampfireDataToSave_Params
{
	struct FST_SAVE_Campfires                          FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetHeating
struct ABP_FurnitureWorkbench_SimpleCampfire_C_SetHeating_Params
{
	bool                                               bGenerateOverlapEvents;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InSphereRadius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractTool_UI
struct ABP_FurnitureWorkbench_SimpleCampfire_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolInteractable_UI
struct ABP_FurnitureWorkbench_SimpleCampfire_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckObstruction
struct ABP_FurnitureWorkbench_SimpleCampfire_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LightFlashing
struct ABP_FurnitureWorkbench_SimpleCampfire_C_LightFlashing_Params
{
	float                                              InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractAction
struct ABP_FurnitureWorkbench_SimpleCampfire_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsInteractable
struct ABP_FurnitureWorkbench_SimpleCampfire_C_IsInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPressUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowTimerUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOnlyName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.DisableGhost
struct ABP_FurnitureWorkbench_SimpleCampfire_C_DisableGhost_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.EnableGhost
struct ABP_FurnitureWorkbench_SimpleCampfire_C_EnableGhost_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UserConstructionScript
struct ABP_FurnitureWorkbench_SimpleCampfire_C_UserConstructionScript_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Interact
struct ABP_FurnitureWorkbench_SimpleCampfire_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveTick
struct ABP_FurnitureWorkbench_SimpleCampfire_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PerformActorInteraction
struct ABP_FurnitureWorkbench_SimpleCampfire_C_PerformActorInteraction_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PutOutFire
struct ABP_FurnitureWorkbench_SimpleCampfire_C_PutOutFire_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InteractStart
struct ABP_FurnitureWorkbench_SimpleCampfire_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveBeginPlay
struct ABP_FurnitureWorkbench_SimpleCampfire_C_ReceiveBeginPlay_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_FurnitureWorkbench_SimpleCampfire_C_BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_FurnitureWorkbench_SimpleCampfire_C_BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartFire
struct ABP_FurnitureWorkbench_SimpleCampfire_C_StartFire_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UpdateOnTimeOfDayChanged
struct ABP_FurnitureWorkbench_SimpleCampfire_C_UpdateOnTimeOfDayChanged_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitByBuilding
struct ABP_FurnitureWorkbench_SimpleCampfire_C_InitByBuilding_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckFire
struct ABP_FurnitureWorkbench_SimpleCampfire_C_CheckFire_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteFinishLogic
struct ABP_FurnitureWorkbench_SimpleCampfire_C_ExecuteFinishLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Init
struct ABP_FurnitureWorkbench_SimpleCampfire_C_Init_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartrFireAfterLoad
struct ABP_FurnitureWorkbench_SimpleCampfire_C_StartrFireAfterLoad_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetMeshMobility
struct ABP_FurnitureWorkbench_SimpleCampfire_C_SetMeshMobility_Params
{
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitLight
struct ABP_FurnitureWorkbench_SimpleCampfire_C_InitLight_Params
{
};

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire
struct ABP_FurnitureWorkbench_SimpleCampfire_C_ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
