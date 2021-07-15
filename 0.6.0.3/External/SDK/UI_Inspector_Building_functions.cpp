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

// Function UI_Inspector_Building.UI_Inspector_Building_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_Building_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Building.UI_Inspector_Building_C.UpdateData");

	UUI_Inspector_Building_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Building.UI_Inspector_Building_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    BuildingReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Building_C::Init(class ABP_MasterBuilding_C* BuildingReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Building.UI_Inspector_Building_C.Init");

	UUI_Inspector_Building_C_Init_Params params;
	params.BuildingReference = BuildingReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Building.UI_Inspector_Building_C.ExecuteUbergraph_UI_Inspector_Building
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Building_C::ExecuteUbergraph_UI_Inspector_Building(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Building.UI_Inspector_Building_C.ExecuteUbergraph_UI_Inspector_Building");

	UUI_Inspector_Building_C_ExecuteUbergraph_UI_Inspector_Building_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inspector_Building_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_Additional, UTextBlock);
	READ_PTR_FULL(txt_Name, UTextBlock);
	READ_PTR_FULL(BuildingReference, ABP_MasterBuilding_C);
}

void UUI_Inspector_Building_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_Additional);
	DELE_PTR_FULL(txt_Name);
	DELE_PTR_FULL(BuildingReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
