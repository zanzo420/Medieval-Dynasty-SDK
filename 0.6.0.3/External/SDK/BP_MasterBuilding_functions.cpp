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

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketCompatibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildingHandler                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketCompatibility");

	ABP_MasterBuilding_C_CheckSocketCompatibility_Params params;
	params.BuildingHandler = BuildingHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetSocketLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetSocketLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetSocketLocation");

	ABP_MasterBuilding_C_GetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingHandlers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     HandlerToCompare               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<struct FDataTableRowHandle> BuildingHandlers               (Parm, OutParm)
// bool                           Compatibility                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingHandlers");

	ABP_MasterBuilding_C_GetBuildingHandlers_Params params;
	params.HandlerToCompare = HandlerToCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingHandlers != nullptr)
		*BuildingHandlers = params.BuildingHandlers;
	if (Compatibility != nullptr)
		*Compatibility = params.Compatibility;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    MasterBuilding                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetBuildingReference(class ABP_MasterBuilding_C** MasterBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingReference");

	ABP_MasterBuilding_C_GetBuildingReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterBuilding != nullptr)
		*MasterBuilding = params.MasterBuilding;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetEntrances
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Entrances                      (Parm, OutParm)
void ABP_MasterBuilding_C::GetEntrances(TArray<struct FVector>* Entrances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetEntrances");

	ABP_MasterBuilding_C_GetEntrances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entrances != nullptr)
		*Entrances = params.Entrances;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> GetBuildingType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingType");

	ABP_MasterBuilding_C_GetBuildingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetBuildingType != nullptr)
		*GetBuildingType = params.GetBuildingType;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsGrabbable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Grabbable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsGrabbable(bool* Grabbable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsGrabbable");

	ABP_MasterBuilding_C_IsGrabbable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemNeeded");

	ABP_MasterBuilding_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle     ItemHandler                    (Parm, OutParm, NoDestructor)
void ABP_MasterBuilding_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractItem");

	ABP_MasterBuilding_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemInteractable");

	ABP_MasterBuilding_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Status                         (Parm, OutParm)
void ABP_MasterBuilding_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAdditionalStatus");

	ABP_MasterBuilding_C_GetInteractAdditionalStatus_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractAdditionalStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractAdditionalStatus");

	ABP_MasterBuilding_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFishData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemResource        Item                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFishData");

	ABP_MasterBuilding_C_GetFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetID(struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetID");

	ABP_MasterBuilding_C_GetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractionDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractionDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractionDistance");

	ABP_MasterBuilding_C_GetInteractionDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetOff-HandItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* Off_HandItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetOff-HandItem");

	ABP_MasterBuilding_C_GetOff_HandItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CustomText                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
// bool                           CustomColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCondition");

	ABP_MasterBuilding_C_GetInteractCondition_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckCondition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractCondition");

	ABP_MasterBuilding_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolNeeded");

	ABP_MasterBuilding_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetOwnershipType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetOwnershipType");

	ABP_MasterBuilding_C_GetOwnershipType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ownership != nullptr)
		*Ownership = params.Ownership;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTitle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Title                          (Parm, OutParm)
// bool                           ShowAdditionalTitle1           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText1           (Parm, OutParm)
// bool                           ShowAdditionalTitle2           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   AdditionalTitleText2           (Parm, OutParm)
void ABP_MasterBuilding_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTitle");

	ABP_MasterBuilding_C_GetInteractTitle_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> Resources                      (Parm, OutParm)
void ABP_MasterBuilding_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractResources");

	ABP_MasterBuilding_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FuildType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFluidType");

	ABP_MasterBuilding_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FuildType != nullptr)
		*FuildType = params.FuildType;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool_UI");

	ABP_MasterBuilding_C_GetInteractTool_UI_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable_UI");

	ABP_MasterBuilding_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNPCInteractTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractTime");

	ABP_MasterBuilding_C_GetNPCInteractTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable");

	ABP_MasterBuilding_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTaskFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetTaskFromActor(struct FST_TaskList* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTaskFromActor");

	ABP_MasterBuilding_C_GetTaskFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractIcon");

	ABP_MasterBuilding_C_GetInteractIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::CheckOccupied(class APawn** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckOccupied");

	ABP_MasterBuilding_C_CheckOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractAnimation");

	ABP_MasterBuilding_C_GetNPCInteractAnimation_Params params;
	params.Sex = Sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetResourceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetResourceType");

	ABP_MasterBuilding_C_GetResourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetHeldItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterHoldableItem_C* HeldItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetHeldItem");

	ABP_MasterBuilding_C_GetHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_MasterBuilding_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractName");

	ABP_MasterBuilding_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InteractActionText             (Parm, OutParm)
// struct FText                   InteractSecondActionText       (Parm, OutParm)
void ABP_MasterBuilding_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAction");

	ABP_MasterBuilding_C_GetInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractable
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
void ABP_MasterBuilding_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractable");

	ABP_MasterBuilding_C_IsInteractable_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool");

	ABP_MasterBuilding_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetInteractCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCount");

	ABP_MasterBuilding_C_GetInteractCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseToolBuffer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::DecreaseToolBuffer(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseToolBuffer");

	ABP_MasterBuilding_C_DecreaseToolBuffer_Params params;
	params.ToolActivity = ToolActivity;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckWork(TEnumAsByte<E_Profession_E_Profession> Profession, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckWork");

	ABP_MasterBuilding_C_CheckWork_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckTool
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Tools_E_Tools>   ToolForAnimation               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::CheckTool(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity, float Value, TEnumAsByte<E_Profession_E_Profession> Profession, bool* Success, TEnumAsByte<E_Tools_E_Tools>* ToolForAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckTool");

	ABP_MasterBuilding_C_CheckTool_Params params;
	params.ToolActivity = ToolActivity;
	params.Value = Value;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ToolForAnimation != nullptr)
		*ToolForAnimation = params.ToolForAnimation;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckPointOnTheMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnMap                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckPointOnTheMap(const struct FVector& Location, bool* OnMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckPointOnTheMap");

	ABP_MasterBuilding_C_CheckPointOnTheMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnMap != nullptr)
		*OnMap = params.OnMap;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetShopType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ShopType_E_ShopType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InitTradingData                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::SetShopType(TEnumAsByte<E_ShopType_E_ShopType> Type, bool InitTradingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetShopType");

	ABP_MasterBuilding_C_SetShopType_Params params;
	params.Type = Type;
	params.InitTradingData = InitTradingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.OnPeopleOrAnimalsListChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::OnPeopleOrAnimalsListChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnPeopleOrAnimalsListChanged");

	ABP_MasterBuilding_C_OnPeopleOrAnimalsListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.WoodDemand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Demand                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::WoodDemand(float* Demand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.WoodDemand");

	ABP_MasterBuilding_C_WoodDemand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Demand != nullptr)
		*Demand = params.Demand;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.WaterDemand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Demand                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::WaterDemand(float* Demand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.WaterDemand");

	ABP_MasterBuilding_C_WaterDemand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Demand != nullptr)
		*Demand = params.Demand;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.FoodDemand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Demand                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::FoodDemand(float* Demand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FoodDemand");

	ABP_MasterBuilding_C_FoodDemand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Demand != nullptr)
		*Demand = params.Demand;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasResouces
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Resources                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasResouces(bool* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasResouces");

	ABP_MasterBuilding_C_HasResouces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasTools
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Tools                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasTools(bool* Tools)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasTools");

	ABP_MasterBuilding_C_HasTools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tools != nullptr)
		*Tools = params.Tools;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SlotTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                           HaveStartPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              StartPoint                     (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::UnoccupyWorkSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlot");

	ABP_MasterBuilding_C_UnoccupyWorkSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlots
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UnoccupyWorkSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlots");

	ABP_MasterBuilding_C_UnoccupyWorkSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupyWorkSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SlotTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                           HaveStartPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              StartPointTransform            (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::OccupyWorkSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OccupyWorkSlot");

	ABP_MasterBuilding_C_OccupyWorkSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomUnoccupiedWorkSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WorkSlotIndexToIgnore          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WorkSlotIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetRandomUnoccupiedWorkSlot(int WorkSlotIndexToIgnore, int* WorkSlotIndex, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomUnoccupiedWorkSlot");

	ABP_MasterBuilding_C_GetRandomUnoccupiedWorkSlot_Params params;
	params.WorkSlotIndexToIgnore = WorkSlotIndexToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedWorkSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WorkSlotIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetUnoccupiedWorkSlot(int* WorkSlotIndex, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedWorkSlot");

	ABP_MasterBuilding_C_GetUnoccupiedWorkSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetSocket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SetSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetSocket");

	ABP_MasterBuilding_C_SetSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RecoverResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::RecoverResources(class UInventoryComponent_C* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RecoverResources");

	ABP_MasterBuilding_C_RecoverResources_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetTax(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTax");

	ABP_MasterBuilding_C_GetTax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckItemInChest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RemoveItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckItemInChest(bool RemoveItem, const struct FName& Item, bool* IsItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckItemInChest");

	ABP_MasterBuilding_C_CheckItemInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsItem != nullptr)
		*IsItem = params.IsItem;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumbersOfAnimals
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> AnimalType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            YoungFemaleCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            YoungMaleCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FemaleCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaleCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNumbersOfAnimals(TEnumAsByte<E_Animals_E_Animals> AnimalType, int* YoungFemaleCount, int* YoungMaleCount, int* FemaleCount, int* MaleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumbersOfAnimals");

	ABP_MasterBuilding_C_GetNumbersOfAnimals_Params params;
	params.AnimalType = AnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (YoungFemaleCount != nullptr)
		*YoungFemaleCount = params.YoungFemaleCount;
	if (YoungMaleCount != nullptr)
		*YoungMaleCount = params.YoungMaleCount;
	if (FemaleCount != nullptr)
		*FemaleCount = params.FemaleCount;
	if (MaleCount != nullptr)
		*MaleCount = params.MaleCount;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CanBeDestroyed?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBeDestroyed_                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CanBeDestroyed_(bool* CanBeDestroyed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CanBeDestroyed?");

	ABP_MasterBuilding_C_CanBeDestroyed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBeDestroyed_ != nullptr)
		*CanBeDestroyed_ = params.CanBeDestroyed_;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           wood                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasWood(bool* wood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasWood");

	ABP_MasterBuilding_C_HasWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wood != nullptr)
		*wood = params.wood;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           water                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasWater(bool* water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasWater");

	ABP_MasterBuilding_C_HasWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (water != nullptr)
		*water = params.water;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasFood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Food                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasFood(bool* Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasFood");

	ABP_MasterBuilding_C_HasFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Food != nullptr)
		*Food = params.Food;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasAnimals
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Animals                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasAnimals(bool* Animals)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasAnimals");

	ABP_MasterBuilding_C_HasAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animals != nullptr)
		*Animals = params.Animals;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWorkers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Workers                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::HasWorkers(bool* Workers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.HasWorkers");

	ABP_MasterBuilding_C_HasWorkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Workers != nullptr)
		*Workers = params.Workers;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InitNPCBuildingAfterLoad
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_SAVE_Containers> Containers                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InitNPCBuildingAfterLoad(TArray<struct FST_SAVE_Containers>* Containers, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitNPCBuildingAfterLoad");

	ABP_MasterBuilding_C_InitNPCBuildingAfterLoad_Params params;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Containers != nullptr)
		*Containers = params.Containers;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_NPC_Building   BuildingData                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNPCDataToSave(struct FST_SAVE_NPC_Building* BuildingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCDataToSave");

	ABP_MasterBuilding_C_GetNPCDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingData != nullptr)
		*BuildingData = params.BuildingData;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfFurnitures
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNumberOfFurnitures(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfFurnitures");

	ABP_MasterBuilding_C_GetNumberOfFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.FindProductionItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Production_Recipe   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FST_Production_Progress> OldProduction                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Production_Progress RecipeProgress                 (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterBuilding_C::FindProductionItem(const struct FST_Production_Recipe& Recipe, TArray<struct FST_Production_Progress>* OldProduction, bool* Success, struct FST_Production_Progress* RecipeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FindProductionItem");

	ABP_MasterBuilding_C_FindProductionItem_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OldProduction != nullptr)
		*OldProduction = params.OldProduction;
	if (Success != nullptr)
		*Success = params.Success;
	if (RecipeProgress != nullptr)
		*RecipeProgress = params.RecipeProgress;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsDamaged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Damaged                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsDamaged(bool* Damaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsDamaged");

	ABP_MasterBuilding_C_IsDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damaged != nullptr)
		*Damaged = params.Damaged;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllAnimals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::RemoveAllAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllAnimals");

	ABP_MasterBuilding_C_RemoveAllAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnBuildingChangeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UpdateProductionOnBuildingChangeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnBuildingChangeLevel");

	ABP_MasterBuilding_C_UpdateProductionOnBuildingChangeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsLastUnconstructedModule
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Last                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsLastUnconstructedModule(bool* Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsLastUnconstructedModule");

	ABP_MasterBuilding_C_IsLastUnconstructedModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Last != nullptr)
		*Last = params.Last;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsChestEmpty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsChestEmpty(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsChestEmpty");

	ABP_MasterBuilding_C_IsChestEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SlotTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                           HaveStartPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              StartPoint                     (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::UnoccupySleepSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlot");

	ABP_MasterBuilding_C_UnoccupySleepSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlots
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UnoccupySleepSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlots");

	ABP_MasterBuilding_C_UnoccupySleepSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupySleepSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SlotTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                           HaveStartPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              StartPointTransform            (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::OccupySleepSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OccupySleepSlot");

	ABP_MasterBuilding_C_OccupySleepSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedSleepSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SleepSlotIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetUnoccupiedSleepSlot(int* SleepSlotIndex, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedSleepSlot");

	ABP_MasterBuilding_C_GetUnoccupiedSleepSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SleepSlotIndex != nullptr)
		*SleepSlotIndex = params.SleepSlotIndex;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllPeople
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::RemoveAllPeople()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllPeople");

	ABP_MasterBuilding_C_RemoveAllPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfDoors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OnlyConstructed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NumberOfDoors                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetNumberOfDoors(bool OnlyConstructed, int* NumberOfDoors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfDoors");

	ABP_MasterBuilding_C_GetNumberOfDoors_Params params;
	params.OnlyConstructed = OnlyConstructed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfDoors != nullptr)
		*NumberOfDoors = params.NumberOfDoors;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetAnimalRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              VolumeTransform                (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetAnimalRange(struct FTransform* VolumeTransform, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetAnimalRange");

	ABP_MasterBuilding_C_GetAnimalRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VolumeTransform != nullptr)
		*VolumeTransform = params.VolumeTransform;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.TeleportPeople
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerIncluded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::TeleportPeople(bool PlayerIncluded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.TeleportPeople");

	ABP_MasterBuilding_C_TeleportPeople_Params params;
	params.PlayerIncluded = PlayerIncluded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetPeopleID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         ID                             (Parm, OutParm)
void ABP_MasterBuilding_C::GetPeopleID(TArray<struct FString>* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetPeopleID");

	ABP_MasterBuilding_C_GetPeopleID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdatePlacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UpdatePlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdatePlacement");

	ABP_MasterBuilding_C_UpdatePlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketPlacement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverrideTransform              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckSocketPlacement(bool* OverrideTransform, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketPlacement");

	ABP_MasterBuilding_C_CheckSocketPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OverrideTransform != nullptr)
		*OverrideTransform = params.OverrideTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InitEconomy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_SAVE_Production_Progress> ProductionDataFromFile         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Trade_Progress> TradeDataFromFile              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          WoodBufferFromFile             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FoodBufferFromFile             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WaterBufferFromFile            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InitEconomy(bool Load, TArray<struct FST_SAVE_Production_Progress>* ProductionDataFromFile, TArray<struct FST_SAVE_Trade_Progress>* TradeDataFromFile, TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitEconomy");

	ABP_MasterBuilding_C_InitEconomy_Params params;
	params.Load = Load;
	params.ToolsCostsFromFile = ToolsCostsFromFile;
	params.WoodBufferFromFile = WoodBufferFromFile;
	params.FoodBufferFromFile = FoodBufferFromFile;
	params.WaterBufferFromFile = WaterBufferFromFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProductionDataFromFile != nullptr)
		*ProductionDataFromFile = params.ProductionDataFromFile;
	if (TradeDataFromFile != nullptr)
		*TradeDataFromFile = params.TradeDataFromFile;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalDecreaseBuildingCondition
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SeasonalDecreaseBuildingCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalDecreaseBuildingCondition");

	ABP_MasterBuilding_C_SeasonalDecreaseBuildingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBuildingCondition
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UpdateBuildingCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBuildingCondition");

	ABP_MasterBuilding_C_UpdateBuildingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Buildings      BuildingData                   (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetDataToSave(struct FST_SAVE_Buildings* BuildingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDataToSave");

	ABP_MasterBuilding_C_GetDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingData != nullptr)
		*BuildingData = params.BuildingData;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InitAfterLoad
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CustomName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          ZLocation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_SAVE_Modules> ModulesData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Containers> Containers                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_RefillableContainers> RefillableContainers           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Campfires> Campfires                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Production_Progress> Production                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Trade_Progress> Trade                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<TEnumAsByte<E_Profession_E_Profession>, int> WorkIntensityFromFile          (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          WoodBufferFromFile             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FoodBufferFromFile             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WaterBufferFromFile            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FurnitureCreatedFromFile       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Event_BuildingMultipliers EventMultipliersFromFile       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<E_ShopType_E_ShopType> ShopTypeFromFile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InitAfterLoad(const struct FString& ID, const struct FString& CustomName, float ZLocation, TArray<struct FST_SAVE_Modules>* ModulesData, TArray<struct FST_SAVE_Containers>* Containers, TArray<struct FST_SAVE_RefillableContainers>* RefillableContainers, TArray<struct FST_SAVE_Campfires>* Campfires, TArray<struct FST_SAVE_Production_Progress>* Production, TArray<struct FST_SAVE_Trade_Progress>* Trade, TMap<TEnumAsByte<E_Profession_E_Profession>, int> WorkIntensityFromFile, TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, bool FurnitureCreatedFromFile, const struct FST_Event_BuildingMultipliers& EventMultipliersFromFile, const struct FString& SaveGameVersion, TEnumAsByte<E_ShopType_E_ShopType> ShopTypeFromFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitAfterLoad");

	ABP_MasterBuilding_C_InitAfterLoad_Params params;
	params.ID = ID;
	params.CustomName = CustomName;
	params.ZLocation = ZLocation;
	params.WorkIntensityFromFile = WorkIntensityFromFile;
	params.ToolsCostsFromFile = ToolsCostsFromFile;
	params.WoodBufferFromFile = WoodBufferFromFile;
	params.FoodBufferFromFile = FoodBufferFromFile;
	params.WaterBufferFromFile = WaterBufferFromFile;
	params.FurnitureCreatedFromFile = FurnitureCreatedFromFile;
	params.EventMultipliersFromFile = EventMultipliersFromFile;
	params.SaveGameVersion = SaveGameVersion;
	params.ShopTypeFromFile = ShopTypeFromFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;
	if (Containers != nullptr)
		*Containers = params.Containers;
	if (RefillableContainers != nullptr)
		*RefillableContainers = params.RefillableContainers;
	if (Campfires != nullptr)
		*Campfires = params.Campfires;
	if (Production != nullptr)
		*Production = params.Production;
	if (Trade != nullptr)
		*Trade = params.Trade;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetID
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetID");

	ABP_MasterBuilding_C_SetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.AutoAssigningPeople
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::AutoAssigningPeople()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AutoAssigningPeople");

	ABP_MasterBuilding_C_AutoAssigningPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsConstructed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckIfBuildingIsConstructed(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsConstructed");

	ABP_MasterBuilding_C_CheckIfBuildingIsConstructed_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateLevelOfWarming
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UpdateLevelOfWarming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateLevelOfWarming");

	ABP_MasterBuilding_C_UpdateLevelOfWarming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeModule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Module_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::ChangeModule(int SocketID, int Module_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeModule");

	ABP_MasterBuilding_C_ChangeModule_Params params;
	params.SocketID = SocketID;
	params.Module_ID = Module_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_MasterBuilding_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModulesDataFromSlot");

	ABP_MasterBuilding_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModuleDataFromSlot");

	ABP_MasterBuilding_C_GetBuildingModuleDataFromSlot_Params params;
	params.ModuleID = ModuleID;
	params.SocketData = SocketData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModuleData != nullptr)
		*ModuleData = params.ModuleData;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetStairs
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SetStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetStairs");

	ABP_MasterBuilding_C_SetStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeBuildingLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::ChangeBuildingLevel(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeBuildingLevel");

	ABP_MasterBuilding_C_ChangeBuildingLevel_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnOwnershipSwap");

	ABP_MasterBuilding_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsCurrentTask
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterField_C*       Field                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FieldActivities_E_FieldActivities> FieldActivity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedToolActivity               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_FieldTasksLists     Task                           (Parm, OutParm, HasGetValueTypeHash)
// int                            ChunkId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetDependentFieldsCurrentTask(class ABP_MasterField_C* Field, TEnumAsByte<E_FieldActivities_E_FieldActivities> FieldActivity, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem, struct FST_FieldTasksLists* Task, int* ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsCurrentTask");

	ABP_MasterBuilding_C_GetDependentFieldsCurrentTask_Params params;
	params.Field = Field;
	params.FieldActivity = FieldActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTask != nullptr)
		*IsTask = params.IsTask;
	if (IsItem != nullptr)
		*IsItem = params.IsItem;
	if (NeedToolActivity != nullptr)
		*NeedToolActivity = params.NeedToolActivity;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
	if (Task != nullptr)
		*Task = params.Task;
	if (ChunkId != nullptr)
		*ChunkId = params.ChunkId;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurniture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_MasterFurniture_C*> Furniture                      (Parm, OutParm)
void ABP_MasterBuilding_C::GetFurniture(TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurniture");

	ABP_MasterBuilding_C_GetFurniture_Params params;
	params.FurnitureCategory = FurnitureCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::RemoveFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveFurniture");

	ABP_MasterBuilding_C_RemoveFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFieldTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FieldTasksLists     Task                           (Parm, OutParm, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedToolActivity               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetFieldTask(struct FST_FieldTasksLists* Task, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFieldTask");

	ABP_MasterBuilding_C_GetFieldTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
	if (IsItem != nullptr)
		*IsItem = params.IsItem;
	if (NeedToolActivity != nullptr)
		*NeedToolActivity = params.NeedToolActivity;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::ChangeTaskOccupied(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskOccupied");

	ABP_MasterBuilding_C_ChangeTaskOccupied_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetBuildingTask(struct FST_TaskList* Task, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingTask");

	ABP_MasterBuilding_C_GetBuildingTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsTask
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FieldTasksLists     Task                           (Parm, OutParm, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedToolAcitvity               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GetDependentFieldsTask(struct FST_FieldTasksLists* Task, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolAcitvity, struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsTask");

	ABP_MasterBuilding_C_GetDependentFieldsTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
	if (IsItem != nullptr)
		*IsItem = params.IsItem;
	if (NeedToolAcitvity != nullptr)
		*NeedToolAcitvity = params.NeedToolAcitvity;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentBuildingsTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::GetDependentBuildingsTask(struct FST_TaskList* Task, bool* IsTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentBuildingsTask");

	ABP_MasterBuilding_C_GetDependentBuildingsTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.AddFurniture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterFurniture_C*   Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::AddFurniture(class ABP_MasterFurniture_C* Furniture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddFurniture");

	ABP_MasterBuilding_C_AddFurniture_Params params;
	params.Furniture = Furniture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SortTaskList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SortTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SortTaskList");

	ABP_MasterBuilding_C_SortTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateTaskList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsAdd                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::UpdateTaskList(const struct FST_TaskList& Task, bool IsAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateTaskList");

	ABP_MasterBuilding_C_UpdateTaskList_Params params;
	params.Task = Task;
	params.IsAdd = IsAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAnimal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::RemoveAnimal(class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAnimal");

	ABP_MasterBuilding_C_RemoveAnimal_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.AddAnimal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        Animal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::AddAnimal(class ABP_AnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddAnimal");

	ABP_MasterBuilding_C_AddAnimal_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAnimal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckIsMaxAnimal(bool* IsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAnimal");

	ABP_MasterBuilding_C_CheckIsMaxAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFull != nullptr)
		*IsFull = params.IsFull;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuilding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_SAVE_Modules> LoadModulesData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_MasterBuilding_C::GenerateBuilding(bool Init, bool Load, TArray<struct FST_SAVE_Modules>* LoadModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuilding");

	ABP_MasterBuilding_C_GenerateBuilding_Params params;
	params.Init = Init;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoadModulesData != nullptr)
		*LoadModulesData = params.LoadModulesData;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckObstruction");

	ABP_MasterBuilding_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Occupied                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckIsOccupied(bool* Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsOccupied");

	ABP_MasterBuilding_C_CheckIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Occupied != nullptr)
		*Occupied = params.Occupied;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemovePeople
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::RemovePeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemovePeople");

	ABP_MasterBuilding_C_RemovePeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxPeople
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CheckIsMaxPeople(bool* IsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxPeople");

	ABP_MasterBuilding_C_CheckIsMaxPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFull != nullptr)
		*IsFull = params.IsFull;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.AddPeople
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::AddPeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddPeople");

	ABP_MasterBuilding_C_AddPeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateDestruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::GenerateDestruction(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateDestruction");

	ABP_MasterBuilding_C_GenerateDestruction_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewBaseRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::UpdateBaseRotation(const struct FRotator& NewBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseRotation");

	ABP_MasterBuilding_C_UpdateBaseRotation_Params params;
	params.NewBaseRotation = NewBaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckBasementPlaceability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlacementPossible              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::CheckBasementPlaceability(bool* PlacementPossible, float* Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckBasementPlaceability");

	ABP_MasterBuilding_C_CheckBasementPlaceability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlacementPossible != nullptr)
		*PlacementPossible = params.PlacementPossible;
	if (Min != nullptr)
		*Min = params.Min;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UserConstructionScript");

	ABP_MasterBuilding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Interact");

	ABP_MasterBuilding_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::InteractInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InteractInput");

	ABP_MasterBuilding_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InteractStart");

	ABP_MasterBuilding_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InteractCancel");

	ABP_MasterBuilding_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::SetOccupied(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupied");

	ABP_MasterBuilding_C_SetOccupied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetTaskInActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_TaskList            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::SetTaskInActor(const struct FST_TaskList& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetTaskInActor");

	ABP_MasterBuilding_C_SetTaskInActor_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskIsOccupied
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::ChangeTaskIsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskIsOccupied");

	ABP_MasterBuilding_C_ChangeTaskIsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.PerformActorInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::PerformActorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.PerformActorInteraction");

	ABP_MasterBuilding_C_PerformActorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.IsLookedAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::IsLookedAt(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsLookedAt");

	ABP_MasterBuilding_C_IsLookedAt_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractWithImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InteractWithImpaledItem");

	ABP_MasterBuilding_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.AddImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::AddImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddImpaledItem");

	ABP_MasterBuilding_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveImpaledItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ImpaledItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::RemoveImpaledItem(class AActor* ImpaledItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveImpaledItem");

	ABP_MasterBuilding_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.StartAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::StartAttackFunction(bool Timer, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.StartAttackFunction");

	ABP_MasterBuilding_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.StopAttackFunction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::StopAttackFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.StopAttackFunction");

	ABP_MasterBuilding_C_StopAttackFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateBuildingGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::CreateBuildingGhost(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CreateBuildingGhost");

	ABP_MasterBuilding_C_CreateBuildingGhost_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.FinishedBuilding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::FinishedBuilding(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FinishedBuilding");

	ABP_MasterBuilding_C_FinishedBuilding_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.DestroyBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::DestroyBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.DestroyBuilding");

	ABP_MasterBuilding_C_DestroyBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupiedBuilding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::SetOccupiedBuilding(class AActor* Actor, bool Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupiedBuilding");

	ABP_MasterBuilding_C_SetOccupiedBuilding_Params params;
	params.Actor = Actor;
	params.Occupied = Occupied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ToolInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterBuilding_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ToolInteract");

	ABP_MasterBuilding_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterBuilding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveBeginPlay");

	ABP_MasterBuilding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_MasterBuilding_C::BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ShowInspectorUI");

	ABP_MasterBuilding_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::ExecuteFinishVisuals(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishVisuals");

	ABP_MasterBuilding_C_ExecuteFinishVisuals_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::ExecuteFinishLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishLogic");

	ABP_MasterBuilding_C_ExecuteFinishLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::ExecuteInitialVisuals(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialVisuals");

	ABP_MasterBuilding_C_ExecuteInitialVisuals_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::ExecuteInitialLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialLogic");

	ABP_MasterBuilding_C_ExecuteInitialLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckPlacement                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterBuilding_C::UpdateGhost(bool CheckPlacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateGhost");

	ABP_MasterBuilding_C_UpdateGhost_Params params;
	params.CheckPlacement = CheckPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CreateFurnitures");

	ABP_MasterBuilding_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalUpdate
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterBuilding_C::SeasonalUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalUpdate");

	ABP_MasterBuilding_C_SeasonalUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteUbergraph_BP_MasterBuilding
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterBuilding_C::ExecuteUbergraph_BP_MasterBuilding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteUbergraph_BP_MasterBuilding");

	ABP_MasterBuilding_C_ExecuteUbergraph_BP_MasterBuilding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterBuilding_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NavModifier, UNavModifierComponent);
	READ_PTR_FULL(DetectionTrace_C, UArrowComponent);
	READ_PTR_FULL(InspectorPoint, USphereComponent);
	READ_PTR_FULL(AnimalVolume, UBoxComponent);
	READ_PTR_FULL(NavigationInvoker, UNavigationInvokerComponent);
	READ_PTR_FULL(InteriorVolume, UBoxComponent);
	READ_PTR_FULL(UI_Inspector, UWidgetComponent);
	READ_PTR_FULL(AllowedToBuild, UBoxComponent);
	READ_PTR_FULL(TeleportPoint, UArrowComponent);
	READ_PTR_FULL(BaseBuildingMesh, UStaticMeshComponent);
	READ_PTR_FULL(SkeletonBuildingMesh, UStaticMeshComponent);
	READ_PTR_FULL(BuildingParent, USceneComponent);
	READ_PTR_FULL(DetectionTrace_UR, UArrowComponent);
	READ_PTR_FULL(DetectionTrace_DL, UArrowComponent);
	READ_PTR_FULL(DetectionTrace_DR, UArrowComponent);
	READ_PTR_FULL(DetectionTrace_UL, UArrowComponent);
	READ_PTR_FULL(Scene, USceneComponent);
	READ_PTR_FULL(GhostMaterialReference, UMaterialInstanceDynamic);
	READ_PTR_FULL(InteractAnimationMontage, UAnimMontage);
	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(OccupyingActorReference, AActor);
	READ_PTR_FULL(UI_InspectorReference, UUI_Inspector_Building_C);
	READ_PTR_FULL(AreaClass, UClass);
	READ_PTR_FULL(Socket, ABP_BuildSocket_C);
}

void ABP_MasterBuilding_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NavModifier);
	DELE_PTR_FULL(DetectionTrace_C);
	DELE_PTR_FULL(InspectorPoint);
	DELE_PTR_FULL(AnimalVolume);
	DELE_PTR_FULL(NavigationInvoker);
	DELE_PTR_FULL(InteriorVolume);
	DELE_PTR_FULL(UI_Inspector);
	DELE_PTR_FULL(AllowedToBuild);
	DELE_PTR_FULL(TeleportPoint);
	DELE_PTR_FULL(BaseBuildingMesh);
	DELE_PTR_FULL(SkeletonBuildingMesh);
	DELE_PTR_FULL(BuildingParent);
	DELE_PTR_FULL(DetectionTrace_UR);
	DELE_PTR_FULL(DetectionTrace_DL);
	DELE_PTR_FULL(DetectionTrace_DR);
	DELE_PTR_FULL(DetectionTrace_UL);
	DELE_PTR_FULL(Scene);
	DELE_PTR_FULL(GhostMaterialReference);
	DELE_PTR_FULL(InteractAnimationMontage);
	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(OccupyingActorReference);
	DELE_PTR_FULL(UI_InspectorReference);
	DELE_PTR_FULL(AreaClass);
	DELE_PTR_FULL(Socket);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
