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

// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalRowName BPI");

	UHorse_AnimBP_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalHeight");

	UHorse_AnimBP_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetAnimalWorldLocation");

	UHorse_AnimBP_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Sell");

	UHorse_AnimBP_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetPrice_Buy");

	UHorse_AnimBP_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetForSale");

	UHorse_AnimBP_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetAnimal");

	UHorse_AnimBP_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetFear");

	UHorse_AnimBP_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetFleeingTimer");

	UHorse_AnimBP_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function Horse_AnimBP.Horse_AnimBP_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.CheckIsBuilding");

	UHorse_AnimBP_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetSystemManager");

	UHorse_AnimBP_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetInventoryComponent");

	UHorse_AnimBP_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetMountCameraRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::GetMountCameraRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetMountCameraRotation");

	UHorse_AnimBP_C_GetMountCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetSprintKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprintKeyDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::GetSprintKeyDown(bool* IsSprintKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetSprintKeyDown");

	UHorse_AnimBP_C_GetSprintKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetShouldSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::GetShouldSprint(bool* ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetShouldSprint");

	UHorse_AnimBP_C_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;

}


// Function Horse_AnimBP.Horse_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UHorse_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.AnimGraph");

	UHorse_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Horse_AnimBP.Horse_AnimBP_C.GetVariablesFromPawn
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::GetVariablesFromPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.GetVariablesFromPawn");

	UHorse_AnimBP_C_GetVariablesFromPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.UpdateIKState");

	UHorse_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.WalkPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::WalkPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.WalkPressed");

	UHorse_AnimBP_C_WalkPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.WalkReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::WalkReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.WalkReleased");

	UHorse_AnimBP_C_WalkReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::SetShouldSprint(bool ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetShouldSprint");

	UHorse_AnimBP_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.LookAtOnMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::LookAtOnMount(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.LookAtOnMount");

	UHorse_AnimBP_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Left_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::Left_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Left_Axis");

	UHorse_AnimBP_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Backwards_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::Backwards_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Backwards_Axis");

	UHorse_AnimBP_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.DismountReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::DismountReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.DismountReleased");

	UHorse_AnimBP_C_DismountReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountCameraFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::UpdateMountCameraFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountCameraFoV");

	UHorse_AnimBP_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.DismountPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::DismountPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.DismountPressed");

	UHorse_AnimBP_C_DismountPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetIsInWater");

	UHorse_AnimBP_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Down_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::Down_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Down_Axis");

	UHorse_AnimBP_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.UpdateMountEquipment");

	UHorse_AnimBP_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Right_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Right_Axis");

	UHorse_AnimBP_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHorse_AnimBP_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetForSale");

	UHorse_AnimBP_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SprintReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::SprintReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SprintReleased");

	UHorse_AnimBP_C_SprintReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.CauseBleeding");

	UHorse_AnimBP_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SprintPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::SprintPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SprintPressed");

	UHorse_AnimBP_C_SprintPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.OnSleep");

	UHorse_AnimBP_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Starving");

	UHorse_AnimBP_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.OnWakeUp");

	UHorse_AnimBP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetEngageTargetBPI");

	UHorse_AnimBP_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetFear");

	UHorse_AnimBP_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.AddItemToHouse");

	UHorse_AnimBP_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.UnpauseBrain");

	UHorse_AnimBP_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.PauseBrain");

	UHorse_AnimBP_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.CheckDistance");

	UHorse_AnimBP_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7
// (BlueprintEvent)
void UHorse_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7");

	UHorse_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Jump
// (BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::AnimNotify_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Jump");

	UHorse_AnimBP_C_AnimNotify_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_Land");

	UHorse_AnimBP_C_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.MountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::MountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.MountSpecial");

	UHorse_AnimBP_C_MountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_StopMountSpecial
// (BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::AnimNotify_StopMountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.AnimNotify_StopMountSpecial");

	UHorse_AnimBP_C_AnimNotify_StopMountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.SetAnimalMovementMode BPI");

	UHorse_AnimBP_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.MountStop
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::MountStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.MountStop");

	UHorse_AnimBP_C_MountStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.BlueprintUpdateAnimation");

	UHorse_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UHorse_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.BlueprintBeginPlay");

	UHorse_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.JumpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::JumpReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.JumpReleased");

	UHorse_AnimBP_C_JumpReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.JumpPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UHorse_AnimBP_C::JumpPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.JumpPressed");

	UHorse_AnimBP_C_JumpPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UHorse_AnimBP_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.Remove");

	UHorse_AnimBP_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Horse_AnimBP.Horse_AnimBP_C.ExecuteUbergraph_Horse_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHorse_AnimBP_C::ExecuteUbergraph_Horse_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horse_AnimBP.Horse_AnimBP_C.ExecuteUbergraph_Horse_AnimBP");

	UHorse_AnimBP_C_ExecuteUbergraph_Horse_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UHorse_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Horse, ABP_Horse_Male_C);
	READ_PTR_FULL(JumpMontage, UAnimMontage);
	READ_PTR_FULL(HorseSpeedCurve, UCurveFloat);
}

void UHorse_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Horse);
	DELE_PTR_FULL(JumpMontage);
	DELE_PTR_FULL(HorseSpeedCurve);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
