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

// Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Anvil_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetNPCInteractTime");

	ABP_FurnitureWorkbench_Anvil_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Anvil_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_Anvil_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Anvil_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.GetInteractTool");

	ABP_FurnitureWorkbench_Anvil_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Anvil_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.FinishFurniture");

	ABP_FurnitureWorkbench_Anvil_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.ExecuteUbergraph_BP_FurnitureWorkbench_Anvil
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Anvil_C::ExecuteUbergraph_BP_FurnitureWorkbench_Anvil(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Anvil.BP_FurnitureWorkbench_Anvil_C.ExecuteUbergraph_BP_FurnitureWorkbench_Anvil");

	ABP_FurnitureWorkbench_Anvil_C_ExecuteUbergraph_BP_FurnitureWorkbench_Anvil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
