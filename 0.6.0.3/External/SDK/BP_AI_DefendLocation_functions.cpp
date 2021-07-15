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

// Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.fnCallAnimals
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_DefendLocation_C::fnCallAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.fnCallAnimals");

	ABP_AI_DefendLocation_C_fnCallAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.fnCheckActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_DefendLocation_C::fnCheckActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.fnCheckActor");

	ABP_AI_DefendLocation_C_fnCheckActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_DefendLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.UserConstructionScript");

	ABP_AI_DefendLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AI_DefendLocation_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AI_DefendLocation_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.ExecuteUbergraph_BP_AI_DefendLocation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_DefendLocation_C::ExecuteUbergraph_BP_AI_DefendLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_DefendLocation.BP_AI_DefendLocation_C.ExecuteUbergraph_BP_AI_DefendLocation");

	ABP_AI_DefendLocation_C_ExecuteUbergraph_BP_AI_DefendLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AI_DefendLocation_C::AfterRead()
{
	ATargetPoint::AfterRead();

	READ_PTR_FULL(Trigger, UBoxComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
	READ_PTR_FULL(OverlappedActor, AActor);
}

void ABP_AI_DefendLocation_C::BeforeDelete()
{
	ATargetPoint::BeforeDelete();

	DELE_PTR_FULL(Trigger);
	DELE_PTR_FULL(TextRender);
	DELE_PTR_FULL(OverlappedActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
