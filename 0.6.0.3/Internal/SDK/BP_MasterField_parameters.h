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

// Function BP_MasterField.BP_MasterField_C.IsGrabbable
struct ABP_MasterField_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.IsItemInteractable
struct ABP_MasterField_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractItem
struct ABP_MasterField_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.IsItemNeeded
struct ABP_MasterField_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractAdditionalStatus
struct ABP_MasterField_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.IsInteractAdditionalStatus
struct ABP_MasterField_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetFishData
struct ABP_MasterField_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetID
struct ABP_MasterField_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractionDistance
struct ABP_MasterField_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetOff-HandItem
struct ABP_MasterField_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractCondition
struct ABP_MasterField_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.IsInteractCondition
struct ABP_MasterField_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.IsToolNeeded
struct ABP_MasterField_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetOwnershipType
struct ABP_MasterField_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractTitle
struct ABP_MasterField_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractResources
struct ABP_MasterField_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.GetFluidType
struct ABP_MasterField_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.IsToolInteractable_UI
struct ABP_MasterField_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractTool_UI
struct ABP_MasterField_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetNPCInteractTime
struct ABP_MasterField_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.IsToolInteractable
struct ABP_MasterField_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetTaskFromActor
struct ABP_MasterField_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractIcon
struct ABP_MasterField_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractName
struct ABP_MasterField_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractAction
struct ABP_MasterField_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.IsInteractable
struct ABP_MasterField_C_IsInteractable_Params
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

// Function BP_MasterField.BP_MasterField_C.GetInteractTool
struct ABP_MasterField_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetInteractCount
struct ABP_MasterField_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetHeldItem
struct ABP_MasterField_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetResourceType
struct ABP_MasterField_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetNPCInteractAnimation
struct ABP_MasterField_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CheckOccupied
struct ABP_MasterField_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CheckPointOnTheMap
struct ABP_MasterField_C_CheckPointOnTheMap_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnMap;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.IsChunkInteractableForNPC
struct ABP_MasterField_C_IsChunkInteractableForNPC_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        WorkPlace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.IgnorePlantSlotRotation
struct ABP_MasterField_C_IgnorePlantSlotRotation_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ignore;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.DisableInspector
struct ABP_MasterField_C_DisableInspector_Params
{
};

// Function BP_MasterField.BP_MasterField_C.EnableInspector
struct ABP_MasterField_C_EnableInspector_Params
{
};

// Function BP_MasterField.BP_MasterField_C.RefreshTasksList
struct ABP_MasterField_C_RefreshTasksList_Params
{
};

// Function BP_MasterField.BP_MasterField_C.GetChunkStageForCycle
struct ABP_MasterField_C_GetChunkStageForCycle_Params
{
	struct FST_Chunks                                  ChunkData;                                                 // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.InitAfterLoad
struct ABP_MasterField_C_InitAfterLoad_Params
{
	struct FST_SAVE_Fields                             FieldData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               OldSave;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetDataToSave
struct ABP_MasterField_C_GetDataToSave_Params
{
	struct FST_SAVE_Fields                             FieldData;                                                 // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.OnOwnershipSwap
struct ABP_MasterField_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SortTasksList
struct ABP_MasterField_C_SortTasksList_Params
{
};

// Function BP_MasterField.BP_MasterField_C.ChunkInteraction
struct ABP_MasterField_C_ChunkInteraction_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_MasterField.BP_MasterField_C.UpdateTasksList
struct ABP_MasterField_C_UpdateTasksList_Params
{
	TEnumAsByte<E_FieldActivities_E_FieldActivities>   NextActivities;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ChunkDestination;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Sort;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.CheckChunkHarvested
struct ABP_MasterField_C_CheckChunkHarvested_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.PlantSlotInteraction
struct ABP_MasterField_C_PlantSlotInteraction_Params
{
	float                                              CheckRadius;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkilledFarmerBoost;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResourceOwner>               Items;                                                     // (Parm, OutParm)
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.ToolInteraction
struct ABP_MasterField_C_ToolInteraction_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.UpdateMeshes
struct ABP_MasterField_C_UpdateMeshes_Params
{
};

// Function BP_MasterField.BP_MasterField_C.GetAdditionalMeshComponentForStage
struct ABP_MasterField_C_GetAdditionalMeshComponentForStage_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   StaticMeshComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.UpdateChunkGround
struct ABP_MasterField_C_UpdateChunkGround_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SeasonalUpdateChunk
struct ABP_MasterField_C_SeasonalUpdateChunk_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SeasonalUpdateField
struct ABP_MasterField_C_SeasonalUpdateField_Params
{
};

// Function BP_MasterField.BP_MasterField_C.UpdateFieldGround
struct ABP_MasterField_C_UpdateFieldGround_Params
{
};

// Function BP_MasterField.BP_MasterField_C.CreateChunks
struct ABP_MasterField_C_CreateChunks_Params
{
	float                                              BeginFertility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.SetChunkTargetSeed
struct ABP_MasterField_C_SetChunkTargetSeed_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Seed                                    Seed;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SetPlaceable
struct ABP_MasterField_C_SetPlaceable_Params
{
	bool                                               Placeable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.CheckObstruction
struct ABP_MasterField_C_CheckObstruction_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.SetSecondCorner
struct ABP_MasterField_C_SetSecondCorner_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SetFirstCorner
struct ABP_MasterField_C_SetFirstCorner_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetMeshComponentForStage
struct ABP_MasterField_C_GetMeshComponentForStage_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   StaticMeshComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.UpdateAllInstances
struct ABP_MasterField_C_UpdateAllInstances_Params
{
};

// Function BP_MasterField.BP_MasterField_C.UpdateChunkInstances
struct ABP_MasterField_C_UpdateChunkInstances_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.UpdateInstance
struct ABP_MasterField_C_UpdateInstance_Params
{
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> TargetPlantStage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PlantSlot                               Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.InitInstances
struct ABP_MasterField_C_InitInstances_Params
{
};

// Function BP_MasterField.BP_MasterField_C.GetSeedForPlantStage
struct ABP_MasterField_C_GetSeedForPlantStage_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Seed                                    Seed;                                                      // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CanBeDestroyed?
struct ABP_MasterField_C_CanBeDestroyed__Params
{
	bool                                               CanBeDestroyed_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.FieldWasGrubbedUp?
struct ABP_MasterField_C_FieldWasGrubbedUp__Params
{
	bool                                               FieldWasGrubbedUp_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GenerateDestruction
struct ABP_MasterField_C_GenerateDestruction_Params
{
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CreateAreaMarkers
struct ABP_MasterField_C_CreateAreaMarkers_Params
{
};

// Function BP_MasterField.BP_MasterField_C.GetTerrainHitLocation
struct ABP_MasterField_C_GetTerrainHitLocation_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CheckDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.FindClosestFoliageSpawnPoint
struct ABP_MasterField_C_FindClosestFoliageSpawnPoint_Params
{
	TArray<struct FTransform>                          SpawnPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FTransform                                  RootTransform;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              Tolerance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Succes;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CheckFoliageInFieldBounds
struct ABP_MasterField_C_CheckFoliageInFieldBounds_Params
{
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  Chunk;                                                     // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CalculateFoliageSpawnPoints
struct ABP_MasterField_C_CalculateFoliageSpawnPoints_Params
{
	struct FVector                                     CenterLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfFoliage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          FoliageSpawnTransforms;                                    // (Parm, OutParm)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.GetChunkOccupied
struct ABP_MasterField_C_GetChunkOccupied_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Occupied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.SetChunkOccupied
struct ABP_MasterField_C_SetChunkOccupied_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Occupied;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.CalculateCenterLocationXY
struct ABP_MasterField_C_CalculateCenterLocationXY_Params
{
	struct FVector                                     V0;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v2;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CenterLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.FindClosestChunk
struct ABP_MasterField_C_FindClosestChunk_Params
{
	struct FVector                                     RootLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ChunkStates_E_ChunkStates>           ChunkState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreChunkState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyNoOccupied;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  Chunk;                                                     // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.GetHitChunk
struct ABP_MasterField_C_GetHitChunk_Params
{
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  Chunk;                                                     // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CheckFieldBounds
struct ABP_MasterField_C_CheckFieldBounds_Params
{
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyCheck;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  Chunk;                                                     // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.CheckBounds
struct ABP_MasterField_C_CheckBounds_Params
{
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     V0;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v1;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v2;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     V3;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.SortFieldCornerVertices
struct ABP_MasterField_C_SortFieldCornerVertices_Params
{
	TArray<struct FVector>                             SortedVertices;                                            // (Parm, OutParm)
};

// Function BP_MasterField.BP_MasterField_C.UserConstructionScript
struct ABP_MasterField_C_UserConstructionScript_Params
{
};

// Function BP_MasterField.BP_MasterField_C.InteractInput
struct ABP_MasterField_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.SetOccupied
struct ABP_MasterField_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SetTaskInActor
struct ABP_MasterField_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.ChangeTaskIsOccupied
struct ABP_MasterField_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_MasterField.BP_MasterField_C.PerformActorInteraction
struct ABP_MasterField_C_PerformActorInteraction_Params
{
};

// Function BP_MasterField.BP_MasterField_C.IsLookedAt
struct ABP_MasterField_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.InteractWithImpaledItem
struct ABP_MasterField_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.AddImpaledItem
struct ABP_MasterField_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.RemoveImpaledItem
struct ABP_MasterField_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.StartAttackFunction
struct ABP_MasterField_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.StopAttackFunction
struct ABP_MasterField_C_StopAttackFunction_Params
{
};

// Function BP_MasterField.BP_MasterField_C.CreateField
struct ABP_MasterField_C_CreateField_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.InitField
struct ABP_MasterField_C_InitField_Params
{
};

// Function BP_MasterField.BP_MasterField_C.Interact
struct ABP_MasterField_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.InteractStart
struct ABP_MasterField_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.InteractCancel
struct ABP_MasterField_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.SeasonalChanges
struct ABP_MasterField_C_SeasonalChanges_Params
{
};

// Function BP_MasterField.BP_MasterField_C.ToolInteract
struct ABP_MasterField_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterField.BP_MasterField_C.ReceiveBeginPlay
struct ABP_MasterField_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterField.BP_MasterField_C.ShowInspectorUI
struct ABP_MasterField_C_ShowInspectorUI_Params
{
};

// Function BP_MasterField.BP_MasterField_C.InitTaskList
struct ABP_MasterField_C_InitTaskList_Params
{
};

// Function BP_MasterField.BP_MasterField_C.InitMeshes
struct ABP_MasterField_C_InitMeshes_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterField.BP_MasterField_C.ExecuteUbergraph_BP_MasterField
struct ABP_MasterField_C_ExecuteUbergraph_BP_MasterField_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
