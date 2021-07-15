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

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInteractionEndpoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInteractionEndpoint");

	ABP_PlayerCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPhysicsHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicsHandleComponent* PhysicsHandle                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPhysicsHandle");

	ABP_PlayerCharacter_C_GetPhysicsHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction");

	ABP_PlayerCharacter_C_OnWaitForCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFovChanging
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::IsFovChanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFovChanging");

	ABP_PlayerCharacter_C_IsFovChanging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction");

	ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRandomPointOnTerrain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool ABP_PlayerCharacter_C::GetRandomPointOnTerrain(class AActor* Actor, class UMeshComponent* Mesh, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRandomPointOnTerrain");

	ABP_PlayerCharacter_C_GetRandomPointOnTerrain_Params params;
	params.Actor = Actor;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindRandomPointForUnstuck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::FindRandomPointForUnstuck(struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindRandomPointForUnstuck");

	ABP_PlayerCharacter_C_FindRandomPointForUnstuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnstuckPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::TryToUnstuckPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnstuckPlayer");

	ABP_PlayerCharacter_C_TryToUnstuckPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InteractTimerFinish(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFinish");

	ABP_PlayerCharacter_C_InteractTimerFinish_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitReference                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           FinishedInteraction            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::InteractTimerActor(const struct FHitResult& HitReference, bool* FinishedInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerActor");

	ABP_PlayerCharacter_C_InteractTimerActor_Params params;
	params.HitReference = HitReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFoliage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterFoliage_C*     MasterFoliage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitReference                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           FinishedInteraction            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::InteractTimerFoliage(class UBP_MasterFoliage_C* MasterFoliage, const struct FHitResult& HitReference, bool* FinishedInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFoliage");

	ABP_PlayerCharacter_C_InteractTimerFoliage_Params params;
	params.MasterFoliage = MasterFoliage;
	params.HitReference = HitReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedInteraction            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::InteractTimer(bool* FinishedInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimer");

	ABP_PlayerCharacter_C_InteractTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishedInteraction != nullptr)
		*FinishedInteraction = params.FinishedInteraction;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  oldPawnMount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::OnDismountingPawnFinished(class AActor* oldPawnMount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished");

	ABP_PlayerCharacter_C_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToDismount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToDismount");

	ABP_PlayerCharacter_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount");

	ABP_PlayerCharacter_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_PlayerCharacter_C::GetLookingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookingRotation");

	ABP_PlayerCharacter_C_GetLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMountingPawnFinished
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMountActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::OnMountingPawnFinished(class AActor* newMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMountingPawnFinished");

	ABP_PlayerCharacter_C_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MoveToMountingLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerCharacter_C::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MoveToMountingLocation");

	ABP_PlayerCharacter_C_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFPCameraFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFieldOfView                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SetFPCameraFOV(float InFieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFPCameraFOV");

	ABP_PlayerCharacter_C_SetFPCameraFOV_Params params;
	params.InFieldOfView = InFieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraViewDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::GetCameraViewDirection(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraViewDirection");

	ABP_PlayerCharacter_C_GetCameraViewDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFPCameraFOV
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FieldOfView                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::GetFPCameraFOV(float* FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFPCameraFOV");

	ABP_PlayerCharacter_C_GetFPCameraFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FieldOfView != nullptr)
		*FieldOfView = params.FieldOfView;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCameraSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_CameraSettings      TargetCameraSettings           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCameraSettings");

	ABP_PlayerCharacter_C_ChooseCameraSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetCameraSettings != nullptr)
		*TargetCameraSettings = params.TargetCameraSettings;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LerpCameraSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*     TargetSpringArm                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LerpCameraSettings");

	ABP_PlayerCharacter_C_LerpCameraSettings_Params params;
	params.LerpAlpha = LerpAlpha;
	params.TargetSpringArm = TargetSpringArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Attach Components
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::Attach_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Attach Components");

	ABP_PlayerCharacter_C_Attach_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerPush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PlayerPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerPush");

	ABP_PlayerCharacter_C_PlayerPush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDefaultFov
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFieldOfView                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::UpdateDefaultFov(float InFieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDefaultFov");

	ABP_PlayerCharacter_C_UpdateDefaultFov_Params params;
	params.InFieldOfView = InFieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::Unstuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck");

	ABP_PlayerCharacter_C_Unstuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItemsForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReEquipHeldItemsForInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItemsForInteraction");

	ABP_PlayerCharacter_C_ReEquipHeldItemsForInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideHeldItemsForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::HideHeldItemsForInteraction(TEnumAsByte<E_Tools_E_Tools> ToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideHeldItemsForInteraction");

	ABP_PlayerCharacter_C_HideHeldItemsForInteraction_Params params;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolForInteraction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Holdable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   WantedTool                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedTool, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolForInteraction");

	ABP_PlayerCharacter_C_EquipToolForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedTool = WantedTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectedSlotWithToolUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::SelectedSlotWithToolUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectedSlotWithToolUpdate");

	ABP_PlayerCharacter_C_SelectedSlotWithToolUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitActorInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::GetLastHitActorInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitActorInteractionDistance");

	ABP_PlayerCharacter_C_GetLastHitActorInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction");

	ABP_PlayerCharacter_C_OnEndWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Start Workbench Interaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseLookAt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                LookAtRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetPitch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation, bool ChangeCamera, bool UseLocation, bool UseLookAt, const struct FRotator& LookAtRotation, bool ResetPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Start Workbench Interaction");

	ABP_PlayerCharacter_C_On_Start_Workbench_Interaction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;
	params.ChangeCamera = ChangeCamera;
	params.UseLocation = UseLocation;
	params.UseLookAt = UseLookAt;
	params.LookAtRotation = LookAtRotation;
	params.ResetPitch = ResetPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInBuildingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SetInBuildingMode(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInBuildingMode");

	ABP_PlayerCharacter_C_SetInBuildingMode_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UpdateGhosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhosts");

	ABP_PlayerCharacter_C_UpdateGhosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnOffHandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     PlayerCharacterReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterHoldableItem_C* Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SpawnOffHandItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnOffHandItem");

	ABP_PlayerCharacter_C_SpawnOffHandItem_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;
	params.PlayerCharacterReference = PlayerCharacterReference;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyOffHandItem
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::DestroyOffHandItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyOffHandItem");

	ABP_PlayerCharacter_C_DestroyOffHandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyHeldItem
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::DestroyHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyHeldItem");

	ABP_PlayerCharacter_C_DestroyHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     PlayerCharacterReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterHoldableItem_C* Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SpawnHeldItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnHeldItem");

	ABP_PlayerCharacter_C_SpawnHeldItem_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;
	params.PlayerCharacterReference = PlayerCharacterReference;
	params.Capacity = Capacity;
	params.CurrentHP = CurrentHP;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_Aiming Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::On_ALS_Aiming_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_Aiming Changed");

	ABP_PlayerCharacter_C_On_ALS_Aiming_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Holster Weapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSwitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsValidHeldItem                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Holster Weapon");

	ABP_PlayerCharacter_C_Holster_Weapon_Params params;
	params.IsSwitch = IsSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSwitch != nullptr)
		*bIsSwitch = params.bIsSwitch;
	if (IsValidHeldItem != nullptr)
		*IsValidHeldItem = params.IsValidHeldItem;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractionDetect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::InteractionDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractionDetect");

	ABP_PlayerCharacter_C_InteractionDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_ViewMode Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::On_ALS_ViewMode_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_ViewMode Changed");

	ABP_PlayerCharacter_C_On_ALS_ViewMode_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItems
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReEquipHeldItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItems");

	ABP_PlayerCharacter_C_ReEquipHeldItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Held Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Hide_Held_Items(class AActor* InteractedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Held Items");

	ABP_PlayerCharacter_C_Hide_Held_Items_Params params;
	params.InteractedActor = InteractedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopBarterWithNPC
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::StopBarterWithNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopBarterWithNPC");

	ABP_PlayerCharacter_C_StopBarterWithNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBarterWithNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           GiftGiving                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::StartBarterWithNPC(class ABP_NPC_C** NPCReference, bool GiftGiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBarterWithNPC");

	ABP_PlayerCharacter_C_StartBarterWithNPC_Params params;
	params.GiftGiving = GiftGiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCReference != nullptr)
		*NPCReference = params.NPCReference;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.isPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APC_Player_C*            PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::isPlayer(bool* Player, class APC_Player_C** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.isPlayer");

	ABP_PlayerCharacter_C_isPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToGetResourcesForBuilding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuildModule_C* Module                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::TryToGetResourcesForBuilding(class ABP_MasterBuilding_C* Building, class ABP_MasterBuildModule_C* Module, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToGetResourcesForBuilding");

	ABP_PlayerCharacter_C_TryToGetResourcesForBuilding_Params params;
	params.Building = Building;
	params.Module = Module;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItemToHands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           _2Hand                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SwapHeldItemToHands(bool _2Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItemToHands");

	ABP_PlayerCharacter_C_SwapHeldItemToHands_Params params;
	params._2Hand = _2Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RevertHeldItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::RevertHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RevertHeldItem");

	ABP_PlayerCharacter_C_RevertHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ArrayID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SwapHeldItem(const struct FName& ItemName, int ArrayID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItem");

	ABP_PlayerCharacter_C_SwapHeldItem_Params params;
	params.ItemName = ItemName;
	params.ArrayID = ArrayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleGameMenu
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ToggleGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleGameMenu");

	ABP_PlayerCharacter_C_ToggleGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedQuickSlotID            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DrawWeapon_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SelectQuickSlot(int SelectedQuickSlotID, bool DrawWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlot");

	ABP_PlayerCharacter_C_SelectQuickSlot_Params params;
	params.SelectedQuickSlotID = SelectedQuickSlotID;
	params.DrawWeapon_ = DrawWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InteractionRange               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InteractRange(float InteractionRange, struct FVector* StartVector, struct FVector* EndVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRange");

	ABP_PlayerCharacter_C_InteractRange_Params params;
	params.InteractionRange = InteractionRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartVector != nullptr)
		*StartVector = params.StartVector;
	if (EndVector != nullptr)
		*EndVector = params.EndVector;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript");

	ABP_PlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_C::FOV__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__FinishedFunc");

	ABP_PlayerCharacter_C_FOV__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_C::FOV__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__UpdateFunc");

	ABP_PlayerCharacter_C_FOV__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_C::CameraLerp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__FinishedFunc");

	ABP_PlayerCharacter_C_CameraLerp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_C::CameraLerp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__UpdateFunc");

	ABP_PlayerCharacter_C_CameraLerp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8");

	ABP_PlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_PageUp_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_7");

	ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_6");

	ABP_PlayerCharacter_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_5");

	ABP_PlayerCharacter_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4");

	ABP_PlayerCharacter_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_3");

	ABP_PlayerCharacter_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_2");

	ABP_PlayerCharacter_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_1");

	ABP_PlayerCharacter_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractOpenGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::InteractOpenGate(bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractOpenGate");

	ABP_PlayerCharacter_C_InteractOpenGate_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractCloseGate
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::InteractCloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractCloseGate");

	ABP_PlayerCharacter_C_InteractCloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLineTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::InteractLineTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLineTrace");

	ABP_PlayerCharacter_C_InteractLineTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Torch
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_Torch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Torch");

	ABP_PlayerCharacter_C_PressedInput_Torch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot1
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot1");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot2");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot3
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot3");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot4
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot4");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot5
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot5");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot6
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot6");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot7
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot7");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot8
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_QuickSlot8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot8");

	ABP_PlayerCharacter_C_PressedInput_QuickSlot8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InteractAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::PressedInput_InteractAction(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InteractAction");

	ABP_PlayerCharacter_C_PressedInput_InteractAction_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InteractAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_InteractAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InteractAction");

	ABP_PlayerCharacter_C_ReleasedInput_InteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Sprint
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Sprint");

	ABP_PlayerCharacter_C_PressedInput_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Sprint
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Sprint");

	ABP_PlayerCharacter_C_ReleasedInput_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_InspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InspectorMode");

	ABP_PlayerCharacter_C_PressedInput_InspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_HolsterHoldableItem
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_HolsterHoldableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_HolsterHoldableItem");

	ABP_PlayerCharacter_C_PressedInput_HolsterHoldableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ChoiceMenu
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_ChoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ChoiceMenu");

	ABP_PlayerCharacter_C_PressedInput_ChoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_ChoiceMenu
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_ChoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_ChoiceMenu");

	ABP_PlayerCharacter_C_ReleasedInput_ChoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostRight
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_RotateGhostRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostRight");

	ABP_PlayerCharacter_C_PressedInput_RotateGhostRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostRight
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_RotateGhostRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostRight");

	ABP_PlayerCharacter_C_ReleasedInput_RotateGhostRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipItem
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UnequipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipItem");

	ABP_PlayerCharacter_C_UnequipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.JumpEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::JumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.JumpEvent");

	ABP_PlayerCharacter_C_JumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_SelectRotationMode_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_2");

	ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_3
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_SelectRotationMode_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_3");

	ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_WalkAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_WalkAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_WalkAction");

	ABP_PlayerCharacter_C_PressedInput_WalkAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Backwards_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Backwards_Axis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Backwards_Axis");

	ABP_PlayerCharacter_C_Backwards_Axis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Left_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Left_Axis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Left_Axis");

	ABP_PlayerCharacter_C_Left_Axis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_StanceAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_StanceAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_StanceAction");

	ABP_PlayerCharacter_C_PressedInput_StanceAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_StanceAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_StanceAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_StanceAction");

	ABP_PlayerCharacter_C_ReleasedInput_StanceAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_CameraAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_CameraAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_CameraAction");

	ABP_PlayerCharacter_C_PressedInput_CameraAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_CameraAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_CameraAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_CameraAction");

	ABP_PlayerCharacter_C_ReleasedInput_CameraAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_JumpAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_JumpAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_JumpAction");

	ABP_PlayerCharacter_C_PressedInput_JumpAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_JumpAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_JumpAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_JumpAction");

	ABP_PlayerCharacter_C_ReleasedInput_JumpAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InspectorMode
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_InspectorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InspectorMode");

	ABP_PlayerCharacter_C_ReleasedInput_InspectorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipTorchTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::EquipTorchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipTorchTimer");

	ABP_PlayerCharacter_C_EquipTorchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostLeft
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_RotateGhostLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostLeft");

	ABP_PlayerCharacter_C_ReleasedInput_RotateGhostLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostLeft
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_RotateGhostLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostLeft");

	ABP_PlayerCharacter_C_PressedInput_RotateGhostLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TimedInteraction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::TimedInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TimedInteraction");

	ABP_PlayerCharacter_C_TimedInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PickingItem
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PickingItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PickingItem");

	ABP_PlayerCharacter_C_PickingItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerDone
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::InteractTimerDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerDone");

	ABP_PlayerCharacter_C_InteractTimerDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Down_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Down_Axis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Down_Axis");

	ABP_PlayerCharacter_C_Down_Axis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MouseWheelAxisChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::MouseWheelAxisChange(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MouseWheelAxisChange");

	ABP_PlayerCharacter_C_MouseWheelAxisChange_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RightAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_RightAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RightAction");

	ABP_PlayerCharacter_C_PressedInput_RightAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RightAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_RightAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RightAction");

	ABP_PlayerCharacter_C_ReleasedInput_RightAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_LeftAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_LeftAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_LeftAction");

	ABP_PlayerCharacter_C_ReleasedInput_LeftAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_LeftAction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_LeftAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_LeftAction");

	ABP_PlayerCharacter_C_PressedInput_LeftAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Right_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Right_Axis");

	ABP_PlayerCharacter_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_NextSection
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_NextSection");

	ABP_PlayerCharacter_C_ReleasedInput_UI_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_NextSection
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_NextSection");

	ABP_PlayerCharacter_C_PressedInput_UI_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_PreviousSelection
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_PreviousSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_PreviousSelection");

	ABP_PlayerCharacter_C_ReleasedInput_UI_PreviousSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_PreviousSection
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_PreviousSection");

	ABP_PlayerCharacter_C_PressedInput_UI_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Left
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Left");

	ABP_PlayerCharacter_C_ReleasedInput_UI_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Left
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Left");

	ABP_PlayerCharacter_C_PressedInput_UI_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Right
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Right");

	ABP_PlayerCharacter_C_ReleasedInput_UI_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Right
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Right");

	ABP_PlayerCharacter_C_PressedInput_UI_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Up
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Up");

	ABP_PlayerCharacter_C_ReleasedInput_UI_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Up
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Up");

	ABP_PlayerCharacter_C_PressedInput_UI_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Down
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReleasedInput_UI_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Down");

	ABP_PlayerCharacter_C_ReleasedInput_UI_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Down
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Down");

	ABP_PlayerCharacter_C_PressedInput_UI_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Cancel
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_UI_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Cancel");

	ABP_PlayerCharacter_C_PressedInput_UI_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GameMenu
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PressedInput_GameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GameMenu");

	ABP_PlayerCharacter_C_PressedInput_GameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick");

	ABP_PlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::StartInteractionTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionTrace");

	ABP_PlayerCharacter_C_StartInteractionTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage");

	ABP_PlayerCharacter_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFade Pawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FromAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShouldFadeAudio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHoldWhenFinished              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bReverseOnFinish               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFade Pawn");

	ABP_PlayerCharacter_C_StartCameraFade_Pawn_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.bReverseOnFinish = bReverseOnFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Camera Fade Finished
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::On_Camera_Fade_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Camera Fade Finished");

	ABP_PlayerCharacter_C_On_Camera_Fade_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature
// (BlueprintEvent)
void ABP_PlayerCharacter_C::BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Swoon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::Swoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Swoon");

	ABP_PlayerCharacter_C_Swoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCharacterRotation_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                AddAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::AddCharacterRotation_BPI(const struct FRotator& AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCharacterRotation_BPI");

	ABP_PlayerCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewHeadMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewTorsoMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewHandsMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewLegsMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewFeetMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewHatSKMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewHoodMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewHairMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewBackpackMesh                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewPouchMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NewClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UpdateOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMesh");

	ABP_PlayerCharacter_C_SetMesh_Params params;
	params.NewHeadMesh = NewHeadMesh;
	params.NewTorsoMesh = NewTorsoMesh;
	params.NewHandsMesh = NewHandsMesh;
	params.NewLegsMesh = NewLegsMesh;
	params.NewFeetMesh = NewFeetMesh;
	params.NewHatSKMesh = NewHatSKMesh;
	params.NewHoodMesh = NewHoodMesh;
	params.NewHairMesh = NewHairMesh;
	params.NewBackpackMesh = NewBackpackMesh;
	params.NewPouchMesh = NewPouchMesh;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractionTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SetInteractionTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractionTimer");

	ABP_PlayerCharacter_C_SetInteractionTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLookAtLoopReached
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::OnLookAtLoopReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLookAtLoopReached");

	ABP_PlayerCharacter_C_OnLookAtLoopReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged_End_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::OnSeasonChanged_End_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged_End_Event_1");

	ABP_PlayerCharacter_C_OnSeasonChanged_End_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DeathType_E_DeathType> DeathType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen");

	ABP_PlayerCharacter_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForMounting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::PrepareForMounting(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForMounting");

	ABP_PlayerCharacter_C_PrepareForMounting_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGoToSleep
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::OnGoToSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGoToSleep");

	ABP_PlayerCharacter_C_OnGoToSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCameraPitch
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ResetCameraPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCameraPitch");

	ABP_PlayerCharacter_C_ResetCameraPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLookAt");

	ABP_PlayerCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishStageInteraction
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::FinishStageInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishStageInteraction");

	ABP_PlayerCharacter_C_FinishStageInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisablePlayerInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::ChangePlayerInput(bool DisablePlayerInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerInput");

	ABP_PlayerCharacter_C_ChangePlayerInput_Params params;
	params.DisablePlayerInput = DisablePlayerInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerMoveForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RotateDuringMovement           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UsePlayerLookAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetLookAtPitch               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerMoveForInteraction");

	ABP_PlayerCharacter_C_PlayerMoveForInteraction_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Camera Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraRotationLimits CameraRotationLimits           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Limit_Camera_Rotation(const struct FST_CameraRotationLimits& CameraRotationLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Camera Rotation");

	ABP_PlayerCharacter_C_Limit_Camera_Rotation_Params params;
	params.CameraRotationLimits = CameraRotationLimits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Stage Interaction Camera Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseHeadForFullBodyAnimations  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bUsePlayerCamera               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bLimitPlayerCamera             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Stage Interaction Camera Rotation");

	ABP_PlayerCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params params;
	params.bUseHeadForFullBodyAnimations = bUseHeadForFullBodyAnimations;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.bLimitPlayerCamera = bLimitPlayerCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Movement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStopMovementInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::Stop_Character_Movement(bool bStopMovementInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Movement");

	ABP_PlayerCharacter_C_Stop_Character_Movement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopRotationInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::Stop_Character_Rotation(bool StopRotationInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Rotation");

	ABP_PlayerCharacter_C_Stop_Character_Rotation_Params params;
	params.StopRotationInput = StopRotationInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsePlayerCamera               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Change_Camera(bool bUsePlayerCamera, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera");

	ABP_PlayerCharacter_C_Change_Camera_Params params;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AutomaticPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NumberOfAutomaticLoops         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SwapItemsOnInteraction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction");

	ABP_PlayerCharacter_C_SetupStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.SectionsToPlay = SectionsToPlay;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.AutomaticPlay = AutomaticPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipWithEquipTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UnequipWithEquipTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipWithEquipTimer");

	ABP_PlayerCharacter_C_UnequipWithEquipTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToEmptySlot
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UnequipToEmptySlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToEmptySlot");

	ABP_PlayerCharacter_C_UnequipToEmptySlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToolTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::UnequipToolTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToolTimer");

	ABP_PlayerCharacter_C_UnequipToolTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::EquipToolTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolTimer");

	ABP_PlayerCharacter_C_EquipToolTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlotWithHolster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedQuickSlotID            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DrawWeapon_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_C::SelectQuickSlotWithHolster(int SelectedQuickSlotID, bool DrawWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlotWithHolster");

	ABP_PlayerCharacter_C_SelectQuickSlotWithHolster_Params params;
	params.SelectedQuickSlotID = SelectedQuickSlotID;
	params.DrawWeapon_ = DrawWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::StartingInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory");

	ABP_PlayerCharacter_C_StartingInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetNewTimeCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::SetNewTimeCameraFOVLerp(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetNewTimeCameraFOVLerp");

	ABP_PlayerCharacter_C_SetNewTimeCameraFOVLerp_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseFromEndCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReverseFromEndCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseFromEndCameraFOVLerp");

	ABP_PlayerCharacter_C_ReverseFromEndCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::ReverseCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseCameraFOVLerp");

	ABP_PlayerCharacter_C_ReverseCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PlayCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCameraFOVLerp");

	ABP_PlayerCharacter_C_PlayCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayFromStartCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::PlayFromStartCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayFromStartCameraFOVLerp");

	ABP_PlayerCharacter_C_PlayFromStartCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::StopCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCameraFOVLerp");

	ABP_PlayerCharacter_C_StopCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOVLerpUpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             FloatCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetFOV                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOVLerpUpdateSettings");

	ABP_PlayerCharacter_C_FOVLerpUpdateSettings_Params params;
	params.FloatCurve = FloatCurve;
	params.NewRate = NewRate;
	params.TargetFOV = TargetFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Camera Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             LerpCurve                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::Update_Camera_Event(class UCurveFloat* LerpCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Camera Event");

	ABP_PlayerCharacter_C_Update_Camera_Event_Params params;
	params.LerpCurve = LerpCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

	ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedOffHandItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::DespawnedOffHandItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedOffHandItem__DelegateSignature");

	ABP_PlayerCharacter_C_DespawnedOffHandItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedOffHandItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::SpawnedOffHandItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedOffHandItem__DelegateSignature");

	ABP_PlayerCharacter_C_SpawnedOffHandItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedHeldItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::DespawnedHeldItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedHeldItem__DelegateSignature");

	ABP_PlayerCharacter_C_DespawnedHeldItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedHeldItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_C::SpawnedHeldItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedHeldItem__DelegateSignature");

	ABP_PlayerCharacter_C_SpawnedHeldItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PlayerCharacter_C::AfterRead()
{
	ABP_BaseCharacter_C::AfterRead();

	READ_PTR_FULL(PhysicsHandle, UPhysicsHandleComponent);
	READ_PTR_FULL(MediaSound, UMediaSoundComponent);
	READ_PTR_FULL(FP_Camera, UCameraComponent);
	READ_PTR_FULL(FP_SpringArm, USpringArmComponent);
	READ_PTR_FULL(TP_Camera, UCameraComponent);
	READ_PTR_FULL(TP_SpringArm, USpringArmComponent);
	READ_PTR_FULL(LifeStats_Voice, UAudioComponent);
	READ_PTR_FULL(BP_AimOffsetComponent, UBP_AimOffsetComponent_C);
	READ_PTR_FULL(ActionCameraSocket, USceneComponent);
	READ_PTR_FULL(BP_WeatherComponent, UBP_WeatherComponent_C);
	READ_PTR_FULL(BuildingTargetArrow, UArrowComponent);
	READ_PTR_FULL(BP_PlayerBuildingComponent, UBP_PlayerBuildingComponent_C);
	READ_PTR_FULL(CameraLerp, UTimelineComponent);
	READ_PTR_FULL(FOV, UTimelineComponent);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(LastHitActor, AActor);
	READ_PTR_FULL(HitActor, AActor);
	READ_PTR_FULL(GameMenuReference, UUI_GameMenu_C);
	READ_PTR_FULL(TraderReference, ABP_NPC_C);
	READ_PTR_FULL(ActionCamera, ABP_Camera_C);
	READ_PTR_FULL(HitComponent, UPrimitiveComponent);
	READ_PTR_FULL(LastHitComponent, UPrimitiveComponent);
	READ_PTR_FULL(Heir_Temp, ABP_BaseCharacter_C);
	READ_PTR_FULL(CameraLerpCurve, UCurveFloat);
	READ_PTR_FULL(TimerHitActor, AActor);
}

void ABP_PlayerCharacter_C::BeforeDelete()
{
	ABP_BaseCharacter_C::BeforeDelete();

	DELE_PTR_FULL(PhysicsHandle);
	DELE_PTR_FULL(MediaSound);
	DELE_PTR_FULL(FP_Camera);
	DELE_PTR_FULL(FP_SpringArm);
	DELE_PTR_FULL(TP_Camera);
	DELE_PTR_FULL(TP_SpringArm);
	DELE_PTR_FULL(LifeStats_Voice);
	DELE_PTR_FULL(BP_AimOffsetComponent);
	DELE_PTR_FULL(ActionCameraSocket);
	DELE_PTR_FULL(BP_WeatherComponent);
	DELE_PTR_FULL(BuildingTargetArrow);
	DELE_PTR_FULL(BP_PlayerBuildingComponent);
	DELE_PTR_FULL(CameraLerp);
	DELE_PTR_FULL(FOV);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(LastHitActor);
	DELE_PTR_FULL(HitActor);
	DELE_PTR_FULL(GameMenuReference);
	DELE_PTR_FULL(TraderReference);
	DELE_PTR_FULL(ActionCamera);
	DELE_PTR_FULL(HitComponent);
	DELE_PTR_FULL(LastHitComponent);
	DELE_PTR_FULL(Heir_Temp);
	DELE_PTR_FULL(CameraLerpCurve);
	DELE_PTR_FULL(TimerHitActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
