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

// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Boiling TL__FinishedFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::Boiling_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Boiling TL__FinishedFunc");

	ABP_FurnitureWorkbench_SimpleCauldron_C_Boiling_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Boiling TL__UpdateFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::Boiling_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Boiling TL__UpdateFunc");

	ABP_FurnitureWorkbench_SimpleCauldron_C_Boiling_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.StartBoiling
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::StartBoiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.StartBoiling");

	ABP_FurnitureWorkbench_SimpleCauldron_C_StartBoiling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ReverseBoiling
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::ReverseBoiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ReverseBoiling");

	ABP_FurnitureWorkbench_SimpleCauldron_C_ReverseBoiling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_SimpleCauldron_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStarted
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::CraftingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStarted");

	ABP_FurnitureWorkbench_SimpleCauldron_C_CraftingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingEnded
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::CraftingEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingEnded");

	ABP_FurnitureWorkbench_SimpleCauldron_C_CraftingEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStopping
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::CraftingStopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStopping");

	ABP_FurnitureWorkbench_SimpleCauldron_C_CraftingStopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.LinkFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCauldron_C::LinkFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.LinkFurniture");

	ABP_FurnitureWorkbench_SimpleCauldron_C_LinkFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCauldron_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.Interact");

	ABP_FurnitureWorkbench_SimpleCauldron_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStarted_NPC
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::CraftingStarted_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingStarted_NPC");

	ABP_FurnitureWorkbench_SimpleCauldron_C_CraftingStarted_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingEnded_NPC
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::CraftingEnded_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.CraftingEnded_NPC");

	ABP_FurnitureWorkbench_SimpleCauldron_C_CraftingEnded_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ResetBoiling
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCauldron_C::ResetBoiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ResetBoiling");

	ABP_FurnitureWorkbench_SimpleCauldron_C_ResetBoiling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCauldron
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCauldron_C::ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCauldron(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCauldron.BP_FurnitureWorkbench_SimpleCauldron_C.ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCauldron");

	ABP_FurnitureWorkbench_SimpleCauldron_C_ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCauldron_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_SimpleCauldron_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(PS_CauldronSoup, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Boiling_TL, UTimelineComponent);
	READ_PTR_FULL(GrateReference, ABP_MasterFurniture_Workbench_C);
	READ_PTR_FULL(StartFireCurve, UCurveFloat);
	READ_PTR_FULL(ExtinguishFireCurve, UCurveFloat);
	READ_PTR_FULL(SoupMaterial, UMaterialInstanceDynamic);
}

void ABP_FurnitureWorkbench_SimpleCauldron_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(PS_CauldronSoup);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Boiling_TL);
	DELE_PTR_FULL(GrateReference);
	DELE_PTR_FULL(StartFireCurve);
	DELE_PTR_FULL(ExtinguishFireCurve);
	DELE_PTR_FULL(SoupMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
