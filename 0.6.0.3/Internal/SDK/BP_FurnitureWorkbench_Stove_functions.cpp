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

// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Stove_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_Stove_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Firebox TL__FinishedFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::Firebox_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Firebox TL__FinishedFunc");

	ABP_FurnitureWorkbench_Stove_C_Firebox_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Firebox TL__UpdateFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::Firebox_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Firebox TL__UpdateFunc");

	ABP_FurnitureWorkbench_Stove_C_Firebox_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.FurnitureNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Stove_C::FurnitureNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.FurnitureNotify");

	ABP_FurnitureWorkbench_Stove_C_FurnitureNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Stove_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.InteractCancel");

	ABP_FurnitureWorkbench_Stove_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.WaitCrafting
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::WaitCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.WaitCrafting");

	ABP_FurnitureWorkbench_Stove_C_WaitCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_Stove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StartFire");

	ABP_FurnitureWorkbench_Stove_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ReverseFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::ReverseFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ReverseFire");

	ABP_FurnitureWorkbench_Stove_C_ReverseFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StopFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StopFire");

	ABP_FurnitureWorkbench_Stove_C_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StartWorkbench
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::StartWorkbench()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.StartWorkbench");

	ABP_FurnitureWorkbench_Stove_C_StartWorkbench_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Stove_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.PerformActorInteraction");

	ABP_FurnitureWorkbench_Stove_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Stove_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.FinishFurniture");

	ABP_FurnitureWorkbench_Stove_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Stove_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.Interact");

	ABP_FurnitureWorkbench_Stove_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ExecuteUbergraph_BP_FurnitureWorkbench_Stove
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Stove_C::ExecuteUbergraph_BP_FurnitureWorkbench_Stove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Stove.BP_FurnitureWorkbench_Stove_C.ExecuteUbergraph_BP_FurnitureWorkbench_Stove");

	ABP_FurnitureWorkbench_Stove_C_ExecuteUbergraph_BP_FurnitureWorkbench_Stove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
