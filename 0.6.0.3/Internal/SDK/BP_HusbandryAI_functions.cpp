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

// Function BP_HusbandryAI.BP_HusbandryAI_C.Check Sleep Slot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::Check_Sleep_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Check Sleep Slot");

	ABP_HusbandryAI_C_Check_Sleep_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.CalculateEssentialVariables
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::CalculateEssentialVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.CalculateEssentialVariables");

	ABP_HusbandryAI_C_CalculateEssentialVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMounted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnIsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMounted");

	ABP_HusbandryAI_C_OnIsMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnIsMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnIsMount");

	ABP_HusbandryAI_C_OnIsMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountCameraRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::GetMountCameraRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountCameraRotation");

	ABP_HusbandryAI_C_GetMountCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnInputDirectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnInputDirectionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnInputDirectionChanged");

	ABP_HusbandryAI_C_OnInputDirectionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSprintKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprintKeyDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::GetSprintKeyDown(bool* IsSprintKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetSprintKeyDown");

	ABP_HusbandryAI_C_GetSprintKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetShouldSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::GetShouldSprint(bool* ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetShouldSprint");

	ABP_HusbandryAI_C_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.PlayerCameraRotationUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::PlayerCameraRotationUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.PlayerCameraRotationUpdate");

	ABP_HusbandryAI_C_PlayerCameraRotationUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.CheckIfShouldResetCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::CheckIfShouldResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.CheckIfShouldResetCamera");

	ABP_HusbandryAI_C_CheckIfShouldResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraPitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::UpdateCameraPitch(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraPitch");

	ABP_HusbandryAI_C_UpdateCameraPitch_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraYaw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::UpdateCameraYaw(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCameraYaw");

	ABP_HusbandryAI_C_UpdateCameraYaw_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.InterpTurnMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TurnMultiplierTarget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::InterpTurnMultiplier(float TurnMultiplierTarget, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.InterpTurnMultiplier");

	ABP_HusbandryAI_C_InterpTurnMultiplier_Params params;
	params.TurnMultiplierTarget = TurnMultiplierTarget;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.InterpMovementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::InterpMovementType(float Axis, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.InterpMovementType");

	ABP_HusbandryAI_C_InterpMovementType_Params params;
	params.Axis = Axis;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::ShouldSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ShouldSprint");

	ABP_HusbandryAI_C_ShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementVars
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::UpdateMovementVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementVars");

	ABP_HusbandryAI_C_UpdateMovementVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementType
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::UpdateMovementType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMovementType");

	ABP_HusbandryAI_C_UpdateMovementType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedChangingSeats
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            newSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            oldSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedChangingSeats");

	ABP_HusbandryAI_C_OnRiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedDismounting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  dismountedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedDismounting");

	ABP_HusbandryAI_C_OnRiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedMounting
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::OnRiderFinishedMounting(class AActor* mountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnRiderFinishedMounting");

	ABP_HusbandryAI_C_OnRiderFinishedMounting_Params params;
	params.mountedActor = mountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountAtPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 riderLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection desiredMountingPosition        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountAtPosition");

	ABP_HusbandryAI_C_CanMountAtPosition_Params params;
	params.riderLocation = riderLocation;
	params.desiredMountingPosition = desiredMountingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::CanMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.CanMountActor");

	ABP_HusbandryAI_C_CanMountActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataAtIndex
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               SeatData                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::GetSeatDataAtIndex(int Index, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataAtIndex");

	ABP_HusbandryAI_C_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataById
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               SeatData                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::GetSeatDataById(int seatId, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetSeatDataById");

	ABP_HusbandryAI_C_GetSeatDataById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::ClearSeatAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatAtIndex");

	ABP_HusbandryAI_C_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::ClearSeatById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ClearSeatById");

	ABP_HusbandryAI_C_ClearSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedAtIndex");

	ABP_HusbandryAI_C_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::SetSeatOccupiedById(int seatId, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetSeatOccupiedById");

	ABP_HusbandryAI_C_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedAtIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsSeatOccupiedAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedAtIndex");

	ABP_HusbandryAI_C_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.FindAvailableMountingPosition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 riderLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSeatData               outSeatData                    (Parm, OutParm)
// int                            outSeatIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.FindAvailableMountingPosition");

	ABP_HusbandryAI_C_FindAvailableMountingPosition_Params params;
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


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetCurrentRiderCount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_HusbandryAI_C::GetCurrentRiderCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetCurrentRiderCount");

	ABP_HusbandryAI_C_GetCurrentRiderCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ABP_HusbandryAI_C::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetDriver");

	ABP_HusbandryAI_C_GetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMaxRiders
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_HusbandryAI_C::GetMaxRiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetMaxRiders");

	ABP_HusbandryAI_C_GetMaxRiders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedById
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsSeatOccupiedById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsSeatOccupiedById");

	ABP_HusbandryAI_C_IsSeatOccupiedById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountBody
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMeshComponent* ABP_HusbandryAI_C::GetMountBody(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountBody");

	ABP_HusbandryAI_C_GetMountBody_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeDismountDirection
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_HusbandryAI_C::GetRelativeDismountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeDismountDirection");

	ABP_HusbandryAI_C_GetRelativeDismountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeMountDirection
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
AdsMountingSystem_EMountingDirection ABP_HusbandryAI_C::GetRelativeMountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetRelativeMountDirection");

	ABP_HusbandryAI_C_GetRelativeMountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.HasDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::HasDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.HasDriver");

	ABP_HusbandryAI_C_HasDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.HasPassangers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::HasPassangers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.HasPassangers");

	ABP_HusbandryAI_C_HasPassangers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverReady
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsDriverReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverReady");

	ABP_HusbandryAI_C_IsDriverReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverSeat
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSeatData               SeatData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsDriverSeat(const struct FSeatData& SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsDriverSeat");

	ABP_HusbandryAI_C_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableByPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   newRider                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsMountableByPawn(class APawn* newRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableByPawn");

	ABP_HusbandryAI_C_IsMountableByPawn_Params params;
	params.newRider = newRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::IsMountableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.IsMountableActor");

	ABP_HusbandryAI_C_IsMountableActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.MustHaveDriver
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::MustHaveDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.MustHaveDriver");

	ABP_HusbandryAI_C_MustHaveDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountablePawnComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMountablePawnComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMountablePawnComponent* ABP_HusbandryAI_C::GetMountablePawnComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetMountablePawnComponent");

	ABP_HusbandryAI_C_GetMountablePawnComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetCharacterPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ABP_HusbandryAI_C::GetCharacterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetCharacterPawn");

	ABP_HusbandryAI_C_GetCharacterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToDismount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToDismount");

	ABP_HusbandryAI_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToMount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HusbandryAI_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.PrepareToMount");

	ABP_HusbandryAI_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToMount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::ChangeBehaviorTreeToMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToMount");

	ABP_HusbandryAI_C_ChangeBehaviorTreeToMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToHusbandry
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::ChangeBehaviorTreeToHusbandry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeBehaviorTreeToHusbandry");

	ABP_HusbandryAI_C_ChangeBehaviorTreeToHusbandry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCapacity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::UpdateCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateCapacity");

	ABP_HusbandryAI_C_UpdateCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Sell
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetPrice_Sell(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Sell");

	ABP_HusbandryAI_C_GetPrice_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Buy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetPrice_Buy(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetPrice_Buy");

	ABP_HusbandryAI_C_GetPrice_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetForSale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::GetForSale(bool* ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetForSale");

	ABP_HusbandryAI_C_GetForSale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForSale != nullptr)
		*ForSale = params.ForSale;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetHusbandryDataFromSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_HusbandryAnimals HusbandryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetHusbandryDataFromSave");

	ABP_HusbandryAI_C_SetHusbandryDataFromSave_Params params;
	params.HusbandryData = HusbandryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetHusbandryDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_HusbandryAnimals HusbandryData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetHusbandryDataToSave");

	ABP_HusbandryAI_C_GetHusbandryDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HusbandryData != nullptr)
		*HusbandryData = params.HusbandryData;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetTaskFromActor");

	ABP_HusbandryAI_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.fnAnimRest_ChooseIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_Index                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::fnAnimRest_ChooseIndex(int* Animation_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.fnAnimRest_ChooseIndex");

	ABP_HusbandryAI_C_fnAnimRest_ChooseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetFleeingTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            FleeingTimer                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetFleeingTimer");

	ABP_HusbandryAI_C_GetFleeingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.GetFear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FearFactor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::GetFear(int* FearFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.GetFear");

	ABP_HusbandryAI_C_GetFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__FinishedFunc
// (BlueprintEvent)
void ABP_HusbandryAI_C::RotationResetTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__FinishedFunc");

	ABP_HusbandryAI_C_RotationResetTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__UpdateFunc
// (BlueprintEvent)
void ABP_HusbandryAI_C::RotationResetTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.RotationResetTL__UpdateFunc");

	ABP_HusbandryAI_C_RotationResetTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnFail_6B4002F24643F98A6D00D99BD8F9D5C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::OnFail_6B4002F24643F98A6D00D99BD8F9D5C6(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnFail_6B4002F24643F98A6D00D99BD8F9D5C6");

	ABP_HusbandryAI_C_OnFail_6B4002F24643F98A6D00D99BD8F9D5C6_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6");

	ABP_HusbandryAI_C_OnSuccess_6B4002F24643F98A6D00D99BD8F9D5C6_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ABP_HusbandryAI_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ABP_HusbandryAI_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::SetShouldSprint(bool ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetShouldSprint");

	ABP_HusbandryAI_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.CameraRotationReset
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::CameraRotationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.CameraRotationReset");

	ABP_HusbandryAI_C_CameraRotationReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ResetCameraRotation
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::ResetCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ResetCameraRotation");

	ABP_HusbandryAI_C_ResetCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotationReset
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::StopCameraRotationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotationReset");

	ABP_HusbandryAI_C_StopCameraRotationReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotation
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::StopCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.StopCameraRotation");

	ABP_HusbandryAI_C_StopCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMountCameraFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::UpdateMountCameraFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.UpdateMountCameraFoV");

	ABP_HusbandryAI_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Close
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnSummoned_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Close");

	ABP_HusbandryAI_C_OnSummoned_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Far
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnSummoned_Far()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummoned_Far");

	ABP_HusbandryAI_C_OnSummoned_Far_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummonFinished
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnSummonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnSummonFinished");

	ABP_HusbandryAI_C_OnSummonFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.LookAtOnMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::LookAtOnMount(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.LookAtOnMount");

	ABP_HusbandryAI_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Backwards_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::Backwards_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Backwards_Axis");

	ABP_HusbandryAI_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Left_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::Left_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Left_Axis");

	ABP_HusbandryAI_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.JumpPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::JumpPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.JumpPressed");

	ABP_HusbandryAI_C_JumpPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.JumpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::JumpReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.JumpReleased");

	ABP_HusbandryAI_C_JumpReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SprintPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SprintPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SprintPressed");

	ABP_HusbandryAI_C_SprintPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SprintReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SprintReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SprintReleased");

	ABP_HusbandryAI_C_SprintReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Right_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Right_Axis");

	ABP_HusbandryAI_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Down_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::Down_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Down_Axis");

	ABP_HusbandryAI_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.DismountPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::DismountPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.DismountPressed");

	ABP_HusbandryAI_C_DismountPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.DismountReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::DismountReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.DismountReleased");

	ABP_HusbandryAI_C_DismountReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Dismount
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::Dismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Dismount");

	ABP_HusbandryAI_C_Dismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.WalkPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HusbandryAI_C::WalkPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.WalkPressed");

	ABP_HusbandryAI_C_WalkPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetInputDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SetInputDirection(int InputDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetInputDirection");

	ABP_HusbandryAI_C_SetInputDirection_Params params;
	params.InputDirection = InputDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HusbandryAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveBeginPlay");

	ABP_HusbandryAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.EventEngagementStart
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::EventEngagementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.EventEngagementStart");

	ABP_HusbandryAI_C_EventEngagementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveAnyDamage");

	ABP_HusbandryAI_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Fleeing
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::Fleeing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Fleeing");

	ABP_HusbandryAI_C_Fleeing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetFear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Fear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SetFear(int Fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetFear");

	ABP_HusbandryAI_C_SetFear_Params params;
	params.Fear = Fear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetEngageTargetBPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SetEngageTargetBPI(class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetEngageTargetBPI");

	ABP_HusbandryAI_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.Starving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HungerDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::Starving(float HungerDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.Starving");

	ABP_HusbandryAI_C_Starving_Params params;
	params.HungerDamage = HungerDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SnapRotationAndLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSweep                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bTeleport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::SnapRotationAndLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SnapRotationAndLocation");

	ABP_HusbandryAI_C_SnapRotationAndLocation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestStart
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::DayCycle_RestStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestStart");

	ABP_HusbandryAI_C_DayCycle_RestStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::DayCycle_RestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.DayCycle_RestEnd");

	ABP_HusbandryAI_C_DayCycle_RestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetTaskInActor");

	ABP_HusbandryAI_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ChangeTaskIsOccupied");

	ABP_HusbandryAI_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_HusbandryAI_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ReceiveDestroyed");

	ABP_HusbandryAI_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.SetForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForSale                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HusbandryAI_C::SetForSale(bool ForSale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.SetForSale");

	ABP_HusbandryAI_C_SetForSale_Params params;
	params.ForSale = ForSale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnMinuteUpdate
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnMinuteUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnMinuteUpdate");

	ABP_HusbandryAI_C_OnMinuteUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.OnHouseAssigned
// (BlueprintCallable, BlueprintEvent)
void ABP_HusbandryAI_C::OnHouseAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.OnHouseAssigned");

	ABP_HusbandryAI_C_OnHouseAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HusbandryAI.BP_HusbandryAI_C.ExecuteUbergraph_BP_HusbandryAI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HusbandryAI_C::ExecuteUbergraph_BP_HusbandryAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HusbandryAI.BP_HusbandryAI_C.ExecuteUbergraph_BP_HusbandryAI");

	ABP_HusbandryAI_C_ExecuteUbergraph_BP_HusbandryAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
