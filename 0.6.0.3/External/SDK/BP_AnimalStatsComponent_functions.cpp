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

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.RemoveAnimalFromSystems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::RemoveAnimalFromSystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.RemoveAnimalFromSystems");

	UBP_AnimalStatsComponent_C_RemoveAnimalFromSystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina_Jump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enough_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimalStatsComponent_C::CheckStamina_Jump(bool* Enough_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina_Jump");

	UBP_AnimalStatsComponent_C_CheckStamina_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough_ != nullptr)
		*Enough_ = params.Enough_;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Enough_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimalStatsComponent_C::CheckStamina(float Value, bool* Enough_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina");

	UBP_AnimalStatsComponent_C_CheckStamina_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough_ != nullptr)
		*Enough_ = params.Enough_;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina_Jump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enough                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimalStatsComponent_C::DecreaseStamina_Jump(bool* Enough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina_Jump");

	UBP_AnimalStatsComponent_C_DecreaseStamina_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough != nullptr)
		*Enough = params.Enough;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Enough                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AnimalStatsComponent_C::DecreaseStamina(float Value, bool* Enough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina");

	UBP_AnimalStatsComponent_C_DecreaseStamina_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough != nullptr)
		*Enough = params.Enough;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::IncreaseStamina(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseStamina");

	UBP_AnimalStatsComponent_C_IncreaseStamina_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAnimalAgeStageChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnAnimalAgeStageChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAnimalAgeStageChange");

	UBP_AnimalStatsComponent_C_OnAnimalAgeStageChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAgeChange
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnAgeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAgeChange");

	UBP_AnimalStatsComponent_C_OnAgeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DeadChance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSick                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsInjured                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Mood                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::SetStats(float Food, float water, float Health, int DeadChance, bool IsSick, bool IsInjured, float Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetStats");

	UBP_AnimalStatsComponent_C_SetStats_Params params;
	params.Food = Food;
	params.water = water;
	params.Health = Health;
	params.DeadChance = DeadChance;
	params.IsSick = IsSick;
	params.IsInjured = IsInjured;
	params.Mood = Mood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitLifeStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dirtiness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::InitLifeStats(float Health, float Stamina, float Food, float water, float Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitLifeStats");

	UBP_AnimalStatsComponent_C_InitLifeStats_Params params;
	params.Health = Health;
	params.Stamina = Stamina;
	params.Food = Food;
	params.water = water;
	params.Dirtiness = Dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::DecreaseHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseHealth");

	UBP_AnimalStatsComponent_C_DecreaseHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::IncreaseHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseHealth");

	UBP_AnimalStatsComponent_C_IncreaseHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::DecreaseWater(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseWater");

	UBP_AnimalStatsComponent_C_DecreaseWater_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::IncreaseWater(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseWater");

	UBP_AnimalStatsComponent_C_IncreaseWater_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseFood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::DecreaseFood(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseFood");

	UBP_AnimalStatsComponent_C_DecreaseFood_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseFood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::IncreaseFood(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseFood");

	UBP_AnimalStatsComponent_C_IncreaseFood_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetDirtiness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Dirtiness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::GetDirtiness(float* Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetDirtiness");

	UBP_AnimalStatsComponent_C_GetDirtiness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtiness != nullptr)
		*Dirtiness = params.Dirtiness;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetDirtiness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Dirtiness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::SetDirtiness(float Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetDirtiness");

	UBP_AnimalStatsComponent_C_SetDirtiness_Params params;
	params.Dirtiness = Dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateDirtiness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::UpdateDirtiness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateDirtiness");

	UBP_AnimalStatsComponent_C_UpdateDirtiness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseMood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::DecreaseMood(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseMood");

	UBP_AnimalStatsComponent_C_DecreaseMood_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseMood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::IncreaseMood(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseMood");

	UBP_AnimalStatsComponent_C_IncreaseMood_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetAnimalStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mood                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::GetAnimalStats(TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, float* Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetAnimalStats");

	UBP_AnimalStatsComponent_C_GetAnimalStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (Mood != nullptr)
		*Mood = params.Mood;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage> AgeStage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mood                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::GetStats(TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>* AgeStage, float* Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetStats");

	UBP_AnimalStatsComponent_C_GetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (AgeStage != nullptr)
		*AgeStage = params.AgeStage;
	if (Mood != nullptr)
		*Mood = params.Mood;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetInitialStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MatureAge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinDeadAge                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage> AgeStage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::SetInitialStats(TEnumAsByte<E_Sex_E_Sex> Sex, float Age, float MatureAge, float MinDeadAge, TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage> AgeStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetInitialStats");

	UBP_AnimalStatsComponent_C_SetInitialStats_Params params;
	params.Sex = Sex;
	params.Age = Age;
	params.MatureAge = MatureAge;
	params.MinDeadAge = MinDeadAge;
	params.AgeStage = AgeStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckDeadChance
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::CheckDeadChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckDeadChance");

	UBP_AnimalStatsComponent_C_CheckDeadChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseAge
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::IncreaseAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseAge");

	UBP_AnimalStatsComponent_C_IncreaseAge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitStatComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        BaseAnimal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::InitStatComponent(class ABP_AnimalBase_C* BaseAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitStatComponent");

	UBP_AnimalStatsComponent_C_InitStatComponent_Params params;
	params.BaseAnimal = BaseAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ResetStats
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::ResetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ResetStats");

	UBP_AnimalStatsComponent_C_ResetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateOnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::UpdateOnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateOnSeasonChanged");

	UBP_AnimalStatsComponent_C_UpdateOnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StartTimer_StaminaAndHealth
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::StartTimer_StaminaAndHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StartTimer_StaminaAndHealth");

	UBP_AnimalStatsComponent_C_StartTimer_StaminaAndHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StopTimer_StaminaAndHealth
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::StopTimer_StaminaAndHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StopTimer_StaminaAndHealth");

	UBP_AnimalStatsComponent_C_StopTimer_StaminaAndHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OpenStaminaGate
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OpenStaminaGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OpenStaminaGate");

	UBP_AnimalStatsComponent_C_OpenStaminaGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CloseStaminaGate
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::CloseStaminaGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CloseStaminaGate");

	UBP_AnimalStatsComponent_C_CloseStaminaGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateStaminaAndHealth
// (BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::UpdateStaminaAndHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateStaminaAndHealth");

	UBP_AnimalStatsComponent_C_UpdateStaminaAndHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ExecuteUbergraph_BP_AnimalStatsComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalStatsComponent_C::ExecuteUbergraph_BP_AnimalStatsComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ExecuteUbergraph_BP_AnimalStatsComponent");

	UBP_AnimalStatsComponent_C_ExecuteUbergraph_BP_AnimalStatsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnEncumbered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnEncumbered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnEncumbered__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnEncumbered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnStaminaStartIncreasing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnStaminaChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaChange__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnStaminaChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnWaterChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnWaterChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnWaterChange__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnWaterChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnFoodChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnFoodChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnFoodChange__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnFoodChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnDead__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDead__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnDead__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDirtinessChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnDirtinessChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDirtinessChange__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnDirtinessChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnHealthChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_AnimalStatsComponent_C::OnHealthChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnHealthChange__DelegateSignature");

	UBP_AnimalStatsComponent_C_OnHealthChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_AnimalStatsComponent_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(BaseAnimalReference, ABP_AnimalBase_C);
}

void UBP_AnimalStatsComponent_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(BaseAnimalReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
