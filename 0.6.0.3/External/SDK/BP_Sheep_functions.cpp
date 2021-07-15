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

// Function BP_Sheep.BP_Sheep_C.UpdateFur
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Sheep_C::UpdateFur()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.UpdateFur");

	ABP_Sheep_C_UpdateFur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.AddItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sheep_C::AddItems(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.AddItems");

	ABP_Sheep_C_AddItems_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.UpdateCapacity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Sheep_C::UpdateCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.UpdateCapacity");

	ABP_Sheep_C_UpdateCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.SetHusbandryDataFromSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_HusbandryAnimals HusbandryData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Sheep_C::SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.SetHusbandryDataFromSave");

	ABP_Sheep_C_SetHusbandryDataFromSave_Params params;
	params.HusbandryData = HusbandryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_Sheep_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.GetInteractAction");

	ABP_Sheep_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_Sheep.BP_Sheep_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sheep_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.GetTaskFromActor");

	ABP_Sheep_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_Sheep.BP_Sheep_C.IsInteractable
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
void ABP_Sheep_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.IsInteractable");

	ABP_Sheep_C_IsInteractable_Params params;
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


// Function BP_Sheep.BP_Sheep_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Sheep_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.ReceiveBeginPlay");

	ABP_Sheep_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Sheep_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.EventDead");

	ABP_Sheep_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Sheep_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.Interact");

	ABP_Sheep_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Sheep_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.InteractInput");

	ABP_Sheep_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sheep_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.InteractCancel");

	ABP_Sheep_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.OnMoveFinish
// (BlueprintCallable, BlueprintEvent)
void ABP_Sheep_C::OnMoveFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.OnMoveFinish");

	ABP_Sheep_C_OnMoveFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sheep_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.SetTaskInActor");

	ABP_Sheep_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Sheep_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.ChangeTaskIsOccupied");

	ABP_Sheep_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sheep.BP_Sheep_C.ExecuteUbergraph_BP_Sheep
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sheep_C::ExecuteUbergraph_BP_Sheep(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sheep.BP_Sheep_C.ExecuteUbergraph_BP_Sheep");

	ABP_Sheep_C_ExecuteUbergraph_BP_Sheep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Sheep_C::AfterRead()
{
	ABP_HusbandryAI_C::AfterRead();

	READ_PTR_FULL(ShearingPosition1, UArrowComponent);
	READ_PTR_FULL(ShearingPosition, UArrowComponent);
	READ_PTR_FULL(PhysicsConstraint, UPhysicsConstraintComponent);
	READ_PTR_FULL(PelvisCapsule, UCapsuleComponent);
	READ_PTR_FULL(CapsuleCollider_Body, UCapsuleComponent);
	READ_PTR_FULL(FurDynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(FurLODDynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_Sheep_C::BeforeDelete()
{
	ABP_HusbandryAI_C::BeforeDelete();

	DELE_PTR_FULL(ShearingPosition1);
	DELE_PTR_FULL(ShearingPosition);
	DELE_PTR_FULL(PhysicsConstraint);
	DELE_PTR_FULL(PelvisCapsule);
	DELE_PTR_FULL(CapsuleCollider_Body);
	DELE_PTR_FULL(FurDynamicMaterial);
	DELE_PTR_FULL(FurLODDynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
