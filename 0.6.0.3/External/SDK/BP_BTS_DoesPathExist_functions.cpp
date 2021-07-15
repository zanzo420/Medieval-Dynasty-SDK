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

// Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_DoesPathExist_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveTickAI");

	UBP_BTS_DoesPathExist_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_DoesPathExist_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveActivationAI");

	UBP_BTS_DoesPathExist_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_DoesPathExist_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ReceiveDeactivationAI");

	UBP_BTS_DoesPathExist_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ExecuteUbergraph_BP_BTS_DoesPathExist
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTS_DoesPathExist_C::ExecuteUbergraph_BP_BTS_DoesPathExist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTS_DoesPathExist.BP_BTS_DoesPathExist_C.ExecuteUbergraph_BP_BTS_DoesPathExist");

	UBP_BTS_DoesPathExist_C_ExecuteUbergraph_BP_BTS_DoesPathExist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTS_DoesPathExist_C::AfterRead()
{
	UBTService_BlueprintBase::AfterRead();

	READ_PTR_FULL(Actor, AActor);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTS_DoesPathExist_C::BeforeDelete()
{
	UBTService_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(Actor);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
