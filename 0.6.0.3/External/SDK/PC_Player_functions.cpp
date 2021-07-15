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

// Function PC_Player.PC_Player_C.GetRiderControllerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderControllerComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class URiderControllerComponent* APC_Player_C::GetRiderControllerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetRiderControllerComponent");

	APC_Player_C_GetRiderControllerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnChangeSeatActionFailed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMountActionResponse    Response                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnChangeSeatActionFailed(const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnChangeSeatActionFailed");

	APC_Player_C_OnChangeSeatActionFailed_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnDismountActionFailed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  currentMount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnDismountActionFailed(class AActor* currentMount, const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDismountActionFailed");

	APC_Player_C_OnDismountActionFailed_Params params;
	params.currentMount = currentMount;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnMountActionFailed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newMount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  newLinkedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, const struct FMountActionResponse& Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnMountActionFailed");

	APC_Player_C_OnMountActionFailed_Params params;
	params.newMount = newMount;
	params.newLinkedActor = newLinkedActor;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnOtherRiderChangedSeats
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  otherRider                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            oldSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            newSeatId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnOtherRiderChangedSeats(class AActor* otherRider, int oldSeatId, int newSeatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnOtherRiderChangedSeats");

	APC_Player_C_OnOtherRiderChangedSeats_Params params;
	params.otherRider = otherRider;
	params.oldSeatId = oldSeatId;
	params.newSeatId = newSeatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnRiderAdded
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  newRider                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnRiderAdded(class AActor* newRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRiderAdded");

	APC_Player_C_OnRiderAdded_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.OnRiderRemoved
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  removedRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            seatId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::OnRiderRemoved(class AActor* removedRider, int seatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRiderRemoved");

	APC_Player_C_OnRiderRemoved_Params params;
	params.removedRider = removedRider;
	params.seatId = seatId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.PossessCharacter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   characterToPossess             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::PossessCharacter(class APawn* characterToPossess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PossessCharacter");

	APC_Player_C_PossessCharacter_Params params;
	params.characterToPossess = characterToPossess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.GetCharacterController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AController* APC_Player_C::GetCharacterController()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterController");

	APC_Player_C_GetCharacterController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.GetCharacterMount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* APC_Player_C::GetCharacterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterMount");

	APC_Player_C_GetCharacterMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.GetCharacterPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* APC_Player_C::GetCharacterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterPawn");

	APC_Player_C_GetCharacterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.IsCharacterMountable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::IsCharacterMountable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.IsCharacterMountable");

	APC_Player_C_IsCharacterMountable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.IsMounted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::IsMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.IsMounted");

	APC_Player_C_IsMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.PerformDismountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::PerformDismountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PerformDismountPawn");

	APC_Player_C_PerformDismountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.PerformMountPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::PerformMountPawn(class APawn* mountOrRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PerformMountPawn");

	APC_Player_C_PerformMountPawn_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.PrepareToDismount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PrepareToDismount");

	APC_Player_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.PrepareToMount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Player_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PrepareToMount");

	APC_Player_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function PC_Player.PC_Player_C.ReleaseAllUIInputs
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::ReleaseAllUIInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReleaseAllUIInputs");

	APC_Player_C_ReleaseAllUIInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CheckCzechQuickslot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::CheckCzechQuickslot(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheckCzechQuickslot");

	APC_Player_C_CheckCzechQuickslot_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.UpdateInputHoldingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::UpdateInputHoldingTime(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateInputHoldingTime");

	APC_Player_C_UpdateInputHoldingTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ResetInputHoldingCount
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::ResetInputHoldingCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ResetInputHoldingCount");

	APC_Player_C_ResetInputHoldingCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputHoldingWithCount
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputHoldingWithCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldingWithCount");

	APC_Player_C_InputHoldingWithCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.OnHeadbobbingChanged
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::OnHeadbobbingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnHeadbobbingChanged");

	APC_Player_C_OnHeadbobbingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.UpdateFoV
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::UpdateFoV()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateFoV");

	APC_Player_C_UpdateFoV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.OnLockFreeCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LockFreeCam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::OnLockFreeCam(bool LockFreeCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnLockFreeCam");

	APC_Player_C_OnLockFreeCam_Params params;
	params.LockFreeCam = LockFreeCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ChangeCrosshairStatePC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ChangeCrosshairStatePC(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeCrosshairStatePC");

	APC_Player_C_ChangeCrosshairStatePC_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UserConstructionScript");

	APC_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Add_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_18");

	APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Subtract_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_17");

	APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_77
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_77(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_77");

	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_77_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_76
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_76(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_76");

	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_76_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Multiply_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_16");

	APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_75
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_75(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_75");

	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_75_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_74
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_74(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_74");

	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_74_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_73
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_73(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_73");

	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_73_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_72
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_72(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_72");

	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_72_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_71
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_71(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_71");

	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_71_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_70
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_70(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_70");

	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_70_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69");

	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68");

	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_67
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_67(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_67");

	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_67_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_66
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_66(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_66");

	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_66_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_65
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_65(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_65");

	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_65_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_64
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_64(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_64");

	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_64_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_63
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_63(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_63");

	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_63_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_62
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_62(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_62");

	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_62_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_61
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_61(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_61");

	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_61_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_60
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_60(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_60");

	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_60_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_59
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_59(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_59");

	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_59_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_58
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_58(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_58");

	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_58_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_57
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_57(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_57");

	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_57_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_56
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_56(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_56");

	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_56_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Backslash_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_15");

	APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14");

	APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_13");

	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_55
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_55(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_55");

	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_55_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_54
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_54(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_54");

	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_54_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_12");

	APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11");

	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_10");

	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9");

	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_8");

	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_53
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_53(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_53");

	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_53_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_52
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_52(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_52");

	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_52_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_51
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Torch_K2Node_InputActionEvent_51(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_51");

	APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_51_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50");

	APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_49
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_49(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_49");

	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_49_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_48
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_48(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_48");

	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_48_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_47
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_47(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_47");

	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_47_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_46
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_46(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_46");

	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_46_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_45
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot4_K2Node_InputActionEvent_45(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_45");

	APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_45_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_44
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot8_K2Node_InputActionEvent_44(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_44");

	APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_44_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_43
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot3_K2Node_InputActionEvent_43(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_43");

	APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_43_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_42
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot7_K2Node_InputActionEvent_42(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_42");

	APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_42_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_41
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot2_K2Node_InputActionEvent_41(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_41");

	APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_41_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_40
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot6_K2Node_InputActionEvent_40(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_40");

	APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_40_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_39
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot5_K2Node_InputActionEvent_39(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_39");

	APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_39_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_QuickSlot1_K2Node_InputActionEvent_38(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_38");

	APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_37(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_37");

	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_36");

	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_35");

	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_34");

	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_33(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_33");

	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_32");

	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31");

	APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_7");

	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_6");

	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30");

	APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_GameMenu_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_29");

	APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28");

	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27");

	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_26");

	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_25");

	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24");

	APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23");

	APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_WalkAction_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_22");

	APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_21");

	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_20");

	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_19");

	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_18");

	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_17");

	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_16");

	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_15");

	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_14");

	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Home_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_5");

	APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Insert_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Insert_K2Node_InputKeyEvent_4");

	APC_Player_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13");

	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12");

	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_F5_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_3");

	APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11");

	APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_Equals_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_2");

	APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_F9_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_1");

	APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10");

	APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_HideHUD_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_9");

	APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8");

	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7");

	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6");

	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5");

	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4");

	APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_3");

	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_2");

	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Player_C::InpActEvt_SummonMount_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_1");

	APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.BPI_OnHeadbobbingChanged
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::BPI_OnHeadbobbingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_OnHeadbobbingChanged");

	APC_Player_C_BPI_OnHeadbobbingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.BPI_UpdateControlsSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
void APC_Player_C::BPI_UpdateControlsSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_UpdateControlsSensitivity");

	APC_Player_C_BPI_UpdateControlsSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Server PossessPawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   characterToPossess             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Server_PossessPawn(class APawn* characterToPossess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server PossessPawn");

	APC_Player_C_Server_PossessPawn_Params params;
	params.characterToPossess = characterToPossess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceivePossess");

	APC_Player_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ToggleInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OpenLastTab_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Close_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ToggleInventory(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab, bool OpenLastTab_, bool Close_)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleInventory");

	APC_Player_C_ToggleInventory_Params params;
	params.MainTab = MainTab;
	params.OpenLastTab_ = OpenLastTab_;
	params.Close_ = Close_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ToggleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheatStart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CheatEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ToggleEvent(bool CheatStart, bool CheatEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleEvent");

	APC_Player_C_ToggleEvent_Params params;
	params.CheatStart = CheatStart;
	params.CheatEnd = CheatEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ToggleChallange
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::ToggleChallange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleChallange");

	APC_Player_C_ToggleChallange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ToggleSeasonSumUp
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::ToggleSeasonSumUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleSeasonSumUp");

	APC_Player_C_ToggleSeasonSumUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ToggleTradingMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithNPC_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*   OtherInventoryComponentReference (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WithHorse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           GiftGiving                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ToggleTradingMenu(bool WithNPC_, class UInventoryComponent_C* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleTradingMenu");

	APC_Player_C_ToggleTradingMenu_Params params;
	params.WithNPC_ = WithNPC_;
	params.OtherInventoryComponentReference = OtherInventoryComponentReference;
	params.WithHorse_ = WithHorse_;
	params.GiftGiving = GiftGiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Increase TP Camera Distance
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::Increase_TP_Camera_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Increase TP Camera Distance");

	APC_Player_C_Increase_TP_Camera_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Decrease TP Camera Distance
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::Decrease_TP_Camera_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Decrease TP Camera Distance");

	APC_Player_C_Decrease_TP_Camera_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Player Move For Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RotateDuringMovement           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UsePlayerLookAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetLookAtPitch               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::Player_Move_For_Interaction(const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Player Move For Interaction");

	APC_Player_C_Player_Move_For_Interaction_Params params;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputLastInventoryTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputLastInventoryTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputLastInventoryTab");

	APC_Player_C_InputLastInventoryTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputManagementTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputManagementTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputManagementTab");

	APC_Player_C_InputManagementTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputJournalTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputJournalTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputJournalTab");

	APC_Player_C_InputJournalTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputSkillsTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputSkillsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputSkillsTab");

	APC_Player_C_InputSkillsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputMapTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputMapTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputMapTab");

	APC_Player_C_InputMapTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputInventoryTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputInventoryTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputInventoryTab");

	APC_Player_C_InputInventoryTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.EventToggleInventory
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::EventToggleInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EventToggleInventory");

	APC_Player_C_EventToggleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Player Look At For Dialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  targetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Player_Look_At_For_Dialogue(class AActor* targetActor, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Player Look At For Dialogue");

	APC_Player_C_Player_Look_At_For_Dialogue_Params params;
	params.targetActor = targetActor;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.OnDialogueEnded
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::OnDialogueEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDialogueEnded");

	APC_Player_C_OnDialogueEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.OnDialogueStarted
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::OnDialogueStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDialogueStarted");

	APC_Player_C_OnDialogueStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Right_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Right_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Right_K2Node_InputAxisEvent_7");

	APC_Player_C_Right_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");

	APC_Player_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Backwards_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Backwards_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Backwards_K2Node_InputAxisEvent_1");

	APC_Player_C_Backwards_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Left_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Left_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Left_K2Node_InputAxisEvent_2");

	APC_Player_C_Left_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputTechnologyTab
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputTechnologyTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputTechnologyTab");

	APC_Player_C_InputTechnologyTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CreateDeathScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DeathType_E_DeathType> DeathType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateDeathScreen");

	APC_Player_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CreateMainMenu
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMainMenu");

	APC_Player_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.RemoveMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::RemoveMainMenu(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveMainMenu");

	APC_Player_C_RemoveMainMenu_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CreateIntro
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::CreateIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateIntro");

	APC_Player_C_CreateIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.RemoveIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*            MediaPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::RemoveIntro(float Delay, class UMediaPlayer* MediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveIntro");

	APC_Player_C_RemoveIntro_Params params;
	params.Delay = Delay;
	params.MediaPlayer = MediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Reset Camera Pitch
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::Reset_Camera_Pitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Reset Camera Pitch");

	APC_Player_C_Reset_Camera_Pitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InitWideCamera
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InitWideCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InitWideCamera");

	APC_Player_C_InitWideCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APC_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceiveBeginPlay");

	APC_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.EnterFreeCam
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::EnterFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EnterFreeCam");

	APC_Player_C_EnterFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5");

	APC_Player_C_InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6");

	APC_Player_C_InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InterruptPlayerLooktAtForDialogue
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InterruptPlayerLooktAtForDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InterruptPlayerLooktAtForDialogue");

	APC_Player_C_InterruptPlayerLooktAtForDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.UpdateControlsSensitivity
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::UpdateControlsSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateControlsSensitivity");

	APC_Player_C_UpdateControlsSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InterruptPlayerMove
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InterruptPlayerMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InterruptPlayerMove");

	APC_Player_C_InterruptPlayerMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.PlayerLookAt Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  targetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetPitch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::PlayerLookAt_Event(class AActor* targetActor, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool ResetPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayerLookAt Event");

	APC_Player_C_PlayerLookAt_Event_Params params;
	params.targetActor = targetActor;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;
	params.ResetPitch = ResetPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::PlayerLookAt_Interrupt_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event");

	APC_Player_C_PlayerLookAt_Interrupt_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ChangeSteeringType_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ChangeSteeringType_Event(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeSteeringType_Event");

	APC_Player_C_ChangeSteeringType_Event_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CreateLogos
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::CreateLogos()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateLogos");

	APC_Player_C_CreateLogos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.RemoveLogos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*            MediaPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::RemoveLogos(float Delay, class UMediaPlayer* MediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveLogos");

	APC_Player_C_RemoveLogos_Params params;
	params.Delay = Delay;
	params.MediaPlayer = MediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CheatMenu
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::CheatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheatMenu");

	APC_Player_C_CheatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Down_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::Down_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Down_K2Node_InputAxisEvent_4");

	APC_Player_C_Down_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputHoldAction_UI_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop");

	APC_Player_C_InputHoldAction_UI_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceiveTick");

	APC_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::InputHoldAction_UI_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm");

	APC_Player_C_InputHoldAction_UI_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.StartAutorun
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::StartAutorun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartAutorun");

	APC_Player_C_StartAutorun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Autorun
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::Autorun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Autorun");

	APC_Player_C_Autorun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.StopAutorun
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::StopAutorun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StopAutorun");

	APC_Player_C_StopAutorun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.CreateCutscene
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::CreateCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateCutscene");

	APC_Player_C_CreateCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.RemoveCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*            MediaPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::RemoveCutscene(float Delay, class UMediaPlayer* MediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveCutscene");

	APC_Player_C_RemoveCutscene_Params params;
	params.Delay = Delay;
	params.MediaPlayer = MediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Event SetManualCameraFade PC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFadeAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInFadeAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::Event_SetManualCameraFade_PC(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event SetManualCameraFade PC");

	APC_Player_C_Event_SetManualCameraFade_PC_Params params;
	params.InFadeAmount = InFadeAmount;
	params.Color = Color;
	params.bInFadeAudio = bInFadeAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Event StopCameraFade PC
// (BlueprintCallable, BlueprintEvent)
void APC_Player_C::Event_StopCameraFade_PC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event StopCameraFade PC");

	APC_Player_C_Event_StopCameraFade_PC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.Event StartCameraFade PC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FromAlpha                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShouldFadeAudio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bHoldWhenFinished              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReverseOnFinish                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::Event_StartCameraFade_PC(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event StartCameraFade PC");

	APC_Player_C_Event_StartCameraFade_PC_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.ReverseOnFinish = ReverseOnFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ExecuteUbergraph_PC_Player
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Player_C::ExecuteUbergraph_PC_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ExecuteUbergraph_PC_Player");

	APC_Player_C_ExecuteUbergraph_PC_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.OnInputKeybindChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APC_Player_C::OnInputKeybindChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnInputKeybindChange__DelegateSignature");

	APC_Player_C_OnInputKeybindChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PC_Player.PC_Player_C.ChangeSteeringType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Player_C::ChangeSteeringType__DelegateSignature(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeSteeringType__DelegateSignature");

	APC_Player_C_ChangeSteeringType__DelegateSignature_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void APC_Player_C::AfterRead()
{
	APlayerController::AfterRead();

	READ_PTR_FULL(riderController, URiderControllerComponent);
	READ_PTR_FULL(UI_PlayerHUDReference, UUI_HUD_C);
	READ_PTR_FULL(GameInstanceReference, UGI_MedievalDynasty_C);
	READ_PTR_FULL(SpectatorPawnReference, AP_Spectator_C);
	READ_PTR_FULL(PlayerCharacterReference, ABP_PlayerCharacter_C);
	READ_PTR_FULL(UI_EventReference, UUI_MasterEvent_C);
	READ_PTR_FULL(UI_ChallangeReference, UUI_MasterChallange_C);
	READ_PTR_FULL(UI_SeasonSumUpReference, UUI_SeasonSumUp_C);
	READ_PTR_FULL(UI_TradingMenuReference, UUI_Trading_C);
	READ_PTR_FULL(LookAtActor, AActor);
	READ_PTR_FULL(UI_DeathMenuReference, UUI_DeathMenu_C);
	READ_PTR_FULL(UI_MainMenuReference, UUI_MainMenu_C);
	READ_PTR_FULL(UI_IntroScreenReference, UUI_IntroScreen_C);
	READ_PTR_FULL(UI_DialogueReference, UUI_Dialogue_C);
	READ_PTR_FULL(UI_LogosScreenReference, UUI_LogosScreen_C);
	READ_PTR_FULL(deathTransitionMenu, UUI_PlayerDeathChildTransition_C);
	READ_PTR_FULL(UI_CutsceneReference, UUI_Cutscene_C);
}

void APC_Player_C::BeforeDelete()
{
	APlayerController::BeforeDelete();

	DELE_PTR_FULL(riderController);
	DELE_PTR_FULL(UI_PlayerHUDReference);
	DELE_PTR_FULL(GameInstanceReference);
	DELE_PTR_FULL(SpectatorPawnReference);
	DELE_PTR_FULL(PlayerCharacterReference);
	DELE_PTR_FULL(UI_EventReference);
	DELE_PTR_FULL(UI_ChallangeReference);
	DELE_PTR_FULL(UI_SeasonSumUpReference);
	DELE_PTR_FULL(UI_TradingMenuReference);
	DELE_PTR_FULL(LookAtActor);
	DELE_PTR_FULL(UI_DeathMenuReference);
	DELE_PTR_FULL(UI_MainMenuReference);
	DELE_PTR_FULL(UI_IntroScreenReference);
	DELE_PTR_FULL(UI_DialogueReference);
	DELE_PTR_FULL(UI_LogosScreenReference);
	DELE_PTR_FULL(deathTransitionMenu);
	DELE_PTR_FULL(UI_CutsceneReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
