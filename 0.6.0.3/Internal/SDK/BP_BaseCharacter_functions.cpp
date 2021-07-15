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

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AController* ABP_BaseCharacter_C::GetCharacterController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController");

	ABP_BaseCharacter_C_GetCharacterController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ABP_BaseCharacter_C::GetCharacterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount");

	ABP_BaseCharacter_C_GetCharacterMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ABP_BaseCharacter_C::GetCharacterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn");

	ABP_BaseCharacter_C_GetCharacterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsCharacterMountable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsCharacterMountable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsCharacterMountable");

	ABP_BaseCharacter_C_IsCharacterMountable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted");

	ABP_BaseCharacter_C_IsMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformDismountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PerformDismountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PerformDismountPawn");

	ABP_BaseCharacter_C_PerformDismountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformMountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PerformMountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PerformMountPawn");

	ABP_BaseCharacter_C_PerformMountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToDismount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToDismount");

	ABP_BaseCharacter_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToMount");

	ABP_BaseCharacter_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BeginDismountingPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   dismountedPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::BeginDismountingPawn(class APawn* dismountedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BeginDismountingPawn");

	ABP_BaseCharacter_C_BeginDismountingPawn_Params params;
	params.dismountedPawn = dismountedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BeginMountingPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   newMountPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::BeginMountingPawn(class APawn* newMountPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BeginMountingPawn");

	ABP_BaseCharacter_C_BeginMountingPawn_Params params;
	params.newMountPawn = newMountPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class USkeletalMeshComponent*> ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<class USkeletalMeshComponent*> ABP_BaseCharacter_C::GetAllRiderSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes");

	ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDebugId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_BaseCharacter_C::GetDebugId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDebugId");

	ABP_BaseCharacter_C_GetDebugId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMountRiderComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMountRiderComponent* ABP_BaseCharacter_C::GetMountRiderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent");

	ABP_BaseCharacter_C_GetMountRiderComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMeshComponent* ABP_BaseCharacter_C::GetRiderMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh");

	ABP_BaseCharacter_C_GetRiderMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_BaseCharacter_C::GetSeatId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId");

	ABP_BaseCharacter_C_GetSeatId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver");

	ABP_BaseCharacter_C_IsDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsSeatedOnMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount");

	ABP_BaseCharacter_C_IsSeatedOnMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.MoveToMountingLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.MoveToMountingLocation");

	ABP_BaseCharacter_C_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnChangeToNewSeatCompleted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::OnChangeToNewSeatCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnChangeToNewSeatCompleted");

	ABP_BaseCharacter_C_OnChangeToNewSeatCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingPawnFinished
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  oldPawnMount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::OnDismountingPawnFinished(class AActor* oldPawnMount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingPawnFinished");

	ABP_BaseCharacter_C_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingPawnFinished
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMountActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::OnMountingPawnFinished(class AActor* newMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingPawnFinished");

	ABP_BaseCharacter_C_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMoveToMountingLocationCompleted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::OnMoveToMountingLocationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMoveToMountingLocationCompleted");

	ABP_BaseCharacter_C_OnMoveToMountingLocationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDismountingAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PlayDismountingAnimation(AdsMountingSystem_EMountingDirection Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDismountingAnimation");

	ABP_BaseCharacter_C_PlayDismountingAnimation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PlayMountingAnimation(AdsMountingSystem_EMountingDirection Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation");

	ABP_BaseCharacter_C_PlayMountingAnimation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMoveToSeatAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            currentSeatId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            oldSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::PlayMoveToSeatAnimation(int currentSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMoveToSeatAnimation");

	ABP_BaseCharacter_C_PlayMoveToSeatAnimation_Params params;
	params.currentSeatId = currentSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRiderCollisionEnabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldEnable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::SetRiderCollisionEnabled(bool shouldEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRiderCollisionEnabled");

	ABP_BaseCharacter_C_SetRiderCollisionEnabled_Params params;
	params.shouldEnable = shouldEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnDismounting
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  oldPawnMount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    mountingResponse               (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnDismounting");

	ABP_BaseCharacter_C_StartPawnDismounting_Params params;
	params.oldPawnMount = oldPawnMount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMounting
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMountActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    mountingResponse               (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMounting");

	ABP_BaseCharacter_C_StartPawnMounting_Params params;
	params.newMountActor = newMountActor;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsGrabbable");

	ABP_BaseCharacter_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemNeeded");

	ABP_BaseCharacter_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_BaseCharacter_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractItem");

	ABP_BaseCharacter_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemInteractable");

	ABP_BaseCharacter_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_BaseCharacter_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAdditionalStatus");

	ABP_BaseCharacter_C_GetInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
	if (Status != nullptr)
		*Status = params.Status;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractAdditionalStatus");

	ABP_BaseCharacter_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetFishData");

	ABP_BaseCharacter_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetID");

	ABP_BaseCharacter_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionDistance");

	ABP_BaseCharacter_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOff-HandItem");

	ABP_BaseCharacter_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCondition");

	ABP_BaseCharacter_C_GetInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Condition != nullptr)
		*Condition = params.Condition;
	if (CustomText != nullptr)
		*CustomText = params.CustomText;
	if (Text != nullptr)
		*Text = params.Text;
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractCondition");

	ABP_BaseCharacter_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolNeeded");

	ABP_BaseCharacter_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetOwnershipType");

	ABP_BaseCharacter_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_BaseCharacter_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTitle");

	ABP_BaseCharacter_C_GetInteractTitle_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Title != nullptr)
		*Title = params.Title;
	if (ShowAdditionalTitle1 != nullptr)
		*ShowAdditionalTitle1 = params.ShowAdditionalTitle1;
	if (AdditionalTitleText1 != nullptr)
		*AdditionalTitleText1 = params.AdditionalTitleText1;
	if (ShowAdditionalTitle2 != nullptr)
		*ShowAdditionalTitle2 = params.ShowAdditionalTitle2;
	if (AdditionalTitleText2 != nullptr)
		*AdditionalTitleText2 = params.AdditionalTitleText2;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_BaseCharacter_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractResources");

	ABP_BaseCharacter_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetFluidType");

	ABP_BaseCharacter_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool_UI");

	ABP_BaseCharacter_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable_UI");

	ABP_BaseCharacter_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractTime");

	ABP_BaseCharacter_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable");

	ABP_BaseCharacter_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetTaskFromActor");

	ABP_BaseCharacter_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractIcon");

	ABP_BaseCharacter_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckOccupied");

	ABP_BaseCharacter_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractAnimation");

	ABP_BaseCharacter_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetResourceType");

	ABP_BaseCharacter_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeldItem");

	ABP_BaseCharacter_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_BaseCharacter_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractName");

	ABP_BaseCharacter_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_BaseCharacter_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction");

	ABP_BaseCharacter_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractable");

	ABP_BaseCharacter_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool");

	ABP_BaseCharacter_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCount");

	ABP_BaseCharacter_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionEndpoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionEndpoint");

	ABP_BaseCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPhysicsHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicsHandleComponent* PhysicsHandle                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPhysicsHandle");

	ABP_BaseCharacter_C_GetPhysicsHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_MountAnimType_E_MountAnimType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::PlayMountAnimation(AdsMountingSystem_EMountingDirection Position, TEnumAsByte<E_MountAnimType_E_MountAnimType> Type, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountAnimation");

	ABP_BaseCharacter_C_PlayMountAnimation_Params params;
	params.Position = Position;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfessionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Profession          ProfessionData                 (Parm, OutParm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetProfessionData(struct FST_Profession* ProfessionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfessionData");

	ABP_BaseCharacter_C_GetProfessionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInDialogue_BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInDialogue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::GetIsInDialogue_BPI(bool* IsInDialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInDialogue_BPI");

	ABP_BaseCharacter_C_GetIsInDialogue_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInDialogue != nullptr)
		*IsInDialogue = params.IsInDialogue;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetSystemManager");

	ABP_BaseCharacter_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetBaseCharacterWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetBaseCharacterWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetBaseCharacterWorldLocation");

	ABP_BaseCharacter_C_GetBaseCharacterWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TakeOutDuration                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools_E_Tools> ToolType, float* Duration, float* TakeOutDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation");

	ABP_BaseCharacter_C_PlayHolsterAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (TakeOutDuration != nullptr)
		*TakeOutDuration = params.TakeOutDuration;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              HeadTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::GetHeadTransform(struct FTransform* HeadTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadTransform");

	ABP_BaseCharacter_C_GetHeadTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeadTransform != nullptr)
		*HeadTransform = params.HeadTransform;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetStatsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterStatsComponent_C* StatsComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetStatsComponent(class UBP_CharacterStatsComponent_C** StatsComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetStatsComponent");

	ABP_BaseCharacter_C_GetStatsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatsComponent != nullptr)
		*StatsComponent = params.StatsComponent;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfession");

	ABP_BaseCharacter_C_GetProfession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profession != nullptr)
		*Profession = params.Profession;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentPickUpAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            PickUpMontage                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentPickUpAnim");

	ABP_BaseCharacter_C_GetCurrentPickUpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PickUpMontage != nullptr)
		*PickUpMontage = params.PickUpMontage;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::GetIsAnyMontageFromMapPlaying(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsAnyMontageFromMapPlaying");

	ABP_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.isPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APC_Player_C*            PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::isPlayer(bool* Player, class APC_Player_C** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.isPlayer");

	ABP_BaseCharacter_C_isPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCameraViewDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetCameraViewDirection(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCameraViewDirection");

	ABP_BaseCharacter_C_GetCameraViewDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Get ALS_Stance BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Stance_E_Stance> Stance                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Get_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance>* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get ALS_Stance BPI");

	ABP_BaseCharacter_C_Get_ALS_Stance_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stance != nullptr)
		*Stance = params.Stance;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetDirection(float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDirection");

	ABP_BaseCharacter_C_GetDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction");

	ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction");

	ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDrunkMovement
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UpdateDrunkMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDrunkMovement");

	ABP_BaseCharacter_C_UpdateDrunkMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsWearingCorrectPreset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CheckProfession                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsWearingCorrectPreset(bool CheckProfession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsWearingCorrectPreset");

	ABP_BaseCharacter_C_IsWearingCorrectPreset_Params params;
	params.CheckProfession = CheckProfession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SnapToSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TargetTransform                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SnapToSlot(const struct FTransform& TargetTransform, class AActor* InteractedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SnapToSlot");

	ABP_BaseCharacter_C_SnapToSlot_Params params;
	params.TargetTransform = TargetTransform;
	params.InteractedActor = InteractedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDefaultFov
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFieldOfView                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateDefaultFov(float InFieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDefaultFov");

	ABP_BaseCharacter_C_UpdateDefaultFov_Params params;
	params.InFieldOfView = InFieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimClassForNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClass* ABP_BaseCharacter_C::GetAnimClassForNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimClassForNPC");

	ABP_BaseCharacter_C_GetAnimClassForNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStitchColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ColorTable          Dye                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateStitchColor(const struct FST_ColorTable& Dye, class UMaterialInstanceDynamic* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStitchColor");

	ABP_BaseCharacter_C_UpdateStitchColor_Params params;
	params.Dye = Dye;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDyeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ColorTable          Dye                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateDyeColor(const struct FST_ColorTable& Dye, class UMaterialInstanceDynamic* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDyeColor");

	ABP_BaseCharacter_C_UpdateDyeColor_Params params;
	params.Dye = Dye;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials");

	ABP_BaseCharacter_C_InitializeComponentMaterials_Params params;
	params.SkeletalComponent = SkeletalComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Head                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           Hair                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetHeadAndHair(class USkeletalMesh** Head, class USkeletalMesh** Hair)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHair");

	ABP_BaseCharacter_C_GetHeadAndHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Head != nullptr)
		*Head = params.Head;
	if (Hair != nullptr)
		*Hair = params.Hair;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHairRow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_NPCMeshesGen        ST_NPCMeshesGen                (Parm, OutParm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHairRow");

	ABP_BaseCharacter_C_GetHeadAndHairRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ST_NPCMeshesGen != nullptr)
		*ST_NPCMeshesGen = params.ST_NPCMeshesGen;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMeshFromPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCItemColors       Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::InitializeMeshFromPreset(class USkeletalMeshComponent* SkeletalComponent, const struct FST_NPCItemColors& Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMeshFromPreset");

	ABP_BaseCharacter_C_InitializeMeshFromPreset_Params params;
	params.SkeletalComponent = SkeletalComponent;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCsPresets         BasePreset                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FName                   PresetID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCsMeshesDyes      Meshes                         (Parm, OutParm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CombinePresets(TEnumAsByte<E_Profession_E_Profession> Profession, const struct FST_NPCsPresets& BasePreset, struct FName* PresetID, struct FST_NPCsMeshesDyes* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresets");

	ABP_BaseCharacter_C_CombinePresets_Params params;
	params.Profession = Profession;
	params.BasePreset = BasePreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PresetID != nullptr)
		*PresetID = params.PresetID;
	if (Meshes != nullptr)
		*Meshes = params.Meshes;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NPCsPresets         Preset                         (Parm, OutParm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetPresetForProfession(TEnumAsByte<E_Profession_E_Profession> Profession, struct FST_NPCsPresets* Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession");

	ABP_BaseCharacter_C_GetPresetForProfession_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Preset != nullptr)
		*Preset = params.Preset;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NewClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UpdateOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetMeshesFromPreset(TEnumAsByte<E_Profession_E_Profession> Profession, class UClass* NewClass, bool UpdateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset");

	ABP_BaseCharacter_C_SetMeshesFromPreset_Params params;
	params.Profession = Profession;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFPCameraFOV
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FieldOfView                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetFPCameraFOV(float* FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetFPCameraFOV");

	ABP_BaseCharacter_C_GetFPCameraFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FieldOfView != nullptr)
		*FieldOfView = params.FieldOfView;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipToolForInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Holdable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   WantedTool                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedTool, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipToolForInteraction");

	ABP_BaseCharacter_C_EquipToolForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedTool = WantedTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomHairColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::SetRandomHairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomHairColor");

	ABP_BaseCharacter_C_SetRandomHairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPlayerOccupy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnPlayerOccupy");

	ABP_BaseCharacter_C_OnPlayerOccupy_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnDayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChanged");

	ABP_BaseCharacter_C_OnDayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SwapHouses
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    House1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Family1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_MasterBuilding_C*    House2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Family2                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Succeed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SwapHouses(class ABP_MasterBuilding_C* House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C* House2, TArray<class ABP_BaseCharacter_C*>* Family2, bool* Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SwapHouses");

	ABP_BaseCharacter_C_SwapHouses_Params params;
	params.House1 = House1;
	params.House2 = House2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Family1 != nullptr)
		*Family1 = params.Family1;
	if (Family2 != nullptr)
		*Family2 = params.Family2;
	if (Succeed != nullptr)
		*Succeed = params.Succeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BindFurnitureEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BindFurnitureEvents");

	ABP_BaseCharacter_C_BindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UnbindFurnitureEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UnbindFurnitureEvents");

	ABP_BaseCharacter_C_UnbindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDestroyFurniture
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnDestroyFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDestroyFurniture");

	ABP_BaseCharacter_C_OnDestroyFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckToSwap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    New_House                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanSwap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MasterBuilding_C*    House1                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Family1                        (Parm, OutParm)
// class ABP_MasterBuilding_C*    House2                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Family2                        (Parm, OutParm)
void ABP_BaseCharacter_C::CheckToSwap(class ABP_MasterBuilding_C* New_House, bool* CanSwap, class ABP_MasterBuilding_C** House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C** House2, TArray<class ABP_BaseCharacter_C*>* Family2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckToSwap");

	ABP_BaseCharacter_C_CheckToSwap_Params params;
	params.New_House = New_House;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSwap != nullptr)
		*CanSwap = params.CanSwap;
	if (House1 != nullptr)
		*House1 = params.House1;
	if (Family1 != nullptr)
		*Family1 = params.Family1;
	if (House2 != nullptr)
		*House2 = params.House2;
	if (Family2 != nullptr)
		*Family2 = params.Family2;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction");

	ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params params;
	params.InteractedWorkbench = InteractedWorkbench;
	params.InteractComponent = InteractComponent;
	params.InteractLocation = InteractLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On Start Workbench Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_Workbench_C* InteractedWorkbench            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 InteractLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseLookAt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                LookAtRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetPitch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation, bool ChangeCamera, bool UseLocation, bool UseLookAt, const struct FRotator& LookAtRotation, bool ResetPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On Start Workbench Interaction");

	ABP_BaseCharacter_C_On_Start_Workbench_Interaction_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CrouchingSpeed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetCrouchingSpeed(float* CrouchingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed");

	ABP_BaseCharacter_C_GetCrouchingSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CrouchingSpeed != nullptr)
		*CrouchingSpeed = params.CrouchingSpeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEarMorph
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetEarMorph(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEarMorph");

	ABP_BaseCharacter_C_SetEarMorph_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartVector                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                  ActorToIgnore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Observed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::VisibilityCheck(const struct FVector& StartVector, float Radius, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, class AActor* ActorToIgnore, bool* Observed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck");

	ABP_BaseCharacter_C_VisibilityCheck_Params params;
	params.StartVector = StartVector;
	params.Radius = Radius;
	params.ObjectTypes = ObjectTypes;
	params.ActorToIgnore = ActorToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Observed != nullptr)
		*Observed = params.Observed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCharacterSpeedByCharacterType
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UpdateCharacterSpeedByCharacterType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCharacterSpeedByCharacterType");

	ABP_BaseCharacter_C_UpdateCharacterSpeedByCharacterType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Destroy NPC
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Destroy_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Destroy NPC");

	ABP_BaseCharacter_C_Destroy_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNPCDataFromSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_NPC            NPCData                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           ResetEQ                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetNPCDataFromSave");

	ABP_BaseCharacter_C_SetNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_NPC            NPCData                        (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetNPCDataToSave(struct FST_SAVE_NPC* NPCData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCDataToSave");

	ABP_BaseCharacter_C_GetNPCDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCData != nullptr)
		*NPCData = params.NPCData;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnDialogueEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded");

	ABP_BaseCharacter_C_OnDialogueEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnDialogueStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted");

	ABP_BaseCharacter_C_OnDialogueStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCharacterTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterTypeChanged");

	ABP_BaseCharacter_C_OnCharacterTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonChanged");

	ABP_BaseCharacter_C_OnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckItemForInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Holdable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   WantedToolType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedToolType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckItemForInteraction");

	ABP_BaseCharacter_C_CheckItemForInteraction_Params params;
	params.Holdable = Holdable;
	params.WantedToolType = WantedToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnAfterPoseChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> AfterIdlePose                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnAfterPoseChanged(TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> AfterIdlePose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnAfterPoseChanged");

	ABP_BaseCharacter_C_OnAfterPoseChanged_Params params;
	params.AfterIdlePose = AfterIdlePose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInjured
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInjured                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetIsInjured(bool IsInjured)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInjured");

	ABP_BaseCharacter_C_SetIsInjured_Params params;
	params.IsInjured = IsInjured;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsSick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSick                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetIsSick(bool IsSick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsSick");

	ABP_BaseCharacter_C_SetIsSick_Params params;
	params.IsSick = IsSick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::SpawnHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHands");

	ABP_BaseCharacter_C_SpawnHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
void ABP_BaseCharacter_C::SpawnOffHandItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandItem");

	ABP_BaseCharacter_C_SpawnOffHandItem_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
void ABP_BaseCharacter_C::SpawnHeldItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem");

	ABP_BaseCharacter_C_SpawnHeldItem_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfUsingHands
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::CheckIfUsingHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfUsingHands");

	ABP_BaseCharacter_C_CheckIfUsingHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandItem
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::DestroyOffHandItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandItem");

	ABP_BaseCharacter_C_DestroyOffHandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::DestroyHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem");

	ABP_BaseCharacter_C_DestroyHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnOwnershipSwap");

	ABP_BaseCharacter_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateOldness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateOldness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateOldness");

	ABP_BaseCharacter_C_UpdateOldness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetOldness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness");

	ABP_BaseCharacter_C_SetOldness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BaseCharacter_C::IsMontagePlaying(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying");

	ABP_BaseCharacter_C_IsMontagePlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.DespawnAnimHoldable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::DespawnAnimHoldable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DespawnAnimHoldable");

	ABP_BaseCharacter_C_DespawnAnimHoldable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOffHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::EquipAnimHoldable(class UClass* ItemClass, bool IsOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable");

	ABP_BaseCharacter_C_EquipAnimHoldable_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseUpDownAxisInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_BaseCharacter_C::GetMouseUpDownAxisInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseUpDownAxisInput");

	ABP_BaseCharacter_C_GetMouseUpDownAxisInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseLeftRightAxisInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_BaseCharacter_C::GetMouseLeftRightAxisInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseLeftRightAxisInput");

	ABP_BaseCharacter_C_GetMouseLeftRightAxisInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_BaseCharacter_C::GetLookingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetLookingRotation");

	ABP_BaseCharacter_C_GetLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Holster Weapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSwitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsValidHeldItem                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Holster Weapon");

	ABP_BaseCharacter_C_Holster_Weapon_Params params;
	params.IsSwitch = IsSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSwitch != nullptr)
		*bIsSwitch = params.bIsSwitch;
	if (IsValidHeldItem != nullptr)
		*IsValidHeldItem = params.IsValidHeldItem;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStrengthAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateStrengthAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStrengthAlpha");

	ABP_BaseCharacter_C_UpdateStrengthAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Copy&SetCharacterParameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CopyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FST_CharacterMeshes     CopyCharacterMeshes            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FST_CharacterStats      CopyCharacterStats             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterRelations  CopyCharacterRelations         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsAndTallents CopyCharacterSkillsAndTallents (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TMap<struct FName, struct FST_InventoryItemsArray> CopyCharacterInventory         (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FST_ItemInventorys> CopyCharacterQuickSlots        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> CopyCharacterArmor             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 CopyActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                CopyActorRotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Copy_SetCharacterParameters(const struct FString& CopyID, const struct FST_CharacterMeshes& CopyCharacterMeshes, const struct FST_CharacterStats& CopyCharacterStats, const struct FST_CharacterRelations& CopyCharacterRelations, const struct FST_CharacterSkillsAndTallents& CopyCharacterSkillsAndTallents, TMap<struct FName, struct FST_InventoryItemsArray> CopyCharacterInventory, TArray<struct FST_ItemInventorys>* CopyCharacterQuickSlots, TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> CopyCharacterArmor, const struct FVector& CopyActorLocation, const struct FRotator& CopyActorRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Copy&SetCharacterParameters");

	ABP_BaseCharacter_C_Copy_SetCharacterParameters_Params params;
	params.CopyID = CopyID;
	params.CopyCharacterMeshes = CopyCharacterMeshes;
	params.CopyCharacterStats = CopyCharacterStats;
	params.CopyCharacterRelations = CopyCharacterRelations;
	params.CopyCharacterSkillsAndTallents = CopyCharacterSkillsAndTallents;
	params.CopyCharacterInventory = CopyCharacterInventory;
	params.CopyCharacterArmor = CopyCharacterArmor;
	params.CopyActorLocation = CopyActorLocation;
	params.CopyActorRotation = CopyActorRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CopyCharacterQuickSlots != nullptr)
		*CopyCharacterQuickSlots = params.CopyCharacterQuickSlots;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetFPCameraFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFieldOfView                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetFPCameraFOV(float InFieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetFPCameraFOV");

	ABP_BaseCharacter_C_SetFPCameraFOV_Params params;
	params.InFieldOfView = InFieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Components
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Attach_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Components");

	ABP_BaseCharacter_C_Attach_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCanPerfromHitAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPerfromHitAction            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetCanPerfromHitAction(bool CanPerfromHitAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCanPerfromHitAction");

	ABP_BaseCharacter_C_SetCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Range Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Update_Range_Strength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Range Strength");

	ABP_BaseCharacter_C_Update_Range_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CreateNewMeshMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ColorTable          Dye                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CreateNewMeshMaterials(class UMeshComponent* Mesh, const struct FST_ColorTable& Dye)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CreateNewMeshMaterials");

	ABP_BaseCharacter_C_CreateNewMeshMaterials_Params params;
	params.Mesh = Mesh;
	params.Dye = Dye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetMeshMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ResetMeshMaterials(class UMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ResetMeshMaterials");

	ABP_BaseCharacter_C_ResetMeshMaterials_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialsArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*> DynamicMaterialReferences      (Parm, OutParm)
void ABP_BaseCharacter_C::GetDynamicMaterialsArray(class UMeshComponent* Mesh, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialReferences)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialsArray");

	ABP_BaseCharacter_C_GetDynamicMaterialsArray_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DynamicMaterialReferences != nullptr)
		*DynamicMaterialReferences = params.DynamicMaterialReferences;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialStruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_MeshDynamicMaterials Array_Element                  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetDynamicMaterialStruct(class UMeshComponent* Mesh, struct FST_MeshDynamicMaterials* Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialStruct");

	ABP_BaseCharacter_C_GetDynamicMaterialStruct_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetDynamicMaterialIndex(class UMeshComponent* Mesh, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialIndex");

	ABP_BaseCharacter_C_GetDynamicMaterialIndex_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ClearMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ClearMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ClearMaterials");

	ABP_BaseCharacter_C_ClearMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::InitializeMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterials");

	ABP_BaseCharacter_C_InitializeMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHoldableItemActionSpeed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UpdateHoldableItemActionSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHoldableItemActionSpeed");

	ABP_BaseCharacter_C_UpdateHoldableItemActionSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomSkinTone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::SetRandomSkinTone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomSkinTone");

	ABP_BaseCharacter_C_SetRandomSkinTone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEncumberedSpeed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CalculateEncumberedSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEncumberedSpeed");

	ABP_BaseCharacter_C_CalculateEncumberedSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.MakeMovementNoise
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::MakeMovementNoise()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.MakeMovementNoise");

	ABP_BaseCharacter_C_MakeMovementNoise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMovementInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Forward_Axis                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::PlayerMovementInput(bool Is_Forward_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMovementInput");

	ABP_BaseCharacter_C_PlayerMovementInput_Params params;
	params.Is_Forward_Axis = Is_Forward_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                RagdollRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 RagdollLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ActorRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ActorLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CalculateActorLocationAndRotationInRagdoll(const struct FRotator& RagdollRotation, const struct FVector& RagdollLocation, struct FRotator* ActorRotation, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll");

	ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params params;
	params.RagdollRotation = RagdollRotation;
	params.RagdollLocation = RagdollLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorRotation != nullptr)
		*ActorRotation = params.ActorRotation;
	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CanSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanSprint                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::CanSprint(bool* CanSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CanSprint");

	ABP_BaseCharacter_C_CanSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSprint != nullptr)
		*CanSprint = params.CanSprint;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CustomAcceleration
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CustomAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CustomAcceleration");

	ABP_BaseCharacter_C_CustomAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_ViewMode Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_ViewMode_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_ViewMode Changed");

	ABP_BaseCharacter_C_On_ALS_ViewMode_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.DebugMode
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::DebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.DebugMode");

	ABP_BaseCharacter_C_DebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseVelocity");

	ABP_BaseCharacter_C_ChooseVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.LimitRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimYawLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::LimitRotation(float AimYawLimit, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LimitRotation");

	ABP_BaseCharacter_C_LimitRotation_Params params;
	params.AimYawLimit = AimYawLimit;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Aiming Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_Aiming_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Aiming Changed");

	ABP_BaseCharacter_C_On_ALS_Aiming_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.LerpCameraSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*     TargetSpringArm                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LerpCameraSettings");

	ABP_BaseCharacter_C_LerpCameraSettings_Params params;
	params.LerpAlpha = LerpAlpha;
	params.TargetSpringArm = TargetSpringArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseCameraSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_CameraSettings      TargetCameraSettings           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseCameraSettings");

	ABP_BaseCharacter_C_ChooseCameraSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetCameraSettings != nullptr)
		*TargetCameraSettings = params.TargetCameraSettings;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateRotationRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SlowSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SlowSpeedRate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FastSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FastSpeedRate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_BaseCharacter_C::CalculateRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateRotationRate");

	ABP_BaseCharacter_C_CalculateRotationRate_Params params;
	params.SlowSpeed = SlowSpeed;
	params.SlowSpeedRate = SlowSpeedRate;
	params.FastSpeed = FastSpeed;
	params.FastSpeedRate = FastSpeedRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BaseCharacter.BP_BaseCharacter_C.LookingDirectionWithOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetInterpSpeed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NE_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NW_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SE_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SW_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Buffer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.LookingDirectionWithOffset");

	ABP_BaseCharacter_C_LookingDirectionWithOffset_Params params;
	params.OffsetInterpSpeed = OffsetInterpSpeed;
	params.NE_Angle = NE_Angle;
	params.NW_Angle = NW_Angle;
	params.SE_Angle = SE_Angle;
	params.SW_Angle = SW_Angle;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                AddAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AddCharacterRotation(const struct FRotator& AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation");

	ABP_BaseCharacter_C_AddCharacterRotation_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseGroundFriction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseGroundFriction(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseGroundFriction");

	ABP_BaseCharacter_C_ChooseGroundFriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseBrakingDeceleration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseBrakingDeceleration(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseBrakingDeceleration");

	ABP_BaseCharacter_C_ChooseBrakingDeceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxAcceleration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseMaxAcceleration(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxAcceleration");

	ABP_BaseCharacter_C_ChooseMaxAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxWalkSpeed");

	ABP_BaseCharacter_C_ChooseMaxWalkSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateALS_CharacterMovementSettings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UpdateALS_CharacterMovementSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateALS_CharacterMovementSettings");

	ABP_BaseCharacter_C_UpdateALS_CharacterMovementSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InterpRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation");

	ABP_BaseCharacter_C_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.InterpRotation = InterpRotation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_RotationMode Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_RotationMode_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_RotationMode Changed");

	ABP_BaseCharacter_C_On_ALS_RotationMode_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Stance Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_Stance_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Stance Changed");

	ABP_BaseCharacter_C_On_ALS_Stance_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Gait Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_Gait_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Gait Changed");

	ABP_BaseCharacter_C_On_ALS_Gait_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_MovementMode Changed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::On_ALS_MovementMode_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_MovementMode Changed");

	ABP_BaseCharacter_C_On_ALS_MovementMode_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.On PawnMovementMode Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  NewCustomMove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::On_PawnMovementMode_Changed(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On PawnMovementMode Changed");

	ABP_BaseCharacter_C_On_PawnMovementMode_Changed_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMove = NewCustomMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEssentialVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CalculateEssentialVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEssentialVariables");

	ABP_BaseCharacter_C_CalculateEssentialVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript");

	ABP_BaseCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__FinishedFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::EyesStateTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__FinishedFunc");

	ABP_BaseCharacter_C_EyesStateTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__UpdateFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::EyesStateTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__UpdateFunc");

	ABP_BaseCharacter_C_EyesStateTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__FinishedFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::Blinking__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__FinishedFunc");

	ABP_BaseCharacter_C_Blinking__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__UpdateFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::Blinking__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__UpdateFunc");

	ABP_BaseCharacter_C_Blinking__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__FinishedFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::FistFightingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__FinishedFunc");

	ABP_BaseCharacter_C_FistFightingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__UpdateFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::FistFightingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__UpdateFunc");

	ABP_BaseCharacter_C_FistFightingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interact");

	ABP_BaseCharacter_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractInput");

	ABP_BaseCharacter_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractStart");

	ABP_BaseCharacter_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel");

	ABP_BaseCharacter_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetOccupied");

	ABP_BaseCharacter_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetTaskInActor");

	ABP_BaseCharacter_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeTaskIsOccupied");

	ABP_BaseCharacter_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract");

	ABP_BaseCharacter_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PerformActorInteraction");

	ABP_BaseCharacter_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.IsLookedAt");

	ABP_BaseCharacter_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InteractWithImpaledItem");

	ABP_BaseCharacter_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddImpaledItem");

	ABP_BaseCharacter_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveImpaledItem");

	ABP_BaseCharacter_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartAttackFunction");

	ABP_BaseCharacter_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopAttackFunction");

	ABP_BaseCharacter_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode BPI");

	ABP_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params params;
	params.ALS_RotationMode_BPI = ALS_RotationMode_BPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_Pivot BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PivotParams         PivotParams                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_Pivot_BPI(const struct FST_PivotParams& PivotParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_Pivot BPI");

	ABP_BaseCharacter_C_AnimNotify_Pivot_BPI_Params params;
	params.PivotParams = PivotParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_TurningInPlace BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TurnInPlaceMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldTurnInPlace              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TurningInPlace                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TurningRight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_TurningInPlace BPI");

	ABP_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params params;
	params.TurnInPlaceMontage = TurnInPlaceMontage;
	params.ShouldTurnInPlace = ShouldTurnInPlace;
	params.TurningInPlace = TurningInPlace;
	params.TurningRight = TurningRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_IdleEntryState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_IdleEntryState BPI");

	ABP_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params params;
	params.IdleEntryState = IdleEntryState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_ALS_Aiming_BPI(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming BPI");

	ABP_BaseCharacter_C_Set_ALS_Aiming_BPI_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Play_GetUp_Anim BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FaceDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Play_GetUp_Anim_BPI(bool FaceDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play_GetUp_Anim BPI");

	ABP_BaseCharacter_C_Play_GetUp_Anim_BPI_Params params;
	params.FaceDown = FaceDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SavePoseSnapshot_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PoseName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SavePoseSnapshot_BPI(const struct FName& PoseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SavePoseSnapshot_BPI");

	ABP_BaseCharacter_C_SavePoseSnapshot_BPI_Params params;
	params.PoseName = PoseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode BPI");

	ABP_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params params;
	params.ViewMode = ViewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowTraces_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowTraces                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::ShowTraces_BPI(bool ShowTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShowTraces_BPI");

	ABP_BaseCharacter_C_ShowTraces_BPI_Params params;
	params.ShowTraces = ShowTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WalkingSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_WalkingSpeed_BPI(float WalkingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed BPI");

	ABP_BaseCharacter_C_Set_WalkingSpeed_BPI_Params params;
	params.WalkingSpeed = WalkingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RunningSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_RunningSpeed_BPI(float RunningSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed BPI");

	ABP_BaseCharacter_C_Set_RunningSpeed_BPI_Params params;
	params.RunningSpeed = RunningSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SprintingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_SprintingSpeed_BPI(float SprintingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed BPI");

	ABP_BaseCharacter_C_Set_SprintingSpeed_BPI_Params params;
	params.SprintingSpeed = SprintingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CrouchingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_CrouchingSpeed_BPI(float CrouchingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed BPI");

	ABP_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params params;
	params.CrouchingSpeed = CrouchingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RF_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RF                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_RF_BPI(bool RF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RF_BPI");

	ABP_BaseCharacter_C_Set_RF_BPI_Params params;
	params.RF = RF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType");

	ABP_BaseCharacter_C_SetToolType_Params params;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SnapPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SnapComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetSnapAlpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ResetSnapAlpha                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   LeftHandSocketName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RightHandSocketName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, const struct FName& LeftHandSocketName, const struct FName& RightHandSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SnapPoint");

	ABP_BaseCharacter_C_AnimNotify_SnapPoint_Params params;
	params.SnapComponent = SnapComponent;
	params.TargetSnapAlpha = TargetSnapAlpha;
	params.ResetSnapAlpha = ResetSnapAlpha;
	params.Reset = Reset;
	params.LeftHandSocketName = LeftHandSocketName;
	params.RightHandSocketName = RightHandSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeAnimLoopState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLooping                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::ChangeAnimLoopState(bool IsLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeAnimLoopState");

	ABP_BaseCharacter_C_ChangeAnimLoopState_Params params;
	params.IsLooping = IsLooping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StartSnappingIK
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::AnimNotify_StartSnappingIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StartSnappingIK");

	ABP_BaseCharacter_C_AnimNotify_StartSnappingIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopSnappingIK
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::AnimNotify_StopSnappingIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopSnappingIK");

	ABP_BaseCharacter_C_AnimNotify_StopSnappingIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction");

	ABP_BaseCharacter_C_OnStartStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoopStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoopStageInteraction");

	ABP_BaseCharacter_C_OnLoopStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction");

	ABP_BaseCharacter_C_OnEndStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Range Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_Range_Strength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Range Strength");

	ABP_BaseCharacter_C_Set_Range_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetStrengthAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetStrengthAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetStrengthAlpha");

	ABP_BaseCharacter_C_SetStrengthAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OverrideCanPerfromHitAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPerfromHitAction            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::OverrideCanPerfromHitAction(bool CanPerfromHitAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OverrideCanPerfromHitAction");

	ABP_BaseCharacter_C_OverrideCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickUpAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickUpAnim");

	ABP_BaseCharacter_C_PlayPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMoveForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RotateDuringMovement           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UsePlayerLookAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetLookAtPitch               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMoveForInteraction");

	ABP_BaseCharacter_C_PlayerMoveForInteraction_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerLookAt");

	ABP_BaseCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_LimitCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraRotationLimits CameraLimits                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_LimitCamera");

	ABP_BaseCharacter_C_AnimNotify_LimitCamera_Params params;
	params.CameraLimits = CameraLimits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopRotationInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AnimNotify_StopRotation(bool StopRotationInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopRotation");

	ABP_BaseCharacter_C_AnimNotify_StopRotation_Params params;
	params.StopRotationInput = StopRotationInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStopMovementInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AnimNotify_StopMovement(bool bStopMovementInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopMovement");

	ABP_BaseCharacter_C_AnimNotify_StopMovement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCraftingAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CraftingTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCraftingAnimation");

	ABP_BaseCharacter_C_PlayCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnim");

	ABP_BaseCharacter_C_SelectPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleStandingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleStandingPose BPI");

	ABP_BaseCharacter_C_Set_IdleStandingPose_BPI_Params params;
	params.Standing_Idle_Pose = Standing_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleTalkingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleTalkingPose BPI");

	ABP_BaseCharacter_C_Set_IdleTalkingPose_BPI_Params params;
	params.Talking_Idle_Pose = Talking_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleLookingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleLookingPose BPI");

	ABP_BaseCharacter_C_Set_IdleLookingPose_BPI_Params params;
	params.Looking_Idle_Pose = Looking_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleOtherPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleOtherPose BPI");

	ABP_BaseCharacter_C_Set_IdleOtherPose_BPI_Params params;
	params.Other_Idle_Pose = Other_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageComplete");

	ABP_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageInterrupted");

	ABP_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopIncreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopIncreased");

	ABP_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopsFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopsFinished");

	ABP_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageComplete");

	ABP_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageBlendOut");

	ABP_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageInterrupted");

	ABP_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitForCrafting
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::WaitForCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitForCrafting");

	ABP_BaseCharacter_C_WaitForCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick");

	ABP_BaseCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BaseCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay");

	ABP_BaseCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh
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
void ABP_BaseCharacter_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh");

	ABP_BaseCharacter_C_SetMesh_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction
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
void ABP_BaseCharacter_C::SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction");

	ABP_BaseCharacter_C_SetupStageInteraction_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopRotationInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Stop_Character_Rotation(bool StopRotationInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Rotation");

	ABP_BaseCharacter_C_Stop_Character_Rotation_Params params;
	params.StopRotationInput = StopRotationInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsePlayerCamera               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Change_Camera(bool bUsePlayerCamera, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera");

	ABP_BaseCharacter_C_Change_Camera_Params params;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FromAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShouldFadeAudio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHoldWhenFinished              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bReverseOnFinish               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn");

	ABP_BaseCharacter_C_StartCameraFade_Pawn_Params params;
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


// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::FinishStageInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction");

	ABP_BaseCharacter_C_FinishStageInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Swoon
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Swoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Swoon");

	ABP_BaseCharacter_C_Swoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Movement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStopMovementInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Stop_Character_Movement(bool bStopMovementInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Movement");

	ABP_BaseCharacter_C_Stop_Character_Movement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Stage Interaction Camera Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseHeadForFullBodyAnimations  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bUsePlayerCamera               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bLimitPlayerCamera             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Stage Interaction Camera Rotation");

	ABP_BaseCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params params;
	params.bUseHeadForFullBodyAnimations = bUseHeadForFullBodyAnimations;
	params.bUsePlayerCamera = bUsePlayerCamera;
	params.bLimitPlayerCamera = bLimitPlayerCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Camera Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraRotationLimits CameraRotationLimits           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Limit_Camera_Rotation(const struct FST_CameraRotationLimits& CameraRotationLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Camera Rotation");

	ABP_BaseCharacter_C_Limit_Camera_Rotation_Params params;
	params.CameraRotationLimits = CameraRotationLimits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           UseLookingDown                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          LookingDownAngle               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OverrideMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IgnorePlayingMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction");

	ABP_BaseCharacter_C_HoldableAction_Params params;
	params.MontagesSettings = MontagesSettings;
	params.UseLookingDown = UseLookingDown;
	params.LookingDownAngle = LookingDownAngle;
	params.Loop = Loop;
	params.Attack = Attack;
	params.OverrideMontage = OverrideMontage;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MontagesSettings    Action_Montage_Settings        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::HoldableHitAction(const struct FST_MontagesSettings& Action_Montage_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction");

	ABP_BaseCharacter_C_HoldableHitAction_Params params;
	params.Action_Montage_Settings = Action_Montage_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickingUpMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickingUpMontage");

	ABP_BaseCharacter_C_PlayPickingUpMontage_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshAndMaterials
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HeadMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           TorsoMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           HandsMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           LegsMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           FeetMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           HatSKMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           HoodMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           Backpack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           Pouch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  AnimClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_MeshDynamicMaterials> DynamicMaterials               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABP_BaseCharacter_C::SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UClass* AnimClass, TArray<struct FST_MeshDynamicMaterials> DynamicMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshAndMaterials");

	ABP_BaseCharacter_C_SetMeshAndMaterials_Params params;
	params.HeadMesh = HeadMesh;
	params.TorsoMesh = TorsoMesh;
	params.HandsMesh = HandsMesh;
	params.LegsMesh = LegsMesh;
	params.FeetMesh = FeetMesh;
	params.HatSKMesh = HatSKMesh;
	params.HoodMesh = HoodMesh;
	params.Backpack = Backpack;
	params.Pouch = Pouch;
	params.AnimClass = AnimClass;
	params.DynamicMaterials = DynamicMaterials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisablePlayerInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::ChangePlayerInput(bool DisablePlayerInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput");

	ABP_BaseCharacter_C_ChangePlayerInput_Params params;
	params.DisablePlayerInput = DisablePlayerInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SelectPickUpAnimation(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnimation");

	ABP_BaseCharacter_C_SelectPickUpAnimation_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CancelAnimationLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops");

	ABP_BaseCharacter_C_CancelAnimationLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageType");

	ABP_BaseCharacter_C_SetMontageType_Params params;
	params.Montage_Type = Montage_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveAnyDamage");

	ABP_BaseCharacter_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_BaseCharacter_C::SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageSettings");

	ABP_BaseCharacter_C_SetMontageSettings_Params params;
	params.MontagesSettings = MontagesSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature
// (BlueprintEvent)
void ABP_BaseCharacter_C::BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature");

	ABP_BaseCharacter_C_BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShowInspectorUI");

	ABP_BaseCharacter_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionNameToChange            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NextSection                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ChangeMontageNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection");

	ABP_BaseCharacter_C_ChangeMontageNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInWater");

	ABP_BaseCharacter_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PhysicsTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::PhysicsTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PhysicsTimer");

	ABP_BaseCharacter_C_PhysicsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Ragdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll");

	ABP_BaseCharacter_C_Ragdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll Event
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Un_Ragdoll_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll Event");

	ABP_BaseCharacter_C_Un_Ragdoll_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll Event
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::To_Ragdoll_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll Event");

	ABP_BaseCharacter_C_To_Ragdoll_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnGround                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Un_Ragdoll___MULTICAST__(bool OnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( MULTICAST )");

	ABP_BaseCharacter_C_Un_Ragdoll___MULTICAST___Params params;
	params.OnGround = OnGround;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::To_Ragdoll___MULTICAST__()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( MULTICAST )");

	ABP_BaseCharacter_C_To_Ragdoll___MULTICAST___Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_BaseCharacter_C::OnLanded(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded");

	ABP_BaseCharacter_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch");

	ABP_BaseCharacter_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnStartCrouch");

	ABP_BaseCharacter_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged");

	ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMountAnimalType BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> MountAnimalType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetMountAnimalType BPI");

	ABP_BaseCharacter_C_SetMountAnimalType_BPI_Params params;
	params.MountAnimalType = MountAnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IK_Enabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetEnableIK_BPI(bool IK_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_BPI");

	ABP_BaseCharacter_C_SetEnableIK_BPI_Params params;
	params.IK_Enabled = IK_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::EndCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCombat");

	ABP_BaseCharacter_C_EndCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::StartCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCombat");

	ABP_BaseCharacter_C_StartCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateIKAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateIKAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateIKAlpha");

	ABP_BaseCharacter_C_UpdateIKAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::PlayMountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountSpecial");

	ABP_BaseCharacter_C_PlayMountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountStopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnimIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::PlayMountStopAnimation(int AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountStopAnimation");

	ABP_BaseCharacter_C_PlayMountStopAnimation_Params params;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Caught Prey BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CaughtPrey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_Caught_Prey_BPI(bool CaughtPrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Caught Prey BPI");

	ABP_BaseCharacter_C_Set_Caught_Prey_BPI_Params params;
	params.CaughtPrey = CaughtPrey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDeath
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnDeath");

	ABP_BaseCharacter_C_OnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PoseID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI");

	ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Knockback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 KnockbackDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          KnockbackStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Knockback");

	ABP_BaseCharacter_C_Knockback_Params params;
	params.KnockbackDirection = KnockbackDirection;
	params.KnockbackStrength = KnockbackStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_AnimObjectNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_AnimObjectNotify");

	ABP_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params params;
	params.ObjectToNotify = ObjectToNotify;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ForceStanding
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ForceStanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ForceStanding");

	ABP_BaseCharacter_C_ForceStanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTakingBreak                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomizeAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState BPI");

	ABP_BaseCharacter_C_Set_BreakState_BPI_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loops                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState BPI");

	ABP_BaseCharacter_C_Set_WorkState_BPI_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetCameraPitch
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ResetCameraPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ResetCameraPitch");

	ABP_BaseCharacter_C_ResetCameraPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInIdleState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_IdleStates_E_IdleStates> IdleState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI");

	ABP_BaseCharacter_C_Set_IdleState_BPI_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_HolsterWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::AnimNotify_HolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_HolsterWeapon");

	ABP_BaseCharacter_C_AnimNotify_HolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOffHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem");

	ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_DespawnAnimItem
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::AnimNotify_DespawnAnimItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_DespawnAnimItem");

	ABP_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sitting                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting BPI");

	ABP_BaseCharacter_C_Set_Sitting_BPI_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sleeping                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseBedSleepingPose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping BPI");

	ABP_BaseCharacter_C_Set_Sleeping_BPI_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAiming
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StopAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopAiming");

	ABP_BaseCharacter_C_StopAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAiming
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StartAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartAiming");

	ABP_BaseCharacter_C_StartAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode BPI");

	ABP_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params params;
	params.ALS_MovementMode = ALS_MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     ALS_Gait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Gait_BPI(TEnumAsByte<E_Gait_E_Gait> ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait BPI");

	ABP_BaseCharacter_C_Set_ALS_Gait_BPI_Params params;
	params.ALS_Gait = ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Stance_E_Stance> ALS_Stance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance> ALS_Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance BPI");

	ABP_BaseCharacter_C_Set_ALS_Stance_BPI_Params params;
	params.ALS_Stance = ALS_Stance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CameraShake_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ShakeClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CameraShake_BPI(class UClass* ShakeClass, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CameraShake_BPI");

	ABP_BaseCharacter_C_CameraShake_BPI_Params params;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                AddAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::AddCharacterRotation_BPI(const struct FRotator& AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation_BPI");

	ABP_BaseCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::To_Ragdoll___SERVER__()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( SERVER )");

	ABP_BaseCharacter_C_To_Ragdoll___SERVER___Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnGround                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Un_Ragdoll___SERVER__(bool OnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( SERVER )");

	ABP_BaseCharacter_C_Un_Ragdoll___SERVER___Params params;
	params.OnGround = OnGround;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateRagdoll___MULTICAST__(const struct FVector& ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( MULTICAST )");

	ABP_BaseCharacter_C_UpdateRagdoll___MULTICAST___Params params;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RagdollVelocity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 RagdollLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ActorRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::UpdateRagdoll___SERVER__(const struct FVector& RagdollVelocity, const struct FVector& RagdollLocation, const struct FRotator& ActorRotation, const struct FVector& ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( SERVER )");

	ABP_BaseCharacter_C_UpdateRagdoll___SERVER___Params params;
	params.RagdollVelocity = RagdollVelocity;
	params.RagdollLocation = RagdollLocation;
	params.ActorRotation = ActorRotation;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( SERVER )
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     ALS_Gait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Gait_Event___SERVER__(TEnumAsByte<E_Gait_E_Gait> ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( SERVER )");

	ABP_BaseCharacter_C_Set_ALS_Gait_Event___SERVER___Params params;
	params.ALS_Gait = ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     ALS_Gait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Gait_Event___MULTICAST__(TEnumAsByte<E_Gait_E_Gait> ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( MULTICAST )");

	ABP_BaseCharacter_C_Set_ALS_Gait_Event___MULTICAST___Params params;
	params.ALS_Gait = ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event___SERVER__(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )");

	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___SERVER___Params params;
	params.ALS_RotationMode = ALS_RotationMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event___MULTICAST__(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( MULTICAST )");

	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___MULTICAST___Params params;
	params.ALS_RotationMode = ALS_RotationMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ALS_Aiming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event___SERVER__(bool ALS_Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )");

	ABP_BaseCharacter_C_Set_ALS_Aiming_Event___SERVER___Params params;
	params.ALS_Aiming = ALS_Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ALS_Aiming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event___MULTICAST__(bool ALS_Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( MULTICAST )");

	ABP_BaseCharacter_C_Set_ALS_Aiming_Event___MULTICAST___Params params;
	params.ALS_Aiming = ALS_Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InTimeToStartMontageAt         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bStopAllMontages               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Play_Networked_Montage___MULTICAST__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )");

	ABP_BaseCharacter_C_Play_Networked_Montage___MULTICAST___Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( SERVER )
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InTimeToStartMontageAt         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bStopAllMontages               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Play_Networked_Montage___SERVER__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( SERVER )");

	ABP_BaseCharacter_C_Play_Networked_Montage___SERVER___Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CharacterRotation Event ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                CharacterRotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_CharacterRotation_Event___SERVER__(const struct FRotator& TargetRotation, const struct FRotator& CharacterRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CharacterRotation Event ( SERVER )");

	ABP_BaseCharacter_C_Set_CharacterRotation_Event___SERVER___Params params;
	params.TargetRotation = TargetRotation;
	params.CharacterRotation = CharacterRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set LookingRotation Event ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                LookingRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_LookingRotation_Event___SERVER__(const struct FRotator& LookingRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set LookingRotation Event ( SERVER )");

	ABP_BaseCharacter_C_Set_LookingRotation_Event___SERVER___Params params;
	params.LookingRotation = LookingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set MovementInput Event ( SERVER )
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 MovementInput                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_MovementInput_Event___SERVER__(const struct FVector& MovementInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set MovementInput Event ( SERVER )");

	ABP_BaseCharacter_C_Set_MovementInput_Event___SERVER___Params params;
	params.MovementInput = MovementInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IK_Enabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::SetEnableIK_Event(bool IK_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Event");

	ABP_BaseCharacter_C_SetEnableIK_Event_Params params;
	params.IK_Enabled = IK_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CaughtPrey Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CaughtPrey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_CaughtPrey_Event(bool CaughtPrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CaughtPrey Event");

	ABP_BaseCharacter_C_Set_CaughtPrey_Event_Params params;
	params.CaughtPrey = CaughtPrey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PoseID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdlePose_Event(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event");

	ABP_BaseCharacter_C_Set_IdlePose_Event_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ForceStanding Event
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Set_ForceStanding_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ForceStanding Event");

	ABP_BaseCharacter_C_Set_ForceStanding_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTakingBreak                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomizeAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_BreakState_Event(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState Event");

	ABP_BaseCharacter_C_Set_BreakState_Event_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loops                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_WorkState_Event(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState Event");

	ABP_BaseCharacter_C_Set_WorkState_Event_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInIdleState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_IdleStates_E_IdleStates> IdleState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event");

	ABP_BaseCharacter_C_Set_IdleState_Event_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSitting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting Event");

	ABP_BaseCharacter_C_Set_Sitting_Event_Params params;
	params.IsSitting = IsSitting;
	params.SitDownPosition = SitDownPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSleeping                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseBedSleepingPose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping Event");

	ABP_BaseCharacter_C_Set_Sleeping_Event_Params params;
	params.IsSleeping = IsSleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_MovementMode_Event(TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode Event");

	ABP_BaseCharacter_C_Set_ALS_MovementMode_Event_Params params;
	params.New_ALS_MovementMode = New_ALS_MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     New_ALS_Gait                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Gait_Event(TEnumAsByte<E_Gait_E_Gait> New_ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event");

	ABP_BaseCharacter_C_Set_ALS_Gait_Event_Params params;
	params.New_ALS_Gait = New_ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Stance_E_Stance> New_ALS_Stance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_Stance_Event(TEnumAsByte<E_Stance_E_Stance> New_ALS_Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance Event");

	ABP_BaseCharacter_C_Set_ALS_Stance_Event_Params params;
	params.New_ALS_Stance = New_ALS_Stance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event");

	ABP_BaseCharacter_C_Set_ALS_RotationMode_Event_Params params;
	params.New_ALS_RotationMode = New_ALS_RotationMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ALS_Aiming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Set_ALS_Aiming_Event(bool ALS_Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event");

	ABP_BaseCharacter_C_Set_ALS_Aiming_Event_Params params;
	params.ALS_Aiming = ALS_Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ViewMode_E_ViewMode> ALS_ViewMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_ALS_ViewMode_Event(TEnumAsByte<E_ViewMode_E_ViewMode> ALS_ViewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event");

	ABP_BaseCharacter_C_Set_ALS_ViewMode_Event_Params params;
	params.ALS_ViewMode = ALS_ViewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WalkingSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_WalkingSpeed_Event(float WalkingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed Event");

	ABP_BaseCharacter_C_Set_WalkingSpeed_Event_Params params;
	params.WalkingSpeed = WalkingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RunningSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_RunningSpeed_Event(float RunningSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed Event");

	ABP_BaseCharacter_C_Set_RunningSpeed_Event_Params params;
	params.RunningSpeed = RunningSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SprintingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_SprintingSpeed_Event(float SprintingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed Event");

	ABP_BaseCharacter_C_Set_SprintingSpeed_Event_Params params;
	params.SprintingSpeed = SprintingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CrouchingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Set_CrouchingSpeed_Event(float CrouchingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed Event");

	ABP_BaseCharacter_C_Set_CrouchingSpeed_Event_Params params;
	params.CrouchingSpeed = CrouchingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ShouldHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster");

	ABP_BaseCharacter_C_ShouldHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCraftingAnimEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded");

	ABP_BaseCharacter_C_OnCraftingAnimEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::CraftingClosed(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed");

	ABP_BaseCharacter_C_CraftingClosed_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::WaitCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting");

	ABP_BaseCharacter_C_WaitCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Blinking
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Stop_Blinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Blinking");

	ABP_BaseCharacter_C_Stop_Blinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OpenEyes
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OpenEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OpenEyes");

	ABP_BaseCharacter_C_OpenEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CloseEyes
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CloseEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CloseEyes");

	ABP_BaseCharacter_C_CloseEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BlinkMorph
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::BlinkMorph(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BlinkMorph");

	ABP_BaseCharacter_C_BlinkMorph_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartBlinking
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StartBlinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartBlinking");

	ABP_BaseCharacter_C_StartBlinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Blink
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Blink");

	ABP_BaseCharacter_C_Blink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnIdleAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEnd");

	ABP_BaseCharacter_C_OnIdleAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimStart
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnIdleAnimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimStart");

	ABP_BaseCharacter_C_OnIdleAnimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EndFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::EndFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndFalling");

	ABP_BaseCharacter_C_EndFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StartFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartFalling");

	ABP_BaseCharacter_C_StartFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.FallingEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::FallingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FallingEvent");

	ABP_BaseCharacter_C_FallingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistTL
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ReverseFistTL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistTL");

	ABP_BaseCharacter_C_ReverseFistTL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFistTL
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StartFistTL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartFistTL");

	ABP_BaseCharacter_C_StartFistTL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::FistFighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting");

	ABP_BaseCharacter_C_FistFighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::EndCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting");

	ABP_BaseCharacter_C_EndCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CraftingTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::StartCrafting(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting");

	ABP_BaseCharacter_C_StartCrafting_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdle
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSleepIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdle");

	ABP_BaseCharacter_C_OnSleepIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdle
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSitIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdle");

	ABP_BaseCharacter_C_OnSitIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWakeUp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWakeUp");

	ABP_BaseCharacter_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGoToSleep
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnGoToSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnGoToSleep");

	ABP_BaseCharacter_C_OnGoToSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSit
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSit");

	ABP_BaseCharacter_C_OnSit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGetUp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnGetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnGetUp");

	ABP_BaseCharacter_C_OnGetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.FOVLerpUpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             FloatCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetFOV                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FOVLerpUpdateSettings");

	ABP_BaseCharacter_C_FOVLerpUpdateSettings_Params params;
	params.FloatCurve = FloatCurve;
	params.NewRate = NewRate;
	params.TargetFOV = TargetFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNewTimeCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::SetNewTimeCameraFOVLerp(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.SetNewTimeCameraFOVLerp");

	ABP_BaseCharacter_C_SetNewTimeCameraFOVLerp_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFromEndCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ReverseFromEndCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFromEndCameraFOVLerp");

	ABP_BaseCharacter_C_ReverseFromEndCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::ReverseCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseCameraFOVLerp");

	ABP_BaseCharacter_C_ReverseCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::PlayCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCameraFOVLerp");

	ABP_BaseCharacter_C_PlayCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayFromStartCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::PlayFromStartCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayFromStartCameraFOVLerp");

	ABP_BaseCharacter_C_PlayFromStartCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.StopCameraFOVLerp
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::StopCameraFOVLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StopCameraFOVLerp");

	ABP_BaseCharacter_C_StopCameraFOVLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Camera Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             LerpCurve                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::Update_Camera_Event(class UCurveFloat* LerpCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Camera Event");

	ABP_BaseCharacter_C_Update_Camera_Event_Params params;
	params.LerpCurve = LerpCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCombatEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded");

	ABP_BaseCharacter_C_OnCombatEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCombatStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted");

	ABP_BaseCharacter_C_OnCombatStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ExecuteUbergraph_BP_BaseCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter");

	ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCraftingAnimEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature");

	ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCrafting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnWaitForCrafting__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCrafting__DelegateSignature");

	ABP_BaseCharacter_C_OnWaitForCrafting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCharacterActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterActivated__DelegateSignature");

	ABP_BaseCharacter_C_OnCharacterActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnCharacterDeactivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterDeactivated__DelegateSignature");

	ABP_BaseCharacter_C_OnCharacterDeactivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnStoppingCrafting__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature");

	ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnEndCrafting__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature");

	ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnStartCrafting__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature");

	ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSleepFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepFinished__DelegateSignature");

	ABP_BaseCharacter_C_OnSleepFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSleepStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepStarted__DelegateSignature");

	ABP_BaseCharacter_C_OnSleepStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSitFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitFinished__DelegateSignature");

	ABP_BaseCharacter_C_OnSitFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSitStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitStarted__DelegateSignature");

	ABP_BaseCharacter_C_OnSitStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnInteractionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::OnInteractionFinished__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnInteractionFinished__DelegateSignature");

	ABP_BaseCharacter_C_OnInteractionFinished__DelegateSignature_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnIdleAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimFinished__DelegateSignature");

	ABP_BaseCharacter_C_OnIdleAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnIdleAnimEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEntered__DelegateSignature");

	ABP_BaseCharacter_C_OnIdleAnimEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdleEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSleepIdleEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdleEntered__DelegateSignature");

	ABP_BaseCharacter_C_OnSleepIdleEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdleEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnSitIdleEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdleEntered__DelegateSignature");

	ABP_BaseCharacter_C_OnSitIdleEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::OnMovementFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementFinished__DelegateSignature");

	ABP_BaseCharacter_C_OnMovementFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.CameraFadeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::CameraFadeFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CameraFadeFinished__DelegateSignature");

	ABP_BaseCharacter_C_CameraFadeFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
