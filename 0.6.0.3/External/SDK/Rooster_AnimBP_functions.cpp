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

// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalRowName BPI");

	URooster_AnimBP_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalHeight");

	URooster_AnimBP_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimalWorldLocation");

	URooster_AnimBP_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetAnimal");

	URooster_AnimBP_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetFear");

	URooster_AnimBP_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetFleeingTimer");

	URooster_AnimBP_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.CheckIsBuilding");

	URooster_AnimBP_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetSystemManager");

	URooster_AnimBP_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetInventoryComponent");

	URooster_AnimBP_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URooster_AnimBP_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetForSale");

	URooster_AnimBP_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Buy");

	URooster_AnimBP_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetPrice_Sell");

	URooster_AnimBP_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void URooster_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.AnimGraph");

	URooster_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.GetVariablesFromPawn
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::GetVariablesFromPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.GetVariablesFromPawn");

	URooster_AnimBP_C_GetVariablesFromPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateIKState");

	URooster_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.SetEngageTargetBPI");

	URooster_AnimBP_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.SetFear");

	URooster_AnimBP_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.OnWakeUp");

	URooster_AnimBP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.AddItemToHouse");

	URooster_AnimBP_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.UnpauseBrain");

	URooster_AnimBP_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.SetIsInWater");

	URooster_AnimBP_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.PauseBrain");

	URooster_AnimBP_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void URooster_AnimBP_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.UpdateMountEquipment");

	URooster_AnimBP_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.CheckDistance");

	URooster_AnimBP_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URooster_AnimBP_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.SetForSale");

	URooster_AnimBP_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.Remove");

	URooster_AnimBP_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.CauseBleeding");

	URooster_AnimBP_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.OnSleep");

	URooster_AnimBP_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.Starving");

	URooster_AnimBP_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_0F0D8C274AFE4DA42AC38E932B81C945_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_7A35FC1746DBC759DEF5A2A4A2A9CF77_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_520A53D84F4E47950E98069F84472D45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_F61C8A634AEF84BE0E1942ADD6090CE8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_4A2588D548BDC50E69E5379BB9AC73B7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E579DBB9425C0E98F2892C8E0EB8E531_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_906A44F44576CBE8801D7898A07C60EF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_438CA8DC40DC11D915F85CBE5D23C507_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E2E0145D478DEC2881049AB5895A6F36_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_2516FEA04189E0592EA5FF996DECD646_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_3355CAF64946A634F7D2ED8D550BFDB5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_1D3333E549C7D997FE5D1CB6717E26EE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_B1B097B6471413A9F1AFF1A4D9CA42E1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_10BC0EEC431DFC9522DB26B15E79ED3B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75
// (BlueprintEvent)
void URooster_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75");

	URooster_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Rooster_AnimBP_AnimGraphNode_TransitionResult_E4A43A3243C5ACFDB6E7E78738CA8C75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.SetAnimalMovementMode BPI");

	URooster_AnimBP_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintUpdateAnimation");

	URooster_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void URooster_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.BlueprintBeginPlay");

	URooster_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
void URooster_AnimBP_C::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.AnimNotify_Land");

	URooster_AnimBP_C_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Rooster_AnimBP.Rooster_AnimBP_C.ExecuteUbergraph_Rooster_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URooster_AnimBP_C::ExecuteUbergraph_Rooster_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rooster_AnimBP.Rooster_AnimBP_C.ExecuteUbergraph_Rooster_AnimBP");

	URooster_AnimBP_C_ExecuteUbergraph_Rooster_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URooster_AnimBP_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(RoosterRef, ABP_HusbandryAI_C);
}

void URooster_AnimBP_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(RoosterRef);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
