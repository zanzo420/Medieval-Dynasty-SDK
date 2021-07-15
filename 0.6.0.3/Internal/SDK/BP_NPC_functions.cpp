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

// Function BP_NPC.BP_NPC_C.AI_GetGoHome_Activity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GoHome_Activity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetGoHome_Activity(bool* GoHome_Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetGoHome_Activity");

	ABP_NPC_C_AI_GetGoHome_Activity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GoHome_Activity != nullptr)
		*GoHome_Activity = params.GoHome_Activity;

}


// Function BP_NPC.BP_NPC_C.AI_FindWorkSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WorkSlot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindWorkSlot");

	ABP_NPC_C_AI_FindWorkSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkSlot != nullptr)
		*WorkSlot = params.WorkSlot;

}


// Function BP_NPC.BP_NPC_C.AI_GetCanAffectNavigation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAffectNavigation            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetCanAffectNavigation(bool* CanAffectNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCanAffectNavigation");

	ABP_NPC_C_AI_GetCanAffectNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanAffectNavigation != nullptr)
		*CanAffectNavigation = params.CanAffectNavigation;

}


// Function BP_NPC.BP_NPC_C.AI_GetIsLookAtTargetRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLookAtTargetRotation         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsLookAtTargetRotation");

	ABP_NPC_C_AI_GetIsLookAtTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLookAtTargetRotation != nullptr)
		*IsLookAtTargetRotation = params.IsLookAtTargetRotation;

}


// Function BP_NPC.BP_NPC_C.AI_CheckIsChunkInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_CheckIsChunkInteractable(bool* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckIsChunkInteractable");

	ABP_NPC_C_AI_CheckIsChunkInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;

}


// Function BP_NPC.BP_NPC_C.AI_SnapToFurnitureSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToFinishSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SnapToFurnitureSlot");

	ABP_NPC_C_AI_SnapToFurnitureSlot_Params params;
	params.ToFinishSlot = ToFinishSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_NPC.BP_NPC_C.AI_SpawnBow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SpawnBow(bool* IsBow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnBow");

	ABP_NPC_C_AI_SpawnBow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBow != nullptr)
		*IsBow = params.IsBow;

}


// Function BP_NPC.BP_NPC_C.AI_FindAnimalsBreederPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindAnimalsBreederPoint");

	ABP_NPC_C_AI_FindAnimalsBreederPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Point != nullptr)
		*Point = params.Point;

}


// Function BP_NPC.BP_NPC_C.AI_GetNeedItemName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetNeedItemName(struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNeedItemName");

	ABP_NPC_C_AI_GetNeedItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function BP_NPC.BP_NPC_C.AI_GetNPC_Status
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedTool                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedTool, struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNPC_Status");

	ABP_NPC_C_AI_GetNPC_Status_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC_Status != nullptr)
		*NPC_Status = params.NPC_Status;
	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function BP_NPC.BP_NPC_C.AI_CheckSeedsInChest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RemoveItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_BagMode_E_BagMode> BagSeeds                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsBag                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode_E_BagMode> BagSeeds, bool* IsBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckSeedsInChest");

	ABP_NPC_C_AI_CheckSeedsInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.BagSeeds = BagSeeds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBag != nullptr)
		*IsBag = params.IsBag;

}


// Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Ownership
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> OutsideNPC_Ownership           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership_E_Ownership>* OutsideNPC_Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Ownership");

	ABP_NPC_C_AI_GetOutsideNPC_Ownership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutsideNPC_Ownership != nullptr)
		*OutsideNPC_Ownership = params.OutsideNPC_Ownership;

}


// Function BP_NPC.BP_NPC_C.AI_GetOptimizationStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OptimizationStage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetOptimizationStage(int* OptimizationStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOptimizationStage");

	ABP_NPC_C_AI_GetOptimizationStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptimizationStage != nullptr)
		*OptimizationStage = params.OptimizationStage;

}


// Function BP_NPC.BP_NPC_C.AI_FindFishingPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindFishingPoint(struct FVector* Destination, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindFishingPoint");

	ABP_NPC_C_AI_FindFishingPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;

}


// Function BP_NPC.BP_NPC_C.AI_GetNPC_MustBeDeactivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NPC_MustBeDeactivated          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNPC_MustBeDeactivated");

	ABP_NPC_C_AI_GetNPC_MustBeDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC_MustBeDeactivated != nullptr)
		*NPC_MustBeDeactivated = params.NPC_MustBeDeactivated;

}


// Function BP_NPC.BP_NPC_C.AI_GetWorkHours
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Hour                StartWorkingTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Hour                StopWorkingTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWorkHours");

	ABP_NPC_C_AI_GetWorkHours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartWorkingTime != nullptr)
		*StartWorkingTime = params.StartWorkingTime;
	if (StopWorkingTime != nullptr)
		*StopWorkingTime = params.StopWorkingTime;

}


// Function BP_NPC.BP_NPC_C.AI_GetIsGetOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetIsGetOut(bool* GetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsGetOut");

	ABP_NPC_C_AI_GetIsGetOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetOut != nullptr)
		*GetOut = params.GetOut;

}


// Function BP_NPC.BP_NPC_C.AI_GetWorkMonatge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            WorkMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetWorkMonatge(class UAnimMontage** WorkMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetWorkMonatge");

	ABP_NPC_C_AI_GetWorkMonatge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkMontage != nullptr)
		*WorkMontage = params.WorkMontage;

}


// Function BP_NPC.BP_NPC_C.AI_GetDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetDead");

	ABP_NPC_C_AI_GetDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;

}


// Function BP_NPC.BP_NPC_C.AI_GetOptimizationBlackboards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_NPC_Blackboards OptimizationBlackboards        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOptimizationBlackboards");

	ABP_NPC_C_AI_GetOptimizationBlackboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptimizationBlackboards != nullptr)
		*OptimizationBlackboards = params.OptimizationBlackboards;

}


// Function BP_NPC.BP_NPC_C.AI_GetCollisionResponse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> Resposne                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse>* Resposne)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCollisionResponse");

	ABP_NPC_C_AI_GetCollisionResponse_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resposne != nullptr)
		*Resposne = params.Resposne;

}


// Function BP_NPC.BP_NPC_C.AI_GetIsChangedTimeOfDay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIsChangedTimeOfDay");

	ABP_NPC_C_AI_GetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;

}


// Function BP_NPC.BP_NPC_C.AI_GetInteractionSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InteractionSlotIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetInteractionSlotIndex(int* InteractionSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetInteractionSlotIndex");

	ABP_NPC_C_AI_GetInteractionSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractionSlotIndex != nullptr)
		*InteractionSlotIndex = params.InteractionSlotIndex;

}


// Function BP_NPC.BP_NPC_C.AI_GetAnimationState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sleeping                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Sitting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Working                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetAnimationState");

	ABP_NPC_C_AI_GetAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sleeping != nullptr)
		*Sleeping = params.Sleeping;
	if (Sitting != nullptr)
		*Sitting = params.Sitting;
	if (Working != nullptr)
		*Working = params.Working;

}


// Function BP_NPC.BP_NPC_C.AI_GetQuestBlocking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestBlocking                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetQuestBlocking(bool* QuestBlocking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetQuestBlocking");

	ABP_NPC_C_AI_GetQuestBlocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestBlocking != nullptr)
		*QuestBlocking = params.QuestBlocking;

}


// Function BP_NPC.BP_NPC_C.AI_FindRandomFurniture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFurniture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindRandomFurniture");

	ABP_NPC_C_AI_FindRandomFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;

}


// Function BP_NPC.BP_NPC_C.AI_FindTavern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindActivityFurniture          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CanSit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindTavern");

	ABP_NPC_C_AI_FindTavern_Params params;
	params.FindActivityFurniture = FindActivityFurniture;
	params.Occupy = Occupy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
	if (CanSit != nullptr)
		*CanSit = params.CanSit;

}


// Function BP_NPC.BP_NPC_C.AI_GetCapsuleHalfHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CapsuleHalfHeight              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetCapsuleHalfHeight");

	ABP_NPC_C_AI_GetCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;

}


// Function BP_NPC.BP_NPC_C.AI_FindBuildingWorkbenches
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsWorkbenches                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindBuildingWorkbenches");

	ABP_NPC_C_AI_FindBuildingWorkbenches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsWorkbenches != nullptr)
		*IsWorkbenches = params.IsWorkbenches;

}


// Function BP_NPC.BP_NPC_C.AI_GetNightPatrol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NightPatrol                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_GetNightPatrol(bool* NightPatrol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNightPatrol");

	ABP_NPC_C_AI_GetNightPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NightPatrol != nullptr)
		*NightPatrol = params.NightPatrol;

}


// Function BP_NPC.BP_NPC_C.AI_FindNPCtoTalk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 lookAt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsNPC                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindNPCtoTalk");

	ABP_NPC_C_AI_FindNPCtoTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;

}


// Function BP_NPC.BP_NPC_C.AI_GetBedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BedIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            BedSlotIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetBedIndex(int* BedIndex, int* BedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetBedIndex");

	ABP_NPC_C_AI_GetBedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BedIndex != nullptr)
		*BedIndex = params.BedIndex;
	if (BedSlotIndex != nullptr)
		*BedSlotIndex = params.BedSlotIndex;

}


// Function BP_NPC.BP_NPC_C.AI_GetOwnership
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetOwnership(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOwnership");

	ABP_NPC_C_AI_GetOwnership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_NPC.BP_NPC_C.AI_CheckBuildingIsConstructed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsConstructed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_CheckBuildingIsConstructed(bool* IsConstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckBuildingIsConstructed");

	ABP_NPC_C_AI_CheckBuildingIsConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;

}


// Function BP_NPC.BP_NPC_C.AI_GetIDFromNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NPC_ID                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetIDFromNPC(struct FString* NPC_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetIDFromNPC");

	ABP_NPC_C_AI_GetIDFromNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC_ID != nullptr)
		*NPC_ID = params.NPC_ID;

}


// Function BP_NPC.BP_NPC_C.AI_GetStats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetStats");

	ABP_NPC_C_AI_GetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;

}


// Function BP_NPC.BP_NPC_C.AI_CheckTargetFoliage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargetFoliage                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_CheckTargetFoliage(bool* IsTargetFoliage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_CheckTargetFoliage");

	ABP_NPC_C_AI_CheckTargetFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTargetFoliage != nullptr)
		*IsTargetFoliage = params.IsTargetFoliage;

}


// Function BP_NPC.BP_NPC_C.AI_FindClosestFurniture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFurniture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindClosestFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindClosestFurniture");

	ABP_NPC_C_AI_FindClosestFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;

}


// Function BP_NPC.BP_NPC_C.AI_FindWorkPlace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetTask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WorkPlace                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          WorkRadius                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TaskList            TaskList                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindWorkPlace(bool GetTask, struct FVector* Destination, bool* WorkPlace, float* WorkRadius, struct FST_TaskList* TaskList, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindWorkPlace");

	ABP_NPC_C_AI_FindWorkPlace_Params params;
	params.GetTask = GetTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
	if (WorkRadius != nullptr)
		*WorkRadius = params.WorkRadius;
	if (TaskList != nullptr)
		*TaskList = params.TaskList;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;

}


// Function BP_NPC.BP_NPC_C.AI_GetNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetNPC(class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetNPC");

	ABP_NPC_C_AI_GetNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function BP_NPC.BP_NPC_C.AI_FindAnimal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBeDead                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Animal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindAnimal(bool ShouldBeDead, struct FVector* Destination, bool* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindAnimal");

	ABP_NPC_C_AI_FindAnimal_Params params;
	params.ShouldBeDead = ShouldBeDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Animal != nullptr)
		*Animal = params.Animal;

}


// Function BP_NPC.BP_NPC_C.AI_FindHouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindBed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsBed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindHouse");

	ABP_NPC_C_AI_FindHouse_Params params;
	params.FindBed = FindBed;
	params.Occupy = Occupy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
	if (IsBed != nullptr)
		*IsBed = params.IsBed;

}


// Function BP_NPC.BP_NPC_C.AI_GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetMesh");

	ABP_NPC_C_AI_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_NPC.BP_NPC_C.AI_IncreaseNavInvoker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToBig                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_IncreaseNavInvoker(bool* ToBig)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_IncreaseNavInvoker");

	ABP_NPC_C_AI_IncreaseNavInvoker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToBig != nullptr)
		*ToBig = params.ToBig;

}


// Function BP_NPC.BP_NPC_C.AI_FindField
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Field                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_FieldTasksLists     TaskList                       (Parm, OutParm, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindField");

	ABP_NPC_C_AI_FindField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Field != nullptr)
		*Field = params.Field;
	if (TaskList != nullptr)
		*TaskList = params.TaskList;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;

}


// Function BP_NPC.BP_NPC_C.AI_GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Current_Location               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetDistanceAndDirection");

	ABP_NPC_C_AI_GetDistanceAndDirection_Params params;
	params.Target_Location = Target_Location;
	params.Current_Location = Current_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function BP_NPC.BP_NPC_C.AI_GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceToLastPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OutsideLastPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_GetTargetLocation(const struct FVector& Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetTargetLocation");

	ABP_NPC_C_AI_GetTargetLocation_Params params;
	params.Target = Target;
	params.MaxDistance = MaxDistance;
	params.MaxDirection = MaxDirection;
	params.DistanceToLastPoint = DistanceToLastPoint;
	params.OutsideLastPoint = OutsideLastPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_NPC.BP_NPC_C.AI_FindFoliage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> TargetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Foliage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_FindFoliage(TEnumAsByte<E_Resources_E_Resources> TargetType, struct FVector* Destination, bool* Foliage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_FindFoliage");

	ABP_NPC_C_AI_FindFoliage_Params params;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Foliage != nullptr)
		*Foliage = params.Foliage;

}


// Function BP_NPC.BP_NPC_C.SetMinDeadAge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::SetMinDeadAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMinDeadAge");

	ABP_NPC_C_SetMinDeadAge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.FixPlayersWifeAffection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPC_C::FixPlayersWifeAffection(const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixPlayersWifeAffection");

	ABP_NPC_C_FixPlayersWifeAffection_Params params;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetToolHoldableClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedTool                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FoundTool                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::GetToolHoldableClass(bool* NeedTool, bool* FoundTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetToolHoldableClass");

	ABP_NPC_C_GetToolHoldableClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (FoundTool != nullptr)
		*FoundTool = params.FoundTool;

}


// Function BP_NPC.BP_NPC_C.SetGiftVendorItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_VendorCategory      VendorCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_NPC_C::SetGiftVendorItems(const struct FST_VendorCategory& VendorCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetGiftVendorItems");

	ABP_NPC_C_SetGiftVendorItems_Params params;
	params.VendorCategory = VendorCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetCustomNPC_DTHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::SetCustomNPC_DTHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetCustomNPC_DTHandler");

	ABP_NPC_C_SetCustomNPC_DTHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetDirection(float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetDirection");

	ABP_NPC_C_GetDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function BP_NPC.BP_NPC_C.SelectCaster
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMesh* ABP_NPC_C::SelectCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SelectCaster");

	ABP_NPC_C_SelectCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_NPC.BP_NPC_C.ToolInteractFoliage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::ToolInteractFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToolInteractFoliage");

	ABP_NPC_C_ToolInteractFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.FixCustomNPCsProfessions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::FixCustomNPCsProfessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FixCustomNPCsProfessions");

	ABP_NPC_C_FixCustomNPCsProfessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetProfessionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Profession          ProfessionData                 (Parm, OutParm, HasGetValueTypeHash)
void ABP_NPC_C::GetProfessionData(struct FST_Profession* ProfessionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetProfessionData");

	ABP_NPC_C_GetProfessionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;

}


// Function BP_NPC.BP_NPC_C.CheckUnderTheMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::CheckUnderTheMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckUnderTheMap");

	ABP_NPC_C_CheckUnderTheMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetMeshesFromPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NewClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UpdateOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::SetMeshesFromPreset(TEnumAsByte<E_Profession_E_Profession> Profession, class UClass* NewClass, bool UpdateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMeshesFromPreset");

	ABP_NPC_C_SetMeshesFromPreset_Params params;
	params.Profession = Profession;
	params.NewClass = NewClass;
	params.UpdateOnly = UpdateOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnOptimizationDeactive
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnOptimizationDeactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnOptimizationDeactive");

	ABP_NPC_C_OnOptimizationDeactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnOptimizationActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnOptimizationActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnOptimizationActive");

	ABP_NPC_C_OnOptimizationActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnNPCDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnNPCDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNPCDead");

	ABP_NPC_C_OnNPCDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.UnbindFurnitureEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UnbindFurnitureEvents");

	ABP_NPC_C_UnbindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.BindFurnitureEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BindFurnitureEvents");

	ABP_NPC_C_BindFurnitureEvents_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnPlayerOccupy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnPlayerOccupy");

	ABP_NPC_C_OnPlayerOccupy_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnDayChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnDayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDayChanged");

	ABP_NPC_C_OnDayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetNPCBehaviorFromSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::SetNPCBehaviorFromSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetNPCBehaviorFromSave");

	ABP_NPC_C_SetNPCBehaviorFromSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetTransformByRoot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetTransformByRoot(const struct FTransform& Transform, const struct FVector& WorldLocation, const struct FTransform& ActorTransform, struct FVector* Location, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetTransformByRoot");

	ABP_NPC_C_GetTransformByRoot_Params params;
	params.Transform = Transform;
	params.WorldLocation = WorldLocation;
	params.ActorTransform = ActorTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function BP_NPC.BP_NPC_C.FindTavern
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindActivityFurniture          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CanSit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindTavern");

	ABP_NPC_C_FindTavern_Params params;
	params.FindActivityFurniture = FindActivityFurniture;
	params.Occupy = Occupy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
	if (CanSit != nullptr)
		*CanSit = params.CanSit;

}


// Function BP_NPC.BP_NPC_C.EndTalking
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::EndTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EndTalking");

	ABP_NPC_C_EndTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetSceneName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::SetSceneName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetSceneName");

	ABP_NPC_C_SetSceneName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.RespawnInfant
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::RespawnInfant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RespawnInfant");

	ABP_NPC_C_RespawnInfant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetRelationsReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 MotherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 PartnerID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FString>         SiblingsID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FString>         ChildrenID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 HouseID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 WorkPlaceID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Liking                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Affection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPregnant                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            TimeToBirth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetRelationsReference(const struct FString& FatherID, const struct FString& MotherID, const struct FString& PartnerID, TArray<struct FString>* SiblingsID, TArray<struct FString>* ChildrenID, const struct FString& HouseID, const struct FString& WorkPlaceID, int Liking, int Affection, bool IsPregnant, int TimeToBirth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetRelationsReference");

	ABP_NPC_C_SetRelationsReference_Params params;
	params.FatherID = FatherID;
	params.MotherID = MotherID;
	params.PartnerID = PartnerID;
	params.HouseID = HouseID;
	params.WorkPlaceID = WorkPlaceID;
	params.Liking = Liking;
	params.Affection = Affection;
	params.IsPregnant = IsPregnant;
	params.TimeToBirth = TimeToBirth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SiblingsID != nullptr)
		*SiblingsID = params.SiblingsID;
	if (ChildrenID != nullptr)
		*ChildrenID = params.ChildrenID;

}


// Function BP_NPC.BP_NPC_C.Destroy NPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::Destroy_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Destroy NPC");

	ABP_NPC_C_Destroy_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetNPCDataFromSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_NPC            NPCData                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           ResetEQ                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPC_C::SetNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetNPCDataFromSave");

	ABP_NPC_C_SetNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetNPCDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_NPC            NPCData                        (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_NPC_C::GetNPCDataToSave(struct FST_SAVE_NPC* NPCData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetNPCDataToSave");

	ABP_NPC_C_GetNPCDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCData != nullptr)
		*NPCData = params.NPCData;

}


// Function BP_NPC.BP_NPC_C.Set New Collision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCollision                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::Set_New_Collision(bool IsCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set New Collision");

	ABP_NPC_C_Set_New_Collision_Params params;
	params.IsCollision = IsCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnDialogueEnded
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnDialogueEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDialogueEnded");

	ABP_NPC_C_OnDialogueEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnDialogueStarted
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnDialogueStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnDialogueStarted");

	ABP_NPC_C_OnDialogueStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnCharacterTypeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnCharacterTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCharacterTypeChanged");

	ABP_NPC_C_OnCharacterTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnSeasonChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnSeasonChanged");

	ABP_NPC_C_OnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.FindTool
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemDetails         ItemDetails                    (Parm, OutParm, HasGetValueTypeHash)
void ABP_NPC_C::FindTool(TEnumAsByte<E_Tools_E_Tools> ToolType, bool* Found_, struct FST_ItemDetails* ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindTool");

	ABP_NPC_C_FindTool_Params params;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (ItemDetails != nullptr)
		*ItemDetails = params.ItemDetails;

}


// Function BP_NPC.BP_NPC_C.GetProfession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetProfession");

	ABP_NPC_C_GetProfession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profession != nullptr)
		*Profession = params.Profession;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ResourceName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_ResourceName(struct FName* ResourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceName");

	ABP_NPC_C_GetBlackboardValues_ResourceName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceName != nullptr)
		*ResourceName = params.ResourceName;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ResourceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_ResourceName(const struct FName& ResourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceName");

	ABP_NPC_C_SetBlackboardValues_ResourceName_Params params;
	params.ResourceName = ResourceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Building
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Building(TEnumAsByte<E_Buildings_E_Buildings>* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Building");

	ABP_NPC_C_GetBlackboardValues_Building_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Seeds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_BagMode_E_BagMode> Seeds                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Seeds(TEnumAsByte<E_BagMode_E_BagMode>* Seeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Seeds");

	ABP_NPC_C_GetBlackboardValues_Seeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Seeds != nullptr)
		*Seeds = params.Seeds;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Building
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Building(TEnumAsByte<E_Buildings_E_Buildings> Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Building");

	ABP_NPC_C_SetBlackboardValues_Building_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Seeds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BagMode_E_BagMode> Seeds                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Seeds(TEnumAsByte<E_BagMode_E_BagMode> Seeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Seeds");

	ABP_NPC_C_SetBlackboardValues_Seeds_Params params;
	params.Seeds = Seeds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Talk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Talk_E_Talk>     Talk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Talk(TEnumAsByte<E_Talk_E_Talk>* Talk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Talk");

	ABP_NPC_C_GetBlackboardValues_Talk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Talk != nullptr)
		*Talk = params.Talk;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentResourceState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState_E_ResourceState>* ResourceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentResourceState");

	ABP_NPC_C_GetBlackboardValues_CurrentResourceState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceState != nullptr)
		*ResourceState = params.ResourceState;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Talk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Talk_E_Talk>     Talk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Talk(TEnumAsByte<E_Talk_E_Talk> Talk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Talk");

	ABP_NPC_C_SetBlackboardValues_Talk_Params params;
	params.Talk = Talk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentResourceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentResourceState");

	ABP_NPC_C_SetBlackboardValues_CurrentResourceState_Params params;
	params.ResourceState = ResourceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState_E_ResourceState>* ResourceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceState");

	ABP_NPC_C_GetBlackboardValues_ResourceState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceState != nullptr)
		*ResourceState = params.ResourceState;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceState");

	ABP_NPC_C_SetBlackboardValues_ResourceState_Params params;
	params.ResourceState = ResourceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_TaskState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_TaskState_E_TaskState> TaskState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_TaskState(TEnumAsByte<E_TaskState_E_TaskState>* TaskState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_TaskState");

	ABP_NPC_C_GetBlackboardValues_TaskState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TaskState != nullptr)
		*TaskState = params.TaskState;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks_E_Tasks>* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentTask");

	ABP_NPC_C_GetBlackboardValues_CurrentTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Task
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Task(TEnumAsByte<E_Tasks_E_Tasks>* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Task");

	ABP_NPC_C_GetBlackboardValues_Task_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_WorkTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   WorkTask                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks_E_Tasks>* WorkTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_WorkTask");

	ABP_NPC_C_GetBlackboardValues_WorkTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkTask != nullptr)
		*WorkTask = params.WorkTask;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Rest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Rest_E_Rest>     Rest                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Rest(TEnumAsByte<E_Rest_E_Rest>* Rest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Rest");

	ABP_NPC_C_GetBlackboardValues_Rest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rest != nullptr)
		*Rest = params.Rest;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentNPCBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior>* NPCBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentNPCBehavior");

	ABP_NPC_C_GetBlackboardValues_CurrentNPCBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCBehavior != nullptr)
		*NPCBehavior = params.NPCBehavior;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_TaskState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TaskState_E_TaskState> TaskState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_TaskState(TEnumAsByte<E_TaskState_E_TaskState> TaskState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_TaskState");

	ABP_NPC_C_SetBlackboardValues_TaskState_Params params;
	params.TaskState = TaskState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentTask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks_E_Tasks> Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentTask");

	ABP_NPC_C_SetBlackboardValues_CurrentTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Task
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Task(TEnumAsByte<E_Tasks_E_Tasks> Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Task");

	ABP_NPC_C_SetBlackboardValues_Task_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_WorkTask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tasks_E_Tasks>   WorkTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks_E_Tasks> WorkTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_WorkTask");

	ABP_NPC_C_SetBlackboardValues_WorkTask_Params params;
	params.WorkTask = WorkTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Rest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Rest_E_Rest>     Rest                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Rest(TEnumAsByte<E_Rest_E_Rest> Rest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Rest");

	ABP_NPC_C_SetBlackboardValues_Rest_Params params;
	params.Rest = Rest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentNPCBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentNPCBehavior");

	ABP_NPC_C_SetBlackboardValues_CurrentNPCBehavior_Params params;
	params.NPCBehavior = NPCBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_NPCBehavior
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior>* NPCBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_NPCBehavior");

	ABP_NPC_C_GetBlackboardValues_NPCBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCBehavior != nullptr)
		*NPCBehavior = params.NPCBehavior;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_DailyCycle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_DailyCycle_E_DailyCycle> DailyCycle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle_E_DailyCycle>* DailyCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_DailyCycle");

	ABP_NPC_C_GetBlackboardValues_DailyCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DailyCycle != nullptr)
		*DailyCycle = params.DailyCycle;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Int
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Int                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int, int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Int");

	ABP_NPC_C_GetBlackboardValues_Int_Params params;
	params.Blackboard_Int = Blackboard_Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_NPCBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_NPCBehavior");

	ABP_NPC_C_SetBlackboardValues_NPCBehavior_Params params;
	params.NPCBehavior = NPCBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_DailyCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DailyCycle_E_DailyCycle> DailyCycle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle_E_DailyCycle> DailyCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_DailyCycle");

	ABP_NPC_C_SetBlackboardValues_DailyCycle_Params params;
	params.DailyCycle = DailyCycle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Int
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Int");

	ABP_NPC_C_SetBlackboardValues_Int_Params params;
	params.Blackboard_Int = Blackboard_Int;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Vector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 VectorValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector, struct FVector* VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Vector");

	ABP_NPC_C_GetBlackboardValues_Vector_Params params;
	params.Blackboard_Vector = Blackboard_Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Boolean
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           BooleanValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::GetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Boolean");

	ABP_NPC_C_GetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BooleanValue != nullptr)
		*BooleanValue = params.BooleanValue;

}


// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Object
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlackboardObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlackboardObject, class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetBlackboardValues_Object");

	ABP_NPC_C_GetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Vector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Vector");

	ABP_NPC_C_SetBlackboardValues_Vector_Params params;
	params.Blackboard_Vector = Blackboard_Vector;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Boolean
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::SetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Boolean");

	ABP_NPC_C_SetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlacboardObject                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::SetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlacboardObject, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetBlackboardValues_Object");

	ABP_NPC_C_SetBlackboardValues_Object_Params params;
	params.BlacboardObject = BlacboardObject;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.FindCampfire
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> LocationType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFurniture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::FindCampfire(TEnumAsByte<E_Ownership_E_Ownership> LocationType, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindCampfire");

	ABP_NPC_C_FindCampfire_Params params;
	params.LocationType = LocationType;
	params.IgnoreOwnership = IgnoreOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;

}


// Function BP_NPC.BP_NPC_C.CheckBagOfSeedsInInventoryOrChest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RemoveItem_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Seeds_E_Seeds>   SeedType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsBag                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::CheckBagOfSeedsInInventoryOrChest(bool RemoveItem_, TEnumAsByte<E_Seeds_E_Seeds> SeedType, bool* IsBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckBagOfSeedsInInventoryOrChest");

	ABP_NPC_C_CheckBagOfSeedsInInventoryOrChest_Params params;
	params.RemoveItem_ = RemoveItem_;
	params.SeedType = SeedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBag != nullptr)
		*IsBag = params.IsBag;

}


// Function BP_NPC.BP_NPC_C.GetLookingRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_NPC_C::GetLookingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetLookingRotation");

	ABP_NPC_C_GetLookingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_NPC.BP_NPC_C.AddItemToInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Freshness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedAtIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AddItemToInventory(const struct FName& Item_ID, int Count, float CurrentHP, float MaxHP, int Capacity, float Freshness, int* AddedAtIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AddItemToInventory");

	ABP_NPC_C_AddItemToInventory_Params params;
	params.Item_ID = Item_ID;
	params.Count = Count;
	params.CurrentHP = CurrentHP;
	params.MaxHP = MaxHP;
	params.Capacity = Capacity;
	params.Freshness = Freshness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AddedAtIndex != nullptr)
		*AddedAtIndex = params.AddedAtIndex;

}


// Function BP_NPC.BP_NPC_C.FindHouse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindBed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsBed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindHouse");

	ABP_NPC_C_FindHouse_Params params;
	params.FindBed = FindBed;
	params.Occupy = Occupy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
	if (IsBed != nullptr)
		*IsBed = params.IsBed;

}


// Function BP_NPC.BP_NPC_C.CheckForTalkGoal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*               Dialogue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::CheckForTalkGoal(class UDialogue** Dialogue, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CheckForTalkGoal");

	ABP_NPC_C_CheckForTalkGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dialogue != nullptr)
		*Dialogue = params.Dialogue;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function BP_NPC.BP_NPC_C.IsInteractable
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
void ABP_NPC_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.IsInteractable");

	ABP_NPC_C_IsInteractable_Params params;
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


// Function BP_NPC.BP_NPC_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetHeldItem");

	ABP_NPC_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_NPC.BP_NPC_C.OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_NPC_C::OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26");

	ABP_NPC_C_OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_NPC_C::OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0");

	ABP_NPC_C_OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnLoaded_BB2717E64866BD380FC9D781DB1EF03A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_NPC_C::OnLoaded_BB2717E64866BD380FC9D781DB1EF03A(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_BB2717E64866BD380FC9D781DB1EF03A");

	ABP_NPC_C_OnLoaded_BB2717E64866BD380FC9D781DB1EF03A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_NPC_C::OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7");

	ABP_NPC_C_OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_GetOut
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_GetOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_GetOut");

	ABP_NPC_C_AI_GetOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_ResetNavInvoker
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_ResetNavInvoker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ResetNavInvoker");

	ABP_NPC_C_AI_ResetNavInvoker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_MoveAside
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_MoveAside()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_MoveAside");

	ABP_NPC_C_AI_MoveAside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.UpdateCrowdSteering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Suspend                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::UpdateCrowdSteering(bool Suspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UpdateCrowdSteering");

	ABP_NPC_C_UpdateCrowdSteering_Params params;
	params.Suspend = Suspend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveBeginPlay");

	ABP_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_InteractResource
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_InteractResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_InteractResource");

	ABP_NPC_C_AI_InteractResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_InteractFoliage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_InteractFoliage(bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_InteractFoliage");

	ABP_NPC_C_AI_InteractFoliage_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_HideHeldItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_HideHeldItem(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideHeldItem");

	ABP_NPC_C_AI_HideHeldItem_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Interact");

	ABP_NPC_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_AddSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_AddSkills");

	ABP_NPC_C_AI_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_UnlockThings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_UnlockThings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_UnlockThings");

	ABP_NPC_C_AI_UnlockThings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.RemoveFromWorkPlace
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::RemoveFromWorkPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RemoveFromWorkPlace");

	ABP_NPC_C_RemoveFromWorkPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetWorkTask
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_SetWorkTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetWorkTask");

	ABP_NPC_C_AI_SetWorkTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GoToKing
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::GoToKing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GoToKing");

	ABP_NPC_C_GoToKing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ResetTaskList
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::ResetTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ResetTaskList");

	ABP_NPC_C_ResetTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_ToolInteractFoliage
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_ToolInteractFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_ToolInteractFoliage");

	ABP_NPC_C_AI_ToolInteractFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.GetUp
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::GetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.GetUp");

	ABP_NPC_C_GetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveTick");

	ABP_NPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InterpRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCharacterRotation");

	ABP_NPC_C_AI_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.InterpRotation = InterpRotation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.MakeSomeNoise
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::MakeSomeNoise()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.MakeSomeNoise");

	ABP_NPC_C_MakeSomeNoise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.StopShouting
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::StopShouting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StopShouting");

	ABP_NPC_C_StopShouting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ShowInspectorUI");

	ABP_NPC_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.Init_NPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::Init_NPC(bool LoadGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Init_NPC");

	ABP_NPC_C_Init_NPC_Params params;
	params.LoadGame = LoadGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> Response                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCollisionResponse");

	ABP_NPC_C_AI_SetCollisionResponse_Params params;
	params.Channel = Channel;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_OutsideInteract
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_OutsideInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_OutsideInteract");

	ABP_NPC_C_AI_OutsideInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ResetTaskStateAfterSkip
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::ResetTaskStateAfterSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ResetTaskStateAfterSkip");

	ABP_NPC_C_ResetTaskStateAfterSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.LoadNPCDataFromSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_NPC            NPCData                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           ResetEQ                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_NPC_C::LoadNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.LoadNPCDataFromSave");

	ABP_NPC_C_LoadNPCDataFromSave_Params params;
	params.NPCData = NPCData;
	params.ResetEQ = ResetEQ;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.SetMesh
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
void ABP_NPC_C::SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMesh");

	ABP_NPC_C_SetMesh_Params params;
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


// Function BP_NPC.BP_NPC_C.SetMeshAndMaterials
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
void ABP_NPC_C::SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UClass* AnimClass, TArray<struct FST_MeshDynamicMaterials> DynamicMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetMeshAndMaterials");

	ABP_NPC_C_SetMeshAndMaterials_Params params;
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


// Function BP_NPC.BP_NPC_C.AI_StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_StopMovement");

	ABP_NPC_C_AI_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_TalkingNPC
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_TalkingNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_TalkingNPC");

	ABP_NPC_C_AI_TalkingNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.EnableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::EnableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EnableNPC");

	ABP_NPC_C_EnableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.DisableNPC
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::DisableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.DisableNPC");

	ABP_NPC_C_DisableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.StartFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::StartFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StartFalling");

	ABP_NPC_C_StartFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.TeleportToLandscape
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::TeleportToLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.TeleportToLandscape");

	ABP_NPC_C_TeleportToLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.EndFalling
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::EndFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EndFalling");

	ABP_NPC_C_EndFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SpawnTool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SpawnTool(TEnumAsByte<E_Tools_E_Tools> Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnTool");

	ABP_NPC_C_AI_SpawnTool_Params params;
	params.Tool = Tool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AnimNotify_WorkMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_WorkMontageComplete");

	ABP_NPC_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopsFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopsFinished");

	ABP_NPC_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.InitSetSkills
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Birth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::InitSetSkills(bool Birth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitSetSkills");

	ABP_NPC_C_InitSetSkills_Params params;
	params.Birth = Birth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnGetUp
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnGetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnGetUp");

	ABP_NPC_C_OnGetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetBlockTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockTalking                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetBlockTalking(bool BlockTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetBlockTalking");

	ABP_NPC_C_AI_SetBlockTalking_Params params;
	params.BlockTalking = BlockTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.OnWakeUp
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnWakeUp");

	ABP_NPC_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetInteractionSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InteractionSlotIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetInteractionSlotIndex(int InteractionSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetInteractionSlotIndex");

	ABP_NPC_C_AI_SetInteractionSlotIndex_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SpawnOff-HandItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SpawnOff_HandItem(TEnumAsByte<E_Tools_E_Tools> Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SpawnOff-HandItem");

	ABP_NPC_C_AI_SpawnOff_HandItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_HideOff-HandItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_HideOff_HandItem(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideOff-HandItem");

	ABP_NPC_C_AI_HideOff_HandItem_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_EndTalking
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_EndTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_EndTalking");

	ABP_NPC_C_AI_EndTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetIsChangedTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetIsChangedTimeOfDay");

	ABP_NPC_C_AI_SetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.StuffDone
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::StuffDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StuffDone");

	ABP_NPC_C_StuffDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.BindSitSleep
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::BindSitSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BindSitSleep");

	ABP_NPC_C_BindSitSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_EnableDeadMethods
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_EnableDeadMethods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_EnableDeadMethods");

	ABP_NPC_C_AI_EnableDeadMethods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.UpdateOnDead
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::UpdateOnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UpdateOnDead");

	ABP_NPC_C_UpdateOnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.RemoveFamilyFromHouse
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::RemoveFamilyFromHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RemoveFamilyFromHouse");

	ABP_NPC_C_RemoveFamilyFromHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetNPC_MustBeDeactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NPC_MustBeDeactivated          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNPC_MustBeDeactivated");

	ABP_NPC_C_AI_SetNPC_MustBeDeactivated_Params params;
	params.NPC_MustBeDeactivated = NPC_MustBeDeactivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.NoneOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::NoneOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.NoneOptimization");

	ABP_NPC_C_NoneOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.CloseOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::CloseOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CloseOptimization");

	ABP_NPC_C_CloseOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.MediumOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::MediumOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.MediumOptimization");

	ABP_NPC_C_MediumOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.FarOptimization
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::FarOptimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FarOptimization");

	ABP_NPC_C_FarOptimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.Update Camera Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             LerpCurve                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::Update_Camera_Event_2(class UCurveFloat* LerpCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Update Camera Event_2");

	ABP_NPC_C_Update_Camera_Event_2_Params params;
	params.LerpCurve = LerpCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetNPC_Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNPC_Status");

	ABP_NPC_C_AI_SetNPC_Status_Params params;
	params.NPC_Status = NPC_Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetNeedItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NeedItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetNeedItemName(const struct FName& NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetNeedItemName");

	ABP_NPC_C_AI_SetNeedItemName_Params params;
	params.NeedItem = NeedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetCasualClothes
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_SetCasualClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCasualClothes");

	ABP_NPC_C_AI_SetCasualClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetProfessionClothes
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_SetProfessionClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetProfessionClothes");

	ABP_NPC_C_AI_SetProfessionClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetFieldTask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FieldTasksLists     Field_Task                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_NPC_C::AI_SetFieldTask(const struct FST_FieldTasksLists& Field_Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetFieldTask");

	ABP_NPC_C_AI_SetFieldTask_Params params;
	params.Field_Task = Field_Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_RemoveAnimalReference
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_RemoveAnimalReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_RemoveAnimalReference");

	ABP_NPC_C_AI_RemoveAnimalReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_NPC_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_NPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_HideItemsInHands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_HideItemsInHands(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_HideItemsInHands");

	ABP_NPC_C_AI_HideItemsInHands_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AfterGetOrWakeUp
// (BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AfterGetOrWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AfterGetOrWakeUp");

	ABP_NPC_C_AfterGetOrWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetIsLookAtTargetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLookAtTargetRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetIsLookAtTargetRotation");

	ABP_NPC_C_AI_SetIsLookAtTargetRotation_Params params;
	params.IsLookAtTargetRotation = IsLookAtTargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetCanAffectNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAffectNavigation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetCanAffectNavigation(bool CanAffectNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetCanAffectNavigation");

	ABP_NPC_C_AI_SetCanAffectNavigation_Params params;
	params.CanAffectNavigation = CanAffectNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetActivity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_C::AI_SetActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetActivity");

	ABP_NPC_C_AI_SetActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.AI_SetGoHome_Activity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GoHome_Activity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::AI_SetGoHome_Activity(bool GoHome_Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AI_SetGoHome_Activity");

	ABP_NPC_C_AI_SetGoHome_Activity_Params params;
	params.GoHome_Activity = GoHome_Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.PlayPickingUpMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.PlayPickingUpMontage");

	ABP_NPC_C_PlayPickingUpMontage_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.Set Sitting Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSitting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set Sitting Event");

	ABP_NPC_C_Set_Sitting_Event_Params params;
	params.IsSitting = IsSitting;
	params.SitDownPosition = SitDownPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.Set Sleeping Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSleeping                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseBedSleepingPose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NPC_C::Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Set Sleeping Event");

	ABP_NPC_C_Set_Sleeping_Event_Params params;
	params.IsSleeping = IsSleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::ExecuteUbergraph_BP_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC");

	ABP_NPC_C_ExecuteUbergraph_BP_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.WorkLoopsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::WorkLoopsFinished__DelegateSignature(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.WorkLoopsFinished__DelegateSignature");

	ABP_NPC_C_WorkLoopsFinished__DelegateSignature_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NPC.BP_NPC_C.WorkMontageComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NPC_C::WorkMontageComplete__DelegateSignature(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.WorkMontageComplete__DelegateSignature");

	ABP_NPC_C_WorkMontageComplete__DelegateSignature_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
