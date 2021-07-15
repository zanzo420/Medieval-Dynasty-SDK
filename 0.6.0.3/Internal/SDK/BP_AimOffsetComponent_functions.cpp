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

// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.Calculate Offset Values
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PitchOffset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          YawOffset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AimOffsetComponent_C::Calculate_Offset_Values(float Duration, float* PitchOffset, float* YawOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.Calculate Offset Values");

	UBP_AimOffsetComponent_C_Calculate_Offset_Values_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PitchOffset != nullptr)
		*PitchOffset = params.PitchOffset;
	if (YawOffset != nullptr)
		*YawOffset = params.YawOffset;

}


// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_AimOffsetComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ReceiveBeginPlay");

	UBP_AimOffsetComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.StartAimOffset
// (BlueprintCallable, BlueprintEvent)
void UBP_AimOffsetComponent_C::StartAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.StartAimOffset");

	UBP_AimOffsetComponent_C_StartAimOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.AimingTimer
// (BlueprintCallable, BlueprintEvent)
void UBP_AimOffsetComponent_C::AimingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.AimingTimer");

	UBP_AimOffsetComponent_C_AimingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ResumeAimOffsetting
// (BlueprintCallable, BlueprintEvent)
void UBP_AimOffsetComponent_C::ResumeAimOffsetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ResumeAimOffsetting");

	UBP_AimOffsetComponent_C_ResumeAimOffsetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ExecuteUbergraph_BP_AimOffsetComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AimOffsetComponent_C::ExecuteUbergraph_BP_AimOffsetComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AimOffsetComponent.BP_AimOffsetComponent_C.ExecuteUbergraph_BP_AimOffsetComponent");

	UBP_AimOffsetComponent_C_ExecuteUbergraph_BP_AimOffsetComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
