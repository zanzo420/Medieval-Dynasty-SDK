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

// Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_RotateAnimalToFaceEntry_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ReceiveExecuteAI");

	UBP_BTT_RotateAnimalToFaceEntry_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_RotateAnimalToFaceEntry_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ReceiveTickAI");

	UBP_BTT_RotateAnimalToFaceEntry_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ExecuteUbergraph_BP_BTT_RotateAnimalToFaceEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_RotateAnimalToFaceEntry_C::ExecuteUbergraph_BP_BTT_RotateAnimalToFaceEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_RotateAnimalToFaceEntry.BP_BTT_RotateAnimalToFaceEntry_C.ExecuteUbergraph_BP_BTT_RotateAnimalToFaceEntry");

	UBP_BTT_RotateAnimalToFaceEntry_C_ExecuteUbergraph_BP_BTT_RotateAnimalToFaceEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_RotateAnimalToFaceEntry_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(targetActor, AActor);
}

void UBP_BTT_RotateAnimalToFaceEntry_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AnimalBase);
	DELE_PTR_FULL(targetActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
