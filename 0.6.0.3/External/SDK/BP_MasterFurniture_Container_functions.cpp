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

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.LoadContainerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_Containers     FurnitureData                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Container_C::LoadContainerData(const struct FST_SAVE_Containers& FurnitureData, const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.LoadContainerData");

	ABP_MasterFurniture_Container_C_LoadContainerData_Params params;
	params.FurnitureData = FurnitureData;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.GetContainerDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_Containers     FurnitureData                  (Parm, OutParm, HasGetValueTypeHash)
void ABP_MasterFurniture_Container_C::GetContainerDataToSave(struct FST_SAVE_Containers* FurnitureData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.GetContainerDataToSave");

	ABP_MasterFurniture_Container_C_GetContainerDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FurnitureData != nullptr)
		*FurnitureData = params.FurnitureData;

}


// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Container_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.UserConstructionScript");

	ABP_MasterFurniture_Container_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Container_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.Interact");

	ABP_MasterFurniture_Container_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.ExecuteUbergraph_BP_MasterFurniture_Container
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Container_C::ExecuteUbergraph_BP_MasterFurniture_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.ExecuteUbergraph_BP_MasterFurniture_Container");

	ABP_MasterFurniture_Container_C_ExecuteUbergraph_BP_MasterFurniture_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.OnFreeContainer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Container_C::OnFreeContainer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.OnFreeContainer__DelegateSignature");

	ABP_MasterFurniture_Container_C_OnFreeContainer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterFurniture_Container_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(InventoryComponent, UInventoryComponent_C);
}

void ABP_MasterFurniture_Container_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(InventoryComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
