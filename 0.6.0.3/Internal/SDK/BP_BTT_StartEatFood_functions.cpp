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

// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.EventPlayEatAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_StartEatFood_C::EventPlayEatAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.EventPlayEatAnimation");

	UBP_BTT_StartEatFood_C_EventPlayEatAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_StartEatFood_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ReceiveExecuteAI");

	UBP_BTT_StartEatFood_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ExecuteUbergraph_BP_BTT_StartEatFood
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_StartEatFood_C::ExecuteUbergraph_BP_BTT_StartEatFood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ExecuteUbergraph_BP_BTT_StartEatFood");

	UBP_BTT_StartEatFood_C_ExecuteUbergraph_BP_BTT_StartEatFood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
