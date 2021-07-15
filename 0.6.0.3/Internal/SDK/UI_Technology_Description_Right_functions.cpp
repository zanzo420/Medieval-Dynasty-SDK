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

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.GetItemStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemRowName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::GetItemStats(const struct FName& ItemRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.GetItemStats");

	UUI_Technology_Description_Right_C_GetItemStats_Params params;
	params.ItemRowName = ItemRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateSlotDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RecipeType                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle     FurnitureType                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle     FenceType                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FST_OtherTechnologySchemes OtherSchemeType                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::UpdateSlotDescription(const struct FDataTableRowHandle& RecipeType, const struct FDataTableRowHandle& FurnitureType, const struct FDataTableRowHandle& FenceType, const struct FST_OtherTechnologySchemes& OtherSchemeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateSlotDescription");

	UUI_Technology_Description_Right_C_UpdateSlotDescription_Params params;
	params.RecipeType = RecipeType;
	params.FurnitureType = FurnitureType;
	params.FenceType = FenceType;
	params.OtherSchemeType = OtherSchemeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateTechnologyDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TechnologyIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::UpdateTechnologyDescription(int TechnologyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateTechnologyDescription");

	UUI_Technology_Description_Right_C_UpdateTechnologyDescription_Params params;
	params.TechnologyIndex = TechnologyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PlayerControllerReference      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::Init(class APC_Player_C* PlayerControllerReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Init");

	UUI_Technology_Description_Right_C_Init_Params params;
	params.PlayerControllerReference = PlayerControllerReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Technology_Description_Right_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Construct");

	UUI_Technology_Description_Right_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.ExecuteUbergraph_UI_Technology_Description_Right
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Technology_Description_Right_C::ExecuteUbergraph_UI_Technology_Description_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.ExecuteUbergraph_UI_Technology_Description_Right");

	UUI_Technology_Description_Right_C_ExecuteUbergraph_UI_Technology_Description_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
