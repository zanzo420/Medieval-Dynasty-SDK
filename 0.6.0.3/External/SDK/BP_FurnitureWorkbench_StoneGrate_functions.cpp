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

// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.IsLinkedFurnitureStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_FurnitureWorkbench_StoneGrate_C::IsLinkedFurnitureStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.IsLinkedFurnitureStarted");

	ABP_FurnitureWorkbench_StoneGrate_C_IsLinkedFurnitureStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_StoneGrate_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_StoneGrate_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FadeTimeline__FinishedFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::FadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FadeTimeline__FinishedFunc");

	ABP_FurnitureWorkbench_StoneGrate_C_FadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FadeTimeline__UpdateFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::FadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FadeTimeline__UpdateFunc");

	ABP_FurnitureWorkbench_StoneGrate_C_FadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FireBoxFire TL__FinishedFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::FireBoxFire_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FireBoxFire TL__FinishedFunc");

	ABP_FurnitureWorkbench_StoneGrate_C_FireBoxFire_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FireBoxFire TL__UpdateFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::FireBoxFire_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FireBoxFire TL__UpdateFunc");

	ABP_FurnitureWorkbench_StoneGrate_C_FireBoxFire_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FurnitureNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_StoneGrate_C::FurnitureNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FurnitureNotify");

	ABP_FurnitureWorkbench_StoneGrate_C_FurnitureNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FryFood
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::FryFood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FryFood");

	ABP_FurnitureWorkbench_StoneGrate_C_FryFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingStarted
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::CraftingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingStarted");

	ABP_FurnitureWorkbench_StoneGrate_C_CraftingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.WaitCrafting
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::WaitCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.WaitCrafting");

	ABP_FurnitureWorkbench_StoneGrate_C_WaitCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_StoneGrate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingEnded
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::CraftingEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingEnded");

	ABP_FurnitureWorkbench_StoneGrate_C_CraftingEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_StoneGrate_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.InteractCancel");

	ABP_FurnitureWorkbench_StoneGrate_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingStopping
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::CraftingStopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.CraftingStopping");

	ABP_FurnitureWorkbench_StoneGrate_C_CraftingStopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StartFire");

	ABP_FurnitureWorkbench_StoneGrate_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ReverseFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::ReverseFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ReverseFire");

	ABP_FurnitureWorkbench_StoneGrate_C_ReverseFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_StoneGrate_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.Interact");

	ABP_FurnitureWorkbench_StoneGrate_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.PerformActorInteraction");

	ABP_FurnitureWorkbench_StoneGrate_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StopFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StopFire");

	ABP_FurnitureWorkbench_StoneGrate_C_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_StoneGrate_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.FinishFurniture");

	ABP_FurnitureWorkbench_StoneGrate_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StartWorkbench
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_StoneGrate_C::StartWorkbench()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.StartWorkbench");

	ABP_FurnitureWorkbench_StoneGrate_C_StartWorkbench_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.LinkFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_StoneGrate_C::LinkFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.LinkFurniture");

	ABP_FurnitureWorkbench_StoneGrate_C_LinkFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ExecuteUbergraph_BP_FurnitureWorkbench_StoneGrate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_StoneGrate_C::ExecuteUbergraph_BP_FurnitureWorkbench_StoneGrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C.ExecuteUbergraph_BP_FurnitureWorkbench_StoneGrate");

	ABP_FurnitureWorkbench_StoneGrate_C_ExecuteUbergraph_BP_FurnitureWorkbench_StoneGrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_StoneGrate_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(NavModifier, UNavModifierComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(Food, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(FireBoxFire_TL, UTimelineComponent);
	READ_PTR_FULL(FadeTimeline, UTimelineComponent);
	READ_PTR_FULL(DynamicFoodMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(StartFireCurve, UCurveFloat);
	READ_PTR_FULL(ExtinguishFireCurve, UCurveFloat);
	READ_PTR_FULL(FireboxMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(CauldronReference, ABP_MasterFurniture_Workbench_C);
}

void ABP_FurnitureWorkbench_StoneGrate_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(NavModifier);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(Food);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(FireBoxFire_TL);
	DELE_PTR_FULL(FadeTimeline);
	DELE_PTR_FULL(DynamicFoodMaterial);
	DELE_PTR_FULL(StartFireCurve);
	DELE_PTR_FULL(ExtinguishFireCurve);
	DELE_PTR_FULL(FireboxMaterial);
	DELE_PTR_FULL(CauldronReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
