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

// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalRowName BPI");

	UDonkey_AnimBP_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalHeight");

	UDonkey_AnimBP_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimalWorldLocation");

	UDonkey_AnimBP_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Sell");

	UDonkey_AnimBP_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetPrice_Buy");

	UDonkey_AnimBP_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetForSale");

	UDonkey_AnimBP_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetAnimal");

	UDonkey_AnimBP_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetFear");

	UDonkey_AnimBP_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetFleeingTimer");

	UDonkey_AnimBP_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.CheckIsBuilding");

	UDonkey_AnimBP_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetSystemManager");

	UDonkey_AnimBP_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetInventoryComponent");

	UDonkey_AnimBP_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetMountCameraRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::GetMountCameraRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetMountCameraRotation");

	UDonkey_AnimBP_C_GetMountCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetSprintKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprintKeyDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::GetSprintKeyDown(bool* IsSprintKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetSprintKeyDown");

	UDonkey_AnimBP_C_GetSprintKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetShouldSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::GetShouldSprint(bool* ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetShouldSprint");

	UDonkey_AnimBP_C_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UDonkey_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.AnimGraph");

	UDonkey_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.GetVariablesFromPawn
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::GetVariablesFromPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.GetVariablesFromPawn");

	UDonkey_AnimBP_C_GetVariablesFromPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateIKState");

	UDonkey_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.DismountPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::DismountPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.DismountPressed");

	UDonkey_AnimBP_C_DismountPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.DismountReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::DismountReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.DismountReleased");

	UDonkey_AnimBP_C_DismountReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.WalkPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::WalkPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.WalkPressed");

	UDonkey_AnimBP_C_WalkPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.WalkReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::WalkReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.WalkReleased");

	UDonkey_AnimBP_C_WalkReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::SetShouldSprint(bool ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetShouldSprint");

	UDonkey_AnimBP_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.LookAtOnMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::LookAtOnMount(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.LookAtOnMount");

	UDonkey_AnimBP_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Left_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::Left_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Left_Axis");

	UDonkey_AnimBP_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Backwards_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::Backwards_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Backwards_Axis");

	UDonkey_AnimBP_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Down_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::Down_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Down_Axis");

	UDonkey_AnimBP_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountCameraFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::UpdateMountCameraFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountCameraFoV");

	UDonkey_AnimBP_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Right_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Right_Axis");

	UDonkey_AnimBP_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetIsInWater");

	UDonkey_AnimBP_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SprintReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SprintReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SprintReleased");

	UDonkey_AnimBP_C_SprintReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.UpdateMountEquipment");

	UDonkey_AnimBP_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SprintPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SprintPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SprintPressed");

	UDonkey_AnimBP_C_SprintPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDonkey_AnimBP_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetForSale");

	UDonkey_AnimBP_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.CauseBleeding");

	UDonkey_AnimBP_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.OnSleep");

	UDonkey_AnimBP_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Starving");

	UDonkey_AnimBP_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.OnWakeUp");

	UDonkey_AnimBP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetEngageTargetBPI");

	UDonkey_AnimBP_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetFear");

	UDonkey_AnimBP_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.AddItemToHouse");

	UDonkey_AnimBP_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.UnpauseBrain");

	UDonkey_AnimBP_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.PauseBrain");

	UDonkey_AnimBP_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.CheckDistance");

	UDonkey_AnimBP_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5
// (BlueprintEvent)
void UDonkey_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5");

	UDonkey_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Jump
// (BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::AnimNotify_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Jump");

	UDonkey_AnimBP_C_AnimNotify_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_Land");

	UDonkey_AnimBP_C_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.MountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::MountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.MountSpecial");

	UDonkey_AnimBP_C_MountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_StopMountSpecial
// (BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::AnimNotify_StopMountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.AnimNotify_StopMountSpecial");

	UDonkey_AnimBP_C_AnimNotify_StopMountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.SetAnimalMovementMode BPI");

	UDonkey_AnimBP_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.MountStop
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::MountStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.MountStop");

	UDonkey_AnimBP_C_MountStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintUpdateAnimation");

	UDonkey_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UDonkey_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.BlueprintBeginPlay");

	UDonkey_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.JumpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::JumpReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.JumpReleased");

	UDonkey_AnimBP_C_JumpReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.JumpPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDonkey_AnimBP_C::JumpPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.JumpPressed");

	UDonkey_AnimBP_C_JumpPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UDonkey_AnimBP_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.Remove");

	UDonkey_AnimBP_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Donkey_AnimBP.Donkey_AnimBP_C.ExecuteUbergraph_Donkey_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDonkey_AnimBP_C::ExecuteUbergraph_Donkey_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_AnimBP.Donkey_AnimBP_C.ExecuteUbergraph_Donkey_AnimBP");

	UDonkey_AnimBP_C_ExecuteUbergraph_Donkey_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDonkey_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Donkey, ABP_Donkey_Male_C);
	READ_PTR_FULL(JumpMontage, UAnimMontage);
	READ_PTR_FULL(DonkeySpeedCurve, UCurveFloat);
}

void UDonkey_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Donkey);
	DELE_PTR_FULL(JumpMontage);
	DELE_PTR_FULL(DonkeySpeedCurve);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
