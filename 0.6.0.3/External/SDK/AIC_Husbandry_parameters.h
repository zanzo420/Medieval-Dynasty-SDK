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

// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalRowName BPI
struct AAIC_Husbandry_C_GetAnimalRowName_BPI_Params
{
	struct FName                                       SwitchAnimals_RowName;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalHeight
struct AAIC_Husbandry_C_GetAnimalHeight_Params
{
	float                                              Height;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalWorldLocation
struct AAIC_Husbandry_C_GetAnimalWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Sell
struct AAIC_Husbandry_C_GetPrice_Sell_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Buy
struct AAIC_Husbandry_C_GetPrice_Buy_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetForSale
struct AAIC_Husbandry_C_GetForSale_Params
{
	bool                                               ForSale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetInventoryComponent
struct AAIC_Husbandry_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       InventoryComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetSystemManager
struct AAIC_Husbandry_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.CheckIsBuilding
struct AAIC_Husbandry_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetFleeingTimer
struct AAIC_Husbandry_C_GetFleeingTimer_Params
{
	struct FTimerHandle                                FleeingTimer;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetFear
struct AAIC_Husbandry_C_GetFear_Params
{
	int                                                FearFactor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimal
struct AAIC_Husbandry_C_GetAnimal_Params
{
	class ABP_AnimalBase_C*                            AnimalBase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.Remove
struct AAIC_Husbandry_C_Remove_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.CheckDistance
struct AAIC_Husbandry_C_CheckDistance_Params
{
	struct FVector                                     PlayerLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.AddItemToHouse
struct AAIC_Husbandry_C_AddItemToHouse_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.SetFear
struct AAIC_Husbandry_C_SetFear_Params
{
	int                                                Fear;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.SetEngageTargetBPI
struct AAIC_Husbandry_C_SetEngageTargetBPI_Params
{
	class AActor*                                      Causer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.OnWakeUp
struct AAIC_Husbandry_C_OnWakeUp_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.Starving
struct AAIC_Husbandry_C_Starving_Params
{
	float                                              HungerDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.OnSleep
struct AAIC_Husbandry_C_OnSleep_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.CauseBleeding
struct AAIC_Husbandry_C_CauseBleeding_Params
{
	float                                              BleedDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.SetAnimalMovementMode BPI
struct AAIC_Husbandry_C_SetAnimalMovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.SetForSale
struct AAIC_Husbandry_C_SetForSale_Params
{
	bool                                               ForSale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_Husbandry.AIC_Husbandry_C.UpdateMountEquipment
struct AAIC_Husbandry_C_UpdateMountEquipment_Params
{
	bool                                               Unequip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemOutfit                              ItemData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.SetIsInWater
struct AAIC_Husbandry_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Husbandry.AIC_Husbandry_C.ReceiveBeginPlay
struct AAIC_Husbandry_C_ReceiveBeginPlay_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.PauseBrain
struct AAIC_Husbandry_C_PauseBrain_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.UnpauseBrain
struct AAIC_Husbandry_C_UnpauseBrain_Params
{
};

// Function AIC_Husbandry.AIC_Husbandry_C.ExecuteUbergraph_AIC_Husbandry
struct AAIC_Husbandry_C_ExecuteUbergraph_AIC_Husbandry_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
