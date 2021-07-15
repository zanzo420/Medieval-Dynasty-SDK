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

void FSeatMountingData::AfterRead()
{
}

void FSeatMountingData::BeforeDelete()
{
}

void FSeatData::AfterRead()
{
}

void FSeatData::BeforeDelete()
{
}

void FSeatManager::AfterRead()
{
}

void FSeatManager::BeforeDelete()
{
}

void FMountingAction::AfterRead()
{
}

void FMountingAction::BeforeDelete()
{
}

void FMountActionResponse::AfterRead()
{
}

void FMountActionResponse::BeforeDelete()
{
}

void FSeatDataMemento::AfterRead()
{
}

void FSeatDataMemento::BeforeDelete()
{
}

// Function AdsMountingSystem.AdsMountingSystemLibrary.TranslateVectorRelative
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 offsetValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 outVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdsMountingSystemLibrary::STATIC_TranslateVectorRelative(const struct FTransform& Transform, const struct FVector& offsetValue, struct FVector* outVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.TranslateVectorRelative");

	UAdsMountingSystemLibrary_TranslateVectorRelative_Params params;
	params.Transform = Transform;
	params.offsetValue = offsetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outVector != nullptr)
		*outVector = params.outVector;

}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSeatManager            inSeatManager                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   occupyingPawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_SetSeatOccupiedById(struct FSeatManager* inSeatManager, int seatId, class APawn* occupyingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedById");

	UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.occupyingPawn = occupyingPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSeatManager            inSeatManager                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   occupyingPawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_SetSeatOccupiedAtIndex(struct FSeatManager* inSeatManager, int seatIndex, class APawn* occupyingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_SetSeatOccupiedAtIndex");

	UAdsMountingSystemLibrary_SeatManager_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.occupyingPawn = occupyingPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_IsSeatOccupiedById(const struct FSeatManager& inSeatManager, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedById");

	UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedById_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_IsSeatOccupiedAtIndex(const struct FSeatManager& inSeatManager, int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsSeatOccupiedAtIndex");

	UAdsMountingSystemLibrary_SeatManager_IsSeatOccupiedAtIndex_Params params;
	params.inSeatManager = inSeatManager;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsDriverSeatId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_IsDriverSeatId(const struct FSeatManager& inSeatManager, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_IsDriverSeatId");

	UAdsMountingSystemLibrary_SeatManager_IsDriverSeatId_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_HasAvailableSeats
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_HasAvailableSeats(const struct FSeatManager& inSeatManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_HasAvailableSeats");

	UAdsMountingSystemLibrary_SeatManager_HasAvailableSeats_Params params;
	params.inSeatManager = inSeatManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_GetSeatDataById(const struct FSeatManager& inSeatManager, int seatId, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataById");

	UAdsMountingSystemLibrary_SeatManager_GetSeatDataById_Params params;
	params.inSeatManager = inSeatManager;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatDataIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_GetSeatDataAtIndex(const struct FSeatManager& inSeatManager, int seatDataIndex, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetSeatDataAtIndex");

	UAdsMountingSystemLibrary_SeatManager_GetSeatDataAtIndex_Params params;
	params.inSeatManager = inSeatManager;
	params.seatDataIndex = seatDataIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumSeats
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAdsMountingSystemLibrary::STATIC_SeatManager_GetNumSeats(const struct FSeatManager& inSeatManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumSeats");

	UAdsMountingSystemLibrary_SeatManager_GetNumSeats_Params params;
	params.inSeatManager = inSeatManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumRiders
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAdsMountingSystemLibrary::STATIC_SeatManager_GetNumRiders(const struct FSeatManager& inSeatManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetNumRiders");

	UAdsMountingSystemLibrary_SeatManager_GetNumRiders_Params params;
	params.inSeatManager = inSeatManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetDriverSeat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSeatData               outDriverSeatData              (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_GetDriverSeat(const struct FSeatManager& inSeatManager, struct FSeatData* outDriverSeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_GetDriverSeat");

	UAdsMountingSystemLibrary_SeatManager_GetDriverSeat_Params params;
	params.inSeatManager = inSeatManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outDriverSeatData != nullptr)
		*outDriverSeatData = params.outDriverSeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_FindAvailableMountingPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSeatManager            inSeatManager                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 riderLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              MountPosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            outSeatDataIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_FindAvailableMountingPosition(const struct FSeatManager& inSeatManager, AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, const struct FTransform& MountPosition, int* outSeatDataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_FindAvailableMountingPosition");

	UAdsMountingSystemLibrary_SeatManager_FindAvailableMountingPosition_Params params;
	params.inSeatManager = inSeatManager;
	params.Position = Position;
	params.riderLocation = riderLocation;
	params.MountPosition = MountPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outSeatDataIndex != nullptr)
		*outSeatDataIndex = params.outSeatDataIndex;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSeatManager            inSeatManager                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_ClearOccupierById(struct FSeatManager* inSeatManager, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierById");

	UAdsMountingSystemLibrary_SeatManager_ClearOccupierById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSeatManager            inSeatManager                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdsMountingSystemLibrary::STATIC_SeatManager_ClearOccupierAtIndex(struct FSeatManager* inSeatManager, int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.SeatManager_ClearOccupierAtIndex");

	UAdsMountingSystemLibrary_SeatManager_ClearOccupierAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (inSeatManager != nullptr)
		*inSeatManager = params.inSeatManager;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.GetRelativeMountingPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  mountActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  riderActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ignoreForwared                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ignoreRight                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ignoreUp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UAdsMountingSystemLibrary::GetRelativeMountingPosition(class AActor* mountActor, class AActor* riderActor, bool ignoreForwared, bool ignoreRight, bool ignoreUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetRelativeMountingPosition");

	UAdsMountingSystemLibrary_GetRelativeMountingPosition_Params params;
	params.mountActor = mountActor;
	params.riderActor = riderActor;
	params.ignoreForwared = ignoreForwared;
	params.ignoreRight = ignoreRight;
	params.ignoreUp = ignoreUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromUpBetweenActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  mainActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  targetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAdsMountingSystemLibrary::STATIC_GetAngleFromUpBetweenActors(class AActor* mainActor, class AActor* targetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromUpBetweenActors");

	UAdsMountingSystemLibrary_GetAngleFromUpBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromRightBetweenActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  mainActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  targetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAdsMountingSystemLibrary::STATIC_GetAngleFromRightBetweenActors(class AActor* mainActor, class AActor* targetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromRightBetweenActors");

	UAdsMountingSystemLibrary_GetAngleFromRightBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromForwardBetweenActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  mainActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  targetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAdsMountingSystemLibrary::STATIC_GetAngleFromForwardBetweenActors(class AActor* mainActor, class AActor* targetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.AdsMountingSystemLibrary.GetAngleFromForwardBetweenActors");

	UAdsMountingSystemLibrary_GetAngleFromForwardBetweenActors_Params params;
	params.mainActor = mainActor;
	params.targetActor = targetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAdsMountingSystemLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAdsMountingSystemLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAnimNotify_ChangeSeatsFinished::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_ChangeSeatsFinished::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_DismountFinished::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_DismountFinished::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_MountingFinished::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_MountingFinished::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToMount
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  linkedActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToMount");

	UADMUnifiedControllerPawn_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToDismount
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PrepareToDismount");

	UADMUnifiedControllerPawn_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformMountPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::PerformMountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformMountPawn");

	UADMUnifiedControllerPawn_PerformMountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformDismountPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::PerformDismountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.PerformDismountPawn");

	UADMUnifiedControllerPawn_PerformDismountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.IsMounted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.IsMounted");

	UADMUnifiedControllerPawn_IsMounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.IsCharacterMountable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UADMUnifiedControllerPawn::IsCharacterMountable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.IsCharacterMountable");

	UADMUnifiedControllerPawn_IsCharacterMountable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UADMUnifiedControllerPawn::GetCharacterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterPawn");

	UADMUnifiedControllerPawn_GetCharacterPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterMount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UADMUnifiedControllerPawn::GetCharacterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterMount");

	UADMUnifiedControllerPawn_GetCharacterMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterController
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AController* UADMUnifiedControllerPawn::GetCharacterController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.ADMUnifiedControllerPawn.GetCharacterController");

	UADMUnifiedControllerPawn_GetCharacterController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UADMUnifiedControllerPawn::AfterRead()
{
	UInterface::AfterRead();

}

void UADMUnifiedControllerPawn::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.LinkedMountActor.SetMasterActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  masterActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ULinkedMountActor::SetMasterActor(class AActor* masterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.SetMasterActor");

	ULinkedMountActor_SetMasterActor_Params params;
	params.masterActor = masterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActor.SetLinkedSeatId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULinkedMountActor::SetLinkedSeatId(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.SetLinkedSeatId");

	ULinkedMountActor_SetLinkedSeatId_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActor.GetMasterActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ULinkedMountActor::GetMasterActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetMasterActor");

	ULinkedMountActor_GetMasterActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActor.GetLinkedSeatId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULinkedMountActor::GetLinkedSeatId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetLinkedSeatId");

	ULinkedMountActor_GetLinkedSeatId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActor.GetLinkedActorMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* ULinkedMountActor::GetLinkedActorMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActor.GetLinkedActorMesh");

	ULinkedMountActor_GetLinkedActorMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULinkedMountActor::AfterRead()
{
	UInterface::AfterRead();

}

void ULinkedMountActor::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.LinkedMountActorOwner.SetLinkedActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newLinkedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ULinkedMountActorOwner::SetLinkedActor(class AActor* newLinkedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.SetLinkedActor");

	ULinkedMountActorOwner_SetLinkedActor_Params params;
	params.newLinkedActor = newLinkedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActors
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> ULinkedMountActorOwner::GetLinkedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActors");

	ULinkedMountActorOwner_GetLinkedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ULinkedMountActorOwner::GetLinkedActor(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.LinkedMountActorOwner.GetLinkedActor");

	ULinkedMountActorOwner_GetLinkedActor_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULinkedMountActorOwner::AfterRead()
{
	UInterface::AfterRead();

}

void ULinkedMountActorOwner::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedById
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::SetSeatOccupiedById(int seatId, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedById");

	UMountablePawnInterface_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedAtIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupiedAtIndex");

	UMountablePawnInterface_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupied
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::SetSeatOccupied(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.SetSeatOccupied");

	UMountablePawnInterface_SetSeatOccupied_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedMounting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::OnRiderFinishedMounting(class AActor* mountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedMounting");

	UMountablePawnInterface_OnRiderFinishedMounting_Params params;
	params.mountedActor = mountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedDismounting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  dismountedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedDismounting");

	UMountablePawnInterface_OnRiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedChangingSeats
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            newSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            oldSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.OnRiderFinishedChangingSeats");

	UMountablePawnInterface_OnRiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.MustHaveDriver
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::MustHaveDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.MustHaveDriver");

	UMountablePawnInterface_MustHaveDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedById
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsSeatOccupiedById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedById");

	UMountablePawnInterface_IsSeatOccupiedById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedAtIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsSeatOccupiedAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsSeatOccupiedAtIndex");

	UMountablePawnInterface_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsMountablePawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsMountablePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsMountablePawn");

	UMountablePawnInterface_IsMountablePawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsMountableByPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsMountableByPawn(class APawn* newRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsMountableByPawn");

	UMountablePawnInterface_IsMountableByPawn_Params params;
	params.newRider = newRider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsMountableActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsMountableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsMountableActor");

	UMountablePawnInterface_IsMountableActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsDriverSeat
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSeatData               SeatData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsDriverSeat(const struct FSeatData& SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsDriverSeat");

	UMountablePawnInterface_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.IsDriverReady
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::IsDriverReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.IsDriverReady");

	UMountablePawnInterface_IsDriverReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.HasPassangers
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::HasPassangers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.HasPassangers");

	UMountablePawnInterface_HasPassangers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.HasDriver
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::HasDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.HasDriver");

	UMountablePawnInterface_HasDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataById
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::GetSeatDataById(int seatId, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetSeatDataById");

	UMountablePawnInterface_GetSeatDataById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetSeatDataAtIndex
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::GetSeatDataAtIndex(int Index, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetSeatDataAtIndex");

	UMountablePawnInterface_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetRelativePositionToMount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnInterface::GetRelativePositionToMount(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetRelativePositionToMount");

	UMountablePawnInterface_GetRelativePositionToMount_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetRelativeMountDirection
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnInterface::GetRelativeMountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetRelativeMountDirection");

	UMountablePawnInterface_GetRelativeMountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetRelativeDismountDirection
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnInterface::GetRelativeDismountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetRelativeDismountDirection");

	UMountablePawnInterface_GetRelativeDismountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetMountBody
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* UMountablePawnInterface::GetMountBody(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMountBody");

	UMountablePawnInterface_GetMountBody_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetMountablePawnComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMountablePawnComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMountablePawnComponent* UMountablePawnInterface::GetMountablePawnComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMountablePawnComponent");

	UMountablePawnInterface_GetMountablePawnComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetMaxRiders
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountablePawnInterface::GetMaxRiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetMaxRiders");

	UMountablePawnInterface_GetMaxRiders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetDriver
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountablePawnInterface::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetDriver");

	UMountablePawnInterface_GetDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetDismountDirection
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnInterface::GetDismountDirection(class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetDismountDirection");

	UMountablePawnInterface_GetDismountDirection_Params params;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.GetCurrentRiderCount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountablePawnInterface::GetCurrentRiderCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.GetCurrentRiderCount");

	UMountablePawnInterface_GetCurrentRiderCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.FindAvailableMountingPosition
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 riderLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               outSeatData                    (Parm, OutParm, NativeAccessSpecifierPublic)
// int                            outSeatIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.FindAvailableMountingPosition");

	UMountablePawnInterface_FindAvailableMountingPosition_Params params;
	params.Position = Position;
	params.riderLocation = riderLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outSeatData != nullptr)
		*outSeatData = params.outSeatData;
	if (outSeatIndex != nullptr)
		*outSeatIndex = params.outSeatIndex;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.ClearSeatByIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::ClearSeatByIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.ClearSeatByIndex");

	UMountablePawnInterface_ClearSeatByIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.ClearSeatById
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::ClearSeatById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.ClearSeatById");

	UMountablePawnInterface_ClearSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.ClearSeatAtIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::ClearSeatAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.ClearSeatAtIndex");

	UMountablePawnInterface_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.CanMountPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::CanMountPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.CanMountPawn");

	UMountablePawnInterface_CanMountPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.CanMountAtPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 riderLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection desiredMountingPosition        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.CanMountAtPosition");

	UMountablePawnInterface_CanMountAtPosition_Params params;
	params.riderLocation = riderLocation;
	params.desiredMountingPosition = desiredMountingPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnInterface.CanMountActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnInterface::CanMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnInterface.CanMountActor");

	UMountablePawnInterface_CanMountActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMountablePawnInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMountablePawnInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.MountingSystemDebugInterface.SetPlayerDebugId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newDebugId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountingSystemDebugInterface::SetPlayerDebugId(int newDebugId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountingSystemDebugInterface.SetPlayerDebugId");

	UMountingSystemDebugInterface_SetPlayerDebugId_Params params;
	params.newDebugId = newDebugId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountingSystemDebugInterface.GetPlayerDebugId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountingSystemDebugInterface::GetPlayerDebugId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountingSystemDebugInterface.GetPlayerDebugId");

	UMountingSystemDebugInterface_GetPlayerDebugId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMountingSystemDebugInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMountingSystemDebugInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.MountRiderInterface.StartPawnMounting
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  linkedActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    mountingResponse               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.StartPawnMounting");

	UMountRiderInterface_StartPawnMounting_Params params;
	params.newMountActor = newMountActor;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.StartPawnDismounting
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  oldPawnMount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    mountingResponse               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.StartPawnDismounting");

	UMountRiderInterface_StartPawnDismounting_Params params;
	params.oldPawnMount = oldPawnMount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.SetRiderCollisionEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldEnable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::SetRiderCollisionEnabled(bool shouldEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.SetRiderCollisionEnabled");

	UMountRiderInterface_SetRiderCollisionEnabled_Params params;
	params.shouldEnable = shouldEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.PlayMoveToSeatAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            currentSeatId                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            oldSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::PlayMoveToSeatAnimation(int currentSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayMoveToSeatAnimation");

	UMountRiderInterface_PlayMoveToSeatAnimation_Params params;
	params.currentSeatId = currentSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.PlayMountingAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::PlayMountingAnimation(AdsMountingSystem_EMountingDirection Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayMountingAnimation");

	UMountRiderInterface_PlayMountingAnimation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.PlayDismountingAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::PlayDismountingAnimation(AdsMountingSystem_EMountingDirection Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.PlayDismountingAnimation");

	UMountRiderInterface_PlayDismountingAnimation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.OnMoveToMountingLocationCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::OnMoveToMountingLocationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnMoveToMountingLocationCompleted");

	UMountRiderInterface_OnMoveToMountingLocationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.OnMountingPawnFinished
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::OnMountingPawnFinished(class AActor* newMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnMountingPawnFinished");

	UMountRiderInterface_OnMountingPawnFinished_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.OnDismountingPawnFinished
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  oldPawnMount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::OnDismountingPawnFinished(class AActor* oldPawnMount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnDismountingPawnFinished");

	UMountRiderInterface_OnDismountingPawnFinished_Params params;
	params.oldPawnMount = oldPawnMount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.OnChangeToNewSeatCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::OnChangeToNewSeatCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.OnChangeToNewSeatCompleted");

	UMountRiderInterface_OnChangeToNewSeatCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.MoveToMountingLocation
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.MoveToMountingLocation");

	UMountRiderInterface_MoveToMountingLocation_Params params;
	params.Location = Location;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.IsSeatedOnMount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::IsSeatedOnMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.IsSeatedOnMount");

	UMountRiderInterface_IsSeatedOnMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.IsDriver
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::IsDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.IsDriver");

	UMountRiderInterface_IsDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.GetSeatId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountRiderInterface::GetSeatId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetSeatId");

	UMountRiderInterface_GetSeatId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.GetRiderMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* UMountRiderInterface::GetRiderMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetRiderMesh");

	UMountRiderInterface_GetRiderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.GetMountRiderComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMountRiderComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMountRiderComponent* UMountRiderInterface::GetMountRiderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetMountRiderComponent");

	UMountRiderInterface_GetMountRiderComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.GetDebugId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountRiderInterface::GetDebugId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetDebugId");

	UMountRiderInterface_GetDebugId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.GetAllRiderSkeletalMeshes
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class USkeletalMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class USkeletalMeshComponent*> UMountRiderInterface::GetAllRiderSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.GetAllRiderSkeletalMeshes");

	UMountRiderInterface_GetAllRiderSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.BeginMountingPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   newMountPawn                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::BeginMountingPawn(class APawn* newMountPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.BeginMountingPawn");

	UMountRiderInterface_BeginMountingPawn_Params params;
	params.newMountPawn = newMountPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderInterface.BeginDismountingPawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   dismountedPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderInterface::BeginDismountingPawn(class APawn* dismountedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderInterface.BeginDismountingPawn");

	UMountRiderInterface_BeginDismountingPawn_Params params;
	params.dismountedPawn = dismountedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMountRiderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMountRiderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.RiderControllerInterface.PossessCharacter
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   characterToPossess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::PossessCharacter(class APawn* characterToPossess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.PossessCharacter");

	URiderControllerInterface_PossessCharacter_Params params;
	params.characterToPossess = characterToPossess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnRiderRemoved
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  removedRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnRiderRemoved(class AActor* removedRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnRiderRemoved");

	URiderControllerInterface_OnRiderRemoved_Params params;
	params.removedRider = removedRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnRiderAdded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnRiderAdded(class AActor* newRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnRiderAdded");

	URiderControllerInterface_OnRiderAdded_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnOtherRiderChangedSeats
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  otherRider                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            oldSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            newSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnOtherRiderChangedSeats(class AActor* otherRider, int oldSeatId, int newSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnOtherRiderChangedSeats");

	URiderControllerInterface_OnOtherRiderChangedSeats_Params params;
	params.otherRider = otherRider;
	params.oldSeatId = oldSeatId;
	params.newSeatId = newSeatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnMountActionFailed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  newLinkedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnMountActionFailed");

	URiderControllerInterface_OnMountActionFailed_Params params;
	params.newMount = newMount;
	params.newLinkedActor = newLinkedActor;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnDismountActionFailed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  currentMount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnDismountActionFailed(class AActor* currentMount, const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnDismountActionFailed");

	URiderControllerInterface_OnDismountActionFailed_Params params;
	params.currentMount = currentMount;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.OnChangeSeatActionFailed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMountActionResponse    Response                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerInterface::OnChangeSeatActionFailed(const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.OnChangeSeatActionFailed");

	URiderControllerInterface_OnChangeSeatActionFailed_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerInterface.GetRiderControllerComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderControllerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URiderControllerComponent* URiderControllerInterface::GetRiderControllerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerInterface.GetRiderControllerComponent");

	URiderControllerInterface_GetRiderControllerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URiderControllerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URiderControllerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetSeatOccupiedById(int seatId, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedById");

	UMountablePawnComponent_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupiedAtIndex");

	UMountablePawnComponent_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupied
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetSeatOccupied(int seatIndex, class APawn* rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetSeatOccupied");

	UMountablePawnComponent_SetSeatOccupied_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetRiderBySeatId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetRiderBySeatId(class APawn* newRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRiderBySeatId");

	UMountablePawnComponent_SetRiderBySeatId_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetRiderAtSeatIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetRiderAtSeatIndex(class APawn* newRider, int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRiderAtSeatIndex");

	UMountablePawnComponent_SetRiderAtSeatIndex_Params params;
	params.newRider = newRider;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetRider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetRider(class APawn* newRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetRider");

	UMountablePawnComponent_SetRider_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.SetIsMountable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsMountable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::SetIsMountable(bool IsMountable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.SetIsMountable");

	UMountablePawnComponent_SetIsMountable_Params params;
	params.IsMountable = IsMountable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedMounting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountablePawnComponent::RiderFinishedMounting(class AActor* Actor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedMounting");

	UMountablePawnComponent_RiderFinishedMounting_Params params;
	params.Actor = Actor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedDismounting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  dismountedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountablePawnComponent::RiderFinishedDismounting(class AActor* dismountedActor, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedDismounting");

	UMountablePawnComponent_RiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountablePawnComponent.RiderFinishedChangingSeats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  rider                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            newSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            oldSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountablePawnComponent::RiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.RiderFinishedChangingSeats");

	UMountablePawnComponent_RiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountablePawnComponent.MustHaveDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::MustHaveDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.MustHaveDriver");

	UMountablePawnComponent_MustHaveDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedById
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsSeatOccupiedById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedById");

	UMountablePawnComponent_IsSeatOccupiedById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsSeatOccupiedAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsSeatOccupiedAtIndex");

	UMountablePawnComponent_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsPossessableMount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsPossessableMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsPossessableMount");

	UMountablePawnComponent_IsPossessableMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsMounted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsMounted");

	UMountablePawnComponent_IsMounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsMountable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsMountable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsMountable");

	UMountablePawnComponent_IsMountable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeatId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsDriverSeatId(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsDriverSeatId");

	UMountablePawnComponent_IsDriverSeatId_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.IsDriverSeat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSeatData               SeatData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::IsDriverSeat(const struct FSeatData& SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.IsDriverSeat");

	UMountablePawnComponent_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.HasDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::HasDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.HasDriver");

	UMountablePawnComponent_HasDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataById
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::GetSeatDataById(int seatId, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetSeatDataById");

	UMountablePawnComponent_GetSeatDataById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetSeatDataAtIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               SeatData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::GetSeatDataAtIndex(int Index, struct FSeatData* SeatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetSeatDataAtIndex");

	UMountablePawnComponent_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeatData != nullptr)
		*SeatData = params.SeatData;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetRiderBySeatId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountablePawnComponent::GetRiderBySeatId(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRiderBySeatId");

	UMountablePawnComponent_GetRiderBySeatId_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetRiderAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountablePawnComponent::GetRiderAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRiderAtIndex");

	UMountablePawnComponent_GetRiderAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetRider
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountablePawnComponent::GetRider(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetRider");

	UMountablePawnComponent_GetRider_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetNumSeats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountablePawnComponent::GetNumSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetNumSeats");

	UMountablePawnComponent_GetNumSeats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetNumRiders
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountablePawnComponent::GetNumRiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetNumRiders");

	UMountablePawnComponent_GetNumRiders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountablePawnComponent::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDriver");

	UMountablePawnComponent_GetDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatById
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnComponent::GetDefaultPositionForSeatById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatById");

	UMountablePawnComponent_GetDefaultPositionForSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdsMountingSystem_EMountingDirection ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AdsMountingSystem_EMountingDirection UMountablePawnComponent::GetDefaultPositionForSeatAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.GetDefaultPositionForSeatAtIndex");

	UMountablePawnComponent_GetDefaultPositionForSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.FindAvailableMountingPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 riderLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSeatData               outSeatData                    (Parm, OutParm, NativeAccessSpecifierPublic)
// int                            outSeatIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.FindAvailableMountingPosition");

	UMountablePawnComponent_FindAvailableMountingPosition_Params params;
	params.Position = Position;
	params.riderLocation = riderLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outSeatData != nullptr)
		*outSeatData = params.outSeatData;
	if (outSeatIndex != nullptr)
		*outSeatIndex = params.outSeatIndex;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.ClearSeatByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::ClearSeatByIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatByIndex");

	UMountablePawnComponent_ClearSeatByIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.ClearSeatById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::ClearSeatById(int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatById");

	UMountablePawnComponent_ClearSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.ClearSeatAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::ClearSeatAtIndex(int seatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.ClearSeatAtIndex");

	UMountablePawnComponent_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountablePawnComponent.CanMount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountablePawnComponent::CanMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountablePawnComponent.CanMount");

	UMountablePawnComponent_CanMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMountablePawnComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMountablePawnComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function AdsMountingSystem.MountRiderComponent.UpdateRootMeshRelativeLocation
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::UpdateRootMeshRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.UpdateRootMeshRelativeLocation");

	UMountRiderComponent_UpdateRootMeshRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.ShouldTeleportToDismountLocation
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::ShouldTeleportToDismountLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ShouldTeleportToDismountLocation");

	UMountRiderComponent_ShouldTeleportToDismountLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.SetRootMotionValidationForAnimationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsRootMotionValidationForAnimationEnabled (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountRiderComponent::SetRootMotionValidationForAnimationEnabled(bool IsRootMotionValidationForAnimationEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetRootMotionValidationForAnimationEnabled");

	UMountRiderComponent_SetRootMotionValidationForAnimationEnabled_Params params;
	params.IsRootMotionValidationForAnimationEnabled = IsRootMotionValidationForAnimationEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.SetRiderController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountRiderComponent::SetRiderController(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetRiderController");

	UMountRiderComponent_SetRiderController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.SetMovementReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enableMovementReplication      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           onlyAllowAutonomousTickPose    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountRiderComponent::SetMovementReplication(bool enableMovementReplication, bool onlyAllowAutonomousTickPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetMovementReplication");

	UMountRiderComponent_SetMovementReplication_Params params;
	params.enableMovementReplication = enableMovementReplication;
	params.onlyAllowAutonomousTickPose = onlyAllowAutonomousTickPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.Reset
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.Reset");

	UMountRiderComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.PawnFinishedMounting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::PawnFinishedMounting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedMounting");

	UMountRiderComponent_PawnFinishedMounting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.PawnFinishedDismounting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::PawnFinishedDismounting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedDismounting");

	UMountRiderComponent_PawnFinishedDismounting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.PawnFinishedChangingSeats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::PawnFinishedChangingSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedChangingSeats");

	UMountRiderComponent_PawnFinishedChangingSeats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.OnRep_IsMounted
// (Native, Public)
// Parameters:
// bool                           previousMountedState           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountRiderComponent::OnRep_IsMounted(bool previousMountedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_IsMounted");

	UMountRiderComponent_OnRep_IsMounted_Params params;
	params.previousMountedState = previousMountedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.OnRep_DismountDirection
// (Native, Public)
void UMountRiderComponent::OnRep_DismountDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_DismountDirection");

	UMountRiderComponent_OnRep_DismountDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentSeatData
// (Native, Public)
void UMountRiderComponent::OnRep_CurrentSeatData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentSeatData");

	UMountRiderComponent_OnRep_CurrentSeatData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentMount
// (Native, Public)
void UMountRiderComponent::OnRep_CurrentMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentMount");

	UMountRiderComponent_OnRep_CurrentMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentAction
// (Native, Public)
void UMountRiderComponent::OnRep_CurrentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentAction");

	UMountRiderComponent_OnRep_CurrentAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.OnCharacterMounted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bPlayMountingAnimation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::OnCharacterMounted(bool bPlayMountingAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterMounted");

	UMountRiderComponent_OnCharacterMounted_Params params;
	params.bPlayMountingAnimation = bPlayMountingAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.OnCharacterDismounted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::OnCharacterDismounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterDismounted");

	UMountRiderComponent_OnCharacterDismounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.OnCharacterChangedSeats
// (Final, Native, Public)
// Parameters:
// bool                           bPlayAnimation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::OnCharacterChangedSeats(bool bPlayAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterChangedSeats");

	UMountRiderComponent_OnCharacterChangedSeats_Params params;
	params.bPlayAnimation = bPlayAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.MULTICAST_OnCharacterDismounted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// AdsMountingSystem_EMountingDirection dismountDirection              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMountRiderComponent::MULTICAST_OnCharacterDismounted(AdsMountingSystem_EMountingDirection dismountDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MULTICAST_OnCharacterDismounted");

	UMountRiderComponent_MULTICAST_OnCharacterDismounted_Params params;
	params.dismountDirection = dismountDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.MoveToMountingLocationComplete
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::MoveToMountingLocationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MoveToMountingLocationComplete");

	UMountRiderComponent_MoveToMountingLocationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.MountPawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  newLinkedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::MountPawn(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MountPawn");

	UMountRiderComponent_MountPawn_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.IsSeated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::IsSeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsSeated");

	UMountRiderComponent_IsSeated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.IsRootMotionValidationForAnimationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::IsRootMotionValidationForAnimationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsRootMotionValidationForAnimationEnabled");

	UMountRiderComponent_IsRootMotionValidationForAnimationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.IsMounted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsMounted");

	UMountRiderComponent_IsMounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.IsDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::IsDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsDriver");

	UMountRiderComponent_IsDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetSeatId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMountRiderComponent::GetSeatId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetSeatId");

	UMountRiderComponent_GetSeatId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetRiderController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AController* UMountRiderComponent::GetRiderController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetRiderController");

	UMountRiderComponent_GetRiderController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetPreviousMount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UMountRiderComponent::GetPreviousMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetPreviousMount");

	UMountRiderComponent_GetPreviousMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetOwningPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UMountRiderComponent::GetOwningPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetOwningPawn");

	UMountRiderComponent_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetLinkedMountActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UMountRiderComponent::GetLinkedMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetLinkedMountActor");

	UMountRiderComponent_GetLinkedMountActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetDismountLocation
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// AdsMountingSystem_EMountingDirection directionToDismount            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMountRiderComponent::GetDismountLocation(AdsMountingSystem_EMountingDirection directionToDismount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetDismountLocation");

	UMountRiderComponent_GetDismountLocation_Params params;
	params.directionToDismount = directionToDismount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetCurrentSeatData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSeatData               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSeatData UMountRiderComponent::GetCurrentSeatData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetCurrentSeatData");

	UMountRiderComponent_GetCurrentSeatData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.GetCurrentMount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UMountRiderComponent::GetCurrentMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetCurrentMount");

	UMountRiderComponent_GetCurrentMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.DismountPawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  dismountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::DismountPawn(class AActor* dismountActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.DismountPawn");

	UMountRiderComponent_DismountPawn_Params params;
	params.dismountActor = dismountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.DismountFinished
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::DismountFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.DismountFinished");

	UMountRiderComponent_DismountFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.DetachRiderFromMount
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::DetachRiderFromMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.DetachRiderFromMount");

	UMountRiderComponent_DetachRiderFromMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.ChangeSeatToIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            seatIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::ChangeSeatToIndex(int seatIndex, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ChangeSeatToIndex");

	UMountRiderComponent_ChangeSeatToIndex_Params params;
	params.seatIndex = seatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.ChangeSeatById
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMountRiderComponent::ChangeSeatById(int seatId, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ChangeSeatById");

	UMountRiderComponent_ChangeSeatById_Params params;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.MountRiderComponent.AttachRiderToMount
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::AttachRiderToMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AttachRiderToMount");

	UMountRiderComponent_AttachRiderToMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessMount
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::AllowControllerToPossessMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessMount");

	UMountRiderComponent_AllowControllerToPossessMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessCharacter
// (Final, Native, Public, BlueprintCallable)
void UMountRiderComponent::AllowControllerToPossessCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessCharacter");

	UMountRiderComponent_AllowControllerToPossessCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMountRiderComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(currentMount, AActor);
	READ_PTR_FULL(previousMount, AActor);
	READ_PTR_FULL(LinkedMountActor, AActor);
	READ_PTR_FULL(riderController, AController);
}

void UMountRiderComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(currentMount);
	DELE_PTR_FULL(previousMount);
	DELE_PTR_FULL(LinkedMountActor);
	DELE_PTR_FULL(riderController);
}

// Function AdsMountingSystem.RiderControllerComponent.SetOwnedPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newOwnedPawn                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::SetOwnedPawn(class APawn* newOwnedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetOwnedPawn");

	URiderControllerComponent_SetOwnedPawn_Params params;
	params.newOwnedPawn = newOwnedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.SetMountPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::SetMountPawn(class APawn* newMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetMountPawn");

	URiderControllerComponent_SetMountPawn_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.SetMountActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::SetMountActor(class AActor* newMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetMountActor");

	URiderControllerComponent_SetMountActor_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.SetLinkedMountActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  newLinkedMountActor            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* URiderControllerComponent::SetLinkedMountActor(class AActor* newLinkedMountActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetLinkedMountActor");

	URiderControllerComponent_SetLinkedMountActor_Params params;
	params.newLinkedMountActor = newLinkedMountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.SetControlledPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   newControlledPawn              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::SetControlledPawn(class APawn* newControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetControlledPawn");

	URiderControllerComponent_SetControlledPawn_Params params;
	params.newControlledPawn = newControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.RiderRemoved
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  removedRider                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::RiderRemoved(class AActor* removedRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.RiderRemoved");

	URiderControllerComponent_RiderRemoved_Params params;
	params.removedRider = removedRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.RiderAdded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  newRider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            seatId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::RiderAdded(class AActor* newRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.RiderAdded");

	URiderControllerComponent_RiderAdded_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.Reset
// (Final, Native, Public, BlueprintCallable)
void URiderControllerComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.Reset");

	URiderControllerComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.PerformMountPawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APawn*                   newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerComponent::PerformMountPawn(class APawn* newMountActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformMountPawn");

	URiderControllerComponent_PerformMountPawn_Params params;
	params.newMountActor = newMountActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.PerformMountActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  newMountActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  newLinkedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerComponent::PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformMountActor");

	URiderControllerComponent_PerformMountActor_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.PerformDismountPawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APawn*                   dismountingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerComponent::PerformDismountPawn(class APawn* dismountingActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformDismountPawn");

	URiderControllerComponent_PerformDismountPawn_Params params;
	params.dismountingActor = dismountingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.PerformDismountActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  dismountingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerComponent::PerformDismountActor(class AActor* dismountingActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformDismountActor");

	URiderControllerComponent_PerformDismountActor_Params params;
	params.dismountingActor = dismountingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.OtherRiderChangedSeat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  otherRider                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            newSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            oldSeatId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiderControllerComponent::OtherRiderChangedSeat(class AActor* otherRider, int newSeatId, int oldSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.OtherRiderChangedSeat");

	URiderControllerComponent_OtherRiderChangedSeat_Params params;
	params.otherRider = otherRider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdsMountingSystem.RiderControllerComponent.IsMounted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URiderControllerComponent::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.IsMounted");

	URiderControllerComponent_IsMounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.GetOwningController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AController* URiderControllerComponent::GetOwningController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetOwningController");

	URiderControllerComponent_GetOwningController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.GetOwnedPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* URiderControllerComponent::GetOwnedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetOwnedPawn");

	URiderControllerComponent_GetOwnedPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.GetMountPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* URiderControllerComponent::GetMountPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetMountPawn");

	URiderControllerComponent_GetMountPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.GetMountActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* URiderControllerComponent::GetMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetMountActor");

	URiderControllerComponent_GetMountActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.GetLinkedMountActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* URiderControllerComponent::GetLinkedMountActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetLinkedMountActor");

	URiderControllerComponent_GetLinkedMountActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdsMountingSystem.RiderControllerComponent.ClearMount
// (Final, Native, Public, BlueprintCallable)
void URiderControllerComponent::ClearMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.ClearMount");

	URiderControllerComponent_ClearMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URiderControllerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ownedPawn, APawn);
	READ_PTR_FULL(mountActor, AActor);
	READ_PTR_FULL(LinkedMountActor, AActor);
}

void URiderControllerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ownedPawn);
	DELE_PTR_FULL(mountActor);
	DELE_PTR_FULL(LinkedMountActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
