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

// Function BTService_BanditsFight.BTService_BanditsFight_C.SetSpeedByGait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     Gait_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Factor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsFight_C::SetSpeedByGait(TEnumAsByte<E_Gait_E_Gait> Gait_Type, float Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsFight.BTService_BanditsFight_C.SetSpeedByGait");

	UBTService_BanditsFight_C_SetSpeedByGait_Params params;
	params.Gait_Type = Gait_Type;
	params.Factor = Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsFight_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveDeactivationAI");

	UBTService_BanditsFight_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsFight_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveActivationAI");

	UBTService_BanditsFight_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsFight_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsFight.BTService_BanditsFight_C.ReceiveTickAI");

	UBTService_BanditsFight_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsFight.BTService_BanditsFight_C.ExecuteUbergraph_BTService_BanditsFight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsFight_C::ExecuteUbergraph_BTService_BanditsFight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsFight.BTService_BanditsFight_C.ExecuteUbergraph_BTService_BanditsFight");

	UBTService_BanditsFight_C_ExecuteUbergraph_BTService_BanditsFight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTService_BanditsFight_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(PlayerReference, ABP_PlayerCharacter_C);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
}

void UBTService_BanditsFight_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PlayerReference);
	DELE_PTR_FULL(NPCReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
