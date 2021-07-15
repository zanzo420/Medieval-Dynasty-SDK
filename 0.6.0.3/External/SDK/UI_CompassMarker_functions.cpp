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

// Function UI_CompassMarker.UI_CompassMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CompassMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompassMarker.UI_CompassMarker_C.Construct");

	UUI_CompassMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CompassMarker.UI_CompassMarker_C.CalculateDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CompassMarker_C::CalculateDistance(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompassMarker.UI_CompassMarker_C.CalculateDistance");

	UUI_CompassMarker_C_CalculateDistance_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CompassMarker.UI_CompassMarker_C.UpdateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isQuestMarker                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsWife                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CompassMarker_C::UpdateIcon(bool isQuestMarker, bool IsWife)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompassMarker.UI_CompassMarker_C.UpdateIcon");

	UUI_CompassMarker_C_UpdateIcon_Params params;
	params.isQuestMarker = isQuestMarker;
	params.IsWife = IsWife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CompassMarker.UI_CompassMarker_C.ExecuteUbergraph_UI_CompassMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CompassMarker_C::ExecuteUbergraph_UI_CompassMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CompassMarker.UI_CompassMarker_C.ExecuteUbergraph_UI_CompassMarker");

	UUI_CompassMarker_C_ExecuteUbergraph_UI_CompassMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CompassMarker_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_40, UImage);
	READ_PTR_FULL(txt_Range, UTextBlock);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
	READ_PTR_FULL(GoalReference, ABP_GoalActor_C);
	READ_PTR_FULL(FurnitureReference, ABP_MasterFurniture_C);
	READ_PTR_FULL(BuildingReference, ABP_MasterBuilding_C);
	READ_PTR_FULL(MarkerReference, ABP_MasterMarker_C);
	READ_PTR_FULL(MountReference, ABP_AnimalBase_C);
}

void UUI_CompassMarker_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_40);
	DELE_PTR_FULL(txt_Range);
	DELE_PTR_FULL(NPCReference);
	DELE_PTR_FULL(GoalReference);
	DELE_PTR_FULL(FurnitureReference);
	DELE_PTR_FULL(BuildingReference);
	DELE_PTR_FULL(MarkerReference);
	DELE_PTR_FULL(MountReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
