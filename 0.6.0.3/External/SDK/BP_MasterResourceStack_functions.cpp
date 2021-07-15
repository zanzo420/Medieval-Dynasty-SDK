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

// Function BP_MasterResourceStack.BP_MasterResourceStack_C.UpdateResourceStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterResourceStack_C::UpdateResourceStack(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterResourceStack.BP_MasterResourceStack_C.UpdateResourceStack");

	ABP_MasterResourceStack_C_UpdateResourceStack_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterResourceStack.BP_MasterResourceStack_C.UpdateCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterResourceStack_C::UpdateCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterResourceStack.BP_MasterResourceStack_C.UpdateCollision");

	ABP_MasterResourceStack_C_UpdateCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterResourceStack.BP_MasterResourceStack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterResourceStack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterResourceStack.BP_MasterResourceStack_C.UserConstructionScript");

	ABP_MasterResourceStack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterResourceStack.BP_MasterResourceStack_C.ShowInspectorUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterResourceStack_C::ShowInspectorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterResourceStack.BP_MasterResourceStack_C.ShowInspectorUI");

	ABP_MasterResourceStack_C_ShowInspectorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterResourceStack.BP_MasterResourceStack_C.ExecuteUbergraph_BP_MasterResourceStack
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterResourceStack_C::ExecuteUbergraph_BP_MasterResourceStack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterResourceStack.BP_MasterResourceStack_C.ExecuteUbergraph_BP_MasterResourceStack");

	ABP_MasterResourceStack_C_ExecuteUbergraph_BP_MasterResourceStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterResourceStack_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(ResourceMaterial, UMaterialInstanceDynamic);
}

void ABP_MasterResourceStack_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(ResourceMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
