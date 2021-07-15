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

// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_WoodworkingTable_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractTime");

	ABP_FurnitureWorkbench_WoodworkingTable_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_WoodworkingTable_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_WoodworkingTable_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_WoodworkingTable_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.FinishFurniture");

	ABP_FurnitureWorkbench_WoodworkingTable_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_WoodworkingTable_C::ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_WoodworkingTable.BP_FurnitureWorkbench_WoodworkingTable_C.ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable");

	ABP_FurnitureWorkbench_WoodworkingTable_C_ExecuteUbergraph_BP_FurnitureWorkbench_WoodworkingTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_WoodworkingTable_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_FurnitureWorkbench_WoodworkingTable_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
