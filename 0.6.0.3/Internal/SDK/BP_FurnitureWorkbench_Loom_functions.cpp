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

// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Loom_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.GetNPCInteractTime");

	ABP_FurnitureWorkbench_Loom_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Loom_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_Loom_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Loom_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.DisableGhost");

	ABP_FurnitureWorkbench_Loom_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_Loom_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_Loom_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.SetVisibilityBasedAnimTickOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Engine_EVisibilityBasedAnimTickOption AnimTickOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Loom_C::SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.SetVisibilityBasedAnimTickOption");

	ABP_FurnitureWorkbench_Loom_C_SetVisibilityBasedAnimTickOption_Params params;
	params.AnimTickOption = AnimTickOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Loom_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.FinishFurniture");

	ABP_FurnitureWorkbench_Loom_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.ExecuteUbergraph_BP_FurnitureWorkbench_Loom
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Loom_C::ExecuteUbergraph_BP_FurnitureWorkbench_Loom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Loom.BP_FurnitureWorkbench_Loom_C.ExecuteUbergraph_BP_FurnitureWorkbench_Loom");

	ABP_FurnitureWorkbench_Loom_C_ExecuteUbergraph_BP_FurnitureWorkbench_Loom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
