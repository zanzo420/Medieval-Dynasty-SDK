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

// Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FadeTimeline__FinishedFunc
// (BlueprintEvent)
void ABP_AnimHoldable_Stick_C::FadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FadeTimeline__FinishedFunc");

	ABP_AnimHoldable_Stick_C_FadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FadeTimeline__UpdateFunc
// (BlueprintEvent)
void ABP_AnimHoldable_Stick_C::FadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FadeTimeline__UpdateFunc");

	ABP_AnimHoldable_Stick_C_FadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimHoldable_Stick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.ReceiveBeginPlay");

	ABP_AnimHoldable_Stick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FryFood
// (BlueprintCallable, BlueprintEvent)
void ABP_AnimHoldable_Stick_C::FryFood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.FryFood");

	ABP_AnimHoldable_Stick_C_FryFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.ExecuteUbergraph_BP_AnimHoldable_Stick
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimHoldable_Stick_C::ExecuteUbergraph_BP_AnimHoldable_Stick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C.ExecuteUbergraph_BP_AnimHoldable_Stick");

	ABP_AnimHoldable_Stick_C_ExecuteUbergraph_BP_AnimHoldable_Stick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
