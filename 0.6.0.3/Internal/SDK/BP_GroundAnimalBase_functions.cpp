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

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ChooseMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ChooseMaxWalkSpeed");

	ABP_GroundAnimalBase_C_ChooseMaxWalkSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.InitiateCombat
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::InitiateCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.InitiateCombat");

	ABP_GroundAnimalBase_C_InitiateCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RestState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState> RestState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_RestState(TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState>* RestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RestState");

	ABP_GroundAnimalBase_C_GetBlackboardValues_RestState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RestState != nullptr)
		*RestState = params.RestState;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Action");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_DefenseState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_DefenseState(TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState>* DefenseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_DefenseState");

	ABP_GroundAnimalBase_C_GetBlackboardValues_DefenseState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DefenseState != nullptr)
		*DefenseState = params.DefenseState;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_FeedingBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_FeedingBehavior(TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior>* FeedingBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_FeedingBehavior");

	ABP_GroundAnimalBase_C_GetBlackboardValues_FeedingBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FeedingBehavior != nullptr)
		*FeedingBehavior = params.FeedingBehavior;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_EngageBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_EngageBehavior(TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior>* EngageBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_EngageBehavior");

	ABP_GroundAnimalBase_C_GetBlackboardValues_EngageBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EngageBehavior != nullptr)
		*EngageBehavior = params.EngageBehavior;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_BiggestNeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_BiggestNeed(TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors>* BiggestNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_BiggestNeed");

	ABP_GroundAnimalBase_C_GetBlackboardValues_BiggestNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BiggestNeed != nullptr)
		*BiggestNeed = params.BiggestNeed;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RoamBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_RoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior>* RoamBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RoamBehavior");

	ABP_GroundAnimalBase_C_GetBlackboardValues_RoamBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RoamBehavior != nullptr)
		*RoamBehavior = params.RoamBehavior;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_AIState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState> AIState                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_AIState(TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>* AIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_AIState");

	ABP_GroundAnimalBase_C_GetBlackboardValues_AIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AIState != nullptr)
		*AIState = params.AIState;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RestState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState> RestState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_RestState(TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState> RestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RestState");

	ABP_GroundAnimalBase_C_SetBlackboardValues_RestState_Params params;
	params.RestState = RestState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Action");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_DefenseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_DefenseState(TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_DefenseState");

	ABP_GroundAnimalBase_C_SetBlackboardValues_DefenseState_Params params;
	params.DefenseState = DefenseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_FeedingBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_FeedingBehavior(TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_FeedingBehavior");

	ABP_GroundAnimalBase_C_SetBlackboardValues_FeedingBehavior_Params params;
	params.FeedingBehavior = FeedingBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_EngageBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_EngageBehavior(TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_EngageBehavior");

	ABP_GroundAnimalBase_C_SetBlackboardValues_EngageBehavior_Params params;
	params.EngageBehavior = EngageBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_BiggestNeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_BiggestNeed(TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_BiggestNeed");

	ABP_GroundAnimalBase_C_SetBlackboardValues_BiggestNeed_Params params;
	params.BiggestNeed = BiggestNeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RoamBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_RoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RoamBehavior");

	ABP_GroundAnimalBase_C_SetBlackboardValues_RoamBehavior_Params params;
	params.RoamBehavior = RoamBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_AIState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState> AIState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_AIState(TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState> AIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_AIState");

	ABP_GroundAnimalBase_C_SetBlackboardValues_AIState_Params params;
	params.AIState = AIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RunMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_RunMode(TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode>* RunMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RunMode");

	ABP_GroundAnimalBase_C_GetBlackboardValues_RunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RunMode != nullptr)
		*RunMode = params.RunMode;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RunMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_RunMode(TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RunMode");

	ABP_GroundAnimalBase_C_SetBlackboardValues_RunMode_Params params;
	params.RunMode = RunMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Int
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            IntValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Int(TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt, int* IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Int");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Int_Params params;
	params.BlackboardInt = BlackboardInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntValue != nullptr)
		*IntValue = params.IntValue;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Float
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FloatValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Float(TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float* FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Float");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Float_Params params;
	params.BlackboardFloat = BlackboardFloat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Vector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 VectorValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Vector(TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector* VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Vector");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Vector_Params params;
	params.BlackboardVector = BlackboardVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Int
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Int(TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Int");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Int_Params params;
	params.BlackboardInt = BlackboardInt;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Float
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Float(TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Float");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Float_Params params;
	params.BlackboardFloat = BlackboardFloat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Vector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Vector(TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Vector");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Vector_Params params;
	params.BlackboardVector = BlackboardVector;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Boolean
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           BooleanValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Boolean(TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Boolean");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BooleanValue != nullptr)
		*BooleanValue = params.BooleanValue;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Object
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 ObjectValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::GetBlackboardValues_Object(TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject** ObjectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Object");

	ABP_GroundAnimalBase_C_GetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectValue != nullptr)
		*ObjectValue = params.ObjectValue;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Boolean
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Boolean(TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Boolean");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetBlackboardValues_Object(TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Object");

	ABP_GroundAnimalBase_C_SetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CalculateMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          WalkSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CalculateMaxWalkSpeed");

	ABP_GroundAnimalBase_C_CalculateMaxWalkSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalBleed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimalBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalBleed");

	ABP_GroundAnimalBase_C_AnimalBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetCurrentHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::SetCurrentHP(float CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetCurrentHP");

	ABP_GroundAnimalBase_C_SetCurrentHP_Params params;
	params.CurrentHP = CurrentHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimRest_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimRest_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimRest_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimRest_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDrink_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimDrink_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDrink_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimDrink_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEat_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimEat_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEat_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimEat_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimHit_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimHit_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimHit_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimHit_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDeath_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimDeath_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDeath_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimDeath_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimAttack_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimAttack_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimAttack_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimAttack_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEngage_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimEngage_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEngage_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimEngage_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimIdle_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAnimIdle_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimIdle_ChooseIndex");

	ABP_GroundAnimalBase_C_fnAnimIdle_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForActorInMelee
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Actor_Found                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::fnCheckForActorInMelee(bool* Actor_Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForActorInMelee");

	ABP_GroundAnimalBase_C_fnCheckForActorInMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor_Found != nullptr)
		*Actor_Found = params.Actor_Found;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAddComponents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LookForMate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NaturalDeath                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_Comp_LookForMate_C*  LookForMate_Ref                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Comp_NaturalDeath_C* NaturalDeath_Ref               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnAddComponents(bool LookForMate, bool NaturalDeath, class UBP_Comp_LookForMate_C** LookForMate_Ref, class UBP_Comp_NaturalDeath_C** NaturalDeath_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAddComponents");

	ABP_GroundAnimalBase_C_fnAddComponents_Params params;
	params.LookForMate = LookForMate;
	params.NaturalDeath = NaturalDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LookForMate_Ref != nullptr)
		*LookForMate_Ref = params.LookForMate_Ref;
	if (NaturalDeath_Ref != nullptr)
		*NaturalDeath_Ref = params.NaturalDeath_Ref;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageParams
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::fnSetEngageParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageParams");

	ABP_GroundAnimalBase_C_fnSetEngageParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDisengage
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::fnDisengage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDisengage");

	ABP_GroundAnimalBase_C_fnDisengage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SensedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnSetEngageTarget(class AActor* SensedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageTarget");

	ABP_GroundAnimalBase_C_fnSetEngageTarget_Params params;
	params.SensedActor = SensedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDoMeleeDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnDoMeleeDamage(const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDoMeleeDamage");

	ABP_GroundAnimalBase_C_fnDoMeleeDamage_Params params;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetRoamBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> NewRoamBehavior                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::fnSetRoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior>* NewRoamBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetRoamBehavior");

	ABP_GroundAnimalBase_C_fnSetRoamBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewRoamBehavior != nullptr)
		*NewRoamBehavior = params.NewRoamBehavior;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForStimulus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAIStimulus>     Stimuli                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Detected_Something             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::fnCheckForStimulus(TArray<struct FAIStimulus>* Stimuli, bool* Detected_Something)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForStimulus");

	ABP_GroundAnimalBase_C_fnCheckForStimulus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stimuli != nullptr)
		*Stimuli = params.Stimuli;
	if (Detected_Something != nullptr)
		*Detected_Something = params.Detected_Something;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnMakeMovementNoise
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::fnMakeMovementNoise()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnMakeMovementNoise");

	ABP_GroundAnimalBase_C_fnMakeMovementNoise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.UserConstructionScript");

	ABP_GroundAnimalBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__FinishedFunc
// (BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimPhysicsBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__FinishedFunc");

	ABP_GroundAnimalBase_C_AnimPhysicsBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__UpdateFunc
// (BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimPhysicsBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__UpdateFunc");

	ABP_GroundAnimalBase_C_AnimPhysicsBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckPerception
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EventCheckPerception()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckPerception");

	ABP_GroundAnimalBase_C_EventCheckPerception_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABP_GroundAnimalBase_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	ABP_GroundAnimalBase_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlayAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BP_Enum_AnimType_EBP_Enum_AnimType> AnimationType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::EventPlayAnimation(TEnumAsByte<BP_Enum_AnimType_EBP_Enum_AnimType> AnimationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlayAnimation");

	ABP_GroundAnimalBase_C_EventPlayAnimation_Params params;
	params.AnimationType = AnimationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.FarOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::FarOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.FarOptimization");

	ABP_GroundAnimalBase_C_FarOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.NoneOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::NoneOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.NoneOptimization");

	ABP_GroundAnimalBase_C_NoneOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MediumOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::MediumOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MediumOptimization");

	ABP_GroundAnimalBase_C_MediumOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CloseOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::CloseOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CloseOptimization");

	ABP_GroundAnimalBase_C_CloseOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DisableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::DisableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DisableNPC");

	ABP_GroundAnimalBase_C_DisableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EnableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EnableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EnableNPC");

	ABP_GroundAnimalBase_C_EnableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveTick");

	ABP_GroundAnimalBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GroundAnimalBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveBeginPlay");

	ABP_GroundAnimalBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventDead");

	ABP_GroundAnimalBase_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventTookDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::EventTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventTookDamage");

	ABP_GroundAnimalBase_C_EventTookDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventAggroTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EventAggroTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventAggroTimer");

	ABP_GroundAnimalBase_C_EventAggroTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::EventCheckAggro(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckAggro");

	ABP_GroundAnimalBase_C_EventCheckAggro_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound_Cue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Volume_Multiplier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Pitch_Multiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       Attenuation_Settings           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*       Concurrency_Settings           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::EventPlaySound(class USoundBase* Sound_Cue, float Volume_Multiplier, float Pitch_Multiplier, float Start_Time, class USoundAttenuation* Attenuation_Settings, class USoundConcurrency* Concurrency_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlaySound");

	ABP_GroundAnimalBase_C_EventPlaySound_Params params;
	params.Sound_Cue = Sound_Cue;
	params.Volume_Multiplier = Volume_Multiplier;
	params.Pitch_Multiplier = Pitch_Multiplier;
	params.Start_Time = Start_Time;
	params.Attenuation_Settings = Attenuation_Settings;
	params.Concurrency_Settings = Concurrency_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CheckPhysicsState
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::CheckPhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CheckPhysicsState");

	ABP_GroundAnimalBase_C_CheckPhysicsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BlendPhysics
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::BlendPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BlendPhysics");

	ABP_GroundAnimalBase_C_BlendPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StopAttackFunction");

	ABP_GroundAnimalBase_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AttackTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AttackTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AttackTrace");

	ABP_GroundAnimalBase_C_AttackTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StartAttackFunction");

	ABP_GroundAnimalBase_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_LayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayEnd");

	ABP_GroundAnimalBase_C_AnimNotify_LayEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_LayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayStart");

	ABP_GroundAnimalBase_C_AnimNotify_LayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_RestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestEnd");

	ABP_GroundAnimalBase_C_AnimNotify_RestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_RestStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestStart");

	ABP_GroundAnimalBase_C_AnimNotify_RestStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_DrinkEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkEnd");

	ABP_GroundAnimalBase_C_AnimNotify_DrinkEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_DrinkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkStart");

	ABP_GroundAnimalBase_C_AnimNotify_DrinkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_EatEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatEnd");

	ABP_GroundAnimalBase_C_AnimNotify_EatEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_EatStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatStart");

	ABP_GroundAnimalBase_C_AnimNotify_EatStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_HitEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitEnd");

	ABP_GroundAnimalBase_C_AnimNotify_HitEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_HitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitStart");

	ABP_GroundAnimalBase_C_AnimNotify_HitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_DeathEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathEnd");

	ABP_GroundAnimalBase_C_AnimNotify_DeathEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_DeathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathStart");

	ABP_GroundAnimalBase_C_AnimNotify_DeathStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_AttackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackEnd");

	ABP_GroundAnimalBase_C_AnimNotify_AttackEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_AttackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackStart");

	ABP_GroundAnimalBase_C_AnimNotify_AttackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_EngageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageEnd");

	ABP_GroundAnimalBase_C_AnimNotify_EngageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_EngageStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageStart");

	ABP_GroundAnimalBase_C_AnimNotify_EngageStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleEnd");

	ABP_GroundAnimalBase_C_AnimNotify_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimNotify_IdleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleStart");

	ABP_GroundAnimalBase_C_AnimNotify_IdleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EventEngagementEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementEnd");

	ABP_GroundAnimalBase_C_EventEngagementEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementStart");

	ABP_GroundAnimalBase_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Spawning_Offspring             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::BreedingEnd(bool Spawning_Offspring)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingEnd");

	ABP_GroundAnimalBase_C_BreedingEnd_Params params;
	params.Spawning_Offspring = Spawning_Offspring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Spawning_Offspring             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GroundAnimalBase_C::BreedingStart(bool Spawning_Offspring)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingStart");

	ABP_GroundAnimalBase_C_BreedingStart_Params params;
	params.Spawning_Offspring = Spawning_Offspring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalTookDamage
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimalTookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalTookDamage");

	ABP_GroundAnimalBase_C_AnimalTookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalHideEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AnimalHideEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalHideEnd");

	ABP_GroundAnimalBase_C_AnimalHideEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AIDir_ReachedTarget
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::AIDir_ReachedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AIDir_ReachedTarget");

	ABP_GroundAnimalBase_C_AIDir_ReachedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_End
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::Laydown_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_End");

	ABP_GroundAnimalBase_C_Laydown_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_Start
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::Laydown_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_Start");

	ABP_GroundAnimalBase_C_Laydown_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_GoingToRest
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::DayCycle_GoingToRest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_GoingToRest");

	ABP_GroundAnimalBase_C_DayCycle_GoingToRest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::DayCycle_RestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestEnd");

	ABP_GroundAnimalBase_C_DayCycle_RestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestStart
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::DayCycle_RestStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestStart");

	ABP_GroundAnimalBase_C_DayCycle_RestStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Relocated
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::MovementObstruction_Relocated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Relocated");

	ABP_GroundAnimalBase_C_MovementObstruction_Relocated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Stuck
// (BlueprintCallable, BlueprintEvent)
void ABP_GroundAnimalBase_C::MovementObstruction_Stuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Stuck");

	ABP_GroundAnimalBase_C_MovementObstruction_Stuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ExecuteUbergraph_BP_GroundAnimalBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroundAnimalBase_C::ExecuteUbergraph_BP_GroundAnimalBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ExecuteUbergraph_BP_GroundAnimalBase");

	ABP_GroundAnimalBase_C_ExecuteUbergraph_BP_GroundAnimalBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
