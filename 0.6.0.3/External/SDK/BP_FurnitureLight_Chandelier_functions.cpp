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

// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Chandelier_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.StartFire");

	ABP_FurnitureLight_Chandelier_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.PutOutFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Chandelier_C::PutOutFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.PutOutFire");

	ABP_FurnitureLight_Chandelier_C_PutOutFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.ExecuteUbergraph_BP_FurnitureLight_Chandelier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureLight_Chandelier_C::ExecuteUbergraph_BP_FurnitureLight_Chandelier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.ExecuteUbergraph_BP_FurnitureLight_Chandelier");

	ABP_FurnitureLight_Chandelier_C_ExecuteUbergraph_BP_FurnitureLight_Chandelier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureLight_Chandelier_C::AfterRead()
{
	ABP_MasterFurniture_Light_C::AfterRead();

	READ_PTR_FULL(PS_CandleFire7, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire6, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire5, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire4, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire3, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire2, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire1, UParticleSystemComponent);
	READ_PTR_FULL(PS_CandleFire, UParticleSystemComponent);
	READ_PTR_FULL(Audio, UAudioComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void ABP_FurnitureLight_Chandelier_C::BeforeDelete()
{
	ABP_MasterFurniture_Light_C::BeforeDelete();

	DELE_PTR_FULL(PS_CandleFire7);
	DELE_PTR_FULL(PS_CandleFire6);
	DELE_PTR_FULL(PS_CandleFire5);
	DELE_PTR_FULL(PS_CandleFire4);
	DELE_PTR_FULL(PS_CandleFire3);
	DELE_PTR_FULL(PS_CandleFire2);
	DELE_PTR_FULL(PS_CandleFire1);
	DELE_PTR_FULL(PS_CandleFire);
	DELE_PTR_FULL(Audio);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
