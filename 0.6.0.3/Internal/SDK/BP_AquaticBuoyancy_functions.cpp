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

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.GetSurfceDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticBuoyancy_C::GetSurfceDistance(const struct FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.GetSurfceDistance");

	UBP_AquaticBuoyancy_C_GetSurfceDistance_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.Validate Mesh
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_AquaticBuoyancy_C::Validate_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.Validate Mesh");

	UBP_AquaticBuoyancy_C_Validate_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetAquaticVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AquaticSurface_C*    AquaticSurface                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticBuoyancy_C::SetAquaticVolume(class ABP_AquaticSurface_C* AquaticSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetAquaticVolume");

	UBP_AquaticBuoyancy_C_SetAquaticVolume_Params params;
	params.AquaticSurface = AquaticSurface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetTickMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AquaticBuoyancy_C::SetTickMode(bool InWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetTickMode");

	UBP_AquaticBuoyancy_C_SetTickMode_Params params;
	params.InWater = InWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.UpdateInFluid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticBuoyancy_C::UpdateInFluid(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.UpdateInFluid");

	UBP_AquaticBuoyancy_C_UpdateInFluid_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_AquaticBuoyancy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveBeginPlay");

	UBP_AquaticBuoyancy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticBuoyancy_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveTick");

	UBP_AquaticBuoyancy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ExecuteUbergraph_BP_AquaticBuoyancy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticBuoyancy_C::ExecuteUbergraph_BP_AquaticBuoyancy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ExecuteUbergraph_BP_AquaticBuoyancy");

	UBP_AquaticBuoyancy_C_ExecuteUbergraph_BP_AquaticBuoyancy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
