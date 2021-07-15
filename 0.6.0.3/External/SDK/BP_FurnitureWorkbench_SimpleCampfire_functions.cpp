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

// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsLinkedFurnitureStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_FurnitureWorkbench_SimpleCampfire_C::IsLinkedFurnitureStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsLinkedFurnitureStarted");

	ABP_FurnitureWorkbench_SimpleCampfire_C_IsLinkedFurnitureStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolNeeded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCampfire_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolNeeded");

	ABP_FurnitureWorkbench_SimpleCampfire_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LoadCampfireData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Campfires      FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::LoadCampfireData(const struct FST_SAVE_Campfires& FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LoadCampfireData");

	ABP_FurnitureWorkbench_SimpleCampfire_C_LoadCampfireData_Params params;
	params.FurnitureData = FurnitureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.OnOwnershipSwap");

	ABP_FurnitureWorkbench_SimpleCampfire_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetCampfireDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Campfires      FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::GetCampfireDataToSave(struct FST_SAVE_Campfires* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetCampfireDataToSave");

	ABP_FurnitureWorkbench_SimpleCampfire_C_GetCampfireDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetHeating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGenerateOverlapEvents         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InSphereRadius                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::SetHeating(bool bGenerateOverlapEvents, float InSphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetHeating");

	ABP_FurnitureWorkbench_SimpleCampfire_C_SetHeating_Params params;
	params.bGenerateOverlapEvents = bGenerateOverlapEvents;
	params.InSphereRadius = InSphereRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractTool_UI");

	ABP_FurnitureWorkbench_SimpleCampfire_C_GetInteractTool_UI_Params params;
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


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCampfire_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsToolInteractable_UI");

	ABP_FurnitureWorkbench_SimpleCampfire_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCampfire_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckObstruction");

	ABP_FurnitureWorkbench_SimpleCampfire_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LightFlashing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::LightFlashing(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.LightFlashing");

	ABP_FurnitureWorkbench_SimpleCampfire_C_LightFlashing_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_FurnitureWorkbench_SimpleCampfire_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.GetInteractAction");

	ABP_FurnitureWorkbench_SimpleCampfire_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsInteractable
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
void ABP_FurnitureWorkbench_SimpleCampfire_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.IsInteractable");

	ABP_FurnitureWorkbench_SimpleCampfire_C_IsInteractable_Params params;
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


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.DisableGhost");

	ABP_FurnitureWorkbench_SimpleCampfire_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.EnableGhost");

	ABP_FurnitureWorkbench_SimpleCampfire_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UserConstructionScript");

	ABP_FurnitureWorkbench_SimpleCampfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCampfire_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Interact");

	ABP_FurnitureWorkbench_SimpleCampfire_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveTick");

	ABP_FurnitureWorkbench_SimpleCampfire_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PerformActorInteraction");

	ABP_FurnitureWorkbench_SimpleCampfire_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PutOutFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::PutOutFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.PutOutFire");

	ABP_FurnitureWorkbench_SimpleCampfire_C_PutOutFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InteractStart");

	ABP_FurnitureWorkbench_SimpleCampfire_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_SimpleCampfire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_FurnitureWorkbench_SimpleCampfire_C::BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_FurnitureWorkbench_SimpleCampfire_C_BndEvt__HeatVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_FurnitureWorkbench_SimpleCampfire_C_BndEvt__HeatVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartFire");

	ABP_FurnitureWorkbench_SimpleCampfire_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UpdateOnTimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::UpdateOnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.UpdateOnTimeOfDayChanged");

	ABP_FurnitureWorkbench_SimpleCampfire_C_UpdateOnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitByBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::InitByBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitByBuilding");

	ABP_FurnitureWorkbench_SimpleCampfire_C_InitByBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::CheckFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.CheckFire");

	ABP_FurnitureWorkbench_SimpleCampfire_C_CheckFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteFinishLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SimpleCampfire_C::ExecuteFinishLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteFinishLogic");

	ABP_FurnitureWorkbench_SimpleCampfire_C_ExecuteFinishLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Init
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.Init");

	ABP_FurnitureWorkbench_SimpleCampfire_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartrFireAfterLoad
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::StartrFireAfterLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.StartrFireAfterLoad");

	ABP_FurnitureWorkbench_SimpleCampfire_C_StartrFireAfterLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EComponentMobility> Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.SetMeshMobility");

	ABP_FurnitureWorkbench_SimpleCampfire_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitLight
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_SimpleCampfire_C::InitLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.InitLight");

	ABP_FurnitureWorkbench_SimpleCampfire_C_InitLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SimpleCampfire_C::ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SimpleCampfire.BP_FurnitureWorkbench_SimpleCampfire_C.ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire");

	ABP_FurnitureWorkbench_SimpleCampfire_C_ExecuteUbergraph_BP_FurnitureWorkbench_SimpleCampfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_SimpleCampfire_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(NavObstruction, USphereComponent);
	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
	READ_PTR_FULL(HeatVolume, USphereComponent);
	READ_PTR_FULL(Audio, UAudioComponent);
	READ_PTR_FULL(P_Fire, UParticleSystemComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(CharacterInHeatVolume, ABP_PlayerCharacter_C);
	READ_PTR_FULL(WoodMaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(PointLightComponent, UPointLightComponent);
}

void ABP_FurnitureWorkbench_SimpleCampfire_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(NavObstruction);
	DELE_PTR_FULL(ObstructionMesh);
	DELE_PTR_FULL(HeatVolume);
	DELE_PTR_FULL(Audio);
	DELE_PTR_FULL(P_Fire);
	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(CharacterInHeatVolume);
	DELE_PTR_FULL(WoodMaterialInstance);
	DELE_PTR_FULL(PointLightComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
