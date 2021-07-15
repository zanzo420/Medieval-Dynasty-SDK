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

// Function BP_AquaticSurface.BP_AquaticSurface_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsGrabbable");

	ABP_AquaticSurface_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsItemNeeded");

	ABP_AquaticSurface_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_AquaticSurface_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractItem");

	ABP_AquaticSurface_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsItemInteractable");

	ABP_AquaticSurface_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_AquaticSurface_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractAdditionalStatus");

	ABP_AquaticSurface_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractAdditionalStatus");

	ABP_AquaticSurface_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetFishData");

	ABP_AquaticSurface_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetID");

	ABP_AquaticSurface_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractionDistance");

	ABP_AquaticSurface_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetOff-HandItem");

	ABP_AquaticSurface_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractCondition");

	ABP_AquaticSurface_C_GetInteractCondition_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractCondition");

	ABP_AquaticSurface_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolNeeded");

	ABP_AquaticSurface_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetOwnershipType");

	ABP_AquaticSurface_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_AquaticSurface_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTitle");

	ABP_AquaticSurface_C_GetInteractTitle_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_AquaticSurface_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractResources");

	ABP_AquaticSurface_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetFluidType");

	ABP_AquaticSurface_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetNPCInteractTime");

	ABP_AquaticSurface_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTool_UI");

	ABP_AquaticSurface_C_GetInteractTool_UI_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolInteractable_UI");

	ABP_AquaticSurface_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsToolInteractable");

	ABP_AquaticSurface_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetTaskFromActor");

	ABP_AquaticSurface_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_AquaticSurface_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractName");

	ABP_AquaticSurface_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_AquaticSurface_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractAction");

	ABP_AquaticSurface_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractable
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
void ABP_AquaticSurface_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsInteractable");

	ABP_AquaticSurface_C_IsInteractable_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractTool");

	ABP_AquaticSurface_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractCount");

	ABP_AquaticSurface_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetHeldItem");

	ABP_AquaticSurface_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetResourceType");

	ABP_AquaticSurface_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetNPCInteractAnimation");

	ABP_AquaticSurface_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.CheckOccupied");

	ABP_AquaticSurface_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetInteractIcon");

	ABP_AquaticSurface_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCharacters
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdateCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCharacters");

	ABP_AquaticSurface_C_UpdateCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OverlapCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::OverlapCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OverlapCamera");

	ABP_AquaticSurface_C_OverlapCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateAudioVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdateAudioVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateAudioVolume");

	ABP_AquaticSurface_C_UpdateAudioVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.PlaySplashEffectByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 SplashLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SplashScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SplashVelocity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::PlaySplashEffectByIndex(int Index, const struct FVector& SplashLocation, float SplashScale, float SplashVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.PlaySplashEffectByIndex");

	ABP_AquaticSurface_C_PlaySplashEffectByIndex_Params params;
	params.Index = Index;
	params.SplashLocation = SplashLocation;
	params.SplashScale = SplashScale;
	params.SplashVelocity = SplashVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateInteractionComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InteractionRadius              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::UpdateInteractionComponent(const struct FVector2D& Location, float InteractionRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateInteractionComponent");

	ABP_AquaticSurface_C_UpdateInteractionComponent_Params params;
	params.Location = Location;
	params.InteractionRadius = InteractionRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.Reconstruct
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::Reconstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.Reconstruct");

	ABP_AquaticSurface_C_Reconstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.GetHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::GetHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.GetHeight");

	ABP_AquaticSurface_C_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherAtor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          List                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_AquaticSurface_C::OnEndOverlapInteraction(class AActor* OtherAtor, TArray<class AActor*>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapInteraction");

	ABP_AquaticSurface_C_OnEndOverlapInteraction_Params params;
	params.OtherAtor = OtherAtor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          List                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_AquaticSurface_C::OnBeginOverlapInteraction(class AActor* OtherActor, TArray<class AActor*>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapInteraction");

	ABP_AquaticSurface_C_OnBeginOverlapInteraction_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapBuoyancy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherAtor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::OnEndOverlapBuoyancy(class AActor* OtherAtor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapBuoyancy");

	ABP_AquaticSurface_C_OnEndOverlapBuoyancy_Params params;
	params.OtherAtor = OtherAtor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.SetInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::SetInteraction(class UTexture* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.SetInteraction");

	ABP_AquaticSurface_C_SetInteraction_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapBuoyancy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::OnBeginOverlapBuoyancy(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapBuoyancy");

	ABP_AquaticSurface_C_OnBeginOverlapBuoyancy_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.InitMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::InitMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.InitMaterials");

	ABP_AquaticSurface_C_InitMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdatePostProcessShape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdatePostProcessShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdatePostProcessShape");

	ABP_AquaticSurface_C_UpdatePostProcessShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateVolume
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdateVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateVolume");

	ABP_AquaticSurface_C_UpdateVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UserConstructionScript");

	ABP_AquaticSurface_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.InteractInput");

	ABP_AquaticSurface_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.SetOccupied");

	ABP_AquaticSurface_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.SetTaskInActor");

	ABP_AquaticSurface_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.ChangeTaskIsOccupied");

	ABP_AquaticSurface_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_AquaticSurface_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.ToolInteract");

	ABP_AquaticSurface_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.PerformActorInteraction");

	ABP_AquaticSurface_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.IsLookedAt");

	ABP_AquaticSurface_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.ShowInspectorUI");

	ABP_AquaticSurface_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.InteractWithImpaledItem");

	ABP_AquaticSurface_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.AddImpaledItem");

	ABP_AquaticSurface_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.RemoveImpaledItem");

	ABP_AquaticSurface_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.StartAttackFunction");

	ABP_AquaticSurface_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.StopAttackFunction");

	ABP_AquaticSurface_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AquaticSurface_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.ReceiveBeginPlay");

	ABP_AquaticSurface_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.CaptureEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::CaptureEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.CaptureEvent");

	ABP_AquaticSurface_C_CaptureEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AquaticSurface_C::BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AquaticSurface_C::BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCameraEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdateCameraEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCameraEvent");

	ABP_AquaticSurface_C_UpdateCameraEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.OnWorldOriginChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector              Old_Origin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntVector              New_Origin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::OnWorldOriginChanged(const struct FIntVector& Old_Origin, const struct FIntVector& New_Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.OnWorldOriginChanged");

	ABP_AquaticSurface_C_OnWorldOriginChanged_Params params;
	params.Old_Origin = Old_Origin;
	params.New_Origin = New_Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AquaticSurface_C::BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSurface_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.Interact");

	ABP_AquaticSurface_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.InteractStart");

	ABP_AquaticSurface_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.InteractCancel");

	ABP_AquaticSurface_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__Volume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AquaticSurface_C::BndEvt__Volume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__Volume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__Volume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__Volume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::BndEvt__Volume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__Volume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AquaticSurface_C_BndEvt__Volume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCharactersEvent
// (BlueprintCallable, BlueprintEvent)
void ABP_AquaticSurface_C::UpdateCharactersEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCharactersEvent");

	ABP_AquaticSurface_C_UpdateCharactersEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSurface.BP_AquaticSurface_C.ExecuteUbergraph_BP_AquaticSurface
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSurface_C::ExecuteUbergraph_BP_AquaticSurface(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSurface.BP_AquaticSurface_C.ExecuteUbergraph_BP_AquaticSurface");

	ABP_AquaticSurface_C_ExecuteUbergraph_BP_AquaticSurface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
