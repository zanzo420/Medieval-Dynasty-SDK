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

// Function UI_Inspector_BuildingResource.UI_Inspector_BuildingResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Inspector_BuildingResource_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_BuildingResource.UI_Inspector_BuildingResource_C.Construct");

	UUI_Inspector_BuildingResource_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_BuildingResource.UI_Inspector_BuildingResource_C.ExecuteUbergraph_UI_Inspector_BuildingResource
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_BuildingResource_C::ExecuteUbergraph_UI_Inspector_BuildingResource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_BuildingResource.UI_Inspector_BuildingResource_C.ExecuteUbergraph_UI_Inspector_BuildingResource");

	UUI_Inspector_BuildingResource_C_ExecuteUbergraph_UI_Inspector_BuildingResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inspector_BuildingResource_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ResourceImage, UImage);
	READ_PTR_FULL(txt_ResourceCount, UTextBlock);
	READ_PTR_FULL(txt_ResourceInventory, UTextBlock);
	READ_PTR_FULL(txt_ResourceName, UTextBlock);
	READ_PTR_FULL(Icon, UTexture2D);
}

void UUI_Inspector_BuildingResource_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ResourceImage);
	DELE_PTR_FULL(txt_ResourceCount);
	DELE_PTR_FULL(txt_ResourceInventory);
	DELE_PTR_FULL(txt_ResourceName);
	DELE_PTR_FULL(Icon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
