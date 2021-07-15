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

// Function BP_BTT_LookForFood_Prey.BP_BTT_LookForFood_Prey_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_Prey_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood_Prey.BP_BTT_LookForFood_Prey_C.ReceiveExecuteAI");

	UBP_BTT_LookForFood_Prey_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_LookForFood_Prey.BP_BTT_LookForFood_Prey_C.ExecuteUbergraph_BP_BTT_LookForFood_Prey
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_LookForFood_Prey_C::ExecuteUbergraph_BP_BTT_LookForFood_Prey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_LookForFood_Prey.BP_BTT_LookForFood_Prey_C.ExecuteUbergraph_BP_BTT_LookForFood_Prey");

	UBP_BTT_LookForFood_Prey_C_ExecuteUbergraph_BP_BTT_LookForFood_Prey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
