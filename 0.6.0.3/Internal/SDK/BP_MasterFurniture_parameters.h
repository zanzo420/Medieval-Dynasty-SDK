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

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsLinkedFurnitureStarted
struct ABP_MasterFurniture_C_IsLinkedFurnitureStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotWorldTransforms
struct ABP_MasterFurniture_C_GetSlotWorldTransforms_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  InteractTransform;                                         // (Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                                  FinalTransform;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeCurrentCapacity
struct ABP_MasterFurniture_C_ChangeCurrentCapacity_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotTransform
struct ABP_MasterFurniture_C_GetSlotTransform_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotOccupied
struct ABP_MasterFurniture_C_GetSlotOccupied_Params
{
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOccupied;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsWantToOccupy;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFinalLocation
struct ABP_MasterFurniture_C_GetFinalLocation_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  EndTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetSlotType
struct ABP_MasterFurniture_C_GetSlotType_Params
{
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidSlot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> Slot_Position;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureType
struct ABP_MasterFurniture_C_GetFurnitureType_Params
{
	TEnumAsByte<E_FurnitureType_E_FurnitureType>       FurnitureType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetCapacity
struct ABP_MasterFurniture_C_GetCapacity_Params
{
	int                                                CurrentCapacity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCapacity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractSlot
struct ABP_MasterFurniture_C_GetInteractSlot_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
	int                                                SlotID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInventoryComponent
struct ABP_MasterFurniture_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingReference
struct ABP_MasterFurniture_C_GetBuildingReference_Params
{
	class ABP_MasterBuilding_C*                        MasterBuilding;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetEntrances
struct ABP_MasterFurniture_C_GetEntrances_Params
{
	TArray<struct FVector>                             Entrances;                                                 // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetBuildingType
struct ABP_MasterFurniture_C_GetBuildingType_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               GetBuildingType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsGrabbable
struct ABP_MasterFurniture_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemNeeded
struct ABP_MasterFurniture_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractItem
struct ABP_MasterFurniture_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsItemInteractable
struct ABP_MasterFurniture_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAdditionalStatus
struct ABP_MasterFurniture_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractAdditionalStatus
struct ABP_MasterFurniture_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFishData
struct ABP_MasterFurniture_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetID
struct ABP_MasterFurniture_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractionDistance
struct ABP_MasterFurniture_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetOff-HandItem
struct ABP_MasterFurniture_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolNeeded
struct ABP_MasterFurniture_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCondition
struct ABP_MasterFurniture_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractCondition
struct ABP_MasterFurniture_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetOwnershipType
struct ABP_MasterFurniture_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTitle
struct ABP_MasterFurniture_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractResources
struct ABP_MasterFurniture_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFluidType
struct ABP_MasterFurniture_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractTime
struct ABP_MasterFurniture_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool_UI
struct ABP_MasterFurniture_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable_UI
struct ABP_MasterFurniture_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsToolInteractable
struct ABP_MasterFurniture_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetTaskFromActor
struct ABP_MasterFurniture_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractName
struct ABP_MasterFurniture_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractAction
struct ABP_MasterFurniture_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsInteractable
struct ABP_MasterFurniture_C_IsInteractable_Params
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

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractTool
struct ABP_MasterFurniture_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractCount
struct ABP_MasterFurniture_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetHeldItem
struct ABP_MasterFurniture_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetResourceType
struct ABP_MasterFurniture_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetNPCInteractAnimation
struct ABP_MasterFurniture_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckOccupied
struct ABP_MasterFurniture_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetInteractIcon
struct ABP_MasterFurniture_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPointOnTheMap
struct ABP_MasterFurniture_C_CheckPointOnTheMap_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnMap;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.RecoverResources
struct ABP_MasterFurniture_C_RecoverResources_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded_Impl
struct ABP_MasterFurniture_C_OnInteractionEnded_Impl_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted_Impl
struct ABP_MasterFurniture_C_OnInteractionStarted_Impl_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckMountedInteraction
struct ABP_MasterFurniture_C_CheckMountedInteraction_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateResourceStack
struct ABP_MasterFurniture_C_UpdateResourceStack_Params
{
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadRefillableContainerData
struct ABP_MasterFurniture_C_LoadRefillableContainerData_Params
{
	struct FST_SAVE_RefillableContainers               FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadContainerData
struct ABP_MasterFurniture_C_LoadContainerData_Params
{
	struct FST_SAVE_Containers                         FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadCampfireData
struct ABP_MasterFurniture_C_LoadCampfireData_Params
{
	struct FST_SAVE_Campfires                          FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.LoadTrapData
struct ABP_MasterFurniture_C_LoadTrapData_Params
{
	struct FST_SAVE_Traps                              FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetActivityFurnitureDataToSave
struct ABP_MasterFurniture_C_GetActivityFurnitureDataToSave_Params
{
	struct FST_SAVE_ActivityFurnitures                 FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetFurnitureDataToSave
struct ABP_MasterFurniture_C_GetFurnitureDataToSave_Params
{
	struct FST_SAVE_Furnitures                         FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetRefillableContainerDataToSave
struct ABP_MasterFurniture_C_GetRefillableContainerDataToSave_Params
{
	struct FST_SAVE_RefillableContainers               FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetContainerDataToSave
struct ABP_MasterFurniture_C_GetContainerDataToSave_Params
{
	struct FST_SAVE_Containers                         FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetTrapDataToSave
struct ABP_MasterFurniture_C_GetTrapDataToSave_Params
{
	struct FST_SAVE_Traps                              FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.GetCampfireDataToSave
struct ABP_MasterFurniture_C_GetCampfireDataToSave_Params
{
	struct FST_SAVE_Campfires                          FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdateBaseRotation
struct ABP_MasterFurniture_C_UpdateBaseRotation_Params
{
	struct FRotator                                    NewBaseRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnOwnershipSwap
struct ABP_MasterFurniture_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckEnoughResources
struct ABP_MasterFurniture_C_CheckEnoughResources_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckObstruction
struct ABP_MasterFurniture_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.DisableGhost
struct ABP_MasterFurniture_C_DisableGhost_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.EnableGhost
struct ABP_MasterFurniture_C_EnableGhost_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.CheckPlaceability
struct ABP_MasterFurniture_C_CheckPlaceability_Params
{
	bool                                               PlacementPossible;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Hidden;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.UserConstructionScript
struct ABP_MasterFurniture_C_UserConstructionScript_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.FurnitureNotify
struct ABP_MasterFurniture_C_FurnitureNotify_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.StopFurnitureAnim
struct ABP_MasterFurniture_C_StopFurnitureAnim_Params
{
	class ABP_BaseCharacter_C*                         Base_Character_Ref;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetVisibilityBasedAnimTickOption
struct ABP_MasterFurniture_C_SetVisibilityBasedAnimTickOption_Params
{
	Engine_EVisibilityBasedAnimTickOption              AnimTickOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.LinkFurniture
struct ABP_MasterFurniture_C_LinkFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SynchronizeWorkbenchAnim
struct ABP_MasterFurniture_C_SynchronizeWorkbenchAnim_Params
{
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractInput
struct ABP_MasterFurniture_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractStart
struct ABP_MasterFurniture_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetOccupied
struct ABP_MasterFurniture_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetTaskInActor
struct ABP_MasterFurniture_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ChangeTaskIsOccupied
struct ABP_MasterFurniture_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.PerformActorInteraction
struct ABP_MasterFurniture_C_PerformActorInteraction_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.IsLookedAt
struct ABP_MasterFurniture_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractWithImpaledItem
struct ABP_MasterFurniture_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.AddImpaledItem
struct ABP_MasterFurniture_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.RemoveImpaledItem
struct ABP_MasterFurniture_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.StartAttackFunction
struct ABP_MasterFurniture_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.StopAttackFunction
struct ABP_MasterFurniture_C_StopAttackFunction_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.DestroyFurniture
struct ABP_MasterFurniture_C_DestroyFurniture_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.FinishFurniture
struct ABP_MasterFurniture_C_FinishFurniture_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveTick
struct ABP_MasterFurniture_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.Interact
struct ABP_MasterFurniture_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ReceiveBeginPlay
struct ABP_MasterFurniture_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ShowInspectorUI
struct ABP_MasterFurniture_C_ShowInspectorUI_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.InteractCancel
struct ABP_MasterFurniture_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetWantToOccupy
struct ABP_MasterFurniture_C_SetWantToOccupy_Params
{
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishVisuals
struct ABP_MasterFurniture_C_ExecuteFinishVisuals_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteFinishLogic
struct ABP_MasterFurniture_C_ExecuteFinishLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.InitByBuilding
struct ABP_MasterFurniture_C_InitByBuilding_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ToolInteract
struct ABP_MasterFurniture_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetHidden
struct ABP_MasterFurniture_C_SetHidden_Params
{
	bool                                               Hidden;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.UpdatePlaceable
struct ABP_MasterFurniture_C_UpdatePlaceable_Params
{
	bool                                               Placeable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.SetMeshMobility
struct ABP_MasterFurniture_C_SetMeshMobility_Params
{
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.ExecuteUbergraph_BP_MasterFurniture
struct ABP_MasterFurniture_C_ExecuteUbergraph_BP_MasterFurniture_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionEnded__DelegateSignature
struct ABP_MasterFurniture_C_OnInteractionEnded__DelegateSignature_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnInteractionStarted__DelegateSignature
struct ABP_MasterFurniture_C_OnInteractionStarted__DelegateSignature_Params
{
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnPlayerOccupy__DelegateSignature
struct ABP_MasterFurniture_C_OnPlayerOccupy__DelegateSignature_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture.BP_MasterFurniture_C.OnDestroyFurniture__DelegateSignature
struct ABP_MasterFurniture_C_OnDestroyFurniture__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
