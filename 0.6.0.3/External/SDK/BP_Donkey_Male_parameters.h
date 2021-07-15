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

// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMovementVars
struct ABP_Donkey_Male_C_UpdateMovementVars_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToDismount
struct ABP_Donkey_Male_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToMount
struct ABP_Donkey_Male_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.HideReins
struct ABP_Donkey_Male_C_HideReins_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateTalentsForHorse
struct ABP_Donkey_Male_C_UpdateTalentsForHorse_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateEssentialVariables
struct ABP_Donkey_Male_C_CalculateEssentialVariables_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateAnimalMovementSettings
struct ABP_Donkey_Male_C_UpdateAnimalMovementSettings_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.IsToolNeeded
struct ABP_Donkey_Male_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateMaxWalkSpeed
struct ABP_Donkey_Male_C_CalculateMaxWalkSpeed_Params
{
	float                                              WalkSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.GetInventoryComponent
struct ABP_Donkey_Male_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.GetInteractAction
struct ABP_Donkey_Male_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.IsInteractable
struct ABP_Donkey_Male_C_IsInteractable_Params
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

// Function BP_Donkey_Male.BP_Donkey_Male_C.UserConstructionScript
struct ABP_Donkey_Male_C_UserConstructionScript_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.Interact
struct ABP_Donkey_Male_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveBeginPlay
struct ABP_Donkey_Male_C_ReceiveBeginPlay_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMountEquipment
struct ABP_Donkey_Male_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.EventDead
struct ABP_Donkey_Male_C_EventDead_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveTick
struct ABP_Donkey_Male_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.EnableNPC
struct ABP_Donkey_Male_C_EnableNPC_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.DisableNPC
struct ABP_Donkey_Male_C_DisableNPC_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.CloseOptimization
struct ABP_Donkey_Male_C_CloseOptimization_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.MediumOptimization
struct ABP_Donkey_Male_C_MediumOptimization_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.NoneOptimization
struct ABP_Donkey_Male_C_NoneOptimization_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.FarOptimization
struct ABP_Donkey_Male_C_FarOptimization_Params
{
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveEndPlay
struct ABP_Donkey_Male_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Donkey_Male.BP_Donkey_Male_C.ExecuteUbergraph_BP_Donkey_Male
struct ABP_Donkey_Male_C_ExecuteUbergraph_BP_Donkey_Male_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
