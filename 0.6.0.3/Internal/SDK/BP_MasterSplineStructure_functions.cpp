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

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsGrabbable");

	ABP_MasterSplineStructure_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemNeeded");

	ABP_MasterSplineStructure_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_MasterSplineStructure_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractItem");

	ABP_MasterSplineStructure_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemInteractable");

	ABP_MasterSplineStructure_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_MasterSplineStructure_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAdditionalStatus");

	ABP_MasterSplineStructure_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractAdditionalStatus");

	ABP_MasterSplineStructure_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFishData");

	ABP_MasterSplineStructure_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetID");

	ABP_MasterSplineStructure_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractionDistance");

	ABP_MasterSplineStructure_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOff-HandItem");

	ABP_MasterSplineStructure_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCondition");

	ABP_MasterSplineStructure_C_GetInteractCondition_Params params;
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


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractCondition");

	ABP_MasterSplineStructure_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolNeeded");

	ABP_MasterSplineStructure_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOwnershipType");

	ABP_MasterSplineStructure_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_MasterSplineStructure_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTitle");

	ABP_MasterSplineStructure_C_GetInteractTitle_Params params;
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


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_MasterSplineStructure_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractResources");

	ABP_MasterSplineStructure_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFluidType");

	ABP_MasterSplineStructure_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractTime");

	ABP_MasterSplineStructure_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool_UI");

	ABP_MasterSplineStructure_C_GetInteractTool_UI_Params params;
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


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable_UI");

	ABP_MasterSplineStructure_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable");

	ABP_MasterSplineStructure_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetTaskFromActor");

	ABP_MasterSplineStructure_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_MasterSplineStructure_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractName");

	ABP_MasterSplineStructure_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_MasterSplineStructure_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAction");

	ABP_MasterSplineStructure_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractable
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
void ABP_MasterSplineStructure_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractable");

	ABP_MasterSplineStructure_C_IsInteractable_Params params;
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


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool");

	ABP_MasterSplineStructure_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCount");

	ABP_MasterSplineStructure_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetHeldItem");

	ABP_MasterSplineStructure_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetResourceType");

	ABP_MasterSplineStructure_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractAnimation");

	ABP_MasterSplineStructure_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckOccupied");

	ABP_MasterSplineStructure_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractIcon");

	ABP_MasterSplineStructure_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPointOnTheMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnMap                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::CheckPointOnTheMap(const struct FVector& Location, bool* OnMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPointOnTheMap");

	ABP_MasterSplineStructure_C_CheckPointOnTheMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnMap != nullptr)
		*OnMap = params.OnMap;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPosibleToBuild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MasterSplineStructure_C::CheckPosibleToBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPosibleToBuild");

	ABP_MasterSplineStructure_C_CheckPosibleToBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GenerateCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::GenerateCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GenerateCollision");

	ABP_MasterSplineStructure_C_GenerateCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UpdateSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::UpdateSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UpdateSplineMesh");

	ABP_MasterSplineStructure_C_UpdateSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_SplineStructures SplineStructureData            (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::GetDataToSave(struct FST_SAVE_SplineStructures* SplineStructureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetDataToSave");

	ABP_MasterSplineStructure_C_GetDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineStructureData != nullptr)
		*SplineStructureData = params.SplineStructureData;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InitAfterLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_SplineStructures SplineStructureData            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::InitAfterLoad(const struct FST_SAVE_SplineStructures& SplineStructureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InitAfterLoad");

	ABP_MasterSplineStructure_C_InitAfterLoad_Params params;
	params.SplineStructureData = SplineStructureData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ResetSplineStructure
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::ResetSplineStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ResetSplineStructure");

	ABP_MasterSplineStructure_C_ResetSplineStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::RemoveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveItem");

	ABP_MasterSplineStructure_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckCost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::CheckCost(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckCost");

	ABP_MasterSplineStructure_C_CheckCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckObstruction");

	ABP_MasterSplineStructure_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckSplineStructureIsConstructed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::CheckSplineStructureIsConstructed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckSplineStructureIsConstructed");

	ABP_MasterSplineStructure_C_CheckSplineStructureIsConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.OnOwnershipSwap");

	ABP_MasterSplineStructure_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CalculatePoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BeginLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::CalculatePoints(const struct FVector& BeginLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CalculatePoints");

	ABP_MasterSplineStructure_C_CalculatePoints_Params params;
	params.BeginLocation = BeginLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UserConstructionScript");

	ABP_MasterSplineStructure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.Interact");

	ABP_MasterSplineStructure_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractInput");

	ABP_MasterSplineStructure_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractStart");

	ABP_MasterSplineStructure_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractCancel");

	ABP_MasterSplineStructure_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetOccupied");

	ABP_MasterSplineStructure_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetTaskInActor");

	ABP_MasterSplineStructure_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ChangeTaskIsOccupied");

	ABP_MasterSplineStructure_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ToolInteract");

	ABP_MasterSplineStructure_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.PerformActorInteraction");

	ABP_MasterSplineStructure_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsLookedAt");

	ABP_MasterSplineStructure_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ShowInspectorUI");

	ABP_MasterSplineStructure_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractWithImpaledItem");

	ABP_MasterSplineStructure_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.AddImpaledItem");

	ABP_MasterSplineStructure_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveImpaledItem");

	ABP_MasterSplineStructure_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StartAttackFunction");

	ABP_MasterSplineStructure_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StopAttackFunction");

	ABP_MasterSplineStructure_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetFirstPoint
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::SetFirstPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetFirstPoint");

	ABP_MasterSplineStructure_C_SetFirstPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSplineLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::SetSplineLocation(const struct FVector& Location, bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSplineLocation");

	ABP_MasterSplineStructure_C_SetSplineLocation_Params params;
	params.Location = Location;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSecondPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::SetSecondPoint(const struct FVector& Location, bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSecondPoint");

	ABP_MasterSplineStructure_C_SetSecondPoint_Params params;
	params.Location = Location;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CreateSplineGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::CreateSplineGhost(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CreateSplineGhost");

	ABP_MasterSplineStructure_C_CreateSplineGhost_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.DestroySpline
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::DestroySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.DestroySpline");

	ABP_MasterSplineStructure_C_DestroySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterSplineStructure_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ReceiveBeginPlay");

	ABP_MasterSplineStructure_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::ExecuteInitialVisuals(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialVisuals");

	ABP_MasterSplineStructure_C_ExecuteInitialVisuals_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterSplineStructure_C::ExecuteInitialLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialLogic");

	ABP_MasterSplineStructure_C_ExecuteInitialLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.FinishedBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::FinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.FinishedBuilding");

	ABP_MasterSplineStructure_C_FinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishVisuals
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::ExecuteFinishVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishVisuals");

	ABP_MasterSplineStructure_C_ExecuteFinishVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishLogic
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterSplineStructure_C::ExecuteFinishLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishLogic");

	ABP_MasterSplineStructure_C_ExecuteFinishLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteUbergraph_BP_MasterSplineStructure
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterSplineStructure_C::ExecuteUbergraph_BP_MasterSplineStructure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteUbergraph_BP_MasterSplineStructure");

	ABP_MasterSplineStructure_C_ExecuteUbergraph_BP_MasterSplineStructure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
