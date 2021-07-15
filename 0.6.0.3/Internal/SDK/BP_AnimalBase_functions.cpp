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

// Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::GetMountCameraRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraRotation");

	ABP_AnimalBase_C_GetMountCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetSprintKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprintKeyDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::GetSprintKeyDown(bool* IsSprintKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSprintKeyDown");

	ABP_AnimalBase_C_GetSprintKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetShouldSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::GetShouldSprint(bool* ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetShouldSprint");

	ABP_AnimalBase_C_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CanMountActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::CanMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanMountActor");

	ABP_AnimalBase_C_CanMountActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.CanMountAtPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 riderLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection desiredMountingPosition        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanMountAtPosition");

	ABP_AnimalBase_C_CanMountAtPosition_Params params;
	params.riderLocation = riderLocation;
	params.desiredMountingPosition = desiredMountingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.CanMountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::CanMountPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanMountPawn");

	ABP_AnimalBase_C_CanMountPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::ClearSeatAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatAtIndex");

	ABP_AnimalBase_C_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::ClearSeatById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatById");

	ABP_AnimalBase_C_ClearSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatByIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::ClearSeatByIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatByIndex");

	ABP_AnimalBase_C_ClearSeatByIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.FindAvailableMountingPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 riderLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               outSeatData                    (Parm, OutParm)
// int                            outSeatIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FindAvailableMountingPosition");

	ABP_AnimalBase_C_FindAvailableMountingPosition_Params params;
	params.Position = Position;
	params.riderLocation = riderLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outSeatData != nullptr)
		*outSeatData = params.outSeatData;
	if (outSeatIndex != nullptr)
		*outSeatIndex = params.outSeatIndex;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetCurrentRiderCount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_AnimalBase_C::GetCurrentRiderCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCurrentRiderCount");

	ABP_AnimalBase_C_GetCurrentRiderCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetDismountDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_AnimalBase_C::GetDismountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDismountDirection");

	ABP_AnimalBase_C_GetDismountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ABP_AnimalBase_C::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDriver");

	ABP_AnimalBase_C_GetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetMaxRiders
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_AnimalBase_C::GetMaxRiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMaxRiders");

	ABP_AnimalBase_C_GetMaxRiders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetMountablePawnComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMountablePawnComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMountablePawnComponent* ABP_AnimalBase_C::GetMountablePawnComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountablePawnComponent");

	ABP_AnimalBase_C_GetMountablePawnComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetMountBody
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMeshComponent* ABP_AnimalBase_C::GetMountBody(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountBody");

	ABP_AnimalBase_C_GetMountBody_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeDismountDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_AnimalBase_C::GetRelativeDismountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeDismountDirection");

	ABP_AnimalBase_C_GetRelativeDismountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeMountDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_AnimalBase_C::GetRelativeMountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeMountDirection");

	ABP_AnimalBase_C_GetRelativeMountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativePositionToMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_AnimalBase_C::GetRelativePositionToMount(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetRelativePositionToMount");

	ABP_AnimalBase_C_GetRelativePositionToMount_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               SeatData                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::GetSeatDataAtIndex(int Index, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataAtIndex");

	ABP_AnimalBase_C_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               SeatData                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::GetSeatDataById(int seatId, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataById");

	ABP_AnimalBase_C_GetSeatDataById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.HasDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::HasDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.HasDriver");

	ABP_AnimalBase_C_HasDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.HasPassangers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::HasPassangers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.HasPassangers");

	ABP_AnimalBase_C_HasPassangers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverReady
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsDriverReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsDriverReady");

	ABP_AnimalBase_C_IsDriverReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverSeat
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSeatData               SeatData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsDriverSeat(const struct FSeatData& SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsDriverSeat");

	ABP_AnimalBase_C_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsMountableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMountableActor");

	ABP_AnimalBase_C_IsMountableActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableByPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   newRider                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsMountableByPawn(class APawn* newRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMountableByPawn");

	ABP_AnimalBase_C_IsMountableByPawn_Params params;
	params.newRider = newRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsMountablePawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsMountablePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMountablePawn");

	ABP_AnimalBase_C_IsMountablePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsSeatOccupiedAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedAtIndex");

	ABP_AnimalBase_C_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsSeatOccupiedById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedById");

	ABP_AnimalBase_C_IsSeatOccupiedById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.MustHaveDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::MustHaveDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MustHaveDriver");

	ABP_AnimalBase_C_MustHaveDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedChangingSeats
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            newSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            oldSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedChangingSeats");

	ABP_AnimalBase_C_OnRiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedDismounting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  dismountedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedDismounting");

	ABP_AnimalBase_C_OnRiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedMounting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::OnRiderFinishedMounting(class AActor* mountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedMounting");

	ABP_AnimalBase_C_OnRiderFinishedMounting_Params params;
	params.mountedActor = mountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupied
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::SetSeatOccupied(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupied");

	ABP_AnimalBase_C_SetSeatOccupied_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedAtIndex");

	ABP_AnimalBase_C_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::SetSeatOccupiedById(int seatId, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedById");

	ABP_AnimalBase_C_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AController* ABP_AnimalBase_C::GetCharacterController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterController");

	ABP_AnimalBase_C_GetCharacterController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ABP_AnimalBase_C::GetCharacterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterMount");

	ABP_AnimalBase_C_GetCharacterMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ABP_AnimalBase_C::GetCharacterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterPawn");

	ABP_AnimalBase_C_GetCharacterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsCharacterMountable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsCharacterMountable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsCharacterMountable");

	ABP_AnimalBase_C_IsCharacterMountable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsMounted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMounted");

	ABP_AnimalBase_C_IsMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.PerformDismountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::PerformDismountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PerformDismountPawn");

	ABP_AnimalBase_C_PerformDismountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.PerformMountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::PerformMountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PerformMountPawn");

	ABP_AnimalBase_C_PerformMountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToDismount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PrepareToDismount");

	ABP_AnimalBase_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AnimalBase_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PrepareToMount");

	ABP_AnimalBase_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsGrabbable");

	ABP_AnimalBase_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsItemNeeded");

	ABP_AnimalBase_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_AnimalBase_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractItem");

	ABP_AnimalBase_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsItemInteractable");

	ABP_AnimalBase_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAdditionalStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_AnimalBase_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAdditionalStatus");

	ABP_AnimalBase_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractAdditionalStatus");

	ABP_AnimalBase_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFishData");

	ABP_AnimalBase_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetID");

	ABP_AnimalBase_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractionDistance");

	ABP_AnimalBase_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOff-HandItem");

	ABP_AnimalBase_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCondition");

	ABP_AnimalBase_C_GetInteractCondition_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractCondition");

	ABP_AnimalBase_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsToolNeeded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolNeeded");

	ABP_AnimalBase_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOwnershipType");

	ABP_AnimalBase_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_AnimalBase_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTitle");

	ABP_AnimalBase_C_GetInteractTitle_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_AnimalBase_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractResources");

	ABP_AnimalBase_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFluidType");

	ABP_AnimalBase_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool_UI");

	ABP_AnimalBase_C_GetInteractTool_UI_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable_UI");

	ABP_AnimalBase_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractTime");

	ABP_AnimalBase_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable");

	ABP_AnimalBase_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetTaskFromActor");

	ABP_AnimalBase_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractIcon");

	ABP_AnimalBase_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckOccupied");

	ABP_AnimalBase_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractAnimation");

	ABP_AnimalBase_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetResourceType");

	ABP_AnimalBase_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetHeldItem");

	ABP_AnimalBase_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCount");

	ABP_AnimalBase_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool");

	ABP_AnimalBase_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_AnimalBase_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractName");

	ABP_AnimalBase_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_AnimalBase_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAction");

	ABP_AnimalBase_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractable
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
void ABP_AnimalBase_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractable");

	ABP_AnimalBase_C_IsInteractable_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRowName BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SwitchAnimals_RowName          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRowName BPI");

	ABP_AnimalBase_C_GetAnimalRowName_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetAnimalHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalHeight");

	ABP_AnimalBase_C_GetAnimalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetAnimalWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalWorldLocation");

	ABP_AnimalBase_C_GetAnimalWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Sell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Sell");

	ABP_AnimalBase_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Buy");

	ABP_AnimalBase_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetForSale");

	ABP_AnimalBase_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInventoryComponent");

	ABP_AnimalBase_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSystemManager");

	ABP_AnimalBase_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CheckIsBuilding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckIsBuilding");

	ABP_AnimalBase_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFleeingTimer");

	ABP_AnimalBase_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFear");

	ABP_AnimalBase_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        AnimalBase                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetAnimal(class ABP_AnimalBase_C** AnimalBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimal");

	ABP_AnimalBase_C_GetAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalBase != nullptr)
		*AnimalBase = params.AnimalBase;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToHusbandry
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::ChangeBehaviorTreeToHusbandry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToHusbandry");

	ABP_AnimalBase_C_ChangeBehaviorTreeToHusbandry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToMount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::ChangeBehaviorTreeToMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToMount");

	ABP_AnimalBase_C_ChangeBehaviorTreeToMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMounted
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnIsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnIsMounted");

	ABP_AnimalBase_C_OnIsMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnIsMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnIsMount");

	ABP_AnimalBase_C_OnIsMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ChooseMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChooseMaxWalkSpeed");

	ABP_AnimalBase_C_ChooseMaxWalkSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UpdateAnimalMovementSettings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::UpdateAnimalMovementSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateAnimalMovementSettings");

	ABP_AnimalBase_C_UpdateAnimalMovementSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CalculateEncumberedSpeed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::CalculateEncumberedSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateEncumberedSpeed");

	ABP_AnimalBase_C_CalculateEncumberedSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AddItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::AddItems(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddItems");

	ABP_AnimalBase_C_AddItems_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AddDamageCauser
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::AddDamageCauser(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddDamageCauser");

	ABP_AnimalBase_C_AddDamageCauser_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetDamageCauserTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Tag                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetDamageCauserTag(class AActor* Actor, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDamageCauserTag");

	ABP_AnimalBase_C_GetDamageCauserTag_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::UpdateCausersStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersStatus");

	ABP_AnimalBase_C_UpdateCausersStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::UpdateCausers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausers");

	ABP_AnimalBase_C_UpdateCausers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryDataFromSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_HusbandryAnimals HusbandryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryDataFromSave");

	ABP_AnimalBase_C_SetHusbandryDataFromSave_Params params;
	params.HusbandryData = HusbandryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetHusbandryDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_HusbandryAnimals HusbandryData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_AnimalBase_C::GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetHusbandryDataToSave");

	ABP_AnimalBase_C_GetHusbandryDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HusbandryData != nullptr)
		*HusbandryData = params.HusbandryData;

}


// Function BP_AnimalBase.BP_AnimalBase_C.TeleportTowardMoveLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::TeleportTowardMoveLocation(const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.TeleportTowardMoveLocation");

	ABP_AnimalBase_C_TeleportTowardMoveLocation_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ResetStuckCounter
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::ResetStuckCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ResetStuckCounter");

	ABP_AnimalBase_C_ResetStuckCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IncreaseStuckCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::IncreaseStuckCounter(const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IncreaseStuckCounter");

	ABP_AnimalBase_C_IncreaseStuckCounter_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.LootImpaledItems
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::LootImpaledItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LootImpaledItems");

	ABP_AnimalBase_C_LootImpaledItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnOwnershipSwap");

	ABP_AnimalBase_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CalculateMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          WalkSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateMaxWalkSpeed");

	ABP_AnimalBase_C_CalculateMaxWalkSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetMaxWalkSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxWalkSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetMaxWalkSpeed(float MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetMaxWalkSpeed");

	ABP_AnimalBase_C_SetMaxWalkSpeed_Params params;
	params.MaxWalkSpeed = MaxWalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AnimalBleed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::AnimalBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AnimalBleed");

	ABP_AnimalBase_C_AnimalBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetCurrentHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetCurrentHP(float CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetCurrentHP");

	ABP_AnimalBase_C_SetCurrentHP_Params params;
	params.CurrentHP = CurrentHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.LimitRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimYawLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::LimitRotation(float AimYawLimit, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LimitRotation");

	ABP_AnimalBase_C_LimitRotation_Params params;
	params.AimYawLimit = AimYawLimit;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalRotationModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnAnimalRotationModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalRotationModeChanged");

	ABP_AnimalBase_C_OnAnimalRotationModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalGaitModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnAnimalGaitModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalGaitModeChanged");

	ABP_AnimalBase_C_OnAnimalGaitModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_AnimalBase_C::GetLookingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetLookingRotation");

	ABP_AnimalBase_C_GetLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.CalculateEssentialVariables
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::CalculateEssentialVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateEssentialVariables");

	ABP_AnimalBase_C_CalculateEssentialVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.LookingDirectionWithOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetInterpSpeed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NE_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NW_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SE_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SW_Angle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Buffer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LookingDirectionWithOffset");

	ABP_AnimalBase_C_LookingDirectionWithOffset_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.ChooseVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ChooseVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChooseVelocity");

	ABP_AnimalBase_C_ChooseVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CalculateAnimalRotationRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SlowSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SlowSpeedRate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FastSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FastSpeedRate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_AnimalBase_C::CalculateAnimalRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateAnimalRotationRate");

	ABP_AnimalBase_C_CalculateAnimalRotationRate_Params params;
	params.SlowSpeed = SlowSpeed;
	params.SlowSpeedRate = SlowSpeedRate;
	params.FastSpeed = FastSpeed;
	params.FastSpeedRate = FastSpeedRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalPawnMovementModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::OnAnimalPawnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalPawnMovementModeChanged");

	ABP_AnimalBase_C_OnAnimalPawnMovementModeChanged_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimInstance* ABP_AnimalBase_C::GetAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimInstance");

	ABP_AnimalBase_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalMovementModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnAnimalMovementModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalMovementModeChanged");

	ABP_AnimalBase_C_OnAnimalMovementModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InterpRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetAnimalRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalRotation");

	ABP_AnimalBase_C_SetAnimalRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.InterpRotation = InterpRotation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AddAnimalRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                AddAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::AddAnimalRotation(const struct FRotator& AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddAnimalRotation");

	ABP_AnimalBase_C_AddAnimalRotation_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.fnGetAuthority
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAuthority                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::fnGetAuthority(bool* HasAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.fnGetAuthority");

	ABP_AnimalBase_C_fnGetAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasAuthority != nullptr)
		*HasAuthority = params.HasAuthority;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript");

	ABP_AnimalBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountCameraFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::UpdateMountCameraFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountCameraFoV");

	ABP_AnimalBase_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Backwards_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Backwards_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Backwards_Axis");

	ABP_AnimalBase_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Left_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Left_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Left_Axis");

	ABP_AnimalBase_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.JumpPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::JumpPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.JumpPressed");

	ABP_AnimalBase_C_JumpPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.JumpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::JumpReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.JumpReleased");

	ABP_AnimalBase_C_JumpReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.MountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::MountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MountSpecial");

	ABP_AnimalBase_C_MountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SprintPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::SprintPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SprintPressed");

	ABP_AnimalBase_C_SprintPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SprintReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::SprintReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SprintReleased");

	ABP_AnimalBase_C_SprintReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Right_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Right_Axis");

	ABP_AnimalBase_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Down_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Down_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Down_Axis");

	ABP_AnimalBase_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.DismountPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::DismountPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DismountPressed");

	ABP_AnimalBase_C_DismountPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.DismountReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::DismountReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DismountReleased");

	ABP_AnimalBase_C_DismountReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.MountStop
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::MountStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MountStop");

	ABP_AnimalBase_C_MountStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.WalkPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::WalkPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.WalkPressed");

	ABP_AnimalBase_C_WalkPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.WalkReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::WalkReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.WalkReleased");

	ABP_AnimalBase_C_WalkReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::SetShouldSprint(bool ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetShouldSprint");

	ABP_AnimalBase_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.LookAtOnMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::LookAtOnMount(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LookAtOnMount");

	ABP_AnimalBase_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetOccupied");

	ABP_AnimalBase_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetTaskInActor");

	ABP_AnimalBase_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChangeTaskIsOccupied");

	ABP_AnimalBase_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_AnimalBase_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ToolInteract");

	ABP_AnimalBase_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsLookedAt");

	ABP_AnimalBase_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ShowInspectorUI");

	ABP_AnimalBase_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractWithImpaledItem");

	ABP_AnimalBase_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartAttackFunction");

	ABP_AnimalBase_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StopAttackFunction");

	ABP_AnimalBase_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Remove");

	ABP_AnimalBase_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CheckDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::CheckDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckDistance");

	ABP_AnimalBase_C_CheckDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AddItemToHouse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::AddItemToHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddItemToHouse");

	ABP_AnimalBase_C_AddItemToHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetFear");

	ABP_AnimalBase_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetEngageTargetBPI");

	ABP_AnimalBase_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnWakeUp
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnWakeUp");

	ABP_AnimalBase_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Starving");

	ABP_AnimalBase_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnSleep
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSleep");

	ABP_AnimalBase_C_OnSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalMovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalMovementMode BPI");

	ABP_AnimalBase_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetForSale");

	ABP_AnimalBase_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AnimalBase_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountEquipment");

	ABP_AnimalBase_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceivePossessed");

	ABP_AnimalBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Close
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnSummoned_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Close");

	ABP_AnimalBase_C_OnSummoned_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Far
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnSummoned_Far()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Far");

	ABP_AnimalBase_C_OnSummoned_Far_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnSummonFinished
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnSummonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummonFinished");

	ABP_AnimalBase_C_OnSummonFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimalBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay");

	ABP_AnimalBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveTick");

	ABP_AnimalBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Interact");

	ABP_AnimalBase_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractStart");

	ABP_AnimalBase_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractCancel");

	ABP_AnimalBase_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_AnimalBase_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveDestroyed");

	ABP_AnimalBase_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.UnpauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::UnpauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UnpauseBrain");

	ABP_AnimalBase_C_UnpauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.PauseBrain
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::PauseBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PauseBrain");

	ABP_AnimalBase_C_PauseBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.OnMoveForSkinningFinished
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::OnMoveForSkinningFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnMoveForSkinningFinished");

	ABP_AnimalBase_C_OnMoveForSkinningFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AnimalBase_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractInput");

	ABP_AnimalBase_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PerformActorInteraction");

	ABP_AnimalBase_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddImpaledItem");

	ABP_AnimalBase_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.RemoveImpaledItem");

	ABP_AnimalBase_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.EnableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::EnableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EnableNPC");

	ABP_AnimalBase_C_EnableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.DisableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::DisableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DisableNPC");

	ABP_AnimalBase_C_DisableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.NoneOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::NoneOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.NoneOptimization");

	ABP_AnimalBase_C_NoneOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CloseOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::CloseOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CloseOptimization");

	ABP_AnimalBase_C_CloseOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.MediumOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::MediumOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MediumOptimization");

	ABP_AnimalBase_C_MediumOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.FarOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::FarOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FarOptimization");

	ABP_AnimalBase_C_FarOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetIsInWater");

	ABP_AnimalBase_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EventDead");

	ABP_AnimalBase_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.DealtDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::DealtDamage(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DealtDamage");

	ABP_AnimalBase_C_DealtDamage_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AnimalBase_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceivePointDamage");

	ABP_AnimalBase_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Splat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*       PhysMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Splat(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Splat");

	ABP_AnimalBase_C_Splat_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.BleedCancel
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::BleedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.BleedCancel");

	ABP_AnimalBase_C_BleedCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.CauseBleeding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::CauseBleeding(float BleedDamage, float BleedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CauseBleeding");

	ABP_AnimalBase_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveAnyDamage");

	ABP_AnimalBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.EndFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::EndFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EndFalling");

	ABP_AnimalBase_C_EndFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.StartFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::StartFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartFalling");

	ABP_AnimalBase_C_StartFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.FallingEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimalBase_C::FallingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FallingEvent");

	ABP_AnimalBase_C_FallingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Set ALS_RotationMode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set ALS_RotationMode Event");

	ABP_AnimalBase_C_Set_ALS_RotationMode_Event_Params params;
	params.New_ALS_RotationMode = New_ALS_RotationMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_Gait Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     New_ALS_Gait                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Set_Animal_Gait_Event(TEnumAsByte<E_Gait_E_Gait> New_ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_Gait Event");

	ABP_AnimalBase_C_Set_Animal_Gait_Event_Params params;
	params.New_ALS_Gait = New_ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.K2_OnMovementModeChanged");

	ABP_AnimalBase_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_MovementMode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::Set_Animal_MovementMode_Event(TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_MovementMode Event");

	ABP_AnimalBase_C_Set_Animal_MovementMode_Event_Params params;
	params.New_ALS_MovementMode = New_ALS_MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimalBase_C::ExecuteUbergraph_BP_AnimalBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase");

	ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
