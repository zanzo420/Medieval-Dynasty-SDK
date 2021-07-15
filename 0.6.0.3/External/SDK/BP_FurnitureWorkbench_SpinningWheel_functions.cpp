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

// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractTime");

	ABP_FurnitureWorkbench_SpinningWheel_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.GetNPCInteractAnimation");

	ABP_FurnitureWorkbench_SpinningWheel_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SpinningWheel_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.DisableGhost");

	ABP_FurnitureWorkbench_SpinningWheel_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_SpinningWheel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_SpinningWheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.PlayWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::PlayWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.PlayWorkbenchAnim");

	ABP_FurnitureWorkbench_SpinningWheel_C_PlayWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.StopWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::StopWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.StopWorkbenchAnim");

	ABP_FurnitureWorkbench_SpinningWheel_C_StopWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.InteractCancel");

	ABP_FurnitureWorkbench_SpinningWheel_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SpinningWheel_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.FinishFurniture");

	ABP_FurnitureWorkbench_SpinningWheel_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.SetVisibilityBasedAnimTickOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Engine_EVisibilityBasedAnimTickOption AnimTickOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.SetVisibilityBasedAnimTickOption");

	ABP_FurnitureWorkbench_SpinningWheel_C_SetVisibilityBasedAnimTickOption_Params params;
	params.AnimTickOption = AnimTickOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SpinningWheel_C::ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C.ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel");

	ABP_FurnitureWorkbench_SpinningWheel_C_ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_SpinningWheel_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(SpinningWheelMaterial, UMaterialInstanceDynamic);
}

void ABP_FurnitureWorkbench_SpinningWheel_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(SpinningWheelMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
