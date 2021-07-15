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

// Function BP_Cave.BP_Cave_C.EnableDecorations
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Cave_C::EnableDecorations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.EnableDecorations");

	ABP_Cave_C_EnableDecorations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.DisableDecorations
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Cave_C::DisableDecorations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.DisableDecorations");

	ABP_Cave_C_DisableDecorations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.UpdateDecorationList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Cave_C::UpdateDecorationList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.UpdateDecorationList");

	ABP_Cave_C_UpdateDecorationList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Cave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.UserConstructionScript");

	ABP_Cave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Cave_C::BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Cave_C_BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cave_C::BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Cave_C_BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.SetCaveAccessible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accessible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Cave_C::SetCaveAccessible(bool Accessible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.SetCaveAccessible");

	ABP_Cave_C_SetCaveAccessible_Params params;
	params.Accessible = Accessible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Cave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.ReceiveBeginPlay");

	ABP_Cave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cave.BP_Cave_C.ExecuteUbergraph_BP_Cave
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cave_C::ExecuteUbergraph_BP_Cave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cave.BP_Cave_C.ExecuteUbergraph_BP_Cave");

	ABP_Cave_C_ExecuteUbergraph_BP_Cave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
