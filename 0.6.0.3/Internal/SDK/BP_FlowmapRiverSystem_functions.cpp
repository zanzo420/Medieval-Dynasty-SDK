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

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsGrabbable");

	ABP_FlowmapRiverSystem_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemNeeded");

	ABP_FlowmapRiverSystem_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_FlowmapRiverSystem_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractItem");

	ABP_FlowmapRiverSystem_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemInteractable");

	ABP_FlowmapRiverSystem_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_FlowmapRiverSystem_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAdditionalStatus");

	ABP_FlowmapRiverSystem_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractAdditionalStatus");

	ABP_FlowmapRiverSystem_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFishData");

	ABP_FlowmapRiverSystem_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetID");

	ABP_FlowmapRiverSystem_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractionDistance");

	ABP_FlowmapRiverSystem_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOff-HandItem");

	ABP_FlowmapRiverSystem_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolNeeded");

	ABP_FlowmapRiverSystem_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCondition");

	ABP_FlowmapRiverSystem_C_GetInteractCondition_Params params;
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


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractCondition");

	ABP_FlowmapRiverSystem_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOwnershipType");

	ABP_FlowmapRiverSystem_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_FlowmapRiverSystem_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTitle");

	ABP_FlowmapRiverSystem_C_GetInteractTitle_Params params;
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


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_FlowmapRiverSystem_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractResources");

	ABP_FlowmapRiverSystem_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFluidType");

	ABP_FlowmapRiverSystem_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractTime");

	ABP_FlowmapRiverSystem_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool_UI");

	ABP_FlowmapRiverSystem_C_GetInteractTool_UI_Params params;
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


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable_UI");

	ABP_FlowmapRiverSystem_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable");

	ABP_FlowmapRiverSystem_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetTaskFromActor");

	ABP_FlowmapRiverSystem_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_FlowmapRiverSystem_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractName");

	ABP_FlowmapRiverSystem_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_FlowmapRiverSystem_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAction");

	ABP_FlowmapRiverSystem_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractable
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
void ABP_FlowmapRiverSystem_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractable");

	ABP_FlowmapRiverSystem_C_IsInteractable_Params params;
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


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool");

	ABP_FlowmapRiverSystem_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCount");

	ABP_FlowmapRiverSystem_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetHeldItem");

	ABP_FlowmapRiverSystem_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetResourceType");

	ABP_FlowmapRiverSystem_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractAnimation");

	ABP_FlowmapRiverSystem_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.CheckOccupied");

	ABP_FlowmapRiverSystem_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractIcon");

	ABP_FlowmapRiverSystem_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetDistanceBetweenPoints
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::GetDistanceBetweenPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetDistanceBetweenPoints");

	ABP_FlowmapRiverSystem_C_GetDistanceBetweenPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverSplines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::UpdateRiverSplines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverSplines");

	ABP_FlowmapRiverSystem_C_UpdateRiverSplines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverMeshesScaleLocationTangent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        RiverSplineComponent           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::UpdateRiverMeshesScaleLocationTangent(class USplineComponent** RiverSplineComponent, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverMeshesScaleLocationTangent");

	ABP_FlowmapRiverSystem_C_UpdateRiverMeshesScaleLocationTangent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RiverSplineComponent != nullptr)
		*RiverSplineComponent = params.RiverSplineComponent;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RefreshRiverSplits
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::RefreshRiverSplits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RefreshRiverSplits");

	ABP_FlowmapRiverSystem_C_RefreshRiverSplits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverVolumes
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::SetupRiverVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverVolumes");

	ABP_FlowmapRiverSystem_C_SetupRiverVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupAttachment
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::SetupAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupAttachment");

	ABP_FlowmapRiverSystem_C_SetupAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupSplineVisualizers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::SetupSplineVisualizers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupSplineVisualizers");

	ABP_FlowmapRiverSystem_C_SetupSplineVisualizers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::SetupRiverMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverMeshes");

	ABP_FlowmapRiverSystem_C_SetupRiverMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UserConstructionScript");

	ABP_FlowmapRiverSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractInput");

	ABP_FlowmapRiverSystem_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractCancel");

	ABP_FlowmapRiverSystem_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetOccupied");

	ABP_FlowmapRiverSystem_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetTaskInActor");

	ABP_FlowmapRiverSystem_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ChangeTaskIsOccupied");

	ABP_FlowmapRiverSystem_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ToolInteract");

	ABP_FlowmapRiverSystem_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.PerformActorInteraction");

	ABP_FlowmapRiverSystem_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsLookedAt");

	ABP_FlowmapRiverSystem_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ShowInspectorUI");

	ABP_FlowmapRiverSystem_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractWithImpaledItem");

	ABP_FlowmapRiverSystem_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.AddImpaledItem");

	ABP_FlowmapRiverSystem_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RemoveImpaledItem");

	ABP_FlowmapRiverSystem_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StartAttackFunction");

	ABP_FlowmapRiverSystem_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StopAttackFunction");

	ABP_FlowmapRiverSystem_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiver
// (BlueprintCallable, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::UpdateRiver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiver");

	ABP_FlowmapRiverSystem_C_UpdateRiver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FlowmapRiverSystem_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.Interact");

	ABP_FlowmapRiverSystem_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractStart");

	ABP_FlowmapRiverSystem_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FlowmapRiverSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveBeginPlay");

	ABP_FlowmapRiverSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveTick");

	ABP_FlowmapRiverSystem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ExecuteUbergraph_BP_FlowmapRiverSystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlowmapRiverSystem_C::ExecuteUbergraph_BP_FlowmapRiverSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ExecuteUbergraph_BP_FlowmapRiverSystem");

	ABP_FlowmapRiverSystem_C_ExecuteUbergraph_BP_FlowmapRiverSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
