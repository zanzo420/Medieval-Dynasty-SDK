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

// Function BP_WolfAI.BP_WolfAI_C.UpdateEncircleTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WolfAI_C::UpdateEncircleTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.UpdateEncircleTimer");

	ABP_WolfAI_C_UpdateEncircleTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.CheckForPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_WolfAI_C::CheckForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.CheckForPlayer");

	ABP_WolfAI_C_CheckForPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WolfAI.BP_WolfAI_C.OnNotifyEnd_1EBD50684C78FEE39CD24286ED6FC53F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::OnNotifyEnd_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.OnNotifyEnd_1EBD50684C78FEE39CD24286ED6FC53F");

	ABP_WolfAI_C_OnNotifyEnd_1EBD50684C78FEE39CD24286ED6FC53F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.OnNotifyBegin_1EBD50684C78FEE39CD24286ED6FC53F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::OnNotifyBegin_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.OnNotifyBegin_1EBD50684C78FEE39CD24286ED6FC53F");

	ABP_WolfAI_C_OnNotifyBegin_1EBD50684C78FEE39CD24286ED6FC53F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.OnInterrupted_1EBD50684C78FEE39CD24286ED6FC53F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::OnInterrupted_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.OnInterrupted_1EBD50684C78FEE39CD24286ED6FC53F");

	ABP_WolfAI_C_OnInterrupted_1EBD50684C78FEE39CD24286ED6FC53F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.OnBlendOut_1EBD50684C78FEE39CD24286ED6FC53F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::OnBlendOut_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.OnBlendOut_1EBD50684C78FEE39CD24286ED6FC53F");

	ABP_WolfAI_C_OnBlendOut_1EBD50684C78FEE39CD24286ED6FC53F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.OnCompleted_1EBD50684C78FEE39CD24286ED6FC53F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::OnCompleted_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.OnCompleted_1EBD50684C78FEE39CD24286ED6FC53F");

	ABP_WolfAI_C_OnCompleted_1EBD50684C78FEE39CD24286ED6FC53F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WolfAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.ReceiveBeginPlay");

	ABP_WolfAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_WolfAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.EventEngagementStart");

	ABP_WolfAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.FearDecrease
// (BlueprintCallable, BlueprintEvent)
void ABP_WolfAI_C::FearDecrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.FearDecrease");

	ABP_WolfAI_C_FearDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.StartEncircleTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_WolfAI_C::StartEncircleTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.StartEncircleTimer");

	ABP_WolfAI_C_StartEncircleTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.StopEncircleTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_WolfAI_C::StopEncircleTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.StopEncircleTimer");

	ABP_WolfAI_C_StopEncircleTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WolfAI.BP_WolfAI_C.ExecuteUbergraph_BP_WolfAI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WolfAI_C::ExecuteUbergraph_BP_WolfAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WolfAI.BP_WolfAI_C.ExecuteUbergraph_BP_WolfAI");

	ABP_WolfAI_C_ExecuteUbergraph_BP_WolfAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
