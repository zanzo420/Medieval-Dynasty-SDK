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

// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.UserConstructionScript");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ConstructedModule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::ConstructedModule(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ConstructedModule");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_ConstructedModule_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ReceiveBeginPlay");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.UnconstructedModule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::UnconstructedModule(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.UnconstructedModule");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_UnconstructedModule_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ReceiveTick");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.BndEvt__Door_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::BndEvt__Door_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.BndEvt__Door_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_BndEvt__Door_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ExecuteUbergraph_BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C::ExecuteUbergraph_BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A.BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C.ExecuteUbergraph_BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A");

	ABP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_C_ExecuteUbergraph_BP_BuildModule_HuntingLodge_Wooden_Wall_A_Door_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
