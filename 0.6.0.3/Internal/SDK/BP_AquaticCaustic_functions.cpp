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

// Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticCaustic_C::SetInteraction(class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetInteraction");

	ABP_AquaticCaustic_C_SetInteraction_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticCaustic_C::SetParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetParameters");

	ABP_AquaticCaustic_C_SetParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticCaustic.BP_AquaticCaustic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticCaustic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticCaustic.BP_AquaticCaustic_C.UserConstructionScript");

	ABP_AquaticCaustic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticCaustic.BP_AquaticCaustic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AquaticCaustic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticCaustic.BP_AquaticCaustic_C.ReceiveBeginPlay");

	ABP_AquaticCaustic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticCaustic.BP_AquaticCaustic_C.ExecuteUbergraph_BP_AquaticCaustic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticCaustic_C::ExecuteUbergraph_BP_AquaticCaustic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticCaustic.BP_AquaticCaustic_C.ExecuteUbergraph_BP_AquaticCaustic");

	ABP_AquaticCaustic_C_ExecuteUbergraph_BP_AquaticCaustic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
