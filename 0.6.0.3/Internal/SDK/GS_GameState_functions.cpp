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

// Function GS_GameState.GS_GameState_C.RemoveFoliageInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              InputPin1                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AGS_GameState_C::RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int InputPin, const struct FTransform& InputPin1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.RemoveFoliageInstance");

	AGS_GameState_C_RemoveFoliageInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              InputPin1                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AGS_GameState_C::Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int InputPin, const struct FTransform& InputPin1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance");

	AGS_GameState_C_Replicate_RemoveInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_GameState_C::ExecuteUbergraph_GS_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState");

	AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
