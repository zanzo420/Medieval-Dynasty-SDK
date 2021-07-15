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

// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalRowName BPI");

	UChicken_AnimBP_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalHeight");

	UChicken_AnimBP_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimalWorldLocation");

	UChicken_AnimBP_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetAnimal");

	UChicken_AnimBP_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetFear");

	UChicken_AnimBP_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetFleeingTimer");

	UChicken_AnimBP_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.CheckIsBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.CheckIsBuilding");

	UChicken_AnimBP_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetSystemManager");

	UChicken_AnimBP_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetInventoryComponent");

	UChicken_AnimBP_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChicken_AnimBP_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetForSale");

	UChicken_AnimBP_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Buy");

	UChicken_AnimBP_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetPrice_Sell");

	UChicken_AnimBP_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UChicken_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.AnimGraph");

	UChicken_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.GetVariablesFromPawn
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::GetVariablesFromPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.GetVariablesFromPawn");

	UChicken_AnimBP_C_GetVariablesFromPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateIKState");

	UChicken_AnimBP_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.SetEngageTargetBPI");

	UChicken_AnimBP_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.SetFear");

	UChicken_AnimBP_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.OnWakeUp");

	UChicken_AnimBP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.AddItemToHouse");

	UChicken_AnimBP_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.UnpauseBrain");

	UChicken_AnimBP_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.SetIsInWater");

	UChicken_AnimBP_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.PauseBrain");

	UChicken_AnimBP_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChicken_AnimBP_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.UpdateMountEquipment");

	UChicken_AnimBP_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.CheckDistance");

	UChicken_AnimBP_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChicken_AnimBP_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.SetForSale");

	UChicken_AnimBP_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.Remove");

	UChicken_AnimBP_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.CauseBleeding");

	UChicken_AnimBP_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.OnSleep");

	UChicken_AnimBP_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.Starving");

	UChicken_AnimBP_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_125867CB4975D774481317BA0D3D6C59_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B5280514428D93E6D6FD80BB04611CC5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_B70906924FBC327DF754CCB96387B77E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_5BEF996E4B55E34525C0029ED899D4E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7BA20F2A464FF0E8123F66A36CCB3F28_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_EA8EA47A464ED2943ECBEEACA862053A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_04EA593548BCCC854867379ACAC3D21A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_42CE243644C75DA4023B8E91BD932571_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7B3D681B4E391A00CA8CB9974D208307_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C5FD4D2348A2D9F81E62F9928AF42387_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_C57F98FE48B237511F5361AA05355C22_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_59F60DFB4A842CD772D2FC844F1F0CC1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_E787D9134D19F515283D3BAA16158966_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_F2CAD3B0443772454B3F23A3250D801E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9
// (BlueprintEvent)
void UChicken_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9");

	UChicken_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_AnimBP_AnimGraphNode_TransitionResult_7CB581524FB2AE0120CDA1A9C20A4BD9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.SetAnimalMovementMode BPI");

	UChicken_AnimBP_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintUpdateAnimation");

	UChicken_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UChicken_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.BlueprintBeginPlay");

	UChicken_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.AnimNotify_Land
// (BlueprintCallable, BlueprintEvent)
void UChicken_AnimBP_C::AnimNotify_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.AnimNotify_Land");

	UChicken_AnimBP_C_AnimNotify_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Chicken_AnimBP.Chicken_AnimBP_C.ExecuteUbergraph_Chicken_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChicken_AnimBP_C::ExecuteUbergraph_Chicken_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chicken_AnimBP.Chicken_AnimBP_C.ExecuteUbergraph_Chicken_AnimBP");

	UChicken_AnimBP_C_ExecuteUbergraph_Chicken_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
