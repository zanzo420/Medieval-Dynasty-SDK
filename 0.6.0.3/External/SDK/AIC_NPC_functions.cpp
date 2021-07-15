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

// Function AIC_NPC.AIC_NPC_C.AI_GetGoHome_Activity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GoHome_Activity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetGoHome_Activity(bool* GoHome_Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetGoHome_Activity");

	AAIC_NPC_C_AI_GetGoHome_Activity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GoHome_Activity != nullptr)
		*GoHome_Activity = params.GoHome_Activity;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindWorkSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WorkSlot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindWorkSlot");

	AAIC_NPC_C_AI_FindWorkSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkSlot != nullptr)
		*WorkSlot = params.WorkSlot;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetCanAffectNavigation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAffectNavigation            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetCanAffectNavigation(bool* CanAffectNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCanAffectNavigation");

	AAIC_NPC_C_AI_GetCanAffectNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanAffectNavigation != nullptr)
		*CanAffectNavigation = params.CanAffectNavigation;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetIsLookAtTargetRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLookAtTargetRotation         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsLookAtTargetRotation");

	AAIC_NPC_C_AI_GetIsLookAtTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLookAtTargetRotation != nullptr)
		*IsLookAtTargetRotation = params.IsLookAtTargetRotation;

}


// Function AIC_NPC.AIC_NPC_C.AI_CheckIsChunkInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_CheckIsChunkInteractable(bool* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsChunkInteractable");

	AAIC_NPC_C_AI_CheckIsChunkInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;

}


// Function AIC_NPC.AIC_NPC_C.AI_SnapToFurnitureSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToFinishSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SnapToFurnitureSlot");

	AAIC_NPC_C_AI_SnapToFurnitureSlot_Params params;
	params.ToFinishSlot = ToFinishSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function AIC_NPC.AIC_NPC_C.AI_SpawnBow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SpawnBow(bool* IsBow)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnBow");

	AAIC_NPC_C_AI_SpawnBow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBow != nullptr)
		*IsBow = params.IsBow;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindAnimalsBreederPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindAnimalsBreederPoint");

	AAIC_NPC_C_AI_FindAnimalsBreederPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Point != nullptr)
		*Point = params.Point;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetNeedItemName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetNeedItemName(struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNeedItemName");

	AAIC_NPC_C_AI_GetNeedItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_Status
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedTool                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedTool, struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNPC_Status");

	AAIC_NPC_C_AI_GetNPC_Status_Params params;

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


// Function AIC_NPC.AIC_NPC_C.AI_CheckSeedsInChest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RemoveItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_BagMode_E_BagMode> BagSeeds                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsBag                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode_E_BagMode> BagSeeds, bool* IsBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckSeedsInChest");

	AAIC_NPC_C_AI_CheckSeedsInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.BagSeeds = BagSeeds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBag != nullptr)
		*IsBag = params.IsBag;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Ownership
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> OutsideNPC_Ownership           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership_E_Ownership>* OutsideNPC_Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Ownership");

	AAIC_NPC_C_AI_GetOutsideNPC_Ownership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutsideNPC_Ownership != nullptr)
		*OutsideNPC_Ownership = params.OutsideNPC_Ownership;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OptimizationStage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetOptimizationStage(int* OptimizationStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationStage");

	AAIC_NPC_C_AI_GetOptimizationStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptimizationStage != nullptr)
		*OptimizationStage = params.OptimizationStage;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindFishingPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindFishingPoint(struct FVector* Destination, bool* Find)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindFishingPoint");

	AAIC_NPC_C_AI_FindFishingPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_MustBeDeactivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NPC_MustBeDeactivated          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNPC_MustBeDeactivated");

	AAIC_NPC_C_AI_GetNPC_MustBeDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC_MustBeDeactivated != nullptr)
		*NPC_MustBeDeactivated = params.NPC_MustBeDeactivated;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetWorkHours
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Hour                StartWorkingTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Hour                StopWorkingTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWorkHours");

	AAIC_NPC_C_AI_GetWorkHours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartWorkingTime != nullptr)
		*StartWorkingTime = params.StartWorkingTime;
	if (StopWorkingTime != nullptr)
		*StopWorkingTime = params.StopWorkingTime;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetIsGetOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetIsGetOut(bool* GetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsGetOut");

	AAIC_NPC_C_AI_GetIsGetOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetOut != nullptr)
		*GetOut = params.GetOut;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetWorkMonatge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            WorkMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetWorkMonatge(class UAnimMontage** WorkMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWorkMonatge");

	AAIC_NPC_C_AI_GetWorkMonatge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkMontage != nullptr)
		*WorkMontage = params.WorkMontage;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetDead");

	AAIC_NPC_C_AI_GetDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationBlackboards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_NPC_Blackboards OptimizationBlackboards        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationBlackboards");

	AAIC_NPC_C_AI_GetOptimizationBlackboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptimizationBlackboards != nullptr)
		*OptimizationBlackboards = params.OptimizationBlackboards;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetCollisionResponse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> Resposne                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse>* Resposne)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCollisionResponse");

	AAIC_NPC_C_AI_GetCollisionResponse_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resposne != nullptr)
		*Resposne = params.Resposne;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetIsChangedTimeOfDay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsChangedTimeOfDay");

	AAIC_NPC_C_AI_GetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetInteractionSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InteractionSlotIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetInteractionSlotIndex(int* InteractionSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetInteractionSlotIndex");

	AAIC_NPC_C_AI_GetInteractionSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractionSlotIndex != nullptr)
		*InteractionSlotIndex = params.InteractionSlotIndex;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetAnimationState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sleeping                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Sitting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Working                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetAnimationState");

	AAIC_NPC_C_AI_GetAnimationState_Params params;

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


// Function AIC_NPC.AIC_NPC_C.AI_GetQuestBlocking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestBlocking                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetQuestBlocking(bool* QuestBlocking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetQuestBlocking");

	AAIC_NPC_C_AI_GetQuestBlocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestBlocking != nullptr)
		*QuestBlocking = params.QuestBlocking;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindRandomFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFurniture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindRandomFurniture");

	AAIC_NPC_C_AI_FindRandomFurniture_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_FindTavern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindActivityFurniture          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CanSit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindTavern");

	AAIC_NPC_C_AI_FindTavern_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_GetCapsuleHalfHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CapsuleHalfHeight              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCapsuleHalfHeight");

	AAIC_NPC_C_AI_GetCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindBuildingWorkbenches
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsWorkbenches                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindBuildingWorkbenches");

	AAIC_NPC_C_AI_FindBuildingWorkbenches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsWorkbenches != nullptr)
		*IsWorkbenches = params.IsWorkbenches;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetNightPatrol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NightPatrol                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_GetNightPatrol(bool* NightPatrol)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNightPatrol");

	AAIC_NPC_C_AI_GetNightPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NightPatrol != nullptr)
		*NightPatrol = params.NightPatrol;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 lookAt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsNPC                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoTalk");

	AAIC_NPC_C_AI_FindNPCtoTalk_Params params;

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


// Function AIC_NPC.AIC_NPC_C.AI_GetBedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BedIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            BedSlotIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetBedIndex(int* BedIndex, int* BedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBedIndex");

	AAIC_NPC_C_AI_GetBedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BedIndex != nullptr)
		*BedIndex = params.BedIndex;
	if (BedSlotIndex != nullptr)
		*BedSlotIndex = params.BedSlotIndex;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetOwnership
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetOwnership(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOwnership");

	AAIC_NPC_C_AI_GetOwnership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function AIC_NPC.AIC_NPC_C.AI_CheckBuildingIsConstructed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsConstructed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_CheckBuildingIsConstructed(bool* IsConstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckBuildingIsConstructed");

	AAIC_NPC_C_AI_CheckBuildingIsConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetIDFromNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NPC_ID                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetIDFromNPC(struct FString* NPC_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIDFromNPC");

	AAIC_NPC_C_AI_GetIDFromNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC_ID != nullptr)
		*NPC_ID = params.NPC_ID;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetStats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetStats");

	AAIC_NPC_C_AI_GetStats_Params params;

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


// Function AIC_NPC.AIC_NPC_C.AI_CheckTargetFoliage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargetFoliage                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_CheckTargetFoliage(bool* IsTargetFoliage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckTargetFoliage");

	AAIC_NPC_C_AI_CheckTargetFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTargetFoliage != nullptr)
		*IsTargetFoliage = params.IsTargetFoliage;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindClosestFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreOwnership                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFurniture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindClosestFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindClosestFurniture");

	AAIC_NPC_C_AI_FindClosestFurniture_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_FindWorkPlace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetTask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WorkPlace                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          WorkRadius                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_TaskList            TaskList                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindWorkPlace(bool GetTask, struct FVector* Destination, bool* WorkPlace, float* WorkRadius, struct FST_TaskList* TaskList, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindWorkPlace");

	AAIC_NPC_C_AI_FindWorkPlace_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_GetNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetNPC(class ABP_NPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNPC");

	AAIC_NPC_C_AI_GetNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindHouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FindBed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Occupy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Find                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsBed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindHouse");

	AAIC_NPC_C_AI_FindHouse_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetMesh");

	AAIC_NPC_C_AI_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function AIC_NPC.AIC_NPC_C.AI_IncreaseNavInvoker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToBig                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_IncreaseNavInvoker(bool* ToBig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_IncreaseNavInvoker");

	AAIC_NPC_C_AI_IncreaseNavInvoker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToBig != nullptr)
		*ToBig = params.ToBig;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindField
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Field                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_FieldTasksLists     TaskList                       (Parm, OutParm, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindField");

	AAIC_NPC_C_AI_FindField_Params params;

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


// Function AIC_NPC.AIC_NPC_C.AI_GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Current_Location               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetDistanceAndDirection");

	AAIC_NPC_C_AI_GetDistanceAndDirection_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceToLastPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OutsideLastPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_GetTargetLocation(const struct FVector& Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetTargetLocation");

	AAIC_NPC_C_AI_GetTargetLocation_Params params;
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


// Function AIC_NPC.AIC_NPC_C.AI_FindFoliage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> TargetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Foliage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindFoliage(TEnumAsByte<E_Resources_E_Resources> TargetType, struct FVector* Destination, bool* Foliage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindFoliage");

	AAIC_NPC_C_AI_FindFoliage_Params params;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Foliage != nullptr)
		*Foliage = params.Foliage;

}


// Function AIC_NPC.AIC_NPC_C.AI_FindAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBeDead                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Animal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_FindAnimal(bool ShouldBeDead, struct FVector* Destination, bool* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindAnimal");

	AAIC_NPC_C_AI_FindAnimal_Params params;
	params.ShouldBeDead = ShouldBeDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Animal != nullptr)
		*Animal = params.Animal;

}


// Function AIC_NPC.AIC_NPC_C.SetHeraldActivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::SetHeraldActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetHeraldActivity");

	AAIC_NPC_C_SetHeraldActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.SetActivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::SetActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetActivity");

	AAIC_NPC_C_SetActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.FamilyGetOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::FamilyGetOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.FamilyGetOut");

	AAIC_NPC_C_FamilyGetOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.FindGoOutsidePoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutsidePoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::FindGoOutsidePoint(struct FVector* OutsidePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.FindGoOutsidePoint");

	AAIC_NPC_C_FindGoOutsidePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutsidePoint != nullptr)
		*OutsidePoint = params.OutsidePoint;

}


// Function AIC_NPC.AIC_NPC_C.GetOutSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::GetOutSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetOutSetting");

	AAIC_NPC_C_GetOutSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.RefreshBehaviorTrees
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::RefreshBehaviorTrees()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.RefreshBehaviorTrees");

	AAIC_NPC_C_RefreshBehaviorTrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.CheckIsBuilding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.CheckIsBuilding");

	AAIC_NPC_C_CheckIsBuilding_Params params;
	params.CheckLocation = CheckLocation;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;

}


// Function AIC_NPC.AIC_NPC_C.SetSceneName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::SetSceneName(class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetSceneName");

	AAIC_NPC_C_SetSceneName_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.Heal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::Heal(class ABP_PlayerCharacter_C* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Heal");

	AAIC_NPC_C_Heal_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.GetDistanceAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Current_Location               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetDistanceAndDirection");

	AAIC_NPC_C_GetDistanceAndDirection_Params params;
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


// Function AIC_NPC.AIC_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.UserConstructionScript");

	AAIC_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnFail_0A0414E3447604926B5365B0ED2C24D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnFail_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_0A0414E3447604926B5365B0ED2C24D3");

	AAIC_NPC_C_OnFail_0A0414E3447604926B5365B0ED2C24D3_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnSuccess_0A0414E3447604926B5365B0ED2C24D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnSuccess_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_0A0414E3447604926B5365B0ED2C24D3");

	AAIC_NPC_C_OnSuccess_0A0414E3447604926B5365B0ED2C24D3_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnFail_D69365224E351F8F67AE7180121F6957
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnFail_D69365224E351F8F67AE7180121F6957(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_D69365224E351F8F67AE7180121F6957");

	AAIC_NPC_C_OnFail_D69365224E351F8F67AE7180121F6957_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnSuccess_D69365224E351F8F67AE7180121F6957
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnSuccess_D69365224E351F8F67AE7180121F6957(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_D69365224E351F8F67AE7180121F6957");

	AAIC_NPC_C_OnSuccess_D69365224E351F8F67AE7180121F6957_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnFail_FFE60B014075BFB86DA926BD8D4E619A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnFail_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_FFE60B014075BFB86DA926BD8D4E619A");

	AAIC_NPC_C_OnFail_FFE60B014075BFB86DA926BD8D4E619A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnSuccess_FFE60B014075BFB86DA926BD8D4E619A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnSuccess_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_FFE60B014075BFB86DA926BD8D4E619A");

	AAIC_NPC_C_OnSuccess_FFE60B014075BFB86DA926BD8D4E619A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnFail_297B00BD4C1D9B65E914BFB94009257B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnFail_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_297B00BD4C1D9B65E914BFB94009257B");

	AAIC_NPC_C_OnFail_297B00BD4C1D9B65E914BFB94009257B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OnSuccess_297B00BD4C1D9B65E914BFB94009257B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::OnSuccess_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_297B00BD4C1D9B65E914BFB94009257B");

	AAIC_NPC_C_OnSuccess_297B00BD4C1D9B65E914BFB94009257B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_InteractResource
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_InteractResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_InteractResource");

	AAIC_NPC_C_AI_InteractResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_InteractFoliage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_InteractFoliage(bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_InteractFoliage");

	AAIC_NPC_C_AI_InteractFoliage_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_ToolInteractFoliage
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_ToolInteractFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ToolInteractFoliage");

	AAIC_NPC_C_AI_ToolInteractFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_HideHeldItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_HideHeldItem(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideHeldItem");

	AAIC_NPC_C_AI_HideHeldItem_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_AddSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_AddSkills");

	AAIC_NPC_C_AI_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_UnlockThings
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_UnlockThings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnlockThings");

	AAIC_NPC_C_AI_UnlockThings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetWorkTask
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_SetWorkTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetWorkTask");

	AAIC_NPC_C_AI_SetWorkTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InterpRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCharacterRotation");

	AAIC_NPC_C_AI_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.InterpRotation = InterpRotation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECollisionResponse> Response                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCollisionResponse");

	AAIC_NPC_C_AI_SetCollisionResponse_Params params;
	params.Channel = Channel;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_OutsideInteract
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_OutsideInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_OutsideInteract");

	AAIC_NPC_C_AI_OutsideInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_StopMovement");

	AAIC_NPC_C_AI_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_TalkingNPC
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_TalkingNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_TalkingNPC");

	AAIC_NPC_C_AI_TalkingNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SpawnTool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SpawnTool(TEnumAsByte<E_Tools_E_Tools> Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnTool");

	AAIC_NPC_C_AI_SpawnTool_Params params;
	params.Tool = Tool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetBlockTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockTalking                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetBlockTalking(bool BlockTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBlockTalking");

	AAIC_NPC_C_AI_SetBlockTalking_Params params;
	params.BlockTalking = BlockTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetInteractionSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InteractionSlotIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetInteractionSlotIndex(int InteractionSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetInteractionSlotIndex");

	AAIC_NPC_C_AI_SetInteractionSlotIndex_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SpawnOff-HandItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SpawnOff_HandItem(TEnumAsByte<E_Tools_E_Tools> Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnOff-HandItem");

	AAIC_NPC_C_AI_SpawnOff_HandItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_HideOff-HandItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_HideOff_HandItem(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideOff-HandItem");

	AAIC_NPC_C_AI_HideOff_HandItem_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_EndTalking
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_EndTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_EndTalking");

	AAIC_NPC_C_AI_EndTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetIsChangedTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetIsChangedTimeOfDay");

	AAIC_NPC_C_AI_SetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_EnableDeadMethods
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_EnableDeadMethods()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_EnableDeadMethods");

	AAIC_NPC_C_AI_EnableDeadMethods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_MustBeDeactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NPC_MustBeDeactivated          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNPC_MustBeDeactivated");

	AAIC_NPC_C_AI_SetNPC_MustBeDeactivated_Params params;
	params.NPC_MustBeDeactivated = NPC_MustBeDeactivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNPC_Status");

	AAIC_NPC_C_AI_SetNPC_Status_Params params;
	params.NPC_Status = NPC_Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetNeedItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NeedItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetNeedItemName(const struct FName& NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNeedItemName");

	AAIC_NPC_C_AI_SetNeedItemName_Params params;
	params.NeedItem = NeedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetProfessionClothes
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_SetProfessionClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetProfessionClothes");

	AAIC_NPC_C_AI_SetProfessionClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetCasualClothes
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_SetCasualClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCasualClothes");

	AAIC_NPC_C_AI_SetCasualClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetFieldTask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FieldTasksLists     Field_Task                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AAIC_NPC_C::AI_SetFieldTask(const struct FST_FieldTasksLists& Field_Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetFieldTask");

	AAIC_NPC_C_AI_SetFieldTask_Params params;
	params.Field_Task = Field_Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_RemoveAnimalReference
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_RemoveAnimalReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_RemoveAnimalReference");

	AAIC_NPC_C_AI_RemoveAnimalReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_HideItemsInHands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_HideItemsInHands(bool IsWorking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideItemsInHands");

	AAIC_NPC_C_AI_HideItemsInHands_Params params;
	params.IsWorking = IsWorking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetIsLookAtTargetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLookAtTargetRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetIsLookAtTargetRotation");

	AAIC_NPC_C_AI_SetIsLookAtTargetRotation_Params params;
	params.IsLookAtTargetRotation = IsLookAtTargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetCanAffectNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAffectNavigation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetCanAffectNavigation(bool CanAffectNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCanAffectNavigation");

	AAIC_NPC_C_AI_SetCanAffectNavigation_Params params;
	params.CanAffectNavigation = CanAffectNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AAIC_NPC_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AAIC_NPC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskTree
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskTree");

	AAIC_NPC_C_TaskTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskStone
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskStone()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskStone");

	AAIC_NPC_C_TaskStone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskFoliage
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskFoliage");

	AAIC_NPC_C_TaskFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskShoot
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskShoot");

	AAIC_NPC_C_TaskShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskShowInventory
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskShowInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskShowInventory");

	AAIC_NPC_C_TaskShowInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskWorkbench
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskWorkbench()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskWorkbench");

	AAIC_NPC_C_TaskWorkbench_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskHusbandryAnimal
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskHusbandryAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskHusbandryAnimal");

	AAIC_NPC_C_TaskHusbandryAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskPrevious
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::TaskPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskPrevious");

	AAIC_NPC_C_TaskPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.StopDoingTask
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::StopDoingTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.StopDoingTask");

	AAIC_NPC_C_StopDoingTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.TaskField
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_BagMode_E_BagMode> Seeds                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::TaskField(TEnumAsByte<E_BagMode_E_BagMode> Seeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.TaskField");

	AAIC_NPC_C_TaskField_Params params;
	params.Seeds = Seeds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_GetOut
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_GetOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOut");

	AAIC_NPC_C_AI_GetOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_ResetNavInvoker
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_ResetNavInvoker()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ResetNavInvoker");

	AAIC_NPC_C_AI_ResetNavInvoker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_MoveAside
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_MoveAside()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_MoveAside");

	AAIC_NPC_C_AI_MoveAside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.UpdateWork
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::UpdateWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.UpdateWork");

	AAIC_NPC_C_UpdateWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.Illness
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::Illness()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Illness");

	AAIC_NPC_C_Illness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AfterIllness
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AfterIllness()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AfterIllness");

	AAIC_NPC_C_AfterIllness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.Vendoring
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::Vendoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Vendoring");

	AAIC_NPC_C_Vendoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.Init_AI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::Init_AI(class ABP_NPC_C* NPCReference, bool LoadGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Init_AI");

	AAIC_NPC_C_Init_AI_Params params;
	params.NPCReference = NPCReference;
	params.LoadGame = LoadGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.GetOutDestroy
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::GetOutDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetOutDestroy");

	AAIC_NPC_C_GetOutDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ComeBack
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::ComeBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ComeBack");

	AAIC_NPC_C_ComeBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAIC_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ReceiveBeginPlay");

	AAIC_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.UpdateCrowdSteering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Suspend                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::UpdateCrowdSteering(bool Suspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.UpdateCrowdSteering");

	AAIC_NPC_C_UpdateCrowdSteering_Params params;
	params.Suspend = Suspend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetActivity
// (Public, BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::AI_SetActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetActivity");

	AAIC_NPC_C_AI_SetActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.AI_SetGoHome_Activity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GoHome_Activity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_NPC_C::AI_SetGoHome_Activity(bool GoHome_Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetGoHome_Activity");

	AAIC_NPC_C_AI_SetGoHome_Activity_Params params;
	params.GoHome_Activity = GoHome_Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.HeraldSitting
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::HeraldSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.HeraldSitting");

	AAIC_NPC_C_HeraldSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.OutsideRandomSitting
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::OutsideRandomSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OutsideRandomSitting");

	AAIC_NPC_C_OutsideRandomSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ActivityTavern
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::ActivityTavern()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityTavern");

	AAIC_NPC_C_ActivityTavern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.WorkPatrol
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::WorkPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.WorkPatrol");

	AAIC_NPC_C_WorkPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.WorkBabysit
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::WorkBabysit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.WorkBabysit");

	AAIC_NPC_C_WorkBabysit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.GoOutside
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::GoOutside()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GoOutside");

	AAIC_NPC_C_GoOutside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ActivityNothing
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::ActivityNothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityNothing");

	AAIC_NPC_C_ActivityNothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ActivityTalking
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::ActivityTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityTalking");

	AAIC_NPC_C_ActivityTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ActivitySitting
// (BlueprintCallable, BlueprintEvent)
void AAIC_NPC_C::ActivitySitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivitySitting");

	AAIC_NPC_C_ActivitySitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIC_NPC.AIC_NPC_C.ExecuteUbergraph_AIC_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_NPC_C::ExecuteUbergraph_AIC_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ExecuteUbergraph_AIC_NPC");

	AAIC_NPC_C_ExecuteUbergraph_AIC_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAIC_NPC_C::AfterRead()
{
	ACustomDetourCrowdAIC::AfterRead();

	READ_PTR_FULL(AIPerception, UAIPerceptionComponent);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
}

void AAIC_NPC_C::BeforeDelete()
{
	ACustomDetourCrowdAIC::BeforeDelete();

	DELE_PTR_FULL(AIPerception);
	DELE_PTR_FULL(NPCReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
