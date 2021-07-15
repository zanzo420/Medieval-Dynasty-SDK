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

// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveBallisticArc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Proj_pos                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Proj_speed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target_pos                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target_velocity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 s0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 s1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Number                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::SolveBallisticArc(const struct FVector& Proj_pos, float Proj_speed, const struct FVector& Target_pos, const struct FVector& Target_velocity, float Gravity, struct FVector* s0, struct FVector* s1, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveBallisticArc");

	UBTTask_BanditsShoot_C_SolveBallisticArc_Params params;
	params.Proj_pos = Proj_pos;
	params.Proj_speed = Proj_speed;
	params.Target_pos = Target_pos;
	params.Target_velocity = Target_velocity;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (s0 != nullptr)
		*s0 = params.s0;
	if (s1 != nullptr)
		*s1 = params.s1;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveQuartic
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          c0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          c3                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          c4                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s3                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Number                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::SolveQuartic(float c0, float C1, float C2, float c3, float c4, float* s0, float* s1, float* s2, float* s3, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveQuartic");

	UBTTask_BanditsShoot_C_SolveQuartic_Params params;
	params.c0 = c0;
	params.C1 = C1;
	params.C2 = C2;
	params.c3 = c3;
	params.c4 = c4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (s0 != nullptr)
		*s0 = params.s0;
	if (s1 != nullptr)
		*s1 = params.s1;
	if (s2 != nullptr)
		*s2 = params.s2;
	if (s3 != nullptr)
		*s3 = params.s3;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveCubic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          c0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          c3                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Number                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::SolveCubic(float c0, float C1, float C2, float c3, float* s0, float* s1, float* s2, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveCubic");

	UBTTask_BanditsShoot_C_SolveCubic_Params params;
	params.c0 = c0;
	params.C1 = C1;
	params.C2 = C2;
	params.c3 = c3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (s0 != nullptr)
		*s0 = params.s0;
	if (s1 != nullptr)
		*s1 = params.s1;
	if (s2 != nullptr)
		*s2 = params.s2;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveQuadric
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          c0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          C2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          s1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Number                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::SolveQuadric(float c0, float C1, float C2, float* s0, float* s1, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.SolveQuadric");

	UBTTask_BanditsShoot_C_SolveQuadric_Params params;
	params.c0 = c0;
	params.C1 = C1;
	params.C2 = C2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (s0 != nullptr)
		*s0 = params.s0;
	if (s1 != nullptr)
		*s1 = params.s1;
	if (Number != nullptr)
		*Number = params.Number;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.GetCubicRoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::GetCubicRoot(float Value, float* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.GetCubicRoot");

	UBTTask_BanditsShoot_C_GetCubicRoot_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.CalculateLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                LookingRotator                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_BanditsShoot_C::CalculateLookingRotation(struct FRotator* LookingRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.CalculateLookingRotation");

	UBTTask_BanditsShoot_C_CalculateLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LookingRotator != nullptr)
		*LookingRotator = params.LookingRotator;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.ReceiveExecuteAI");

	UBTTask_BanditsShoot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.DestroyHeldItem
// (BlueprintCallable, BlueprintEvent)
void UBTTask_BanditsShoot_C::DestroyHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.DestroyHeldItem");

	UBTTask_BanditsShoot_C_DestroyHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.ExecuteUbergraph_BTTask_BanditsShoot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsShoot_C::ExecuteUbergraph_BTTask_BanditsShoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsShoot.BTTask_BanditsShoot_C.ExecuteUbergraph_BTTask_BanditsShoot");

	UBTTask_BanditsShoot_C_ExecuteUbergraph_BTTask_BanditsShoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_BanditsShoot_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
}

void UBTTask_BanditsShoot_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(NPCReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
