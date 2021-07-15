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

// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalRowName BPI");

	UChick_AnimBP_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalHeight");

	UChick_AnimBP_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetAnimalWorldLocation");

	UChick_AnimBP_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetAnimal");

	UChick_AnimBP_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetFear");

	UChick_AnimBP_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetFleeingTimer");

	UChick_AnimBP_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function Chick_AnimBP.Chick_AnimBP_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.CheckIsBuilding");

	UChick_AnimBP_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetSystemManager");

	UChick_AnimBP_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetInventoryComponent");

	UChick_AnimBP_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChick_AnimBP_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetForSale");

	UChick_AnimBP_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Buy");

	UChick_AnimBP_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetPrice_Sell");

	UChick_AnimBP_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Chick_AnimBP.Chick_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UChick_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.AnimGraph");

	UChick_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Chick_AnimBP.Chick_AnimBP_C.GetVariablesFromPawn
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::GetVariablesFromPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.GetVariablesFromPawn");

	UChick_AnimBP_C_GetVariablesFromPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.UpdateIKState");

	UChick_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.SetEngageTargetBPI");

	UChick_AnimBP_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.SetFear");

	UChick_AnimBP_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.OnWakeUp");

	UChick_AnimBP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.AddItemToHouse");

	UChick_AnimBP_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.UnpauseBrain");

	UChick_AnimBP_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.SetIsInWater");

	UChick_AnimBP_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.PauseBrain");

	UChick_AnimBP_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChick_AnimBP_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.UpdateMountEquipment");

	UChick_AnimBP_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.CheckDistance");

	UChick_AnimBP_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChick_AnimBP_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.SetForSale");

	UChick_AnimBP_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.Remove");

	UChick_AnimBP_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.CauseBleeding");

	UChick_AnimBP_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.OnSleep");

	UChick_AnimBP_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.Starving");

	UChick_AnimBP_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052
// (BlueprintEvent)
void UChick_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052");

	UChick_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.SetAnimalMovementMode BPI");

	UChick_AnimBP_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.BlueprintUpdateAnimation");

	UChick_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UChick_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.BlueprintBeginPlay");

	UChick_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
void UChick_AnimBP_C::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.AnimNotify_Land");

	UChick_AnimBP_C_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chick_AnimBP.Chick_AnimBP_C.ExecuteUbergraph_Chick_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChick_AnimBP_C::ExecuteUbergraph_Chick_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chick_AnimBP.Chick_AnimBP_C.ExecuteUbergraph_Chick_AnimBP");

	UChick_AnimBP_C_ExecuteUbergraph_Chick_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
