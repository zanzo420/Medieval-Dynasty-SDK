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

// Function BP_MasterField.BP_MasterField_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsGrabbable");

	ABP_MasterField_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_MasterField.BP_MasterField_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsItemInteractable");

	ABP_MasterField_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_MasterField_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractItem");

	ABP_MasterField_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_MasterField.BP_MasterField_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsItemNeeded");

	ABP_MasterField_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_MasterField_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractAdditionalStatus");

	ABP_MasterField_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_MasterField.BP_MasterField_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsInteractAdditionalStatus");

	ABP_MasterField_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_MasterField.BP_MasterField_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetFishData");

	ABP_MasterField_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterField.BP_MasterField_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetID");

	ABP_MasterField_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractionDistance");

	ABP_MasterField_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterField.BP_MasterField_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetOff-HandItem");

	ABP_MasterField_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractCondition");

	ABP_MasterField_C_GetInteractCondition_Params params;
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


// Function BP_MasterField.BP_MasterField_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsInteractCondition");

	ABP_MasterField_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_MasterField.BP_MasterField_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsToolNeeded");

	ABP_MasterField_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetOwnershipType");

	ABP_MasterField_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractTitle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_MasterField_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractTitle");

	ABP_MasterField_C_GetInteractTitle_Params params;
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


// Function BP_MasterField.BP_MasterField_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_MasterField_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractResources");

	ABP_MasterField_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_MasterField.BP_MasterField_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetFluidType");

	ABP_MasterField_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_MasterField.BP_MasterField_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsToolInteractable_UI");

	ABP_MasterField_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractTool_UI");

	ABP_MasterField_C_GetInteractTool_UI_Params params;
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


// Function BP_MasterField.BP_MasterField_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetNPCInteractTime");

	ABP_MasterField_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_MasterField.BP_MasterField_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsToolInteractable");

	ABP_MasterField_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterField.BP_MasterField_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetTaskFromActor");

	ABP_MasterField_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractIcon");

	ABP_MasterField_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_MasterField_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractName");

	ABP_MasterField_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_MasterField_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractAction");

	ABP_MasterField_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_MasterField.BP_MasterField_C.IsInteractable
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
void ABP_MasterField_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsInteractable");

	ABP_MasterField_C_IsInteractable_Params params;
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


// Function BP_MasterField.BP_MasterField_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractTool");

	ABP_MasterField_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_MasterField.BP_MasterField_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetInteractCount");

	ABP_MasterField_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_MasterField.BP_MasterField_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetHeldItem");

	ABP_MasterField_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_MasterField.BP_MasterField_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetResourceType");

	ABP_MasterField_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_MasterField.BP_MasterField_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetNPCInteractAnimation");

	ABP_MasterField_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_MasterField.BP_MasterField_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckOccupied");

	ABP_MasterField_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_MasterField.BP_MasterField_C.CheckPointOnTheMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnMap                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CheckPointOnTheMap(const struct FVector& Location, bool* OnMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckPointOnTheMap");

	ABP_MasterField_C_CheckPointOnTheMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnMap != nullptr)
		*OnMap = params.OnMap;

}


// Function BP_MasterField.BP_MasterField_C.IsChunkInteractableForNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterBuilding_C*    WorkPlace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsChunkInteractableForNPC(int ChunkId, class ABP_MasterBuilding_C* WorkPlace, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsChunkInteractableForNPC");

	ABP_MasterField_C_IsChunkInteractableForNPC_Params params;
	params.ChunkId = ChunkId;
	params.WorkPlace = WorkPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.IgnorePlantSlotRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IgnorePlantSlotRotation(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, bool* Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IgnorePlantSlotRotation");

	ABP_MasterField_C_IgnorePlantSlotRotation_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ignore != nullptr)
		*Ignore = params.Ignore;

}


// Function BP_MasterField.BP_MasterField_C.DisableInspector
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::DisableInspector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.DisableInspector");

	ABP_MasterField_C_DisableInspector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.EnableInspector
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::EnableInspector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.EnableInspector");

	ABP_MasterField_C_EnableInspector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.RefreshTasksList
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::RefreshTasksList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.RefreshTasksList");

	ABP_MasterField_C_RefreshTasksList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetChunkStageForCycle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Chunks              ChunkData                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::GetChunkStageForCycle(struct FST_Chunks* ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetChunkStageForCycle");

	ABP_MasterField_C_GetChunkStageForCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChunkData != nullptr)
		*ChunkData = params.ChunkData;

}


// Function BP_MasterField.BP_MasterField_C.InitAfterLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Fields         FieldData                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           OldSave                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::InitAfterLoad(const struct FST_SAVE_Fields& FieldData, bool OldSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InitAfterLoad");

	ABP_MasterField_C_InitAfterLoad_Params params;
	params.FieldData = FieldData;
	params.OldSave = OldSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Fields         FieldData                      (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterField_C::GetDataToSave(struct FST_SAVE_Fields* FieldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetDataToSave");

	ABP_MasterField_C_GetDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FieldData != nullptr)
		*FieldData = params.FieldData;

}


// Function BP_MasterField.BP_MasterField_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.OnOwnershipSwap");

	ABP_MasterField_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SortTasksList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::SortTasksList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SortTasksList");

	ABP_MasterField_C_SortTasksList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ChunkInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_MasterField_C::ChunkInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool Timer, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ChunkInteraction");

	ABP_MasterField_C_ChunkInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Timer = Timer;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.UpdateTasksList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldActivities_E_FieldActivities> NextActivities                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ChunkDestination               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::UpdateTasksList(TEnumAsByte<E_FieldActivities_E_FieldActivities> NextActivities, int ChunkId, const struct FVector& ChunkDestination, bool Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateTasksList");

	ABP_MasterField_C_UpdateTasksList_Params params;
	params.NextActivities = NextActivities;
	params.ChunkId = ChunkId;
	params.ChunkDestination = ChunkDestination;
	params.Sort = Sort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CheckChunkHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::CheckChunkHarvested(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckChunkHarvested");

	ABP_MasterField_C_CheckChunkHarvested_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.PlantSlotInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CheckRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SkilledFarmerBoost             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemResourceOwner> Items                          (Parm, OutParm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::PlantSlotInteraction(float CheckRadius, const struct FVector& Location, float SkilledFarmerBoost, TArray<struct FST_ItemResourceOwner>* Items, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.PlantSlotInteraction");

	ABP_MasterField_C_PlantSlotInteraction_Params params;
	params.CheckRadius = CheckRadius;
	params.Location = Location;
	params.SkilledFarmerBoost = SkilledFarmerBoost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_MasterField.BP_MasterField_C.ToolInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::ToolInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ToolInteraction");

	ABP_MasterField_C_ToolInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.UpdateMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::UpdateMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateMeshes");

	ABP_MasterField_C_UpdateMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetAdditionalMeshComponentForStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetAdditionalMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetAdditionalMeshComponentForStage");

	ABP_MasterField_C_GetAdditionalMeshComponentForStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;

}


// Function BP_MasterField.BP_MasterField_C.UpdateChunkGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::UpdateChunkGround(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateChunkGround");

	ABP_MasterField_C_UpdateChunkGround_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SeasonalUpdateChunk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::SeasonalUpdateChunk(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SeasonalUpdateChunk");

	ABP_MasterField_C_SeasonalUpdateChunk_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SeasonalUpdateField
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::SeasonalUpdateField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SeasonalUpdateField");

	ABP_MasterField_C_SeasonalUpdateField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.UpdateFieldGround
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::UpdateFieldGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateFieldGround");

	ABP_MasterField_C_UpdateFieldGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CreateChunks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BeginFertility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CreateChunks(float BeginFertility, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CreateChunks");

	ABP_MasterField_C_CreateChunks_Params params;
	params.BeginFertility = BeginFertility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.SetChunkTargetSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Seed                Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::SetChunkTargetSeed(int ChunkId, const struct FST_Seed& Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetChunkTargetSeed");

	ABP_MasterField_C_SetChunkTargetSeed_Params params;
	params.ChunkId = ChunkId;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SetPlaceable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Placeable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::SetPlaceable(bool Placeable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetPlaceable");

	ABP_MasterField_C_SetPlaceable_Params params;
	params.Placeable = Placeable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CheckObstruction(bool Load, bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckObstruction");

	ABP_MasterField_C_CheckObstruction_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterField.BP_MasterField_C.SetSecondCorner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::SetSecondCorner(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetSecondCorner");

	ABP_MasterField_C_SetSecondCorner_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SetFirstCorner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::SetFirstCorner(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetFirstCorner");

	ABP_MasterField_C_SetFirstCorner_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetMeshComponentForStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetMeshComponentForStage");

	ABP_MasterField_C_GetMeshComponentForStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;

}


// Function BP_MasterField.BP_MasterField_C.UpdateAllInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::UpdateAllInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateAllInstances");

	ABP_MasterField_C_UpdateAllInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.UpdateChunkInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::UpdateChunkInstances(int ChunkId, bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateChunkInstances");

	ABP_MasterField_C_UpdateChunkInstances_Params params;
	params.ChunkId = ChunkId;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.UpdateInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> TargetPlantStage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlantSlot           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::UpdateInstance(int SlotID, TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> TargetPlantStage, const struct FST_PlantSlot& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UpdateInstance");

	ABP_MasterField_C_UpdateInstance_Params params;
	params.SlotID = SlotID;
	params.TargetPlantStage = TargetPlantStage;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InitInstances
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::InitInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InitInstances");

	ABP_MasterField_C_InitInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetSeedForPlantStage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Seed                Seed                           (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::GetSeedForPlantStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, bool* Success, struct FST_Seed* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetSeedForPlantStage");

	ABP_MasterField_C_GetSeedForPlantStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Seed != nullptr)
		*Seed = params.Seed;

}


// Function BP_MasterField.BP_MasterField_C.CanBeDestroyed?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBeDestroyed_                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CanBeDestroyed_(bool* CanBeDestroyed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CanBeDestroyed?");

	ABP_MasterField_C_CanBeDestroyed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBeDestroyed_ != nullptr)
		*CanBeDestroyed_ = params.CanBeDestroyed_;

}


// Function BP_MasterField.BP_MasterField_C.FieldWasGrubbedUp?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FieldWasGrubbedUp_             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::FieldWasGrubbedUp_(bool* FieldWasGrubbedUp_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.FieldWasGrubbedUp?");

	ABP_MasterField_C_FieldWasGrubbedUp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FieldWasGrubbedUp_ != nullptr)
		*FieldWasGrubbedUp_ = params.FieldWasGrubbedUp_;

}


// Function BP_MasterField.BP_MasterField_C.GenerateDestruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GenerateDestruction(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GenerateDestruction");

	ABP_MasterField_C_GenerateDestruction_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CreateAreaMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::CreateAreaMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CreateAreaMarkers");

	ABP_MasterField_C_CreateAreaMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.GetTerrainHitLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CheckDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::GetTerrainHitLocation(const struct FVector& CheckLocation, float CheckDistance, bool* Success, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetTerrainHitLocation");

	ABP_MasterField_C_GetTerrainHitLocation_Params params;
	params.CheckLocation = CheckLocation;
	params.CheckDistance = CheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

}


// Function BP_MasterField.BP_MasterField_C.FindClosestFoliageSpawnPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      SpawnPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform              RootTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          Tolerance                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::FindClosestFoliageSpawnPoint(TArray<struct FTransform>* SpawnPoints, const struct FTransform& RootTransform, float Tolerance, bool* Succes, int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.FindClosestFoliageSpawnPoint");

	ABP_MasterField_C_FindClosestFoliageSpawnPoint_Params params;
	params.RootTransform = RootTransform;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterField.BP_MasterField_C.CheckFoliageInFieldBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              Chunk                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::CheckFoliageInFieldBounds(const struct FTransform& Transform, bool* Success, struct FST_Chunks* Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckFoliageInFieldBounds");

	ABP_MasterField_C_CheckFoliageInFieldBounds_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;

}


// Function BP_MasterField.BP_MasterField_C.CalculateFoliageSpawnPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CenterLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfFoliage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>      FoliageSpawnTransforms         (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CalculateFoliageSpawnPoints(const struct FVector& CenterLocation, int NumberOfFoliage, TArray<struct FTransform>* FoliageSpawnTransforms, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CalculateFoliageSpawnPoints");

	ABP_MasterField_C_CalculateFoliageSpawnPoints_Params params;
	params.CenterLocation = CenterLocation;
	params.NumberOfFoliage = NumberOfFoliage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoliageSpawnTransforms != nullptr)
		*FoliageSpawnTransforms = params.FoliageSpawnTransforms;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.GetChunkOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Occupied                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::GetChunkOccupied(int ChunkId, bool* Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetChunkOccupied");

	ABP_MasterField_C_GetChunkOccupied_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Occupied != nullptr)
		*Occupied = params.Occupied;

}


// Function BP_MasterField.BP_MasterField_C.SetChunkOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::SetChunkOccupied(int ChunkId, bool Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetChunkOccupied");

	ABP_MasterField_C_SetChunkOccupied_Params params;
	params.ChunkId = ChunkId;
	params.Occupied = Occupied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CalculateCenterLocationXY
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 CenterLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::CalculateCenterLocationXY(const struct FVector& V0, const struct FVector& v2, bool* Success, struct FVector* CenterLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CalculateCenterLocationXY");

	ABP_MasterField_C_CalculateCenterLocationXY_Params params;
	params.V0 = V0;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CenterLocation != nullptr)
		*CenterLocation = params.CenterLocation;

}


// Function BP_MasterField.BP_MasterField_C.FindClosestChunk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RootLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ChunkStates_E_ChunkStates> ChunkState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreChunkState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyNoOccupied                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              Chunk                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::FindClosestChunk(const struct FVector& RootLocation, TEnumAsByte<E_ChunkStates_E_ChunkStates> ChunkState, bool IgnoreChunkState, bool OnlyNoOccupied, bool* Success, struct FST_Chunks* Chunk, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.FindClosestChunk");

	ABP_MasterField_C_FindClosestChunk_Params params;
	params.RootLocation = RootLocation;
	params.ChunkState = ChunkState;
	params.IgnoreChunkState = IgnoreChunkState;
	params.OnlyNoOccupied = OnlyNoOccupied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterField.BP_MasterField_C.GetHitChunk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              Chunk                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::GetHitChunk(const struct FVector& HitLocation, bool* Success, struct FST_Chunks* Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.GetHitChunk");

	ABP_MasterField_C_GetHitChunk_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;

}


// Function BP_MasterField.BP_MasterField_C.CheckFieldBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnlyCheck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              Chunk                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::CheckFieldBounds(const struct FVector& HitLocation, bool OnlyCheck, bool* Success, struct FST_Chunks* Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckFieldBounds");

	ABP_MasterField_C_CheckFieldBounds_Params params;
	params.HitLocation = HitLocation;
	params.OnlyCheck = OnlyCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;

}


// Function BP_MasterField.BP_MasterField_C.CheckBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 V3                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CheckBounds(const struct FVector& HitLocation, const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FVector& V3, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CheckBounds");

	ABP_MasterField_C_CheckBounds_Params params;
	params.HitLocation = HitLocation;
	params.V0 = V0;
	params.v1 = v1;
	params.v2 = v2;
	params.V3 = V3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterField.BP_MasterField_C.SortFieldCornerVertices
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SortedVertices                 (Parm, OutParm)
void ABP_MasterField_C::SortFieldCornerVertices(TArray<struct FVector>* SortedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SortFieldCornerVertices");

	ABP_MasterField_C_SortFieldCornerVertices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortedVertices != nullptr)
		*SortedVertices = params.SortedVertices;

}


// Function BP_MasterField.BP_MasterField_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.UserConstructionScript");

	ABP_MasterField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InteractInput");

	ABP_MasterField_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetOccupied");

	ABP_MasterField_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SetTaskInActor");

	ABP_MasterField_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ChangeTaskIsOccupied");

	ABP_MasterField_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.PerformActorInteraction");

	ABP_MasterField_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.IsLookedAt");

	ABP_MasterField_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InteractWithImpaledItem");

	ABP_MasterField_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.AddImpaledItem");

	ABP_MasterField_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.RemoveImpaledItem");

	ABP_MasterField_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.StartAttackFunction");

	ABP_MasterField_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.StopAttackFunction");

	ABP_MasterField_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.CreateField
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::CreateField(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.CreateField");

	ABP_MasterField_C_CreateField_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InitField
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::InitField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InitField");

	ABP_MasterField_C_InitField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.Interact");

	ABP_MasterField_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InteractStart");

	ABP_MasterField_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InteractCancel");

	ABP_MasterField_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.SeasonalChanges
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::SeasonalChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.SeasonalChanges");

	ABP_MasterField_C_SeasonalChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterField_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ToolInteract");

	ABP_MasterField_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterField_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ReceiveBeginPlay");

	ABP_MasterField_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ShowInspectorUI");

	ABP_MasterField_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InitTaskList
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterField_C::InitTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InitTaskList");

	ABP_MasterField_C_InitTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.InitMeshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterField_C::InitMeshes(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.InitMeshes");

	ABP_MasterField_C_InitMeshes_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterField.BP_MasterField_C.ExecuteUbergraph_BP_MasterField
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterField_C::ExecuteUbergraph_BP_MasterField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterField.BP_MasterField_C.ExecuteUbergraph_BP_MasterField");

	ABP_MasterField_C_ExecuteUbergraph_BP_MasterField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
