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

// Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_OutOfSight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::GetTickInterval_OutOfSight(float* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_OutOfSight");

	UBP_BoostComponent_C_GetTickInterval_OutOfSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Far
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::GetTickInterval_Far(float* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Far");

	UBP_BoostComponent_C_GetTickInterval_Far_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Medium
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::GetTickInterval_Medium(float* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Medium");

	UBP_BoostComponent_C_GetTickInterval_Medium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::GetTickInterval_Close(float* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Close");

	UBP_BoostComponent_C_GetTickInterval_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Base
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::GetTickInterval_Base(float* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.GetTickInterval_Base");

	UBP_BoostComponent_C_GetTickInterval_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function BP_BoostComponent.BP_BoostComponent_C.StopAllTimer
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::StopAllTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.StopAllTimer");

	UBP_BoostComponent_C_StopAllTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.SetOwnerSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::SetOwnerSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.SetOwnerSettings");

	UBP_BoostComponent_C_SetOwnerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.DistanceCheckForDisplayNPC
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::DistanceCheckForDisplayNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.DistanceCheckForDisplayNPC");

	UBP_BoostComponent_C_DistanceCheckForDisplayNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.InitDistanceCheckForDisplayNPC
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::InitDistanceCheckForDisplayNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.InitDistanceCheckForDisplayNPC");

	UBP_BoostComponent_C_InitDistanceCheckForDisplayNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.CalculateDistanceForDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OptimizationStage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::CalculateDistanceForDisplay(int* OptimizationStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.CalculateDistanceForDisplay");

	UBP_BoostComponent_C_CalculateDistanceForDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptimizationStage != nullptr)
		*OptimizationStage = params.OptimizationStage;

}


// Function BP_BoostComponent.BP_BoostComponent_C.RunOptimizationLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::RunOptimizationLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.RunOptimizationLogic");

	UBP_BoostComponent_C_RunOptimizationLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.NPCDeathStopComponent_Event
// (BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::NPCDeathStopComponent_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.NPCDeathStopComponent_Event");

	UBP_BoostComponent_C_NPCDeathStopComponent_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.BoostEnabled
// (BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::BoostEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.BoostEnabled");

	UBP_BoostComponent_C_BoostEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.ExecuteUbergraph_BP_BoostComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BoostComponent_C::ExecuteUbergraph_BP_BoostComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.ExecuteUbergraph_BP_BoostComponent");

	UBP_BoostComponent_C_ExecuteUbergraph_BP_BoostComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.NoneOptimization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::NoneOptimization__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.NoneOptimization__DelegateSignature");

	UBP_BoostComponent_C_NoneOptimization__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.FarOptimization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::FarOptimization__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.FarOptimization__DelegateSignature");

	UBP_BoostComponent_C_FarOptimization__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.MediumOptimization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::MediumOptimization__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.MediumOptimization__DelegateSignature");

	UBP_BoostComponent_C_MediumOptimization__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.CloseOptimization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::CloseOptimization__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.CloseOptimization__DelegateSignature");

	UBP_BoostComponent_C_CloseOptimization__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.DeactivateNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::DeactivateNPC__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.DeactivateNPC__DelegateSignature");

	UBP_BoostComponent_C_DeactivateNPC__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.ActivateNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::ActivateNPC__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.ActivateNPC__DelegateSignature");

	UBP_BoostComponent_C_ActivateNPC__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoostComponent.BP_BoostComponent_C.NPCDeathStopComponent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_BoostComponent_C::NPCDeathStopComponent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoostComponent.BP_BoostComponent_C.NPCDeathStopComponent__DelegateSignature");

	UBP_BoostComponent_C_NPCDeathStopComponent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
