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

// Function BTTask_Shoot.BTTask_Shoot_C.CalculateLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                LookingRotator                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_Shoot_C::CalculateLookingRotation(struct FRotator* LookingRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Shoot.BTTask_Shoot_C.CalculateLookingRotation");

	UBTTask_Shoot_C_CalculateLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LookingRotator != nullptr)
		*LookingRotator = params.LookingRotator;

}


// Function BTTask_Shoot.BTTask_Shoot_C.DestroyHeldItem
// (BlueprintCallable, BlueprintEvent)
void UBTTask_Shoot_C::DestroyHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Shoot.BTTask_Shoot_C.DestroyHeldItem");

	UBTTask_Shoot_C_DestroyHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Shoot.BTTask_Shoot_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Shoot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Shoot.BTTask_Shoot_C.ReceiveExecuteAI");

	UBTTask_Shoot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_Shoot.BTTask_Shoot_C.ExecuteUbergraph_BTTask_Shoot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_Shoot_C::ExecuteUbergraph_BTTask_Shoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Shoot.BTTask_Shoot_C.ExecuteUbergraph_BTTask_Shoot");

	UBTTask_Shoot_C_ExecuteUbergraph_BTTask_Shoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
