// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AIC_Prey.AIC_Prey_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetAnimalRowName BPI");

	AAIC_Prey_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function AIC_Prey.AIC_Prey_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetAnimalHeight");

	AAIC_Prey_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function AIC_Prey.AIC_Prey_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetAnimalWorldLocation");

	AAIC_Prey_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function AIC_Prey.AIC_Prey_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetPrice_Sell");

	AAIC_Prey_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function AIC_Prey.AIC_Prey_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetPrice_Buy");

	AAIC_Prey_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function AIC_Prey.AIC_Prey_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_Prey_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetForSale");

	AAIC_Prey_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function AIC_Prey.AIC_Prey_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetInventoryComponent");

	AAIC_Prey_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function AIC_Prey.AIC_Prey_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetSystemManager");

	AAIC_Prey_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function AIC_Prey.AIC_Prey_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.CheckIsBuilding");

	AAIC_Prey_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function AIC_Prey.AIC_Prey_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetFleeingTimer");

	AAIC_Prey_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function AIC_Prey.AIC_Prey_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetFear");

	AAIC_Prey_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function AIC_Prey.AIC_Prey_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.GetAnimal");

	AAIC_Prey_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function AIC_Prey.AIC_Prey_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.Remove");

	AAIC_Prey_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.CheckDistance");

	AAIC_Prey_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.AddItemToHouse");

	AAIC_Prey_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.SetFear");

	AAIC_Prey_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.SetEngageTargetBPI");

	AAIC_Prey_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.OnWakeUp");

	AAIC_Prey_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.Starving");

	AAIC_Prey_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.OnSleep");

	AAIC_Prey_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.CauseBleeding");

	AAIC_Prey_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.SetAnimalMovementMode BPI");

	AAIC_Prey_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_Prey_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.SetForSale");

	AAIC_Prey_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AAIC_Prey_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.UpdateMountEquipment");

	AAIC_Prey_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.SetIsInWater");

	AAIC_Prey_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAIC_Prey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.ReceiveBeginPlay");

	AAIC_Prey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.PauseBrain");

	AAIC_Prey_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_Prey_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.UnpauseBrain");

	AAIC_Prey_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_Prey.AIC_Prey_C.ExecuteUbergraph_AIC_Prey
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Prey_C::ExecuteUbergraph_AIC_Prey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Prey.AIC_Prey_C.ExecuteUbergraph_AIC_Prey");

	AAIC_Prey_C_ExecuteUbergraph_AIC_Prey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAIC_Prey_C::AfterRead()
{
	AAIController::AfterRead();

}

void AAIC_Prey_C::BeforeDelete()
{
	AAIController::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
