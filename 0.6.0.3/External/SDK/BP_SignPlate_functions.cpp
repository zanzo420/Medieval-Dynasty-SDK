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

// Function BP_SignPlate.BP_SignPlate_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SignName_E_SignName> Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_SignPlateVariants_E_SignPlateVariants> PlateMesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SignPlate_C::Init(TEnumAsByte<E_SignName_E_SignName> Name, TEnumAsByte<E_SignPlateVariants_E_SignPlateVariants> PlateMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SignPlate.BP_SignPlate_C.Init");

	ABP_SignPlate_C_Init_Params params;
	params.Name = Name;
	params.PlateMesh = PlateMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SignPlate.BP_SignPlate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SignPlate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SignPlate.BP_SignPlate_C.UserConstructionScript");

	ABP_SignPlate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SignPlate_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(S_SignPlate, UStaticMeshComponent);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceDynamic);
}

void ABP_SignPlate_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(S_SignPlate);
	DELE_PTR_FULL(MaterialInstance);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
