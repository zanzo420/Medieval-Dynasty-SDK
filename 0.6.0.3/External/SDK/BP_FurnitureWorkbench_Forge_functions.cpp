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

// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractTime");

	ABP_FurnitureWorkbench_Forge_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_Forge_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.GetInteractTool");

	ABP_FurnitureWorkbench_Forge_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__FinishedFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::ForgeFire_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__FinishedFunc");

	ABP_FurnitureWorkbench_Forge_C_ForgeFire_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__UpdateFunc
// (BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::ForgeFire_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ForgeFire TL__UpdateFunc");

	ABP_FurnitureWorkbench_Forge_C_ForgeFire_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_Forge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.SetVisibilityBasedAnimTickOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Engine_EVisibilityBasedAnimTickOption AnimTickOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.SetVisibilityBasedAnimTickOption");

	ABP_FurnitureWorkbench_Forge_C_SetVisibilityBasedAnimTickOption_Params params;
	params.AnimTickOption = AnimTickOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::StopWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopWorkbenchAnim");

	ABP_FurnitureWorkbench_Forge_C_StopWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PlayWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::PlayWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PlayWorkbenchAnim");

	ABP_FurnitureWorkbench_Forge_C_PlayWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartFire");

	ABP_FurnitureWorkbench_Forge_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FurnitureNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::FurnitureNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FurnitureNotify");

	ABP_FurnitureWorkbench_Forge_C_FurnitureNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReverseFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::ReverseFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ReverseFire");

	ABP_FurnitureWorkbench_Forge_C_ReverseFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.WaitWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::WaitWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.WaitWorkbenchAnim");

	ABP_FurnitureWorkbench_Forge_C_WaitWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.BlendOutCrafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::BlendOutCrafting(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.BlendOutCrafting");

	ABP_FurnitureWorkbench_Forge_C_BlendOutCrafting_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Forge_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.Interact");

	ABP_FurnitureWorkbench_Forge_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.PerformActorInteraction");

	ABP_FurnitureWorkbench_Forge_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Forge_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.FinishFurniture");

	ABP_FurnitureWorkbench_Forge_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StopFire");

	ABP_FurnitureWorkbench_Forge_C_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartWorkbench
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Forge_C::StartWorkbench()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.StartWorkbench");

	ABP_FurnitureWorkbench_Forge_C_StartWorkbench_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ExecuteUbergraph_BP_FurnitureWorkbench_Forge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Forge_C::ExecuteUbergraph_BP_FurnitureWorkbench_Forge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Forge.BP_FurnitureWorkbench_Forge_C.ExecuteUbergraph_BP_FurnitureWorkbench_Forge");

	ABP_FurnitureWorkbench_Forge_C_ExecuteUbergraph_BP_FurnitureWorkbench_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_Forge_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(ForgeFire_TL, UTimelineComponent);
	READ_PTR_FULL(ForgeMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(StartFireCurve, UCurveFloat);
	READ_PTR_FULL(ForgeFireCurve, UCurveFloat);
	READ_PTR_FULL(ExtinguishFireCurve, UCurveFloat);
	READ_PTR_FULL(Montage, UAnimMontage);
}

void ABP_FurnitureWorkbench_Forge_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(ForgeFire_TL);
	DELE_PTR_FULL(ForgeMaterial);
	DELE_PTR_FULL(StartFireCurve);
	DELE_PTR_FULL(ForgeFireCurve);
	DELE_PTR_FULL(ExtinguishFireCurve);
	DELE_PTR_FULL(Montage);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
