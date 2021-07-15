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

// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMovementVars
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::UpdateMovementVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMovementVars");

	ABP_Donkey_Male_C_UpdateMovementVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToDismount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Donkey_Male_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToDismount");

	ABP_Donkey_Male_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToMount
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  mountOrRider                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  linkedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMountActionResponse    Response                       (Parm, OutParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Donkey_Male_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.PrepareToMount");

	ABP_Donkey_Male_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Response != nullptr)
		*Response = params.Response;


	return params.ReturnValue;
}


// Function BP_Donkey_Male.BP_Donkey_Male_C.HideReins
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::HideReins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.HideReins");

	ABP_Donkey_Male_C_HideReins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateTalentsForHorse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::UpdateTalentsForHorse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateTalentsForHorse");

	ABP_Donkey_Male_C_UpdateTalentsForHorse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateEssentialVariables
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::CalculateEssentialVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateEssentialVariables");

	ABP_Donkey_Male_C_CalculateEssentialVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateAnimalMovementSettings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::UpdateAnimalMovementSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateAnimalMovementSettings");

	ABP_Donkey_Male_C_UpdateAnimalMovementSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.IsToolNeeded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Donkey_Male_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.IsToolNeeded");

	ABP_Donkey_Male_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateMaxWalkSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          WalkSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.CalculateMaxWalkSpeed");

	ABP_Donkey_Male_C_CalculateMaxWalkSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   InventoryComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::GetInventoryComponent(class UInventoryComponent_C** InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.GetInventoryComponent");

	ABP_Donkey_Male_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_Donkey_Male_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.GetInteractAction");

	ABP_Donkey_Male_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.IsInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.IsInteractable");

	ABP_Donkey_Male_C_IsInteractable_Params params;
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


// Function BP_Donkey_Male.BP_Donkey_Male_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.UserConstructionScript");

	ABP_Donkey_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Donkey_Male_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.Interact");

	ABP_Donkey_Male_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Donkey_Male_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveBeginPlay");

	ABP_Donkey_Male_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMountEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unequip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemOutfit          ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Donkey_Male_C::UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.UpdateMountEquipment");

	ABP_Donkey_Male_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.EventDead");

	ABP_Donkey_Male_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveTick");

	ABP_Donkey_Male_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.EnableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::EnableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.EnableNPC");

	ABP_Donkey_Male_C_EnableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.DisableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::DisableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.DisableNPC");

	ABP_Donkey_Male_C_DisableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.CloseOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::CloseOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.CloseOptimization");

	ABP_Donkey_Male_C_CloseOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.MediumOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::MediumOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.MediumOptimization");

	ABP_Donkey_Male_C_MediumOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.NoneOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::NoneOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.NoneOptimization");

	ABP_Donkey_Male_C_NoneOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.FarOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_Donkey_Male_C::FarOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.FarOptimization");

	ABP_Donkey_Male_C_FarOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.ReceiveEndPlay");

	ABP_Donkey_Male_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Donkey_Male.BP_Donkey_Male_C.ExecuteUbergraph_BP_Donkey_Male
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Donkey_Male_C::ExecuteUbergraph_BP_Donkey_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey_Male.BP_Donkey_Male_C.ExecuteUbergraph_BP_Donkey_Male");

	ABP_Donkey_Male_C_ExecuteUbergraph_BP_Donkey_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Donkey_Male_C::AfterRead()
{
	ABP_HusbandryAI_C::AfterRead();

	READ_PTR_FULL(StaticMesh_R, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh_L, UStaticMeshComponent);
	READ_PTR_FULL(PhysicsConstraint_R, UPhysicsConstraintComponent);
	READ_PTR_FULL(PhysicsConstraint_L, UPhysicsConstraintComponent);
	READ_PTR_FULL(CapsuleCollider_Head, UCapsuleComponent);
	READ_PTR_FULL(CapsuleCollider_Body, UCapsuleComponent);
	READ_PTR_FULL(SaddleBag, USkeletalMeshComponent);
	READ_PTR_FULL(Saddle, USkeletalMeshComponent);
	READ_PTR_FULL(InventoryComponent, UInventoryComponent_C);
	READ_PTR_FULL(HorseDynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_Donkey_Male_C::BeforeDelete()
{
	ABP_HusbandryAI_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh_R);
	DELE_PTR_FULL(StaticMesh_L);
	DELE_PTR_FULL(PhysicsConstraint_R);
	DELE_PTR_FULL(PhysicsConstraint_L);
	DELE_PTR_FULL(CapsuleCollider_Head);
	DELE_PTR_FULL(CapsuleCollider_Body);
	DELE_PTR_FULL(SaddleBag);
	DELE_PTR_FULL(Saddle);
	DELE_PTR_FULL(InventoryComponent);
	DELE_PTR_FULL(HorseDynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
